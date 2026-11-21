# Validation Report: Land_V2_Assembly

## Status: PASS (with warnings)

## Summary

| Metric | Value |
|--------|-------|
| Links | 8 |
| Joints | 7 |
| Assemblies | 8 |
| Root | `base_link` |
| Errors | 0 |
| Warnings | 3 |

## Warnings

- Joint 'Revolute_2' is internal to a rigid group (both endpoints → base_link/Wheel_Chassis_Right).  Dropped — rigid groups represent one rigid body, joints between members are ignored.  Move this joint to assemble between rigid groups instead.
- Joint 'Revolute_4' is internal to a rigid group (both endpoints → base_link/Wheel_Chassis_Right).  Dropped — rigid groups represent one rigid body, joints between members are ignored.  Move this joint to assemble between rigid groups instead.
- Multi-parent link detected (child=lidar_link:1): keeping 'Rigid_32' as the URDF tree parent; routing ['Rigid_33'] to ``closing_joints`` (sidecar) — closed kinematic loop.  Tag the loop-closing joint(s) with prefix ``!closing_*`` in Fusion to make the choice explicit and avoid this warning.

## Kinematic Tree

```
base_link [BAKE] [primitive]
  └─ Rigid_32 [fixed]
    lidar_link [primitive]
  └─ Rigid_37 [fixed]
    imu_link [primitive]
  └─ Rigid_41 [fixed]
    Dielectric [primitive]
  └─ Revolute_34 [continuous]
    front_right_wheel [BAKE] [primitive]
  └─ Revolute_35 [continuous]
    back_right_wheel [BAKE] [primitive]
  └─ Revolute_39 [continuous]
    back_left_wheel [BAKE] [primitive]
  └─ Revolute_40 [continuous]
    front_left_wheel [BAKE] [primitive]
```

## Collision Geometry

| Link | Source | Shape/File |
|------|--------|------------|
| `Dielectric` | primitive STL | box |
| `back_left_wheel` | primitive STL | box |
| `back_right_wheel` | primitive STL | box |
| `base_link` | primitive STL | box |
| `front_left_wheel` | primitive STL | box |
| `front_right_wheel` | primitive STL | box |
| `imu_link` | primitive STL | box |
| `lidar_link` | primitive STL | cylinder |

## Mesh Bake Offsets

Links where joint frame ≠ component origin. Visual/inertial/collision origins shifted.

| Link | Offset (mm) |
|------|-------------|
| `front_right_wheel` | (0.0, 0.0, 40.4) |
| `back_right_wheel` | (0.0, 0.0, 40.4) |
| `front_left_wheel` | (0.0, 0.0, 40.4) |
| `back_left_wheel` | (0.0, 0.0, 40.4) |
| `base_link` | (0.0, 0.0, 0.0) |
