# Transformation Matrices - Land_V2_Assembly

Homogeneous transformation matrices between consecutive frames.
Convention: URDF RPY (XYZ extrinsic / ZYX intrinsic).

## Notation

### Frames

| Index | Link |
|-------|------|
| $L_{0}$ | base_link |
| $L_{1}$ | lidar_link |
| $L_{2}$ | imu_link |
| $L_{3}$ | camera_link |
| $L_{4}$ | front_right_wheel |
| $L_{5}$ | back_right_wheel |
| $L_{6}$ | back_left_wheel |
| $L_{7}$ | front_left_wheel |

### Joint Variables

| Variable | Joint | Type | From | To |
|----------|-------|------|------|----|
| $q_{1}$ | front_right_wheel_joint | continuous (rad) | $L_{0}$ | $L_{4}$ |
| $q_{2}$ | back_right_wheel_joint | continuous (rad) | $L_{0}$ | $L_{5}$ |
| $q_{3}$ | back_left_wheel_joint | continuous (rad) | $L_{0}$ | $L_{6}$ |
| $q_{4}$ | front_left_wheel_joint | continuous (rad) | $L_{0}$ | $L_{7}$ |

Shorthand: $c_i = \cos(q_i)$, $s_i = \sin(q_i)$

### Kinematic Tree

```
L0: base_link
  |-- [fixed] lidar_joint
  |   L1: lidar_link
  |-- [fixed] imu_joint
  |   L2: imu_link
  |-- [fixed] camera_joint
  |   L3: camera_link
  |-- [continuous] front_right_wheel_joint (q1)
  |   L4: front_right_wheel
  |-- [continuous] back_right_wheel_joint (q2)
  |   L5: back_right_wheel
  |-- [continuous] back_left_wheel_joint (q3)
  |   L6: back_left_wheel
  +-- [continuous] front_left_wheel_joint (q4)
      L7: front_left_wheel
```

## Transforms

## lidar_joint

$L_{0}$ **base_link** -> $L_{1}$ **lidar_link** (fixed)

- **origin xyz**: (0.0418, 0.002765, 0.0941) m
- **origin rpy**: (0, 0, 0) rad

### Local Transform

$$
T^{0}_{1} = \begin{bmatrix}
1 & 0 & 0 & 0.0418 \\
0 & 1 & 0 & 0.002765 \\
0 & 0 & 1 & 0.0941 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## imu_joint

$L_{0}$ **base_link** -> $L_{2}$ **imu_link** (fixed)

- **origin xyz**: (0.0831, 0.002515, 0.02254) m
- **origin rpy**: (0, 0, 0) rad

### Local Transform

$$
T^{0}_{2} = \begin{bmatrix}
1 & 0 & 0 & 0.0831 \\
0 & 1 & 0 & 0.002515 \\
0 & 0 & 1 & 0.02254 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## camera_joint

$L_{0}$ **base_link** -> $L_{3}$ **camera_link** (fixed)

- **origin xyz**: (0.081, 0.002465, 0.064692) m
- **origin rpy**: (0, 0, 0) rad

### Local Transform

$$
T^{0}_{3} = \begin{bmatrix}
1 & 0 & 0 & 0.081 \\
0 & 1 & 0 & 0.002465 \\
0 & 0 & 1 & 0.064692 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## front_right_wheel_joint

$L_{0}$ **base_link** -> $L_{4}$ **front_right_wheel** (continuous)
  Variable: $q_{1}$

- **origin xyz**: (0.153244, -0.136291, -0.082475) m
- **origin rpy**: (1.570796, 0, 0) rad
- **axis**: (0, 0, 1)

### Local Transform

$T^{0}_{4}(q_{1}) = T_{fixed} \cdot R_{axis}(q_{1})$ where:

$$
T_{fixed} = \begin{bmatrix}
1 & 0 & 0 & 0.153244 \\
0 & 0 & -1 & -0.136291 \\
0 & 1 & 0 & -0.082475 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{1}) = \begin{bmatrix}
c_{1} & -s_{1} & 0 & 0 \\
s_{1} & c_{1} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## back_right_wheel_joint

$L_{0}$ **base_link** -> $L_{5}$ **back_right_wheel** (continuous)
  Variable: $q_{2}$

- **origin xyz**: (-0.069244, -0.136291, -0.082475) m
- **origin rpy**: (1.570796, 0, 0) rad
- **axis**: (0, 0, 1)

### Local Transform

$T^{0}_{5}(q_{2}) = T_{fixed} \cdot R_{axis}(q_{2})$ where:

$$
T_{fixed} = \begin{bmatrix}
1 & 0 & 0 & -0.069244 \\
0 & 0 & -1 & -0.136291 \\
0 & 1 & 0 & -0.082475 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{2}) = \begin{bmatrix}
c_{2} & -s_{2} & 0 & 0 \\
s_{2} & c_{2} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## back_left_wheel_joint

$L_{0}$ **base_link** -> $L_{6}$ **back_left_wheel** (continuous)
  Variable: $q_{3}$

- **origin xyz**: (-0.070244, 0.141721, -0.082475) m
- **origin rpy**: (-1.570796, 0, 0) rad
- **axis**: (0, 0, 1)

### Local Transform

$T^{0}_{6}(q_{3}) = T_{fixed} \cdot R_{axis}(q_{3})$ where:

$$
T_{fixed} = \begin{bmatrix}
1 & 0 & 0 & -0.070244 \\
0 & 0 & 1 & 0.141721 \\
0 & -1 & 0 & -0.082475 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{3}) = \begin{bmatrix}
c_{3} & -s_{3} & 0 & 0 \\
s_{3} & c_{3} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## front_left_wheel_joint

$L_{0}$ **base_link** -> $L_{7}$ **front_left_wheel** (continuous)
  Variable: $q_{4}$

- **origin xyz**: (0.152244, 0.141721, -0.082475) m
- **origin rpy**: (-1.570796, 0, 0) rad
- **axis**: (0, 0, 1)

### Local Transform

$T^{0}_{7}(q_{4}) = T_{fixed} \cdot R_{axis}(q_{4})$ where:

$$
T_{fixed} = \begin{bmatrix}
1 & 0 & 0 & 0.152244 \\
0 & 0 & 1 & 0.141721 \\
0 & -1 & 0 & -0.082475 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

$$
R_{axis}(q_{4}) = \begin{bmatrix}
c_{4} & -s_{4} & 0 & 0 \\
s_{4} & c_{4} & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
\end{bmatrix}
$$

---

## Global Transform Chains

Transform from root $L_0$ to any link, as product of local transforms along the kinematic chain.

