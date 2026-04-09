import sys
import math

from PyQt6.QtWidgets import QApplication, QWidget, QVBoxLayout, QHBoxLayout, QLabel
from PyQt6.QtCore import Qt, QPointF, pyqtSignal, QTimer
from PyQt6.QtGui import (
    QPainter, QRadialGradient, QLinearGradient,
    QColor, QPen, QBrush, QPainterPath,
)


# ── Joystick ──────────────────────────────────────────────────────────────────

class JoystickWidget(QWidget):
    moved    = pyqtSignal(float, float)   # x, y in [-1, 1]
    released = pyqtSignal()

    def __init__(self, parent=None, size=230):
        super().__init__(parent)
        self.setFixedSize(size, size)
        cx = cy = size / 2
        self._center      = QPointF(cx, cy)
        self._knob_pos    = QPointF(cx, cy)
        self._dragging    = False
        self._base_r      = size * 0.44
        self._knob_r      = size * 0.18
        self._max_travel  = self._base_r - self._knob_r - 4

        self._timer = QTimer(self)
        self._timer.setInterval(16)
        self._timer.timeout.connect(self._snap_back)

    def get_xy(self):
        dy = (self._center.x() - self._knob_pos.x()) / self._max_travel
        dx = (self._center.y() - self._knob_pos.y()) / self._max_travel
        return round(max(-1.0, min(1.0, dx)), 3), round(max(-1.0, min(1.0, dy)), 3)

    def mousePressEvent(self, ev):
        if ev.button() == Qt.MouseButton.LeftButton:
            self._timer.stop()
            self._dragging = True
            self._move_knob(ev.position())

    def mouseMoveEvent(self, ev):
        if self._dragging:
            self._move_knob(ev.position())

    def mouseReleaseEvent(self, ev):
        if ev.button() == Qt.MouseButton.LeftButton:
            self._dragging = False
            self._timer.start()
            self.released.emit()

    def _move_knob(self, pos):
        dx = pos.x() - self._center.x()
        dy = pos.y() - self._center.y()
        d  = math.hypot(dx, dy)
        if d > self._max_travel:
            dx = dx / d * self._max_travel
            dy = dy / d * self._max_travel
        self._knob_pos = QPointF(self._center.x() + dx, self._center.y() + dy)
        self.update()
        self.moved.emit(*self.get_xy())

    def _snap_back(self):
        dx = self._center.x() - self._knob_pos.x()
        dy = self._center.y() - self._knob_pos.y()
        if math.hypot(dx, dy) < 0.5:
            self._knob_pos = QPointF(self._center)
            self._timer.stop()
            self.moved.emit(0.0, 0.0)
        else:
            self._knob_pos = QPointF(
                self._knob_pos.x() + dx * 0.25,
                self._knob_pos.y() + dy * 0.25,
            )
            self.moved.emit(*self.get_xy())
        self.update()

    def paintEvent(self, _event):
        painter = QPainter(self)
        painter.setRenderHint(QPainter.RenderHint.Antialiasing)

        cx = self._center.x()
        cy = self._center.y()
        r  = self._base_r
        kr = self._knob_r
        kx = self._knob_pos.x()
        ky = self._knob_pos.y()

        # outer bezel
        g = QRadialGradient(cx, cy - r * 0.2, r * 1.1)
        g.setColorAt(0.0, QColor("#3a3a4a"))
        g.setColorAt(1.0, QColor("#111118"))
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(QBrush(g))
        painter.drawEllipse(QPointF(cx, cy), r + 10, r + 10)

        painter.setPen(QPen(QColor(255, 255, 255, 28), 1.5))
        painter.setBrush(Qt.BrushStyle.NoBrush)
        painter.drawEllipse(QPointF(cx, cy), r + 9, r + 9)

        # base plate
        g2 = QRadialGradient(cx, cy - r * 0.3, r)
        g2.setColorAt(0.0, QColor("#252535"))
        g2.setColorAt(1.0, QColor("#0d0d15"))
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(QBrush(g2))
        painter.drawEllipse(QPointF(cx, cy), r, r)

        # crosshair
        painter.setPen(QPen(QColor(255, 255, 255, 18), 1))
        painter.drawLine(int(cx - r), int(cy), int(cx + r), int(cy))
        painter.drawLine(int(cx), int(cy - r), int(cx), int(cy + r))

        # travel ring
        painter.setPen(QPen(QColor(100, 140, 255, 40), 1, Qt.PenStyle.DashLine))
        painter.setBrush(Qt.BrushStyle.NoBrush)
        painter.drawEllipse(QPointF(cx, cy), self._max_travel, self._max_travel)

        # stem
        painter.setPen(QPen(QColor(100, 160, 255, 70), 2))
        painter.drawLine(QPointF(cx, cy), self._knob_pos)

        # knob shadow
        sg = QRadialGradient(kx + 3, ky + 5, kr * 1.3)
        sg.setColorAt(0.0, QColor(0, 0, 0, 90))
        sg.setColorAt(1.0, QColor(0, 0, 0, 0))
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(QBrush(sg))
        painter.drawEllipse(QPointF(kx + 3, ky + 5), kr * 1.3, kr * 1.3)

        # knob body
        kg = QRadialGradient(kx - kr * 0.3, ky - kr * 0.4, kr * 1.4)
        if self._dragging:
            kg.setColorAt(0.0,  QColor("#7ab0ff"))
            kg.setColorAt(0.45, QColor("#3a6fd8"))
            kg.setColorAt(1.0,  QColor("#1a3a80"))
        else:
            kg.setColorAt(0.0,  QColor("#5a8aff"))
            kg.setColorAt(0.45, QColor("#2a50c0"))
            kg.setColorAt(1.0,  QColor("#0f2060"))
        painter.setBrush(QBrush(kg))
        painter.setPen(QPen(QColor(180, 210, 255, 110), 1.5))
        painter.drawEllipse(QPointF(kx, ky), kr, kr)

        # specular
        spg = QRadialGradient(kx - kr * 0.25, ky - kr * 0.35, kr * 0.55)
        spg.setColorAt(0.0, QColor(255, 255, 255, 130))
        spg.setColorAt(1.0, QColor(255, 255, 255, 0))
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(QBrush(spg))
        painter.drawEllipse(QPointF(kx - kr * 0.2, ky - kr * 0.25), kr * 0.5, kr * 0.4)

        painter.end()


# ── Rotation slider ───────────────────────────────────────────────────────────

class RotationSlider(QWidget):
    valueChanged = pyqtSignal(float)

    _TRACK_H = 12
    _THUMB_R = 13

    def __init__(self, parent=None):
        super().__init__(parent)
        self._value = 0.0
        self._drag  = False
        self.setFixedHeight(62)
        self.setCursor(Qt.CursorShape.PointingHandCursor)

    def value(self):
        return self._value

    def set_value(self, v):
        self._value = max(-1.0, min(1.0, v))
        self.update()
        self.valueChanged.emit(self._value)

    def _track(self):
        pad = self._THUMB_R + 12
        ty  = (self.height() - self._TRACK_H) // 2
        return pad, ty, self.width() - pad * 2, self._TRACK_H

    def _thumb_cx(self):
        tx, ty, tw, th = self._track()
        return int(tx + (self._value + 1.0) / 2.0 * tw)

    def _val_from_x(self, x):
        tx, ty, tw, th = self._track()
        return max(-1.0, min(1.0, (x - tx) / tw * 2.0 - 1.0))

    def mousePressEvent(self, ev):
        if ev.button() == Qt.MouseButton.LeftButton:
            self._drag = True
            self.set_value(self._val_from_x(int(ev.position().x())))

    def mouseMoveEvent(self, ev):
        if self._drag:
            self.set_value(self._val_from_x(int(ev.position().x())))

    def mouseReleaseEvent(self, ev):
        if ev.button() == Qt.MouseButton.LeftButton:
            self._drag = False

    def mouseDoubleClickEvent(self, _):
        self.set_value(0.0)

    def paintEvent(self, _event):
        painter = QPainter(self)
        painter.setRenderHint(QPainter.RenderHint.Antialiasing)

        W  = self.width()
        H  = self.height()
        tx, ty, tw, th = self._track()
        mid_x = tx + tw // 2
        tcx   = self._thumb_cx()
        tcy   = ty + th // 2
        r     = self._THUMB_R

        # track bg
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(QBrush(QColor("#0d0d18")))
        path = QPainterPath()
        path.addRoundedRect(tx, ty, tw, th, th // 2, th // 2)
        painter.drawPath(path)

        # fill
        if tcx < mid_x:
            fc = QColor("#ff4a6a"); fc.setAlpha(170)
            painter.setBrush(QBrush(fc))
            fp = QPainterPath()
            fp.addRoundedRect(tcx, ty, mid_x - tcx, th, 3, 3)
            painter.drawPath(fp)
        elif tcx > mid_x:
            fc = QColor("#5a8aff"); fc.setAlpha(170)
            painter.setBrush(QBrush(fc))
            fp = QPainterPath()
            fp.addRoundedRect(mid_x, ty, tcx - mid_x, th, 3, 3)
            painter.drawPath(fp)

        # centre tick
        painter.setPen(QPen(QColor(255, 255, 255, 40), 1))
        painter.drawLine(mid_x, ty, mid_x, ty + th)

        # track border
        painter.setPen(QPen(QColor(80, 90, 120, 100), 1))
        painter.setBrush(Qt.BrushStyle.NoBrush)
        painter.drawPath(path)

        # end labels
        f = painter.font()
        f.setPointSize(8)
        painter.setFont(f)
        painter.setPen(QColor(60, 80, 120))
        painter.drawText(0, 0, tx, H, Qt.AlignmentFlag.AlignCenter, "◀")
        painter.drawText(tx + tw, 0, tx, H, Qt.AlignmentFlag.AlignCenter, "▶")

        # thumb shadow
        sh = QRadialGradient(tcx + 2, tcy + 3, r * 1.3)
        sh.setColorAt(0.0, QColor(0, 0, 0, 80))
        sh.setColorAt(1.0, QColor(0, 0, 0, 0))
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(QBrush(sh))
        painter.drawEllipse(QPointF(tcx + 2, tcy + 3), r * 1.3, r * 1.3)

        # thumb body
        kg = QRadialGradient(tcx - r * 0.3, tcy - r * 0.4, r * 1.4)
        if self._drag:
            kg.setColorAt(0.0,  QColor("#7ab0ff"))
            kg.setColorAt(0.45, QColor("#3a6fd8"))
            kg.setColorAt(1.0,  QColor("#1a3a80"))
        else:
            kg.setColorAt(0.0,  QColor("#5a8aff"))
            kg.setColorAt(0.45, QColor("#2a50c0"))
            kg.setColorAt(1.0,  QColor("#0f2060"))
        painter.setBrush(QBrush(kg))
        painter.setPen(QPen(QColor(180, 210, 255, 110), 1.5))
        painter.drawEllipse(QPointF(tcx, tcy), r, r)

        # specular
        spg = QRadialGradient(tcx - r * 0.25, tcy - r * 0.35, r * 0.55)
        spg.setColorAt(0.0, QColor(255, 255, 255, 130))
        spg.setColorAt(1.0, QColor(255, 255, 255, 0))
        painter.setPen(Qt.PenStyle.NoPen)
        painter.setBrush(QBrush(spg))
        painter.drawEllipse(QPointF(tcx - r * 0.2, tcy - r * 0.25), r * 0.5, r * 0.4)

        # value label
        f2 = painter.font()
        f2.setPointSize(8)
        painter.setFont(f2)
        painter.setPen(QColor("#607090"))
        painter.drawText(0, tcy + r + 6, W, 16,
                         Qt.AlignmentFlag.AlignHCenter,
                         f"ROTATION  {self._value:+.3f}")

        painter.end()


# ── Main window ───────────────────────────────────────────────────────────────

class MainWindow(QWidget):
    def __init__(self, node):
        super().__init__()
        self.x = 0
        self.y = 0
        self.rot = 0 

        # Get the node to update and publish on
        self.node = node

        self.setWindowTitle("Joystick")
        self.setStyleSheet(
            "QWidget { background: #12121e; color: #c8d0e8;"
            " font-family: 'Courier New', monospace; }"
        )

        root = QVBoxLayout(self)
        root.setContentsMargins(20, 16, 20, 16)
        root.setSpacing(10)
        root.setAlignment(Qt.AlignmentFlag.AlignHCenter)

        title = QLabel("JOYSTICK")
        title.setAlignment(Qt.AlignmentFlag.AlignCenter)
        title.setStyleSheet(
            "font-size: 13px; font-weight: bold;"
            " letter-spacing: 6px; color: #5a8aff;"
        )
        root.addWidget(title)

        self.joystick = JoystickWidget(size=230)
        root.addWidget(self.joystick, alignment=Qt.AlignmentFlag.AlignHCenter)

        val_row = QHBoxLayout()
        val_row.setSpacing(30)
        self.lbl_x = self._make_label("X:  0.000")
        self.lbl_y = self._make_label("Y:  0.000")
        val_row.addWidget(self.lbl_x)
        val_row.addWidget(self.lbl_y)
        root.addLayout(val_row)

        info_row = QHBoxLayout()
        info_row.setSpacing(30)
        self.lbl_mag = self._make_label("MAG:  0.000", small=True)
        self.lbl_ang = self._make_label("ANG:  0.0°",  small=True)
        info_row.addWidget(self.lbl_mag)
        info_row.addWidget(self.lbl_ang)
        root.addLayout(info_row)

        rot_title = QLabel("ROTATION")
        rot_title.setAlignment(Qt.AlignmentFlag.AlignCenter)
        rot_title.setStyleSheet(
            "font-size: 9px; letter-spacing: 4px; color: #3a4a70; margin-top: 8px;"
        )
        root.addWidget(rot_title)

        self.rotation = RotationSlider()
        root.addWidget(self.rotation)

        hint = QLabel("double-click rotation slider to reset")
        hint.setAlignment(Qt.AlignmentFlag.AlignCenter)
        hint.setStyleSheet("font-size: 9px; color: #252840; padding-bottom: 6px;")
        root.addWidget(hint)

        self.joystick.moved.connect(self._on_move)
        self.joystick.released.connect(self._on_release)
        self.rotation.valueChanged.connect(self._on_rotation)

    def _make_label(self, text, small=False):
        lbl = QLabel(text)
        lbl.setAlignment(Qt.AlignmentFlag.AlignCenter)
        lbl.setStyleSheet(
            f"font-size: {'10' if small else '14'}px;"
            f" color: {'#607090' if small else '#a0c0ff'};"
            " letter-spacing: 1px;"
        )
        return lbl

    def _update_ros_node(self, x, y, rot):
        self.node.update(x, y, rot)

    def _on_move(self, x, y):
        self.lbl_x.setText(f"X:  {x:+.3f}")
        self.lbl_y.setText(f"Y:  {y:+.3f}")
        self.lbl_mag.setText(f"MAG:  {math.hypot(x, y):.3f}")
        self.lbl_ang.setText(f"ANG:  {math.degrees(math.atan2(y, x)) % 360:.1f}°")
        self.x = x
        self.y = y
        self._update_ros_node(self.x, self.y, self.rot)
        
    def _on_release(self):
        self.lbl_x.setText("X:  0.000")
        self.lbl_y.setText("Y:  0.000")
        self.lbl_mag.setText("MAG:  0.000")
        self.lbl_ang.setText("ANG:  0.0°")
        self.x = 0
        self.y = 0
        self._update_ros_node(self.x, self.y, self.rot)

    def _on_rotation(self, rot):
        self.rot = rot
        self._update_ros_node(self.x, self.y, self.rot)

import rclpy
from rclpy.node import Node
import threading
from std_msgs.msg import Float32MultiArray

class GuiPublisher(Node):
    def __init__(self):
        super().__init__('gui_publisher') # The name of the node
        # We want to publish: [y/forward, x/strafe, r/rotation]
        self.publisher_ = self.create_publisher(Float32MultiArray, # message type
                                                'cartesian_heading', # topic name
                                                10) # QOS
        self.timer = self.create_timer(0.1, self.timer_callback)
        self.x = 0
        self.y = 0
        self.rot = 0
    
    def timer_callback(self):
        msg = Float32MultiArray()
        
        msg.data = [self.x, self.y, self.rot] # 3 values of y/forward, x/strafe, r/rotation. 
        self.publisher_.publish(msg)
        print('published cartesian command:', msg.data)

    def update(self, x, y, rot):
        self.x = x
        self.y = y
        self.rot = rot


def main():
    rclpy.init()
    gui_pub = GuiPublisher()
    threading.Thread(target=rclpy.spin, args=(gui_pub,), daemon=True).start()

    app = QApplication(sys.argv)
    window = MainWindow(node=gui_pub)
    window.resize(320, 480)
    window.show()

    exit_code = app.exec()

    gui_pub.destroy_node()
    rclpy.shutdown()

    sys.exit(exit_code)

if __name__ == "__main__":
    main()

    # threading.Thread(target=main(), daemon=True).start()

