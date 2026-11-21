# Export Log: Land_V2_Assembly

**Generated:** 2026-11-21T16:26:13.002321

```
[16:25:07] fusion2URDF v3.1.1
[16:25:07] Time: 2026-11-21T16:25:07.915752
[16:25:07] Design: Land_V2_Assembly
[16:25:07] Components: 219
[16:25:07] 
=== PHASE 1: EXTRACTION ===
[16:25:07]   Document unit: mm
[16:25:07] 
=== EXTRACTION: OCCURRENCES ===
[16:25:07]   [LEAF] d=0 imu_link
[16:25:07]     path: imu_link:1
[16:25:07]     global_pos: (0.073919, 0.006519, 0.315522) m
[16:25:07]     mass: 0.001837 kg, bodies: 1
[16:25:07]     com_global: (0.075689, 0.006596, 0.314505) m
[16:25:07]     com_component_local: (0.001770, 0.000077, -0.001017) m
[16:25:07]     inertia@origin: ixx=1.938440e-08 iyy=8.388215e-08 izz=9.897810e-08 kg·m²
[16:25:07]     inertia@com:    ixx=1.747196e-08 iyy=7.622501e-08 izz=9.321176e-08 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0235 x 0.0107 x 0.0020) m
[16:25:07]   [LEAF] d=0 lidar_link
[16:25:07]     path: lidar_link:1
[16:25:07]     global_pos: (0.032619, 0.006769, 0.387082) m
[16:25:07]     mass: 0.804716 kg, bodies: 1
[16:25:07]     com_global: (0.032542, 0.006769, 0.374444) m
[16:25:07]     com_component_local: (-0.000077, 0.000000, -0.012638) m
[16:25:07]     inertia@origin: ixx=4.036982e-04 iyy=4.057401e-04 izz=3.414724e-04 kg·m²
[16:25:07]     inertia@com:    ixx=2.751606e-04 iyy=2.771977e-04 izz=3.414676e-04 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.10, 0.10, 0.10) [Paint_Enamel_Glossy_Black]
[16:25:07]     bbox: (0.0648 x 0.0556 x 0.0413) m
[16:25:07]   [LEAF] d=1 Mecanum_Wheel_80mm
[16:25:07]     path: Mecanum Wheel Assembly:1+Mecanum Wheel (80mm):1
[16:25:07]     global_pos: (0.144063, -0.172688, 0.210507) m
[16:25:07]     mass: 1.390850 kg, bodies: 1
[16:25:07]     com_global: (0.162727, -0.172688, 0.210507) m
[16:25:07]     com_component_local: (0.018663, 0.000000, -0.000000) m
[16:25:07]     inertia@origin: ixx=1.065704e-03 iyy=1.166858e-03 izz=1.166859e-03 kg·m²
[16:25:07]     inertia@com:    ixx=1.065704e-03 iyy=6.824039e-04 izz=6.824040e-04 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0374 x 0.0800 x 0.0800) m
[16:25:07]   [LEAF] d=1 Motor_Wheel_Coupler
[16:25:07]     path: Mecanum Wheel Assembly:1+Motor-Wheel Coupler:1
[16:25:07]     global_pos: (0.144063, -0.140288, 0.210507) m
[16:25:07]     mass: 0.101473 kg, bodies: 1
[16:25:07]     com_global: (0.147560, -0.140288, 0.210508) m
[16:25:07]     com_component_local: (0.003496, 0.000000, 0.000001) m
[16:25:07]     inertia@origin: ixx=2.458235e-05 iyy=1.444335e-05 izz=1.444296e-05 kg·m²
[16:25:07]     inertia@com:    ixx=2.458235e-05 iyy=1.320292e-05 izz=1.320254e-05 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0180 x 0.0440 x 0.0443) m
[16:25:07]   [SUBASM] d=0 Mecanum_Wheel_Assembly
[16:25:07]     path: Mecanum Wheel Assembly:1
[16:25:07]     global_pos: (0.144063, -0.172688, 0.210507) m
[16:25:07]   [LEAF] d=1 Mecanum_Wheel_80mm
[16:25:07]     path: Mecanum Wheel Assembly:2+Mecanum Wheel (80mm):1
[16:25:07]     global_pos: (-0.078425, -0.172688, 0.210507) m
[16:25:07]     mass: 1.390850 kg, bodies: 1
[16:25:07]     com_global: (-0.059762, -0.172688, 0.210507) m
[16:25:07]     com_component_local: (0.018663, 0.000000, -0.000000) m
[16:25:07]     inertia@origin: ixx=1.065704e-03 iyy=1.166858e-03 izz=1.166859e-03 kg·m²
[16:25:07]     inertia@com:    ixx=1.065704e-03 iyy=6.824039e-04 izz=6.824040e-04 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0374 x 0.0800 x 0.0800) m
[16:25:07]   [LEAF] d=1 Motor_Wheel_Coupler
[16:25:07]     path: Mecanum Wheel Assembly:2+Motor-Wheel Coupler:1
[16:25:07]     global_pos: (-0.078425, -0.140288, 0.210507) m
[16:25:07]     mass: 0.101473 kg, bodies: 1
[16:25:07]     com_global: (-0.074929, -0.140288, 0.210508) m
[16:25:07]     com_component_local: (0.003496, 0.000000, 0.000001) m
[16:25:07]     inertia@origin: ixx=2.458235e-05 iyy=1.444335e-05 izz=1.444296e-05 kg·m²
[16:25:07]     inertia@com:    ixx=2.458235e-05 iyy=1.320292e-05 izz=1.320254e-05 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0180 x 0.0440 x 0.0443) m
[16:25:07]   [SUBASM] d=0 Mecanum_Wheel_Assembly
[16:25:07]     path: Mecanum Wheel Assembly:2
[16:25:07]     global_pos: (-0.078425, -0.172688, 0.210507) m
[16:25:07]   [LEAF] d=1 Mecanum_Wheel_80mm
[16:25:07]     path: Mecanum Wheel Assembly:3+Mecanum Wheel (80mm):1
[16:25:07]     global_pos: (0.143063, 0.186125, 0.210507) m
[16:25:07]     mass: 1.390850 kg, bodies: 1
[16:25:07]     com_global: (0.161727, 0.186125, 0.210507) m
[16:25:07]     com_component_local: (0.018663, 0.000000, -0.000000) m
[16:25:07]     inertia@origin: ixx=1.065704e-03 iyy=1.166858e-03 izz=1.166859e-03 kg·m²
[16:25:07]     inertia@com:    ixx=1.065704e-03 iyy=6.824039e-04 izz=6.824040e-04 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0374 x 0.0800 x 0.0800) m
[16:25:07]   [LEAF] d=1 Motor_Wheel_Coupler
[16:25:07]     path: Mecanum Wheel Assembly:3+Motor-Wheel Coupler:1
[16:25:07]     global_pos: (0.143063, 0.153725, 0.210507) m
[16:25:07]     mass: 0.101473 kg, bodies: 1
[16:25:07]     com_global: (0.146560, 0.153725, 0.210508) m
[16:25:07]     com_component_local: (0.003496, 0.000000, 0.000001) m
[16:25:07]     inertia@origin: ixx=2.458235e-05 iyy=1.444335e-05 izz=1.444296e-05 kg·m²
[16:25:07]     inertia@com:    ixx=2.458235e-05 iyy=1.320292e-05 izz=1.320254e-05 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0180 x 0.0440 x 0.0443) m
[16:25:07]   [SUBASM] d=0 Mecanum_Wheel_Assembly
[16:25:07]     path: Mecanum Wheel Assembly:3
[16:25:07]     global_pos: (0.143063, 0.186125, 0.210507) m
[16:25:07]   [LEAF] d=1 Mecanum_Wheel_80mm
[16:25:07]     path: Mecanum Wheel Assembly:4+Mecanum Wheel (80mm):1
[16:25:07]     global_pos: (-0.079425, 0.186125, 0.210507) m
[16:25:07]     mass: 1.390850 kg, bodies: 1
[16:25:07]     com_global: (-0.060762, 0.186125, 0.210507) m
[16:25:07]     com_component_local: (0.018663, 0.000000, -0.000000) m
[16:25:07]     inertia@origin: ixx=1.065704e-03 iyy=1.166858e-03 izz=1.166859e-03 kg·m²
[16:25:07]     inertia@com:    ixx=1.065704e-03 iyy=6.824039e-04 izz=6.824040e-04 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0374 x 0.0800 x 0.0800) m
[16:25:07]   [LEAF] d=1 Motor_Wheel_Coupler
[16:25:07]     path: Mecanum Wheel Assembly:4+Motor-Wheel Coupler:1
[16:25:07]     global_pos: (-0.079425, 0.153725, 0.210507) m
[16:25:07]     mass: 0.101473 kg, bodies: 1
[16:25:07]     com_global: (-0.075929, 0.153725, 0.210508) m
[16:25:07]     com_component_local: (0.003496, 0.000000, 0.000001) m
[16:25:07]     inertia@origin: ixx=2.458235e-05 iyy=1.444335e-05 izz=1.444296e-05 kg·m²
[16:25:07]     inertia@com:    ixx=2.458235e-05 iyy=1.320292e-05 izz=1.320254e-05 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:07]     bbox: (0.0180 x 0.0440 x 0.0443) m
[16:25:07]   [SUBASM] d=0 Mecanum_Wheel_Assembly
[16:25:07]     path: Mecanum Wheel Assembly:4
[16:25:07]     global_pos: (-0.079425, 0.186125, 0.210507) m
[16:25:07]   [LEAF] d=2 PWDN
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+/PWDN:1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064886, 0.003969, 0.369699) m
[16:25:07]     com_component_local: (-0.006934, -0.002500, 0.012025) m
[16:25:07]     inertia@origin: ixx=5.003821e-12 iyy=6.390762e-12 izz=1.801740e-12 kg·m²
[16:25:07]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:07]   [LEAF] d=2 1
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1:1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.002669, 0.356674) m
[16:25:07]     com_component_local: (-0.007635, -0.003800, -0.001000) m
[16:25:07]     inertia@origin: ixx=3.545620e-12 iyy=1.349575e-11 izz=1.654888e-11 kg·m²
[16:25:07]     inertia@com:    ixx=3.603725e-14 iyy=1.895965e-14 izz=1.711280e-14 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0009 x 0.0010) m
[16:25:07]   [LEAF] d=2 1_1
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (1):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, -0.000531, 0.356374) m
[16:25:07]     com_component_local: (-0.007635, -0.007000, -0.001300) m
[16:25:07]     inertia@origin: ixx=1.155811e-11 iyy=1.365074e-11 izz=2.440637e-11 kg·m²
[16:25:07]     inertia@com:    ixx=3.603725e-14 iyy=1.711280e-14 izz=1.895965e-14 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0010 x 0.0010) m
[16:25:07]   [LEAF] d=2 1_2
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (2):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.000369, 0.368589) m
[16:25:07]     com_component_local: (-0.007635, -0.006100, 0.010915) m
[16:25:07]     inertia@origin: ixx=1.237174e-11 iyy=1.403696e-11 izz=7.556430e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_3
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (3):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.010169, 0.366989) m
[16:25:07]     com_component_local: (-0.007635, 0.003700, 0.009315) m
[16:25:07]     inertia@origin: ixx=7.950885e-12 iyy=1.147659e-11 izz=5.695951e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_4
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (4):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.013754, 0.370074) m
[16:25:07]     com_component_local: (-0.007635, 0.007285, 0.012400) m
[16:25:07]     inertia@origin: ixx=1.636512e-11 iyy=1.677577e-11 izz=8.811009e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_5
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (5):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.007269, 0.370559) m
[16:25:07]     com_component_local: (-0.007635, 0.000800, 0.012885) m
[16:25:07]     inertia@origin: ixx=1.318775e-11 iyy=1.774574e-11 izz=4.663670e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_6
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (6):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.011269, 0.369489) m
[16:25:07]     com_component_local: (-0.007635, 0.004800, 0.011815) m
[16:25:07]     inertia@origin: ixx=1.286905e-11 iyy=1.565515e-11 izz=6.435555e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_7
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (7):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.001784, 0.368374) m
[16:25:07]     com_component_local: (-0.007635, -0.004685, 0.010700) m
[16:25:07]     inertia@origin: ixx=1.079697e-11 iyy=1.366943e-11 izz=6.349196e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_8
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (8):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, -0.003994, 0.363174) m
[16:25:07]     com_component_local: (-0.007635, -0.010463, 0.005500) m
[16:25:07]     inertia@origin: ixx=4.137533e-12 iyy=2.622107e-12 izz=4.967271e-12 kg·m²
[16:25:07]     inertia@com:    ixx=6.862599e-16 iyy=5.019512e-16 izz=1.888933e-16 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0003 x 0.0004) m
[16:25:07]   [LEAF] d=2 1_9
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (9):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.011869, 0.362089) m
[16:25:07]     com_component_local: (-0.007635, 0.005400, 0.004415) m
[16:25:07]     inertia@origin: ixx=3.852848e-12 iyy=6.154843e-12 izz=6.919659e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_10
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (10):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, -0.003331, 0.363812) m
[16:25:07]     com_component_local: (-0.007635, -0.009800, 0.006138) m
[16:25:07]     inertia@origin: ixx=3.959729e-12 iyy=2.841463e-12 izz=4.570110e-12 kg·m²
[16:25:07]     inertia@com:    ixx=6.862599e-16 iyy=1.888933e-16 izz=5.019512e-16 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0004 x 0.0003) m
[16:25:07]   [LEAF] d=2 1_11
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (11):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.011869, 0.365159) m
[16:25:07]     com_component_local: (-0.007635, 0.005400, 0.007485) m
[16:25:07]     inertia@origin: ixx=6.742681e-12 iyy=9.044676e-12 izz=6.919659e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_12
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (12):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.003484, 0.369574) m
[16:25:07]     com_component_local: (-0.007635, -0.002985, 0.011900) m
[16:25:07]     inertia@origin: ixx=1.191081e-11 iyy=1.581468e-11 izz=5.317785e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_13
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (13):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.007084, 0.368174) m
[16:25:07]     com_component_local: (-0.007635, 0.000615, 0.010500) m
[16:25:07]     inertia@origin: ixx=8.755273e-12 iyy=1.333404e-11 izz=4.642887e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_14
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (14):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.016569, 0.362189) m
[16:25:07]     com_component_local: (-0.007635, 0.010100, 0.004515) m
[16:25:07]     inertia@origin: ixx=9.686066e-12 iyy=6.225481e-12 izz=1.268224e-11 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_15
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (15):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, -0.001531, 0.367074) m
[16:25:07]     com_component_local: (-0.007635, -0.008000, 0.009400) m
[16:25:07]     inertia@origin: ixx=6.090238e-11 iyy=5.855415e-11 izz=4.886095e-11 kg·m²
[16:25:07]     inertia@com:    ixx=1.138754e-13 iyy=4.400174e-14 izz=6.993540e-14 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0015 x 0.0011) m
[16:25:07]   [LEAF] d=2 1_16
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (16):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.016569, 0.365059) m
[16:25:07]     com_component_local: (-0.007635, 0.010100, 0.007385) m
[16:25:07]     inertia@origin: ixx=1.238764e-11 iyy=8.927051e-12 izz=1.268224e-11 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_17
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (17):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.000669, 0.361074) m
[16:25:07]     com_component_local: (-0.007635, -0.005800, 0.003400) m
[16:25:07]     inertia@origin: ixx=8.296785e-12 iyy=1.279630e-11 izz=1.683916e-11 kg·m²
[16:25:07]     inertia@com:    ixx=2.337574e-14 iyy=1.103471e-14 izz=1.236937e-14 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0009 x 0.0009) m
[16:25:07]   [LEAF] d=2 1_18
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (18):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.001284, 0.370574) m
[16:25:07]     com_component_local: (-0.007635, -0.005185, 0.012900) m
[16:25:07]     inertia@origin: ixx=1.529432e-11 iyy=1.777641e-11 izz=6.739565e-12 kg·m²
[16:25:07]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:07]   [LEAF] d=2 1_19
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (19):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000001 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.000769, 0.365024) m
[16:25:07]     com_component_local: (-0.007635, -0.005700, 0.007350) m
[16:25:07]     inertia@origin: ixx=4.549857e-11 iyy=5.875617e-11 izz=4.769012e-11 kg·m²
[16:25:07]     inertia@com:    ixx=2.697869e-13 iyy=3.935944e-14 izz=2.305084e-13 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0023 x 0.0010) m
[16:25:07]   [LEAF] d=2 1_20
[16:25:07]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (20):1
[16:25:07]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:07]     mass: 0.000000 kg, bodies: 1
[16:25:07]     com_global: (0.064184, 0.013469, 0.354212) m
[16:25:07]     com_component_local: (-0.007635, 0.007000, -0.003462) m
[16:25:07]     inertia@origin: ixx=1.761162e-11 iyy=2.026982e-11 izz=3.080864e-11 kg·m²
[16:25:07]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:07]     material: Steel
[16:25:07]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:07]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 1_21
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (21):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011269, 0.366989) m
[16:25:08]     com_component_local: (-0.007635, 0.004800, 0.009315) m
[16:25:08]     inertia@origin: ixx=8.690489e-12 iyy=1.147659e-11 izz=6.435555e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 1_22
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (22):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001869, 0.362159) m
[16:25:08]     com_component_local: (-0.007635, -0.004600, 0.004485) m
[16:25:08]     inertia@origin: ixx=3.269312e-12 iyy=6.204123e-12 izz=6.286843e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 1_23
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (23):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001469, 0.356689) m
[16:25:08]     com_component_local: (-0.007635, -0.005000, -0.000985) m
[16:25:08]     inertia@origin: ixx=2.058656e-12 iyy=4.689715e-12 izz=6.590594e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 1_24
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+1 (24):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.004384, 0.368174) m
[16:25:08]     com_component_local: (-0.007635, -0.002085, 0.010500) m
[16:25:08]     inertia@origin: ixx=9.069229e-12 iyy=1.333404e-11 izz=4.956843e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 10
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+10:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.004469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.002000, -0.003462) m
[16:25:08]     inertia@origin: ixx=4.693300e-12 iyy=2.026982e-11 izz=1.789033e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 11
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+11:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.003469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.003000, -0.003462) m
[16:25:08]     inertia@origin: ixx=6.128669e-12 iyy=2.026982e-11 izz=1.932569e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 12
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+12:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.002469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.004000, -0.003462) m
[16:25:08]     inertia@origin: ixx=8.138185e-12 iyy=2.026982e-11 izz=2.133521e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 13
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+13:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.005000, -0.003462) m
[16:25:08]     inertia@origin: ixx=1.072185e-11 iyy=2.026982e-11 izz=2.391887e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 14
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+14:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.000469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.006000, -0.003462) m
[16:25:08]     inertia@origin: ixx=1.387966e-11 iyy=2.026982e-11 izz=2.707668e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 15
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+15:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.000531, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.007000, -0.003462) m
[16:25:08]     inertia@origin: ixx=1.761162e-11 iyy=2.026982e-11 izz=3.080864e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.005354, 0.368174) m
[16:25:08]     com_component_local: (-0.007635, -0.001115, 0.010500) m
[16:25:08]     inertia@origin: ixx=8.823696e-12 iyy=1.333404e-11 izz=4.711310e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.001531, 0.365274) m
[16:25:08]     com_component_local: (-0.007635, -0.008000, 0.007600) m
[16:25:08]     inertia@origin: ixx=4.869361e-11 iyy=4.634538e-11 izz=4.886095e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.138754e-13 iyy=4.400174e-14 izz=6.993540e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0015 x 0.0011) m
[16:25:08]   [LEAF] d=2 2_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.000669, 0.362674) m
[16:25:08]     com_component_local: (-0.007635, -0.005800, 0.005000) m
[16:25:08]     inertia@origin: ixx=1.075684e-11 iyy=1.525636e-11 izz=1.683916e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.337574e-14 iyy=1.103471e-14 izz=1.236937e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0009 x 0.0008) m
[16:25:08]   [LEAF] d=2 2_3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (3):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000001 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.000769, 0.366924) m
[16:25:08]     com_component_local: (-0.007635, -0.005700, 0.009250) m
[16:25:08]     inertia@origin: ixx=6.198770e-11 iyy=7.524530e-11 izz=4.769012e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.697869e-13 iyy=3.935944e-14 izz=2.305084e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0023 x 0.0009) m
[16:25:08]   [LEAF] d=2 2_4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (4):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.012469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, 0.006000, -0.003462) m
[16:25:08]     inertia@origin: ixx=1.387966e-11 iyy=2.026982e-11 izz=2.707668e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 2_5
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (5):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.002754, 0.368374) m
[16:25:08]     com_component_local: (-0.007635, -0.003715, 0.010700) m
[16:25:08]     inertia@origin: ixx=1.015245e-11 iyy=1.366943e-11 izz=5.704673e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_6
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (6):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.000531, 0.357974) m
[16:25:08]     com_component_local: (-0.007635, -0.007000, 0.000300) m
[16:25:08]     inertia@origin: ixx=1.119442e-11 iyy=1.328706e-11 izz=2.440637e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.603725e-14 iyy=1.711280e-14 izz=1.895965e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0010 x 0.0009) m
[16:25:08]   [LEAF] d=2 2_7
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (7):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.002254, 0.370574) m
[16:25:08]     com_component_local: (-0.007635, -0.004215, 0.012900) m
[16:25:08]     inertia@origin: ixx=1.457307e-11 iyy=1.777641e-11 izz=6.018313e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_8
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (8):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.016569, 0.364089) m
[16:25:08]     com_component_local: (-0.007635, 0.010100, 0.006415) m
[16:25:08]     inertia@origin: ixx=1.132878e-11 iyy=7.868192e-12 izz=1.268224e-11 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_9
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (9):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.016569, 0.363159) m
[16:25:08]     com_component_local: (-0.007635, 0.010100, 0.005485) m
[16:25:08]     inertia@origin: ixx=1.045336e-11 iyy=6.992770e-12 izz=1.268224e-11 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_10
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (10):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011869, 0.364189) m
[16:25:08]     com_component_local: (-0.007635, 0.005400, 0.006515) m
[16:25:08]     inertia@origin: ixx=5.668476e-12 iyy=7.970471e-12 izz=6.919659e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_11
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (11):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011269, 0.367959) m
[16:25:08]     com_component_local: (-0.007635, 0.004800, 0.010285) m
[16:25:08]     inertia@origin: ixx=1.019438e-11 iyy=1.298048e-11 izz=6.435555e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_12
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (12):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008054, 0.368174) m
[16:25:08]     com_component_local: (-0.007635, 0.001585, 0.010500) m
[16:25:08]     inertia@origin: ixx=8.924077e-12 iyy=1.333404e-11 izz=4.811691e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_13
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (13):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.004454, 0.369574) m
[16:25:08]     com_component_local: (-0.007635, -0.002015, 0.011900) m
[16:25:08]     inertia@origin: ixx=1.152717e-11 iyy=1.581468e-11 izz=4.934141e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_14
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (14):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011269, 0.370459) m
[16:25:08]     com_component_local: (-0.007635, 0.004800, 0.012785) m
[16:25:08]     inertia@origin: ixx=1.475658e-11 iyy=1.754268e-11 izz=6.435555e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_15
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (15):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.007269, 0.369589) m
[16:25:08]     com_component_local: (-0.007635, 0.000800, 0.011915) m
[16:25:08]     inertia@origin: ixx=1.128488e-11 iyy=1.584286e-11 izz=4.663670e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_16
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (16):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.012784, 0.370074) m
[16:25:08]     com_component_local: (-0.007635, 0.006315, 0.012400) m
[16:25:08]     inertia@origin: ixx=1.532161e-11 iyy=1.677577e-11 izz=7.767495e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.223617e-15 izz=2.147811e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_17
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (17):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.010169, 0.367959) m
[16:25:08]     com_component_local: (-0.007635, 0.003700, 0.010285) m
[16:25:08]     inertia@origin: ixx=9.454772e-12 iyy=1.298048e-11 izz=5.695951e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_18
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (18):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.000369, 0.369559) m
[16:25:08]     com_component_local: (-0.007635, -0.006100, 0.011885) m
[16:25:08]     inertia@origin: ixx=1.412116e-11 iyy=1.578638e-11 izz=7.556430e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_19
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (19):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.004269, 0.356674) m
[16:25:08]     com_component_local: (-0.007635, -0.002200, -0.001000) m
[16:25:08]     inertia@origin: ixx=1.363496e-12 iyy=1.349575e-11 izz=1.436675e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.603725e-14 iyy=1.895965e-14 izz=1.711280e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0010 x 0.0010) m
[16:25:08]   [LEAF] d=2 2_20
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (20):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011869, 0.363059) m
[16:25:08]     com_component_local: (-0.007635, 0.005400, 0.005385) m
[16:25:08]     inertia@origin: ixx=4.604791e-12 iyy=6.906786e-12 izz=6.919659e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_21
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (21):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001869, 0.361189) m
[16:25:08]     com_component_local: (-0.007635, -0.004600, 0.003515) m
[16:25:08]     inertia@origin: ixx=2.655481e-12 iyy=5.590292e-12 izz=6.286843e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_22
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (22):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.003469, 0.363174) m
[16:25:08]     com_component_local: (-0.007635, -0.009937, 0.005500) m
[16:25:08]     inertia@origin: ixx=3.820416e-12 iyy=2.622107e-12 izz=4.650154e-12 kg·m²
[16:25:08]     inertia@com:    ixx=6.862599e-16 iyy=5.019512e-16 izz=1.888933e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0004) m
[16:25:08]   [LEAF] d=2 2_23
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (23):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001469, 0.357659) m
[16:25:08]     com_component_local: (-0.007635, -0.005000, -0.000015) m
[16:25:08]     inertia@origin: ixx=1.981927e-12 iyy=4.612986e-12 izz=6.590594e-12 kg·m²
[16:25:08]     inertia@com:    ixx=4.359179e-15 iyy=2.147811e-15 izz=2.223617e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0006) m
[16:25:08]   [LEAF] d=2 2_24
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+2 (24):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.003331, 0.364337) m
[16:25:08]     com_component_local: (-0.007635, -0.009800, 0.006663) m
[16:25:08]     inertia@origin: ixx=4.158704e-12 iyy=3.040438e-12 izz=4.570110e-12 kg·m²
[16:25:08]     inertia@com:    ixx=6.862599e-16 iyy=1.888933e-16 izz=5.019512e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0004 x 0.0003) m
[16:25:08]   [LEAF] d=2 3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+3:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, 0.005000, -0.003462) m
[16:25:08]     inertia@origin: ixx=1.072185e-11 iyy=2.026982e-11 izz=2.391887e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+4:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.010469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, 0.004000, -0.003462) m
[16:25:08]     inertia@origin: ixx=8.138185e-12 iyy=2.026982e-11 izz=2.133521e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 5
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+5:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.009469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, 0.003000, -0.003462) m
[16:25:08]     inertia@origin: ixx=6.128669e-12 iyy=2.026982e-11 izz=1.932569e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 6
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+6:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, 0.002000, -0.003462) m
[16:25:08]     inertia@origin: ixx=4.693300e-12 iyy=2.026982e-11 izz=1.789033e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 7
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+7:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.007469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, 0.001000, -0.003462) m
[16:25:08]     inertia@origin: ixx=3.832079e-12 iyy=2.026982e-11 izz=1.702910e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 8
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+8:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.006469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.000000, -0.003462) m
[16:25:08]     inertia@origin: ixx=3.545005e-12 iyy=2.026982e-11 izz=1.674203e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 9
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+9:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.005469, 0.354212) m
[16:25:08]     com_component_local: (-0.007635, -0.001000, -0.003462) m
[16:25:08]     inertia@origin: ixx=3.832079e-12 iyy=2.026982e-11 izz=1.702910e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.043006e-13 iyy=9.571346e-14 izz=8.631563e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0020) m
[16:25:08]   [LEAF] d=2 AFVDD
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+AFVDD:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.002369, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.004100, 0.012025) m
[16:25:08]     inertia@origin: ixx=5.354018e-12 iyy=6.390762e-12 izz=2.151937e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 AGND
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+AGND:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.005569, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.000900, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.823417e-12 iyy=6.390762e-12 izz=1.621336e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 D2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+D2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.009869, 0.369474) m
[16:25:08]     com_component_local: (-0.007635, 0.003400, 0.011800) m
[16:25:08]     inertia@origin: ixx=5.413259e-12 iyy=7.089647e-12 izz=2.507665e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.016889e-15 iyy=2.719551e-16 izz=7.504911e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0005 x 0.0003) m
[16:25:08]   [LEAF] d=2 D2_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+D2 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008269, 0.370474) m
[16:25:08]     com_component_local: (-0.007635, 0.001800, 0.012800) m
[16:25:08]     inertia@origin: ixx=5.997552e-12 iyy=7.972546e-12 izz=2.209059e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.016889e-15 iyy=2.719551e-16 izz=7.504911e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0005 x 0.0003) m
[16:25:08]   [LEAF] d=2 DGND1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND1:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.007969, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, 0.001500, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.871171e-12 iyy=6.390762e-12 izz=1.669090e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.006769, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, 0.000300, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.799540e-12 iyy=6.390762e-12 izz=1.597459e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND3:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.005169, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.001300, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.852600e-12 iyy=6.390762e-12 izz=1.650519e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND4:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.004369, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.002100, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.942802e-12 iyy=6.390762e-12 izz=1.740721e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND5
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND5:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.007969, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, 0.001500, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.990523e-12 iyy=4.510114e-12 izz=1.669090e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND6
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND6:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.006769, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, 0.000300, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.918892e-12 iyy=4.510114e-12 izz=1.597459e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND7
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND7:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.005569, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.000900, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.942769e-12 iyy=4.510114e-12 izz=1.621336e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND8
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND8:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.004369, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.002100, 0.009375) m
[16:25:08]     inertia@origin: ixx=3.062154e-12 iyy=4.510114e-12 izz=1.740721e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DGND9
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DGND9:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.003169, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.003300, 0.009375) m
[16:25:08]     inertia@origin: ixx=3.277048e-12 iyy=4.510114e-12 izz=1.955615e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DVDD
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DVDD:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.003569, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.002900, 0.012025) m
[16:25:08]     inertia@origin: ixx=5.075452e-12 iyy=6.390762e-12 izz=1.873372e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 DVDD_GPIO
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+DVDD/GPIO:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.006369, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.000100, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.796887e-12 iyy=6.390762e-12 izz=1.594806e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 EN
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+EN:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008819, 0.362374) m
[16:25:08]     com_component_local: (-0.007635, 0.002350, 0.004700) m
[16:25:08]     inertia@origin: ixx=4.381141e-12 iyy=1.270922e-11 izz=1.008175e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 EN_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+EN (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.013519, 0.362374) m
[16:25:08]     com_component_local: (-0.007635, 0.007050, 0.004700) m
[16:25:08]     inertia@origin: ixx=1.135791e-11 iyy=1.270922e-11 izz=1.705852e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 EN_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+EN (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.002481, 0.363574) m
[16:25:08]     com_component_local: (-0.007635, -0.008950, 0.005900) m
[16:25:08]     inertia@origin: ixx=1.816728e-11 iyy=1.471793e-11 izz=2.185919e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 EXP_PAD
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+EXP_PAD:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000001 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.002569, 0.359474) m
[16:25:08]     com_component_local: (-0.007635, -0.003900, 0.001800) m
[16:25:08]     inertia@origin: ixx=1.008970e-11 iyy=3.308970e-11 izz=3.947796e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.018515e-13 iyy=1.143582e-13 izz=8.757620e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0014 x 0.0016) m
[16:25:08]   [LEAF] d=2 FB
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+FB:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.002481, 0.360974) m
[16:25:08]     com_component_local: (-0.007635, -0.008950, 0.003300) m
[16:25:08]     inertia@origin: ixx=1.438991e-11 iyy=1.094056e-11 izz=2.185919e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 G2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+G2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.009869, 0.369974) m
[16:25:08]     com_component_local: (-0.007635, 0.003400, 0.012300) m
[16:25:08]     inertia@origin: ixx=5.845736e-12 iyy=7.522124e-12 izz=2.507665e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.016889e-15 iyy=2.719551e-16 izz=7.504911e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0005 x 0.0003) m
[16:25:08]   [LEAF] d=2 G2_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+G2 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008269, 0.369974) m
[16:25:08]     com_component_local: (-0.007635, 0.001800, 0.012300) m
[16:25:08]     inertia@origin: ixx=5.547129e-12 iyy=7.522124e-12 izz=2.209059e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.016889e-15 iyy=2.719551e-16 izz=7.504911e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0005 x 0.0003) m
[16:25:08]   [LEAF] d=2 GND
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+GND:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.002769, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.003700, 0.012025) m
[16:25:08]     inertia@origin: ixx=5.250551e-12 iyy=6.390762e-12 izz=2.048470e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 GND_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+GND (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.009769, 0.362374) m
[16:25:08]     com_component_local: (-0.007635, 0.003300, 0.004700) m
[16:25:08]     inertia@origin: ixx=5.228759e-12 iyy=1.270922e-11 izz=1.092937e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 GND_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+GND (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.012344, 0.368749) m
[16:25:08]     com_component_local: (-0.007635, 0.005875, 0.011075) m
[16:25:08]     inertia@origin: ixx=2.709755e-11 iyy=3.118403e-11 izz=1.599725e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.081632e-14 iyy=1.163934e-14 izz=9.203656e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0009) m
[16:25:08]   [LEAF] d=2 GND_3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+GND (3):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.001531, 0.363574) m
[16:25:08]     com_component_local: (-0.007635, -0.008000, 0.005900) m
[16:25:08]     inertia@origin: ixx=1.562443e-11 iyy=1.471793e-11 izz=1.931634e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 GND_4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+GND (4):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.006974, 0.366774) m
[16:25:08]     com_component_local: (-0.007635, 0.000505, 0.009100) m
[16:25:08]     inertia@origin: ixx=1.638895e-11 iyy=2.780803e-11 izz=1.153028e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 GND_5
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+GND (5):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001244, 0.360224) m
[16:25:08]     com_component_local: (-0.007635, -0.005225, 0.002550) m
[16:25:08]     inertia@origin: ixx=1.909581e-12 iyy=3.654155e-12 izz=4.829574e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 GND_6
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+GND (6):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.014469, 0.362374) m
[16:25:08]     com_component_local: (-0.007635, 0.008000, 0.004700) m
[16:25:08]     inertia@origin: ixx=1.361572e-11 iyy=1.270922e-11 izz=1.931634e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 IN
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+IN:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.010719, 0.362374) m
[16:25:08]     com_component_local: (-0.007635, 0.004250, 0.004700) m
[16:25:08]     inertia@origin: ixx=6.361418e-12 iyy=1.270922e-11 izz=1.206203e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 IN_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+IN (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.015419, 0.362374) m
[16:25:08]     com_component_local: (-0.007635, 0.008950, 0.004700) m
[16:25:08]     inertia@origin: ixx=1.615858e-11 iyy=1.270922e-11 izz=2.185919e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 LX
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+LX:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.000581, 0.363574) m
[16:25:08]     com_component_local: (-0.007635, -0.007050, 0.005900) m
[16:25:08]     inertia@origin: ixx=1.336661e-11 iyy=1.471793e-11 izz=1.705852e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 MCKN
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MCKN:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.003969, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.002500, 0.009375) m
[16:25:08]     inertia@origin: ixx=3.123173e-12 iyy=4.510114e-12 izz=1.801740e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 MCKP
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MCKP:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.003569, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.002900, 0.009375) m
[16:25:08]     inertia@origin: ixx=3.194804e-12 iyy=4.510114e-12 izz=1.873372e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 MCLK
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MCLK:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.004769, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.001700, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.892395e-12 iyy=6.390762e-12 izz=1.690314e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 MD0N
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MD0N:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.005169, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.001300, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.971952e-12 iyy=4.510114e-12 izz=1.650519e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 MD0P
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MD0P:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.004769, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.001700, 0.009375) m
[16:25:08]     inertia@origin: ixx=3.011747e-12 iyy=4.510114e-12 izz=1.690314e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 MD1N
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MD1N:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.006369, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.000100, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.916239e-12 iyy=4.510114e-12 izz=1.594806e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 MD1P
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MD1P:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.005969, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.000500, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.924198e-12 iyy=4.510114e-12 izz=1.602765e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 MECHANICAL_PIN
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, -0.003731, 0.351574) m
[16:25:08]     com_component_local: (-0.006934, -0.010200, -0.006100) m
[16:25:08]     inertia@origin: ixx=5.984233e-11 iyy=3.612038e-11 izz=6.437747e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.189181e-13 iyy=5.949178e-14 izz=5.949177e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0015 x 0.0015) m
[16:25:08]   [LEAF] d=2 MECHANICAL_PIN_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.016469, 0.351412) m
[16:25:08]     com_component_local: (-0.007635, 0.010000, -0.006262) m
[16:25:08]     inertia@origin: ixx=3.252323e-10 iyy=2.275666e-10 izz=3.667765e-10 kg·m²
[16:25:08]     inertia@com:    ixx=3.874580e-12 iyy=2.493108e-12 izz=1.381830e-12 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0027 x 0.0036) m
[16:25:08]   [LEAF] d=2 MECHANICAL_PIN_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.003531, 0.351412) m
[16:25:08]     com_component_local: (-0.007635, -0.010000, -0.006262) m
[16:25:08]     inertia@origin: ixx=3.252323e-10 iyy=2.275666e-10 izz=3.667765e-10 kg·m²
[16:25:08]     inertia@com:    ixx=3.874580e-12 iyy=2.493108e-12 izz=1.381830e-12 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0027 x 0.0036) m
[16:25:08]   [LEAF] d=2 MECHANICAL_PIN_3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (3):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000001 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.014469, 0.352112) m
[16:25:08]     com_component_local: (-0.007635, 0.008000, -0.005562) m
[16:25:08]     inertia@origin: ixx=6.784357e-11 iyy=6.379800e-11 izz=8.605109e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.062719e-12 iyy=1.034050e-12 izz=2.877791e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0007 x 0.0042) m
[16:25:08]   [LEAF] d=2 MECHANICAL_PIN_4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (4):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000001 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.001531, 0.352112) m
[16:25:08]     com_component_local: (-0.007635, -0.008000, -0.005562) m
[16:25:08]     inertia@origin: ixx=6.784357e-11 iyy=6.379800e-11 izz=8.605109e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.062719e-12 iyy=1.034050e-12 izz=2.877791e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0007 x 0.0042) m
[16:25:08]   [LEAF] d=2 MECHANICAL_PIN_5
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (5):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011969, 0.350974) m
[16:25:08]     com_component_local: (-0.007635, 0.005500, -0.006700) m
[16:25:08]     inertia@origin: ixx=3.188971e-11 iyy=4.368601e-11 izz=3.749591e-11 kg·m²
[16:25:08]     inertia@com:    ixx=1.189185e-13 iyy=5.949197e-14 izz=5.949195e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0015 x 0.0015) m
[16:25:08]   [LEAF] d=2 NC
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.013519, 0.364974) m
[16:25:08]     com_component_local: (-0.007635, 0.007050, 0.007300) m
[16:25:08]     inertia@origin: ixx=1.628492e-11 iyy=1.763623e-11 izz=1.705852e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 NC_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008819, 0.364974) m
[16:25:08]     com_component_local: (-0.007635, 0.002350, 0.007300) m
[16:25:08]     inertia@origin: ixx=9.308147e-12 iyy=1.763623e-11 izz=1.008175e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 NC1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC1:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.003164, 0.366774) m
[16:25:08]     com_component_local: (-0.007635, -0.003305, 0.009100) m
[16:25:08]     inertia@origin: ixx=1.848902e-11 iyy=2.780803e-11 izz=1.363034e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 NC1_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC1 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.007569, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, 0.001100, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.836682e-12 iyy=6.390762e-12 izz=1.634601e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 NC1_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC1 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001244, 0.358724) m
[16:25:08]     com_component_local: (-0.007635, -0.005225, 0.001050) m
[16:25:08]     inertia@origin: ixx=1.605064e-12 iyy=3.349637e-12 izz=4.829574e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 NC2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.004434, 0.366774) m
[16:25:08]     com_component_local: (-0.007635, -0.002035, 0.009100) m
[16:25:08]     inertia@origin: ixx=1.715398e-11 iyy=2.780803e-11 izz=1.229530e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 NC2_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC2 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.007169, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, 0.000700, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.812805e-12 iyy=6.390762e-12 izz=1.610724e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 NC2_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC2 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001244, 0.359224) m
[16:25:08]     com_component_local: (-0.007635, -0.005225, 0.001550) m
[16:25:08]     inertia@origin: ixx=1.678374e-12 iyy=3.422947e-12 izz=4.829574e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 NC3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC3:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.001244, 0.359724) m
[16:25:08]     com_component_local: (-0.007635, -0.005225, 0.002050) m
[16:25:08]     inertia@origin: ixx=1.779879e-12 iyy=3.524453e-12 izz=4.829574e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 NC3_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC3 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.005704, 0.366774) m
[16:25:08]     com_component_local: (-0.007635, -0.000765, 0.009100) m
[16:25:08]     inertia@origin: ixx=1.645396e-11 iyy=2.780803e-11 izz=1.159528e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 NC4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC4:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.004434, 0.361374) m
[16:25:08]     com_component_local: (-0.007635, -0.002035, 0.003700) m
[16:25:08]     inertia@origin: ixx=3.547280e-12 iyy=1.420133e-11 izz=1.229530e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 NC6
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC6:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.007569, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, 0.001100, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.956034e-12 iyy=4.510114e-12 izz=1.634601e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 NC7
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC7:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.007169, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, 0.000700, 0.009375) m
[16:25:08]     inertia@origin: ixx=2.932157e-12 iyy=4.510114e-12 izz=1.610724e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 NC7_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+NC7 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.003894, 0.359224) m
[16:25:08]     com_component_local: (-0.007635, -0.002575, 0.001550) m
[16:25:08]     inertia@origin: ixx=5.127495e-13 iyy=3.422947e-12 izz=3.663950e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 OE
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+OE:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.012344, 0.366899) m
[16:25:08]     com_component_local: (-0.007635, 0.005875, 0.009225) m
[16:25:08]     inertia@origin: ixx=2.062776e-11 iyy=2.471424e-11 izz=1.599726e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.081633e-14 iyy=1.163935e-14 izz=9.203659e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0009) m
[16:25:08]   [LEAF] d=2 OUT
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+OUT:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.015419, 0.364974) m
[16:25:08]     com_component_local: (-0.007635, 0.008950, 0.007300) m
[16:25:08]     inertia@origin: ixx=2.108559e-11 iyy=1.763623e-11 izz=2.185919e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 OUT_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+OUT (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.010719, 0.364974) m
[16:25:08]     com_component_local: (-0.007635, 0.004250, 0.007300) m
[16:25:08]     inertia@origin: ixx=1.128842e-11 iyy=1.763623e-11 izz=1.206203e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 OUTPUT
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+OUTPUT:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.013794, 0.368749) m
[16:25:08]     com_component_local: (-0.007635, 0.007325, 0.011075) m
[16:25:08]     inertia@origin: ixx=3.039490e-11 iyy=3.118403e-11 izz=1.929460e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.081632e-14 iyy=1.163934e-14 izz=9.203656e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0009) m
[16:25:08]   [LEAF] d=2 P1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P1:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.012244, 0.355949) m
[16:25:08]     com_component_local: (-0.007635, 0.005775, -0.001725) m
[16:25:08]     inertia@origin: ixx=1.705796e-12 iyy=2.875043e-12 izz=4.297917e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P1_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P1 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.006244, 0.355949) m
[16:25:08]     com_component_local: (-0.007635, -0.000225, -0.001725) m
[16:25:08]     inertia@origin: ixx=1.441420e-13 iyy=2.875043e-12 izz=2.736262e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P1_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P1 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.009244, 0.355949) m
[16:25:08]     com_component_local: (-0.007635, 0.002775, -0.001725) m
[16:25:08]     inertia@origin: ixx=5.029004e-13 iyy=2.875043e-12 izz=3.095021e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.012244, 0.357199) m
[16:25:08]     com_component_local: (-0.007635, 0.005775, -0.000475) m
[16:25:08]     inertia@origin: ixx=1.576831e-12 iyy=2.746078e-12 izz=4.297917e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P2_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P2 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.006244, 0.357199) m
[16:25:08]     com_component_local: (-0.007635, -0.000225, -0.000475) m
[16:25:08]     inertia@origin: ixx=1.517650e-14 iyy=2.746078e-12 izz=2.736262e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P2_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P2 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.009244, 0.357199) m
[16:25:08]     com_component_local: (-0.007635, 0.002775, -0.000475) m
[16:25:08]     inertia@origin: ixx=3.739349e-13 iyy=2.746078e-12 izz=3.095021e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P3:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011694, 0.357199) m
[16:25:08]     com_component_local: (-0.007635, 0.005225, -0.000475) m
[16:25:08]     inertia@origin: ixx=1.293107e-12 iyy=2.746078e-12 izz=4.014193e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P3_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P3 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008694, 0.357199) m
[16:25:08]     com_component_local: (-0.007635, 0.002225, -0.000475) m
[16:25:08]     inertia@origin: ixx=2.449695e-13 iyy=2.746078e-12 izz=2.966055e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P3_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P3 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.005694, 0.357199) m
[16:25:08]     com_component_local: (-0.007635, -0.000775, -0.000475) m
[16:25:08]     inertia@origin: ixx=4.096959e-14 iyy=2.746078e-12 izz=2.762055e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P4:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.011694, 0.355949) m
[16:25:08]     com_component_local: (-0.007635, 0.005225, -0.001725) m
[16:25:08]     inertia@origin: ixx=1.422072e-12 iyy=2.875043e-12 izz=4.014193e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P4_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P4 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008694, 0.355949) m
[16:25:08]     com_component_local: (-0.007635, 0.002225, -0.001725) m
[16:25:08]     inertia@origin: ixx=3.739349e-13 iyy=2.875043e-12 izz=2.966055e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 P4_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+P4 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.005694, 0.355949) m
[16:25:08]     com_component_local: (-0.007635, -0.000775, -0.001725) m
[16:25:08]     inertia@origin: ixx=1.699350e-13 iyy=2.875043e-12 izz=2.762055e-12 kg·m²
[16:25:08]     inertia@com:    ixx=2.221332e-15 iyy=1.918572e-15 izz=3.100213e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0003 x 0.0007) m
[16:25:08]   [LEAF] d=2 PG
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+PG:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.001531, 0.360974) m
[16:25:08]     com_component_local: (-0.007635, -0.008000, 0.003300) m
[16:25:08]     inertia@origin: ixx=1.184706e-11 iyy=1.094056e-11 izz=1.931634e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 S2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+S2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.009869, 0.370474) m
[16:25:08]     com_component_local: (-0.007635, 0.003400, 0.012800) m
[16:25:08]     inertia@origin: ixx=6.296158e-12 iyy=7.972546e-12 izz=2.507665e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.016889e-15 iyy=2.719551e-16 izz=7.504911e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0005 x 0.0003) m
[16:25:08]   [LEAF] d=2 S2_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+S2 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.008269, 0.369474) m
[16:25:08]     com_component_local: (-0.007635, 0.001800, 0.011800) m
[16:25:08]     inertia@origin: ixx=5.114653e-12 iyy=7.089647e-12 izz=2.209059e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.016889e-15 iyy=2.719551e-16 izz=7.504911e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0005 x 0.0003) m
[16:25:08]   [LEAF] d=2 SCL
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+SCL:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.005704, 0.361374) m
[16:25:08]     com_component_local: (-0.007635, -0.000765, 0.003700) m
[16:25:08]     inertia@origin: ixx=2.847259e-12 iyy=1.420133e-11 izz=1.159528e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 SCL_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+SCL (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.003894, 0.359724) m
[16:25:08]     com_component_local: (-0.007635, -0.002575, 0.002050) m
[16:25:08]     inertia@origin: ixx=6.142552e-13 iyy=3.524453e-12 izz=3.663950e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 SCL_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+SCL (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.002769, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.003700, 0.009375) m
[16:25:08]     inertia@origin: ixx=3.369903e-12 iyy=4.510114e-12 izz=2.048470e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 SDA
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+SDA:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.002369, 0.367049) m
[16:25:08]     com_component_local: (-0.006934, -0.004100, 0.009375) m
[16:25:08]     inertia@origin: ixx=3.473370e-12 iyy=4.510114e-12 izz=2.151937e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 SDA_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+SDA (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.003894, 0.360224) m
[16:25:08]     com_component_local: (-0.007635, -0.002575, 0.002550) m
[16:25:08]     inertia@origin: ixx=7.439570e-13 iyy=3.654155e-12 izz=3.663950e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 SDA_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+SDA (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.006974, 0.361374) m
[16:25:08]     com_component_local: (-0.007635, 0.000505, 0.003700) m
[16:25:08]     inertia@origin: ixx=2.782257e-12 iyy=1.420133e-11 izz=1.153028e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 VA2V8
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+VA2V8:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.005969, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.000500, 0.012025) m
[16:25:08]     inertia@origin: ixx=4.804846e-12 iyy=6.390762e-12 izz=1.602765e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [LEAF] d=2 VCC
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+VCC:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.003894, 0.358724) m
[16:25:08]     com_component_local: (-0.007635, -0.002575, 0.001050) m
[16:25:08]     inertia@origin: ixx=4.394398e-13 iyy=3.349637e-12 izz=3.663950e-12 kg·m²
[16:25:08]     inertia@com:    ixx=3.352792e-15 iyy=3.955948e-16 izz=2.965929e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0003) m
[16:25:08]   [LEAF] d=2 VCC_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+VCC (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.003164, 0.361374) m
[16:25:08]     com_component_local: (-0.007635, -0.003305, 0.003700) m
[16:25:08]     inertia@origin: ixx=4.882319e-12 iyy=1.420133e-11 izz=1.363034e-11 kg·m²
[16:25:08]     inertia@com:    ixx=3.709347e-14 iyy=3.171041e-14 izz=5.413539e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0015) m
[16:25:08]   [LEAF] d=2 VDD
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+VDD:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, 0.013794, 0.366899) m
[16:25:08]     com_component_local: (-0.007635, 0.007325, 0.009225) m
[16:25:08]     inertia@origin: ixx=2.392511e-11 iyy=2.471424e-11 izz=1.929461e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.081633e-14 iyy=1.163935e-14 izz=9.203659e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0008 x 0.0009) m
[16:25:08]   [LEAF] d=2 VIN
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+VIN:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064184, -0.000581, 0.360974) m
[16:25:08]     com_component_local: (-0.007635, -0.007050, 0.003300) m
[16:25:08]     inertia@origin: ixx=9.589239e-12 iyy=1.094056e-11 izz=1.705852e-11 kg·m²
[16:25:08]     inertia@com:    ixx=2.066079e-14 iyy=1.593551e-14 izz=4.749732e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0006 x 0.0011) m
[16:25:08]   [LEAF] d=2 VO1V8
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1+VO1V8:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 1
[16:25:08]     com_global: (0.064886, 0.003169, 0.369699) m
[16:25:08]     com_component_local: (-0.006934, -0.003300, 0.012025) m
[16:25:08]     inertia@origin: ixx=5.157695e-12 iyy=6.390762e-12 izz=1.955615e-12 kg·m²
[16:25:08]     inertia@com:    ixx=1.230607e-15 iyy=1.099419e-15 izz=1.363230e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0002 x 0.0006) m
[16:25:08]   [SUBASM] d=1 Pins
[16:25:08]     path: Camera_module_3_std_model_simple:1+Pins:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]   [LEAF] d=2 SILKSCREEN_TOP
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1+SILKSCREEN_TOP:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000004 kg, bodies: 166
[16:25:08]     com_global: (0.064150, 0.006050, 0.363995) m
[16:25:08]     com_component_local: (-0.007669, -0.000419, 0.006321) m
[16:25:08]     inertia@origin: ixx=4.233703e-10 iyy=4.980221e-10 izz=3.961886e-10 kg·m²
[16:25:08]     inertia@com:    ixx=2.627621e-10 iyy=1.026958e-10 izz=1.600664e-10 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(1.00, 1.00, 1.00) [Opaque_255_255_255]
[16:25:08]     bbox: (0.0000 x 0.0227 x 0.0184) m
[16:25:08]   [LEAF] d=2 PASTEMASK_TOP
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1+PASTEMASK_TOP:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 121
[16:25:08]     com_global: (0.071819, 0.006469, 0.357674) m
[16:25:08]     com_component_local: (0.000000, 0.000000, 0.000000) m
[16:25:08]     inertia@origin: ixx=2.383620e-22 iyy=5.109397e-14 izz=1.219702e-13 kg·m²
[16:25:08]     inertia@com:    ixx=2.383405e-22 iyy=5.109397e-14 izz=1.219702e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0227 x 0.0213) m
[16:25:08]   [LEAF] d=2 SOLDERMASK_TOP
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1+SOLDERMASK_TOP:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000042 kg, bodies: 1
[16:25:08]     com_global: (0.064163, 0.006554, 0.359951) m
[16:25:08]     com_component_local: (-0.007656, 0.000086, 0.002277) m
[16:25:08]     inertia@origin: ixx=4.067529e-09 iyy=4.706050e-09 izz=4.335059e-09 kg·m²
[16:25:08]     inertia@com:    ixx=3.847198e-09 iyy=1.999240e-09 izz=1.847959e-09 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.10, 0.35, 0.14) [Opaque_26_89_36]
[16:25:08]     bbox: (0.0000 x 0.0250 x 0.0239) m
[16:25:08]   [LEAF] d=2 Dielectric
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1+Dielectric:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.003042 kg, bodies: 1
[16:25:08]     com_global: (0.064535, 0.006469, 0.360046) m
[16:25:08]     com_component_local: (-0.007284, 0.000000, 0.002372) m
[16:25:08]     inertia@origin: ixx=3.115419e-07 iyy=3.209943e-07 izz=3.136003e-07 kg·m²
[16:25:08]     inertia@com:    ixx=2.944240e-07 iyy=1.424640e-07 izz=1.521880e-07 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.99, 1.00, 0.84) [Opaque_253_255_215]
[16:25:08]     bbox: (0.0007 x 0.0250 x 0.0239) m
[16:25:08]   [LEAF] d=2 SOLDERMASK_BOTTOM
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1+SOLDERMASK_BOTTOM:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000051 kg, bodies: 1
[16:25:08]     com_global: (0.064907, 0.006515, 0.359652) m
[16:25:08]     com_component_local: (-0.006912, 0.000046, 0.001978) m
[16:25:08]     inertia@origin: ixx=4.830456e-09 iyy=5.026657e-09 izz=4.719449e-09 kg·m²
[16:25:08]     inertia@com:    ixx=4.629133e-09 iyy=2.367619e-09 izz=2.261515e-09 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.10, 0.35, 0.14) [Opaque_26_89_36]
[16:25:08]     bbox: (0.0000 x 0.0250 x 0.0239) m
[16:25:08]   [LEAF] d=2 PASTEMASK_BOTTOM
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1+PASTEMASK_BOTTOM:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 30
[16:25:08]     com_global: (0.071819, 0.006469, 0.357674) m
[16:25:08]     com_component_local: (0.000000, 0.000000, 0.000000) m
[16:25:08]     inertia@origin: ixx=1.088010e-23 iyy=5.265968e-17 izz=4.318312e-16 kg·m²
[16:25:08]     inertia@com:    ixx=1.088010e-23 iyy=5.265968e-17 izz=4.318312e-16 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.72, 0.45, 0.20) [Opaque_184_115_51]
[16:25:08]     bbox: (0.0000 x 0.0058 x 0.0033) m
[16:25:08]   [LEAF] d=2 SILKSCREEN_BOTTOM
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1+SILKSCREEN_BOTTOM:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000003 kg, bodies: 60
[16:25:08]     com_global: (0.064953, 0.007036, 0.358481) m
[16:25:08]     com_component_local: (-0.006866, 0.000567, 0.000807) m
[16:25:08]     inertia@origin: ixx=1.617961e-10 iyy=1.817379e-10 izz=2.176349e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.593558e-10 iyy=6.189285e-11 izz=9.861651e-11 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(1.00, 1.00, 1.00) [Opaque_255_255_255]
[16:25:08]     bbox: (0.0000 x 0.0148 x 0.0225) m
[16:25:08]   [SUBASM] d=1 Shapes
[16:25:08]     path: Camera_module_3_std_model_simple:1+Shapes:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]   [LEAF] d=2 AP3445
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+AP3445:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000047 kg, bodies: 1
[16:25:08]     com_global: (0.063393, -0.001533, 0.362262) m
[16:25:08]     com_component_local: (-0.008426, -0.008001, 0.004588) m
[16:25:08]     inertia@origin: ixx=4.022401e-09 iyy=4.323625e-09 izz=6.353264e-09 kg·m²
[16:25:08]     inertia@com:    ixx=4.311611e-11 iyy=1.822127e-11 izz=3.793119e-11 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.77, 0.77, 0.77) [Opaque_196_196_196]
[16:25:08]     bbox: (0.0014 x 0.0029 x 0.0028) m
[16:25:08]   [LEAF] d=2 ATMEL_ATSHA204A_8UDFN
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+ATMEL_ATSHA204A_8UDFN:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.002965 kg, bodies: 7
[16:25:08]     com_global: (0.068219, 0.006407, 0.358248) m
[16:25:08]     com_component_local: (-0.003600, -0.000062, 0.000574) m
[16:25:08]     inertia@origin: ixx=6.536883e-08 iyy=8.552317e-08 izz=6.991263e-08 kg·m²
[16:25:08]     inertia@com:    ixx=6.438171e-08 iyy=4.611214e-08 izz=3.146585e-08 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:08]     bbox: (0.0067 x 0.0111 x 0.0181) m
[16:25:08]   [LEAF] d=2 ATMEL_ATSHA204A_SOIC8
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+ATMEL_ATSHA204A_SOIC8:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000234 kg, bodies: 1
[16:25:08]     com_global: (0.063237, 0.005071, 0.364073) m
[16:25:08]     com_component_local: (-0.008583, -0.001398, 0.006398) m
[16:25:08]     inertia@origin: ixx=1.080034e-08 iyy=2.718244e-08 izz=1.818728e-08 kg·m²
[16:25:08]     inertia@com:    ixx=7.634678e-10 iyy=3.668620e-10 izz=4.941854e-10 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.77, 0.77, 0.77) [Opaque_196_196_196]
[16:25:08]     bbox: (0.0017 x 0.0049 x 0.0060) m
[16:25:08]   [LEAF] d=2 BOURNS_SRN2512
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+BOURNS_SRN2512:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000033 kg, bodies: 1
[16:25:08]     com_global: (0.063719, 0.000769, 0.365974) m
[16:25:08]     com_component_local: (-0.008100, -0.005700, 0.008300) m
[16:25:08]     inertia@origin: ixx=3.370735e-09 iyy=4.454381e-09 izz=3.246823e-09 kg·m²
[16:25:08]     inertia@com:    ixx=2.821586e-11 iyy=1.988960e-11 izz=1.244616e-11 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.67, 0.67, 0.67) [Opaque_172_172_172]
[16:25:08]     bbox: (0.0009 x 0.0020 x 0.0025) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.016569, 0.362674) m
[16:25:08]     com_component_local: (-0.007950, 0.010100, 0.005000) m
[16:25:08]     inertia@origin: ixx=2.376113e-10 iyy=1.650703e-10 izz=3.088979e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.011869, 0.364674) m
[16:25:08]     com_component_local: (-0.007950, 0.005400, 0.007000) m
[16:25:08]     inertia@origin: ixx=1.462984e-10 iyy=2.099324e-10 izz=1.727230e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.011869, 0.362574) m
[16:25:08]     com_component_local: (-0.007950, 0.005400, 0.004900) m
[16:25:08]     inertia@origin: ixx=9.958579e-11 iyy=1.632198e-10 izz=1.727230e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (3):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.011269, 0.367474) m
[16:25:08]     com_component_local: (-0.007950, 0.004800, 0.009800) m
[16:25:08]     inertia@origin: ixx=2.227881e-10 iyy=2.978619e-10 izz=1.612832e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (4):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.007569, 0.368174) m
[16:25:08]     com_component_local: (-0.007950, 0.001100, 0.010500) m
[16:25:08]     inertia@origin: ixx=2.085444e-10 iyy=3.243006e-10 izz=1.206008e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=7.429219e-14 izz=1.977099e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0010 x 0.0005) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_5
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (5):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.003969, 0.369574) m
[16:25:08]     com_component_local: (-0.007950, -0.002500, 0.011900) m
[16:25:08]     inertia@origin: ixx=2.765852e-10 iyy=3.829203e-10 izz=1.300219e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=7.429219e-14 izz=1.977099e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0010 x 0.0005) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_6
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (6):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.004869, 0.368174) m
[16:25:08]     com_component_local: (-0.007950, -0.001600, 0.010500) m
[16:25:08]     inertia@origin: ixx=2.110679e-10 iyy=3.243006e-10 izz=1.231243e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=7.429219e-14 izz=1.977099e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0010 x 0.0005) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_7
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (7):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.001469, 0.357174) m
[16:25:08]     com_component_local: (-0.007950, -0.005000, -0.000500) m
[16:25:08]     inertia@origin: ixx=4.739630e-11 iyy=1.188064e-10 izz=1.649469e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_8
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (8):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.001869, 0.361674) m
[16:25:08]     com_component_local: (-0.007950, -0.004600, 0.004000) m
[16:25:08]     inertia@origin: ixx=6.965908e-11 iyy=1.482471e-10 izz=1.577690e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_9
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (9):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.016569, 0.364574) m
[16:25:08]     com_component_local: (-0.007950, 0.010100, 0.006900) m
[16:25:08]     inertia@origin: ixx=2.798751e-10 iyy=2.073341e-10 izz=3.088979e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_10
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (10):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.001769, 0.370574) m
[16:25:08]     com_component_local: (-0.007950, -0.004700, 0.012900) m
[16:25:08]     inertia@origin: ixx=3.525515e-10 iyy=4.292777e-10 izz=1.596308e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=7.429219e-14 izz=1.977099e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0010 x 0.0005) m
[16:25:08]   [LEAF] d=2 CAPC1005X55N_11
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (11):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.002269, 0.368374) m
[16:25:08]     com_component_local: (-0.007950, -0.004200, 0.010700) m
[16:25:08]     inertia@origin: ixx=2.471819e-10 iyy=3.322262e-10 izz=1.513126e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=7.429219e-14 izz=1.977099e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0010 x 0.0005) m
[16:25:08]   [LEAF] d=2 CAPC1608
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1608:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000008 kg, bodies: 1
[16:25:08]     com_global: (0.063919, 0.000669, 0.361874) m
[16:25:08]     com_component_local: (-0.007900, -0.005800, 0.004200) m
[16:25:08]     inertia@origin: ixx=4.027860e-10 iyy=6.275834e-10 izz=7.513075e-10 kg·m²
[16:25:08]     inertia@com:    ixx=2.104222e-12 iyy=2.104222e-12 izz=8.106036e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0008 x 0.0008 x 0.0016) m
[16:25:08]   [LEAF] d=2 CAPC1608X90N
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1608X90N:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000004 kg, bodies: 4
[16:25:08]     com_global: (0.063908, 0.003469, 0.356674) m
[16:25:08]     com_component_local: (-0.007911, -0.003000, -0.001000) m
[16:25:08]     inertia@origin: ixx=4.294285e-11 iyy=2.660431e-10 izz=3.001854e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.149448e-12 iyy=2.826788e-13 izz=9.902866e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0016 x 0.0008) m
[16:25:08]   [LEAF] d=2 CAPC1608X90N_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC1608X90N (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000004 kg, bodies: 4
[16:25:08]     com_global: (0.063908, -0.000531, 0.357174) m
[16:25:08]     com_component_local: (-0.007911, -0.007000, -0.000500) m
[16:25:08]     inertia@origin: ixx=2.069819e-10 iyy=2.636162e-10 izz=4.666514e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.149448e-12 iyy=9.902866e-13 izz=2.826788e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0008 x 0.0016) m
[16:25:08]   [LEAF] d=2 CAPC2012
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+CAPC2012:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000011 kg, bodies: 1
[16:25:08]     com_global: (0.063869, -0.001531, 0.366174) m
[16:25:08]     com_component_local: (-0.007950, -0.008000, 0.008500) m
[16:25:08]     inertia@origin: ixx=1.570309e-09 iyy=1.560011e-09 izz=1.462826e-09 kg·m²
[16:25:08]     inertia@com:    ixx=5.371556e-12 iyy=4.232905e-12 izz=1.805593e-12 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0006 x 0.0013 x 0.0020) m
[16:25:08]   [LEAF] d=2 FCI_SFW15R_1STE1LF
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+FCI_SFW15R-1STE1LF:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.001732 kg, bodies: 1
[16:25:08]     com_global: (0.062778, 0.006484, 0.351459) m
[16:25:08]     com_component_local: (-0.009041, 0.000015, -0.006215) m
[16:25:08]     inertia@origin: ixx=1.353711e-07 iyy=2.138823e-07 izz=2.065553e-07 kg·m²
[16:25:08]     inertia@com:    ixx=6.847432e-08 iyy=5.422385e-09 izz=6.499137e-08 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:08]     bbox: (0.0026 x 0.0229 x 0.0065) m
[16:25:08]   [LEAF] d=2 HIROSE_DF37NC_30DS_04V
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+HIROSE_DF37NC-30DS-04V:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000095 kg, bodies: 1
[16:25:08]     com_global: (0.065327, 0.005169, 0.368333) m
[16:25:08]     com_component_local: (-0.006493, -0.001300, 0.010659) m
[16:25:08]     inertia@origin: ixx=1.158359e-08 iyy=1.488189e-08 izz=4.738459e-09 kg·m²
[16:25:08]     inertia@com:    ixx=6.083802e-10 iyy=5.502365e-11 izz=5.650597e-10 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.42, 0.42, 0.42) [Opaque_106_106_106]
[16:25:08]     bbox: (0.0010 x 0.0082 x 0.0030) m
[16:25:08]   [LEAF] d=2 MURATA_DLP11SNXXXHL2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+MURATA_DLP11SNXXXHL2:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000008 kg, bodies: 1
[16:25:08]     com_global: (0.063763, 0.011899, 0.356549) m
[16:25:08]     com_component_local: (-0.008057, 0.005430, -0.001125) m
[16:25:08]     inertia@origin: ixx=2.555287e-10 iyy=5.475758e-10 izz=7.799551e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.815975e-12 iyy=1.598662e-12 izz=1.149197e-12 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.79, 0.82, 0.93) [Opaque_202_209_238]
[16:25:08]     bbox: (0.0008 x 0.0010 x 0.0013) m
[16:25:08]   [LEAF] d=2 MURATA_DLP11SNXXXHL2_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+MURATA_DLP11SNXXXHL2 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000008 kg, bodies: 1
[16:25:08]     com_global: (0.063763, 0.008899, 0.356549) m
[16:25:08]     com_component_local: (-0.008057, 0.002430, -0.001125) m
[16:25:08]     inertia@origin: ixx=6.097732e-11 iyy=5.475758e-10 izz=5.854038e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.815975e-12 iyy=1.598662e-12 izz=1.149197e-12 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.79, 0.82, 0.93) [Opaque_202_209_238]
[16:25:08]     bbox: (0.0008 x 0.0010 x 0.0013) m
[16:25:08]   [LEAF] d=2 MURATA_DLP11SNXXXHL2_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+MURATA_DLP11SNXXXHL2 (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000008 kg, bodies: 1
[16:25:08]     com_global: (0.063763, 0.005899, 0.356549) m
[16:25:08]     com_component_local: (-0.008057, -0.000570, -0.001125) m
[16:25:08]     inertia@origin: ixx=1.493860e-11 iyy=5.475758e-10 izz=5.393651e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.815975e-12 iyy=1.598662e-12 izz=1.149197e-12 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.79, 0.82, 0.93) [Opaque_202_209_238]
[16:25:08]     bbox: (0.0008 x 0.0010 x 0.0013) m
[16:25:08]   [LEAF] d=2 OSC_2P5X2MM
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+OSC_2P5X2MM:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000057 kg, bodies: 1
[16:25:08]     com_global: (0.063721, 0.013069, 0.367824) m
[16:25:08]     com_component_local: (-0.008098, 0.006600, 0.010150) m
[16:25:08]     inertia@origin: ixx=8.395841e-09 iyy=9.619709e-09 izz=6.226605e-09 kg·m²
[16:25:08]     inertia@com:    ixx=7.812709e-11 iyy=5.237402e-11 izz=3.347556e-11 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.79, 0.82, 0.93) [Opaque_202_209_238]
[16:25:08]     bbox: (0.0009 x 0.0025 x 0.0032) m
[16:25:08]   [LEAF] d=2 RESC0603
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+RESC0603:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 2
[16:25:08]     com_global: (0.064088, -0.003331, 0.364074) m
[16:25:08]     com_component_local: (-0.007731, -0.009800, 0.006400) m
[16:25:08]     inertia@origin: ixx=2.626006e-11 iyy=1.930859e-11 izz=2.985856e-11 kg·m²
[16:25:08]     inertia@com:    ixx=7.497659e-15 iyy=6.380777e-15 izz=1.726152e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(1.00, 1.00, 1.00) [Opaque_255_255_255]
[16:25:08]     bbox: (0.0001 x 0.0003 x 0.0006) m
[16:25:08]   [LEAF] d=2 RESC0603_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+RESC0603 (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000000 kg, bodies: 2
[16:25:08]     com_global: (0.064088, -0.003731, 0.363174) m
[16:25:08]     com_component_local: (-0.007731, -0.010200, 0.005500) m
[16:25:08]     inertia@origin: ixx=2.574065e-11 iyy=1.725160e-11 izz=3.139613e-11 kg·m²
[16:25:08]     inertia@com:    ixx=7.497659e-15 iyy=1.726152e-15 izz=6.380777e-15 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(1.00, 1.00, 1.00) [Opaque_255_255_255]
[16:25:08]     bbox: (0.0001 x 0.0006 x 0.0003) m
[16:25:08]   [LEAF] d=2 RESC1005X40N
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.010169, 0.367474) m
[16:25:08]     com_component_local: (-0.007950, 0.003700, 0.009800) m
[16:25:08]     inertia@origin: ixx=2.053106e-10 iyy=2.978619e-10 izz=1.438057e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 RESC1005X40N_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.013269, 0.370074) m
[16:25:08]     com_component_local: (-0.007950, 0.006800, 0.012400) m
[16:25:08]     inertia@origin: ixx=3.740479e-10 iyy=4.056317e-10 izz=2.047732e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=7.429219e-14 izz=1.977099e-13 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0010 x 0.0005) m
[16:25:08]   [LEAF] d=2 RESC1005X40N_2
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (2):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.007269, 0.370074) m
[16:25:08]     com_component_local: (-0.007950, 0.000800, 0.012400) m
[16:25:08]     inertia@origin: ixx=2.888101e-10 iyy=4.057551e-10 izz=1.194120e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 RESC1005X40N_3
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (3):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.011269, 0.369974) m
[16:25:08]     com_component_local: (-0.007950, 0.004800, 0.012300) m
[16:25:08]     inertia@origin: ixx=3.260643e-10 iyy=4.011381e-10 izz=1.612832e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 RESC1005X40N_4
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (4):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000002 kg, bodies: 1
[16:25:08]     com_global: (0.063869, 0.000369, 0.369074) m
[16:25:08]     com_component_local: (-0.007950, -0.006100, 0.011400) m
[16:25:08]     inertia@origin: ixx=3.126804e-10 iyy=3.612669e-10 izz=1.877705e-10 kg·m²
[16:25:08]     inertia@com:    ixx=1.977099e-13 iyy=1.977099e-13 izz=7.429219e-14 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.80, 0.82, 0.94) [Opaque_203_210_239]
[16:25:08]     bbox: (0.0005 x 0.0005 x 0.0010) m
[16:25:08]   [LEAF] d=2 SOT50P160X60_6N
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+SOT50P160X60-6N:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000010 kg, bodies: 7
[16:25:08]     com_global: (0.063911, 0.009069, 0.369974) m
[16:25:08]     com_component_local: (-0.007908, 0.002600, 0.012300) m
[16:25:08]     inertia@origin: ixx=1.513335e-09 iyy=2.045512e-09 izz=6.636181e-10 kg·m²
[16:25:08]     inertia@com:    ixx=2.990232e-12 iyy=2.145177e-12 izz=1.398118e-12 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.20, 0.20, 0.20) [Opaque_51_51_51]
[16:25:08]     bbox: (0.0006 x 0.0016 x 0.0016) m
[16:25:08]   [LEAF] d=2 SOT95P280X145_5N
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+SOT95P280X145-5N:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000047 kg, bodies: 1
[16:25:08]     com_global: (0.063393, 0.009767, 0.363662) m
[16:25:08]     com_component_local: (-0.008426, 0.003299, 0.005988) m
[16:25:08]     inertia@origin: ixx=2.229283e-09 iyy=5.016205e-09 izz=3.867566e-09 kg·m²
[16:25:08]     inertia@com:    ixx=4.311611e-11 iyy=1.822127e-11 izz=3.793119e-11 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.77, 0.77, 0.77) [Opaque_196_196_196]
[16:25:08]     bbox: (0.0014 x 0.0029 x 0.0028) m
[16:25:08]   [LEAF] d=2 SOT95P280X145_5N_1
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1+SOT95P280X145-5N (1):1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]     mass: 0.000047 kg, bodies: 1
[16:25:08]     com_global: (0.063393, 0.014467, 0.363662) m
[16:25:08]     com_component_local: (-0.008426, 0.007999, 0.005988) m
[16:25:08]     inertia@origin: ixx=4.712776e-09 iyy=5.016205e-09 izz=6.351059e-09 kg·m²
[16:25:08]     inertia@com:    ixx=4.311611e-11 iyy=1.822127e-11 izz=3.793119e-11 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.77, 0.77, 0.77) [Opaque_196_196_196]
[16:25:08]     bbox: (0.0014 x 0.0029 x 0.0028) m
[16:25:08]   [SUBASM] d=1 Symbols
[16:25:08]     path: Camera_module_3_std_model_simple:1+Symbols:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]   [SUBASM] d=0 Camera_module_3_std_model_simple
[16:25:08]     path: Camera_module_3_std_model_simple:1
[16:25:08]     global_pos: (0.071819, 0.006469, 0.357674) m
[16:25:08]   [LEAF] d=1 Wheel_Chassis_Left
[16:25:08]     path: base_link:1+Wheel Chassis Left:1
[16:25:08]     global_pos: (-0.009181, 0.061719, 0.292982) m
[16:25:08]     mass: 0.626388 kg, bodies: 1
[16:25:08]     com_global: (-0.017079, 0.103700, 0.281909) m
[16:25:08]     com_component_local: (-0.007898, 0.041982, -0.011073) m
[16:25:08]     inertia@origin: ixx=7.195304e-03 iyy=5.091069e-04 izz=7.125215e-03 kg·m²
[16:25:08]     inertia@com:    ixx=6.014521e-03 iyy=3.932327e-04 izz=5.982162e-03 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.10, 0.10, 0.10) [Plastic_Matte_Black]
[16:25:08]     bbox: (0.0821 x 0.2625 x 0.0620) m
[16:25:08]   [LEAF] d=1 Frame
[16:25:08]     path: base_link:1+Frame:1
[16:25:08]     global_pos: (0.032819, 0.006719, 0.300982) m
[16:25:08]     mass: 0.584600 kg, bodies: 1
[16:25:08]     com_global: (0.033408, 0.006719, 0.299161) m
[16:25:08]     com_component_local: (0.000589, 0.000000, -0.001821) m
[16:25:08]     inertia@origin: ixx=1.890673e-03 iyy=2.155828e-03 izz=4.038309e-03 kg·m²
[16:25:08]     inertia@com:    ixx=1.888734e-03 iyy=2.153687e-03 izz=4.038106e-03 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.19, 0.23, 0.59) [Paint_Enamel_Glossy_Blue]
[16:25:08]     bbox: (0.2232 x 0.2218 x 0.0220) m
[16:25:08]   [LEAF] d=1 Sensor_Array
[16:25:08]     path: base_link:1+Sensor Array:1
[16:25:08]     global_pos: (0.004719, 0.034569, 0.353982) m
[16:25:08]     mass: 0.267745 kg, bodies: 1
[16:25:08]     com_global: (0.032569, 0.071161, 0.340301) m
[16:25:08]     com_component_local: (0.027850, 0.036593, -0.013681) m
[16:25:08]     inertia@origin: ixx=6.656987e-04 iyy=6.261374e-04 izz=9.555413e-04 kg·m²
[16:25:08]     inertia@com:    ixx=2.570667e-04 iyy=3.683518e-04 izz=3.893571e-04 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:08]     bbox: (0.0950 x 0.1030 x 0.0660) m
[16:25:08]   [LEAF] d=1 Electronics_Hub
[16:25:08]     path: base_link:1+Electronics Hub:1
[16:25:08]     global_pos: (0.036150, 0.006719, 0.310982) m
[16:25:08]     mass: 0.398341 kg, bodies: 1
[16:25:08]     com_global: (0.033974, 0.006719, 0.306631) m
[16:25:08]     com_component_local: (-0.002175, 0.000000, -0.004351) m
[16:25:08]     inertia@origin: ixx=3.487773e-04 iyy=7.352284e-04 izz=1.061585e-03 kg·m²
[16:25:08]     inertia@com:    ixx=3.412355e-04 iyy=7.258017e-04 izz=1.059700e-03 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.63, 0.63, 0.63) [Steel_Satin]
[16:25:08]     bbox: (0.1205 x 0.1100 x 0.0100) m
[16:25:08]   [LEAF] d=1 Battery_Box
[16:25:08]     path: base_link:1+Battery Box:1
[16:25:08]     global_pos: (0.032819, 0.006776, 0.252632) m
[16:25:08]     mass: 0.301870 kg, bodies: 1
[16:25:08]     com_global: (0.035858, 0.006776, 0.260301) m
[16:25:08]     com_component_local: (0.003039, -0.000000, 0.007669) m
[16:25:08]     inertia@origin: ixx=3.319281e-04 iyy=4.654657e-04 izz=6.710838e-04 kg·m²
[16:25:08]     inertia@com:    ixx=3.141736e-04 iyy=4.449239e-04 izz=6.682966e-04 kg·m²
[16:25:08]     material: Steel
[16:25:08]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:08]     bbox: (0.1250 x 0.0817 x 0.0424) m
[16:25:09]   [LEAF] d=1 Wheel_Chassis_Right
[16:25:09]     path: base_link:1+Wheel Chassis Right:1
[16:25:09]     global_pos: (-0.009181, 0.004004, 0.292982) m
[16:25:09]     mass: 0.626388 kg, bodies: 1
[16:25:09]     com_global: (0.051002, 0.045986, 0.281909) m
[16:25:09]     com_component_local: (0.060183, 0.041982, -0.011073) m
[16:25:09]     inertia@origin: ixx=7.195304e-03 iyy=2.738811e-03 izz=9.354919e-03 kg·m²
[16:25:09]     inertia@com:    ixx=6.014521e-03 iyy=3.932327e-04 izz=5.982162e-03 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.10, 0.10, 0.10) [Plastic_Matte_Black]
[16:25:09]     bbox: (0.0821 x 0.2625 x 0.0620) m
[16:25:09]   [LEAF] d=2 Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm
[16:25:09]     path: base_link:1+Suspension Subassembly:1+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     global_pos: (-0.078425, -0.126288, 0.210507) m
[16:25:09]     mass: 0.200297 kg, bodies: 1
[16:25:09]     com_global: (-0.052229, -0.126288, 0.210461) m
[16:25:09]     com_component_local: (0.026196, 0.000000, -0.000046) m
[16:25:09]     inertia@origin: ixx=1.457246e-05 iyy=1.952025e-04 izz=1.950994e-04 kg·m²
[16:25:09]     inertia@com:    ixx=1.457203e-05 iyy=5.775176e-05 izz=5.764901e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.70, 0.70, 0.70) [Plastic_Matte_Gray]
[16:25:09]     bbox: (0.0710 x 0.0250 x 0.0263) m
[16:25:09]   [LEAF] d=2 Motor_Suspension_Face_Plate
[16:25:09]     path: base_link:1+Suspension Subassembly:1+Motor Suspension Face Plate:1
[16:25:09]     global_pos: (-0.078425, -0.129288, 0.210507) m
[16:25:09]     mass: 0.093667 kg, bodies: 1
[16:25:09]     com_global: (-0.078425, -0.124880, 0.210507) m
[16:25:09]     com_component_local: (0.000000, 0.004408, -0.000000) m
[16:25:09]     inertia@origin: ixx=2.765715e-05 iyy=3.804753e-05 izz=1.588476e-05 kg·m²
[16:25:09]     inertia@com:    ixx=2.583738e-05 iyy=3.804753e-05 izz=1.406500e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.0400 x 0.0120 x 0.0520) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Lower
[16:25:09]     path: base_link:1+Suspension Subassembly:1+Suspension Arm Lower:1
[16:25:09]     global_pos: (-0.101925, -0.043419, 0.240328) m
[16:25:09]     mass: 0.106842 kg, bodies: 2
[16:25:09]     com_global: (-0.051925, -0.020419, 0.245328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=9.858670e-05 iyy=3.310657e-04 izz=4.224298e-04 kg·m²
[16:25:09]     inertia@com:    ixx=3.939615e-05 iyy=6.128913e-05 izz=9.880480e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Upper
[16:25:09]     path: base_link:1+Suspension Subassembly:1+Suspension Arm Upper:1
[16:25:09]     global_pos: (-0.101925, -0.043419, 0.280328) m
[16:25:09]     mass: 0.165276 kg, bodies: 1
[16:25:09]     com_global: (-0.051925, -0.020419, 0.285328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=1.368319e-04 iyy=5.317647e-04 izz=6.575658e-04 kg·m²
[16:25:09]     inertia@com:    ixx=4.526886e-05 iyy=1.144424e-04 izz=1.569443e-04 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [SUBASM] d=1 Suspension_Subassembly
[16:25:09]     path: base_link:1+Suspension Subassembly:1
[16:25:09]     global_pos: (-0.078425, -0.129288, 0.210507) m
[16:25:09]   [LEAF] d=2 Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm
[16:25:09]     path: base_link:1+Suspension Subassembly:2+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     global_pos: (0.144063, -0.126288, 0.210507) m
[16:25:09]     mass: 0.200297 kg, bodies: 1
[16:25:09]     com_global: (0.170260, -0.126288, 0.210461) m
[16:25:09]     com_component_local: (0.026196, 0.000000, -0.000046) m
[16:25:09]     inertia@origin: ixx=1.457246e-05 iyy=1.952025e-04 izz=1.950994e-04 kg·m²
[16:25:09]     inertia@com:    ixx=1.457203e-05 iyy=5.775176e-05 izz=5.764901e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.70, 0.70, 0.70) [Plastic_Matte_Gray]
[16:25:09]     bbox: (0.0710 x 0.0250 x 0.0263) m
[16:25:09]   [LEAF] d=2 Motor_Suspension_Face_Plate
[16:25:09]     path: base_link:1+Suspension Subassembly:2+Motor Suspension Face Plate:1
[16:25:09]     global_pos: (0.144063, -0.129288, 0.210507) m
[16:25:09]     mass: 0.093667 kg, bodies: 1
[16:25:09]     com_global: (0.144063, -0.124880, 0.210507) m
[16:25:09]     com_component_local: (0.000000, 0.004408, -0.000000) m
[16:25:09]     inertia@origin: ixx=2.765715e-05 iyy=3.804753e-05 izz=1.588476e-05 kg·m²
[16:25:09]     inertia@com:    ixx=2.583738e-05 iyy=3.804753e-05 izz=1.406500e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.0400 x 0.0120 x 0.0520) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Lower
[16:25:09]     path: base_link:1+Suspension Subassembly:2+Suspension Arm Lower:1
[16:25:09]     global_pos: (0.120563, -0.043419, 0.240328) m
[16:25:09]     mass: 0.106842 kg, bodies: 2
[16:25:09]     com_global: (0.170563, -0.020419, 0.245328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=9.858670e-05 iyy=3.310657e-04 izz=4.224298e-04 kg·m²
[16:25:09]     inertia@com:    ixx=3.939615e-05 iyy=6.128913e-05 izz=9.880480e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Upper
[16:25:09]     path: base_link:1+Suspension Subassembly:2+Suspension Arm Upper:1
[16:25:09]     global_pos: (0.120563, -0.043419, 0.280328) m
[16:25:09]     mass: 0.165276 kg, bodies: 1
[16:25:09]     com_global: (0.170563, -0.020419, 0.285328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=1.368319e-04 iyy=5.317647e-04 izz=6.575658e-04 kg·m²
[16:25:09]     inertia@com:    ixx=4.526886e-05 iyy=1.144424e-04 izz=1.569443e-04 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [SUBASM] d=1 Suspension_Subassembly
[16:25:09]     path: base_link:1+Suspension Subassembly:2
[16:25:09]     global_pos: (0.144063, -0.129288, 0.210507) m
[16:25:09]   [LEAF] d=2 Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm
[16:25:09]     path: base_link:1+Suspension Subassembly:3+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     global_pos: (-0.079425, 0.139725, 0.210507) m
[16:25:09]     mass: 0.200297 kg, bodies: 1
[16:25:09]     com_global: (-0.053229, 0.139725, 0.210461) m
[16:25:09]     com_component_local: (0.026196, 0.000000, -0.000046) m
[16:25:09]     inertia@origin: ixx=1.457246e-05 iyy=1.952025e-04 izz=1.950994e-04 kg·m²
[16:25:09]     inertia@com:    ixx=1.457203e-05 iyy=5.775176e-05 izz=5.764901e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.70, 0.70, 0.70) [Plastic_Matte_Gray]
[16:25:09]     bbox: (0.0710 x 0.0250 x 0.0263) m
[16:25:09]   [LEAF] d=2 Motor_Suspension_Face_Plate
[16:25:09]     path: base_link:1+Suspension Subassembly:3+Motor Suspension Face Plate:1
[16:25:09]     global_pos: (-0.079425, 0.142725, 0.210507) m
[16:25:09]     mass: 0.093667 kg, bodies: 1
[16:25:09]     com_global: (-0.079425, 0.147133, 0.210507) m
[16:25:09]     com_component_local: (0.000000, 0.004408, -0.000000) m
[16:25:09]     inertia@origin: ixx=2.765715e-05 iyy=3.804753e-05 izz=1.588476e-05 kg·m²
[16:25:09]     inertia@com:    ixx=2.583738e-05 iyy=3.804753e-05 izz=1.406500e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.0400 x 0.0120 x 0.0520) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Lower
[16:25:09]     path: base_link:1+Suspension Subassembly:3+Suspension Arm Lower:1
[16:25:09]     global_pos: (-0.055925, 0.056857, 0.240328) m
[16:25:09]     mass: 0.106842 kg, bodies: 2
[16:25:09]     com_global: (-0.005925, 0.079857, 0.245328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=9.858670e-05 iyy=3.310657e-04 izz=4.224298e-04 kg·m²
[16:25:09]     inertia@com:    ixx=3.939615e-05 iyy=6.128913e-05 izz=9.880480e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Upper
[16:25:09]     path: base_link:1+Suspension Subassembly:3+Suspension Arm Upper:1
[16:25:09]     global_pos: (-0.055925, 0.056857, 0.280328) m
[16:25:09]     mass: 0.165276 kg, bodies: 1
[16:25:09]     com_global: (-0.005925, 0.079857, 0.285328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=1.368319e-04 iyy=5.317647e-04 izz=6.575658e-04 kg·m²
[16:25:09]     inertia@com:    ixx=4.526886e-05 iyy=1.144424e-04 izz=1.569443e-04 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [SUBASM] d=1 Suspension_Subassembly
[16:25:09]     path: base_link:1+Suspension Subassembly:3
[16:25:09]     global_pos: (-0.079425, 0.142725, 0.210507) m
[16:25:09]   [LEAF] d=2 Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm
[16:25:09]     path: base_link:1+Suspension Subassembly:4+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     global_pos: (0.143063, 0.139725, 0.210507) m
[16:25:09]     mass: 0.200297 kg, bodies: 1
[16:25:09]     com_global: (0.169260, 0.139725, 0.210461) m
[16:25:09]     com_component_local: (0.026196, 0.000000, -0.000046) m
[16:25:09]     inertia@origin: ixx=1.457246e-05 iyy=1.952025e-04 izz=1.950994e-04 kg·m²
[16:25:09]     inertia@com:    ixx=1.457203e-05 iyy=5.775176e-05 izz=5.764901e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.70, 0.70, 0.70) [Plastic_Matte_Gray]
[16:25:09]     bbox: (0.0710 x 0.0250 x 0.0263) m
[16:25:09]   [LEAF] d=2 Motor_Suspension_Face_Plate
[16:25:09]     path: base_link:1+Suspension Subassembly:4+Motor Suspension Face Plate:1
[16:25:09]     global_pos: (0.143063, 0.142725, 0.210507) m
[16:25:09]     mass: 0.093667 kg, bodies: 1
[16:25:09]     com_global: (0.143063, 0.147133, 0.210507) m
[16:25:09]     com_component_local: (0.000000, 0.004408, -0.000000) m
[16:25:09]     inertia@origin: ixx=2.765715e-05 iyy=3.804753e-05 izz=1.588476e-05 kg·m²
[16:25:09]     inertia@com:    ixx=2.583738e-05 iyy=3.804753e-05 izz=1.406500e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.0400 x 0.0120 x 0.0520) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Lower
[16:25:09]     path: base_link:1+Suspension Subassembly:4+Suspension Arm Lower:1
[16:25:09]     global_pos: (0.166563, 0.056857, 0.240328) m
[16:25:09]     mass: 0.106842 kg, bodies: 2
[16:25:09]     com_global: (0.216563, 0.079857, 0.245328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=9.858670e-05 iyy=3.310657e-04 izz=4.224298e-04 kg·m²
[16:25:09]     inertia@com:    ixx=3.939615e-05 iyy=6.128913e-05 izz=9.880480e-05 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [LEAF] d=2 Suspension_Arm_Upper
[16:25:09]     path: base_link:1+Suspension Subassembly:4+Suspension Arm Upper:1
[16:25:09]     global_pos: (0.166563, 0.056857, 0.280328) m
[16:25:09]     mass: 0.165276 kg, bodies: 1
[16:25:09]     com_global: (0.216563, 0.079857, 0.285328) m
[16:25:09]     com_component_local: (0.050000, 0.023000, 0.005000) m
[16:25:09]     inertia@origin: ixx=1.368319e-04 iyy=5.317647e-04 izz=6.575658e-04 kg·m²
[16:25:09]     inertia@com:    ixx=4.526886e-05 iyy=1.144424e-04 izz=1.569443e-04 kg·m²
[16:25:09]     material: Steel
[16:25:09]     color: RGB(0.19, 0.23, 0.59) [Plastic_Translucent_Matte_Blue]
[16:25:09]     bbox: (0.1000 x 0.0460 x 0.0100) m
[16:25:09]   [SUBASM] d=1 Suspension_Subassembly
[16:25:09]     path: base_link:1+Suspension Subassembly:4
[16:25:09]     global_pos: (0.143063, 0.142725, 0.210507) m
[16:25:09]   [SUBASM] d=0 base_link
[16:25:09]     path: base_link:1
[16:25:09]     global_pos: (0.000000, 0.000000, 0.180000) m
[16:25:09]   Extracted 242 occurrences
[16:25:09] 
=== EXTRACTION: JOINTS ===
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginOne: 'AsBuiltJoint' object has no attribute 'geometryOrOriginOne'
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginTwo: 'AsBuiltJoint' object has no attribute 'geometryOrOriginTwo'
[16:25:09]   [AS_BUILT in Land_V2_Assembly] Rigid_32
[16:25:09]     parent(occ2): Sensor_Array path=base_link:1+Sensor Array:1
[16:25:09]     child(occ1):  lidar_link path=lidar_link:1
[16:25:09]     occ1.transform: (3.2619, 0.6769, 38.7082) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (3.2619, 0.6769, 38.7082) cm
[16:25:09]     occ2.transform: (0.4719, 3.4569, 17.3982) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (0.4719, 3.4569, 35.3982) cm
[16:25:09]  -> origin_global: (0.032619, 0.006769, 0.387082) m [via occ_one_transform2]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginOne: 'AsBuiltJoint' object has no attribute 'geometryOrOriginOne'
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginTwo: 'AsBuiltJoint' object has no attribute 'geometryOrOriginTwo'
[16:25:09]   [AS_BUILT in Land_V2_Assembly] Rigid_33
[16:25:09]     parent(occ2): Sensor_Array path=base_link:1+Sensor Array:1
[16:25:09]     child(occ1):  lidar_link path=lidar_link:1
[16:25:09]     occ1.transform: (3.2619, 0.6769, 38.7082) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (3.2619, 0.6769, 38.7082) cm
[16:25:09]     occ2.transform: (0.4719, 3.4569, 17.3982) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (0.4719, 3.4569, 35.3982) cm
[16:25:09]  -> origin_global: (0.032619, 0.006769, 0.387082) m [via occ_one_transform2]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginOne: 'AsBuiltJoint' object has no attribute 'geometryOrOriginOne'
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginTwo: 'AsBuiltJoint' object has no attribute 'geometryOrOriginTwo'
[16:25:09]   [AS_BUILT in Land_V2_Assembly] Rigid_37
[16:25:09]     parent(occ2): Sensor_Array path=base_link:1+Sensor Array:1
[16:25:09]     child(occ1):  imu_link path=imu_link:1
[16:25:09]     occ1.transform: (7.3919, 0.6519, 31.5522) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (7.3919, 0.6519, 31.5522) cm
[16:25:09]     occ2.transform: (0.4719, 3.4569, 17.3982) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (0.4719, 3.4569, 35.3982) cm
[16:25:09]  -> origin_global: (0.073919, 0.006519, 0.315522) m [via occ_one_transform2]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginOne: 'AsBuiltJoint' object has no attribute 'geometryOrOriginOne'
[16:25:09]   WARNING:   as_built joint in component 'Land_V2_Assembly': failed to read geometryOrOriginTwo: 'AsBuiltJoint' object has no attribute 'geometryOrOriginTwo'
[16:25:09]   [AS_BUILT in Land_V2_Assembly] Rigid_41
[16:25:09]     parent(occ2): Sensor_Array path=base_link:1+Sensor Array:1
[16:25:09]     child(occ1):  SOLDERMASK_BOTTOM path=Camera_module_3_std_model_simple:1+Shapes:1+SOLDERMASK_BOTTOM:1
[16:25:09]     occ1.transform: (-0.0000, -0.0000, 0.0000) cm (ctx_depth=2)
[16:25:09]     occ1.global:    (7.1819, 0.6469, 35.7674) cm
[16:25:09]     occ2.transform: (0.4719, 3.4569, 17.3982) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (0.4719, 3.4569, 35.3982) cm
[16:25:09]  -> origin_global: (0.071819, 0.006469, 0.357674) m [via occ_one_transform2]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]   WARNING:   regular joint in component 'Land_V2_Assembly': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in Land_V2_Assembly] Revolute_34
[16:25:09]     parent(occ2): Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm path=base_link:1+Suspension Subassembly:2+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     child(occ1):  Motor_Wheel_Coupler path=Mecanum Wheel Assembly:1+Motor-Wheel Coupler:1
[16:25:09]     geometryOrOriginOne: (14.4063, -13.2288, 21.0507) cm
[16:25:09]     geometryOrOriginTwo: (14.4063, -13.8288, 21.0507) cm
[16:25:09]     occ1.transform: (3.2400, -0.0000, -0.0000) cm (ctx_depth=1)
[16:25:09]     occ1.global:    (14.4063, -14.0288, 21.0507) cm
[16:25:09]     occ2.transform: (0.0000, 0.3000, 0.0000) cm (ctx_depth=2)
[16:25:09]     occ2.global:    (14.4063, -12.6288, 21.0507) cm
[16:25:09]  -> origin_global: (0.144063, -0.132288, 0.210507) m [via geometryOrOriginOne]
[16:25:09]     motion: revolute, axis: (-0.000, -1.000, 0.000)
[16:25:09]   WARNING:   regular joint in component 'Land_V2_Assembly': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in Land_V2_Assembly] Revolute_35
[16:25:09]     parent(occ2): Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm path=base_link:1+Suspension Subassembly:1+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     child(occ1):  Motor_Wheel_Coupler path=Mecanum Wheel Assembly:2+Motor-Wheel Coupler:1
[16:25:09]     geometryOrOriginOne: (-7.8425, -13.2288, 21.0507) cm
[16:25:09]     geometryOrOriginTwo: (-7.8425, -13.8288, 21.0507) cm
[16:25:09]     occ1.transform: (3.2400, 0.0000, 0.0000) cm (ctx_depth=1)
[16:25:09]     occ1.global:    (-7.8425, -14.0288, 21.0507) cm
[16:25:09]     occ2.transform: (0.0000, 0.3000, 0.0000) cm (ctx_depth=2)
[16:25:09]     occ2.global:    (-7.8425, -12.6288, 21.0507) cm
[16:25:09]  -> origin_global: (-0.078425, -0.132288, 0.210507) m [via geometryOrOriginOne]
[16:25:09]     motion: revolute, axis: (-0.000, -1.000, 0.000)
[16:25:09]   WARNING:   regular joint in component 'Land_V2_Assembly': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in Land_V2_Assembly] Revolute_39
[16:25:09]     parent(occ2): Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm path=base_link:1+Suspension Subassembly:3+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     child(occ1):  Motor_Wheel_Coupler path=Mecanum Wheel Assembly:4+Motor-Wheel Coupler:1
[16:25:09]     geometryOrOriginOne: (-7.9425, 14.5725, 21.0507) cm
[16:25:09]     geometryOrOriginTwo: (-7.9425, 15.1725, 21.0507) cm
[16:25:09]     occ1.transform: (3.2400, -0.0000, -0.0000) cm (ctx_depth=1)
[16:25:09]     occ1.global:    (-7.9425, 15.3725, 21.0507) cm
[16:25:09]     occ2.transform: (0.0000, 0.3000, 0.0000) cm (ctx_depth=2)
[16:25:09]     occ2.global:    (-7.9425, 13.9725, 21.0507) cm
[16:25:09]  -> origin_global: (-0.079425, 0.145725, 0.210507) m [via geometryOrOriginOne]
[16:25:09]     motion: revolute, axis: (0.000, 1.000, -0.000)
[16:25:09]   WARNING:   regular joint in component 'Land_V2_Assembly': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in Land_V2_Assembly] Revolute_40
[16:25:09]     parent(occ2): Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm path=base_link:1+Suspension Subassembly:4+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1
[16:25:09]     child(occ1):  Motor_Wheel_Coupler path=Mecanum Wheel Assembly:3+Motor-Wheel Coupler:1
[16:25:09]     geometryOrOriginOne: (14.3063, 14.5725, 21.0507) cm
[16:25:09]     geometryOrOriginTwo: (14.3063, 15.1725, 21.0507) cm
[16:25:09]     occ1.transform: (3.2400, 0.0000, 0.0000) cm (ctx_depth=1)
[16:25:09]     occ1.global:    (14.3063, 15.3725, 21.0507) cm
[16:25:09]     occ2.transform: (0.0000, 0.3000, 0.0000) cm (ctx_depth=2)
[16:25:09]     occ2.global:    (14.3063, 13.9725, 21.0507) cm
[16:25:09]  -> origin_global: (0.143063, 0.145725, 0.210507) m [via geometryOrOriginOne]
[16:25:09]     motion: revolute, axis: (0.000, 1.000, -0.000)
[16:25:09]  regular joint in component 'Suspension Subassembly': proxied joint into assembly context 'base_link:1+Suspension Subassembly:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'Suspension Subassembly': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in Suspension_Subassembly] Revolute_2
[16:25:09]     parent(occ2): Suspension_Arm_Lower path=Suspension Arm Lower:1
[16:25:09]     child(occ1):  Motor_Suspension_Face_Plate path=Motor Suspension Face Plate:1
[16:25:09]     geometryOrOriginOne: (-5.8425, -12.3288, 19.0507) cm
[16:25:09]     geometryOrOriginTwo: (-5.8425, -12.3288, 19.0507) cm
[16:25:09]     occ1.transform: (0.0000, 0.0000, 0.0000) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (0.0000, 0.0000, 0.0000) cm
[16:25:09]     occ2.transform: (-2.3500, 9.5734, -4.8439) cm (ctx_depth=0)
[16:25:09]     occ2.global:    (-2.3500, 9.5734, -4.8439) cm
[16:25:09]  -> origin_global: (-0.058425, -0.123288, 0.190507) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: revolute, axis: (1.000, 0.000, -0.000)
[16:25:09]  regular joint in component 'Suspension Subassembly': proxied joint into assembly context 'base_link:1+Suspension Subassembly:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'Suspension Subassembly': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in Suspension_Subassembly] Revolute_4
[16:25:09]     parent(occ2): Suspension_Arm_Upper path=Suspension Arm Upper:1
[16:25:09]     child(occ1):  Motor_Suspension_Face_Plate path=Motor Suspension Face Plate:1
[16:25:09]     geometryOrOriginOne: (-9.4175, -12.3288, 23.0507) cm
[16:25:09]     geometryOrOriginTwo: (-5.8425, -12.3288, 23.0507) cm
[16:25:09]     occ1.transform: (0.0000, 0.0000, 0.0000) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (0.0000, 0.0000, 0.0000) cm
[16:25:09]     occ2.transform: (-2.3500, 9.8325, 3.8363) cm (ctx_depth=0)
[16:25:09]     occ2.global:    (-2.3500, 9.8325, 3.8363) cm
[16:25:09]  -> origin_global: (-0.094175, -0.123288, 0.230507) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: revolute, axis: (1.000, 0.000, 0.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_11
[16:25:09]     parent(occ2): Wheel_Chassis_Right path=Wheel Chassis Right:1
[16:25:09]     child(occ1):  Suspension_Arm_Upper path=Suspension Subassembly:1+Suspension Arm Upper:1
[16:25:09]     geometryOrOriginOne: (-5.8425, -5.1202, 28.0982) cm
[16:25:09]     geometryOrOriginTwo: (-5.8425, -5.1202, 28.0982) cm
[16:25:09]     occ1.transform: (-2.3500, 8.5868, 6.9820) cm (ctx_depth=1)
[16:25:09]     occ1.global:    (-19.9768, -4.1693, 4.9737) cm
[16:25:09]     occ2.transform: (-10.7024, 0.5730, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ2.global:    (-10.7024, 0.5730, 6.2391) cm
[16:25:09]  -> origin_global: (-0.058425, -0.051202, 0.280982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_12
[16:25:09]     parent(occ2): Suspension_Arm_Lower path=Suspension Subassembly:1+Suspension Arm Lower:1
[16:25:09]     child(occ1):  Wheel_Chassis_Right path=Wheel Chassis Right:1
[16:25:09]     geometryOrOriginOne: (-5.8425, -5.1202, 24.0982) cm
[16:25:09]     geometryOrOriginTwo: (-5.8425, -5.1202, 24.0982) cm
[16:25:09]     occ1.transform: (-10.7024, 0.5730, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (-10.7024, 0.5730, 6.2391) cm
[16:25:09]     occ2.transform: (-2.3500, 8.5868, 2.9820) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (-19.9768, -4.1693, 0.9737) cm
[16:25:09]  -> origin_global: (-0.058425, -0.051202, 0.240982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_13
[16:25:09]     parent(occ2): Suspension_Arm_Upper path=Suspension Subassembly:2+Suspension Arm Upper:1
[16:25:09]     child(occ1):  Wheel_Chassis_Right path=Wheel Chassis Right:1
[16:25:09]     geometryOrOriginOne: (16.4063, -5.1202, 28.0982) cm
[16:25:09]     geometryOrOriginTwo: (16.4063, -5.1202, 28.0982) cm
[16:25:09]     occ1.transform: (-10.7024, 0.5730, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (-10.7024, 0.5730, 6.2391) cm
[16:25:09]     occ2.transform: (-2.3500, 8.5868, 6.9820) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (2.2720, -4.1693, 4.9737) cm
[16:25:09]  -> origin_global: (0.164063, -0.051202, 0.280982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_14
[16:25:09]     parent(occ2): Suspension_Arm_Lower path=Suspension Subassembly:2+Suspension Arm Lower:1
[16:25:09]     child(occ1):  Wheel_Chassis_Right path=Wheel Chassis Right:1
[16:25:09]     geometryOrOriginOne: (16.4063, -5.1202, 24.0982) cm
[16:25:09]     geometryOrOriginTwo: (16.4063, -5.1202, 24.0982) cm
[16:25:09]     occ1.transform: (-10.7024, 0.5730, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (-10.7024, 0.5730, 6.2391) cm
[16:25:09]     occ2.transform: (-2.3500, 8.5868, 2.9820) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (2.2720, -4.1693, 0.9737) cm
[16:25:09]  -> origin_global: (0.164063, -0.051202, 0.240982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_15
[16:25:09]     parent(occ2): Wheel_Chassis_Left path=Wheel Chassis Left:1
[16:25:09]     child(occ1):  Suspension_Arm_Upper path=Suspension Subassembly:4+Suspension Arm Upper:1
[16:25:09]     geometryOrOriginOne: (16.4063, 6.4640, 28.0982) cm
[16:25:09]     geometryOrOriginTwo: (16.4063, 6.4640, 28.0982) cm
[16:25:09]     occ1.transform: (-2.3500, 8.5868, 6.9820) cm (ctx_depth=1)
[16:25:09]     occ1.global:    (6.8720, 5.8583, 4.9737) cm
[16:25:09]     occ2.transform: (-10.7024, 6.3445, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ2.global:    (-10.7024, 6.3445, 6.2391) cm
[16:25:09]  -> origin_global: (0.164063, 0.064640, 0.280982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_16
[16:25:09]     parent(occ2): Suspension_Arm_Lower path=Suspension Subassembly:4+Suspension Arm Lower:1
[16:25:09]     child(occ1):  Wheel_Chassis_Left path=Wheel Chassis Left:1
[16:25:09]     geometryOrOriginOne: (16.4063, 6.4640, 24.0982) cm
[16:25:09]     geometryOrOriginTwo: (16.4063, 6.4640, 24.0982) cm
[16:25:09]     occ1.transform: (-10.7024, 6.3445, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (-10.7024, 6.3445, 6.2391) cm
[16:25:09]     occ2.transform: (-2.3500, 8.5868, 2.9820) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (6.8720, 5.8583, 0.9737) cm
[16:25:09]  -> origin_global: (0.164063, 0.064640, 0.240982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_17
[16:25:09]     parent(occ2): Wheel_Chassis_Left path=Wheel Chassis Left:1
[16:25:09]     child(occ1):  Suspension_Arm_Upper path=Suspension Subassembly:3+Suspension Arm Upper:1
[16:25:09]     geometryOrOriginOne: (-5.8425, 6.4640, 28.0982) cm
[16:25:09]     geometryOrOriginTwo: (-5.8425, 6.4640, 28.0982) cm
[16:25:09]     occ1.transform: (-2.3500, 8.5868, 6.9820) cm (ctx_depth=1)
[16:25:09]     occ1.global:    (-15.3768, 5.8583, 4.9737) cm
[16:25:09]     occ2.transform: (-10.7024, 6.3445, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ2.global:    (-10.7024, 6.3445, 6.2391) cm
[16:25:09]  -> origin_global: (-0.058425, 0.064640, 0.280982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]  regular joint in component 'base_link': proxied joint into assembly context 'base_link:1' for geometry origin
[16:25:09]   WARNING:   regular joint in component 'base_link': failed to read geometry: 'Joint' object has no attribute 'geometry'
[16:25:09]   [REGULAR in base_link] Rigid_18
[16:25:09]     parent(occ2): Suspension_Arm_Lower path=Suspension Subassembly:3+Suspension Arm Lower:1
[16:25:09]     child(occ1):  Wheel_Chassis_Left path=Wheel Chassis Left:1
[16:25:09]     geometryOrOriginOne: (-5.8425, 6.4640, 24.0982) cm
[16:25:09]     geometryOrOriginTwo: (-5.8425, 6.4640, 24.0982) cm
[16:25:09]     occ1.transform: (-10.7024, 6.3445, 6.2391) cm (ctx_depth=0)
[16:25:09]     occ1.global:    (-10.7024, 6.3445, 6.2391) cm
[16:25:09]     occ2.transform: (-2.3500, 8.5868, 2.9820) cm (ctx_depth=1)
[16:25:09]     occ2.global:    (-15.3768, 5.8583, 0.9737) cm
[16:25:09]  -> origin_global: (-0.058425, 0.064640, 0.240982) m [via geometryOrOriginOne_world] [world]
[16:25:09]     motion: rigid, axis: (0.000, 0.000, 1.000)
[16:25:09]   Extracted 18 unique joints
[16:25:09] 
=== EXTRACTION: RIGID GROUPS ===
[16:25:09]   front_right_wheel: ['Mecanum_Wheel_80mm', 'Motor_Wheel_Coupler'] (expanded 3→2)
[16:25:09]   back_right_wheel: ['Mecanum_Wheel_80mm', 'Motor_Wheel_Coupler'] (expanded 3→2)
[16:25:09]   front_left_wheel: ['Mecanum_Wheel_80mm', 'Motor_Wheel_Coupler'] (expanded 3→2)
[16:25:09]   back_left_wheel: ['Mecanum_Wheel_80mm', 'Motor_Wheel_Coupler'] (expanded 3→2)
[16:25:09]   base_link: ['Wheel_Chassis_Left', 'Frame', 'Sensor_Array', 'Electronics_Hub', 'Battery_Box', 'Wheel_Chassis_Right', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper'] (expanded 27→22)
[16:25:09]   Rigid Group 1: ['SILKSCREEN_TOP', 'HIROSE_DF37NC_30DS_04V', 'ATMEL_ATSHA204A_8UDFN', 'PASTEMASK_BOTTOM', 'Dielectric', 'PASTEMASK_TOP', 'DGND2', 'DGND6', '1_15', 'SILKSCREEN_BOTTOM', 'GND_4', '2_18', 'RESC1005X40N_4', 'ATMEL_ATSHA204A_SOIC8', 'FCI_SFW15R_1STE1LF', '1_2', '8', '2_12', '1_4', 'AGND', 'GND_2', 'MCLK', 'NC', 'DVDD_GPIO', 'CAPC1005X55N_1', '2_8', 'CAPC1005X55N_6', 'OUTPUT', '2_10', 'CAPC1005X55N_9', '1_13', '2_13', '1_11', 'DGND3', 'MECHANICAL_PIN_5', 'DGND8', 'P1', 'LX', 'CAPC1608X90N_1', 'CAPC1005X55N_4', '2_5', 'MD1N', 'VDD', '1_24', 'MD0N', 'GND_3', 'DGND7', 'NC3_1', 'OSC_2P5X2MM', 'MCKN', 'OE', 'MD1P', 'DGND9', '2_16', '2', 'SCL_2', 'SDA', '1_16', 'VA2V8', 'MD0P', 'NC7', 'DGND4', 'NC1', 'NC2', 'CAPC1005X55N_5', 'OUT_1', 'RESC1005X40N_1', 'NC_1', '2_9', 'OUT', '2_11', '2_17', '1_21', 'NC6', '2_20', '2_1', 'P4_1', 'VO1V8', 'RESC1005X40N', 'P1_2', 'CAPC1005X55N_11', '4', 'MECHANICAL_PIN_4', '1_3', '2_4', '3', '5', 'CAPC1005X55N_3', '6', '2_7', 'GND', 'MECHANICAL_PIN_1', '15', 'P2', 'P4', 'MECHANICAL_PIN_3', 'P3', 'MCKP', 'SOLDERMASK_BOTTOM', 'SOLDERMASK_TOP', '2_15', 'DGND1', '1_22', 'RESC0603_1', 'SDA_2', 'VCC_1', 'CAPC1005X55N_8', 'NC4', 'SOT50P160X60_6N', '1_14', 'CAPC1005X55N_2', 'NC2_1', 'SOT95P280X145_5N', '1_5', 'AP3445', 'CAPC1608', 'S2_1', 'D2_1', 'NC1_1', 'GND_1', 'SOT95P280X145_5N_1', 'SCL', '1_8', 'RESC1005X40N_2', 'G2_1', 'EN_1', 'EN', 'GND_6', 'NC2_2', 'FB', '2_19', 'CAPC1005X55N', 'BOURNS_SRN2512', 'P4_2', 'D2', 'P1_1', '1_7', '2_3', '1_9', 'IN', '1_19', '1_1', '1_18', 'IN_1', '1_17', '1', 'MURATA_DLP11SNXXXHL2_2', '1_6', '11', 'CAPC1005X55N_10', '9', 'EXP_PAD', 'G2', 'P2_1', '2_24', 'RESC1005X40N_3', 'RESC0603', 'GND_5', '2_14', 'S2', '13', 'NC7_1', 'VIN', 'PG', '10', '12', 'CAPC1608X90N', 'NC3', 'VCC', 'SCL_1', 'P3_2', '14', '2_22', 'SDA_1', 'MURATA_DLP11SNXXXHL2', '1_10', 'EN_2', '2_21', 'P3_1', 'MURATA_DLP11SNXXXHL2_1', 'NC1_2', 'MECHANICAL_PIN_2', '2_23', '1_23', '2_6', 'PWDN', 'DVDD', 'AFVDD', '7', 'P2_2', '1_20', 'CAPC2012', 'CAPC1005X55N_7', 'DGND5', '2_2', 'MECHANICAL_PIN', '1_12']
[16:25:09]   base_link: ['Frame', 'Wheel_Chassis_Left', 'Sensor_Array', 'Electronics_Hub', 'Battery_Box', 'Wheel_Chassis_Right', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper', 'Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm', 'Motor_Suspension_Face_Plate', 'Suspension_Arm_Lower', 'Suspension_Arm_Upper'] (expanded 26→22)
[16:25:09]   Extracted 7 rigid groups
[16:25:09] 
=== EXTRACTION SUMMARY ===
[16:25:09]   Occurrences: 242 (13 subassemblies, 229 leaf components)
[16:25:09]   Joints: 18 (4 as-built, 14 regular)
[16:25:09]   Max nesting depth: 2
[16:25:19] 
=== PHASE 1: DEBUG DATA ===
[16:25:19]   extraction_report.md
[16:25:19]   snapshot.json
[16:25:19]   fusion_transforms.json
[16:25:19] 
=== PHASE 2: BUILD ROBOT MODEL ===
[16:25:19] 
=== MODEL: ASSEMBLY HIERARCHY ===
[16:25:19]   Assembly: Mecanum_Wheel_Assembly d=0 offset=(144.1, -172.7, 210.5) mm
[16:25:19]   Assembly: Mecanum_Wheel_Assembly d=0 offset=(-78.4, -172.7, 210.5) mm
[16:25:19]   Assembly: Mecanum_Wheel_Assembly d=0 offset=(143.1, 186.1, 210.5) mm
[16:25:19]   Assembly: Mecanum_Wheel_Assembly d=0 offset=(-79.4, 186.1, 210.5) mm
[16:25:19]   Assembly: Pins d=1 offset=(71.8, 6.5, 357.7) mm
[16:25:19]   Assembly: Shapes d=1 offset=(71.8, 6.5, 357.7) mm
[16:25:19]   Assembly: Symbols d=1 offset=(71.8, 6.5, 357.7) mm
[16:25:19]   Assembly: Camera_module_3_std_model_simple d=0 offset=(71.8, 6.5, 357.7) mm
[16:25:19]   Assembly: Suspension_Subassembly d=1 offset=(-78.4, -129.3, 210.5) mm
[16:25:19]   Assembly: Suspension_Subassembly d=1 offset=(144.1, -129.3, 210.5) mm
[16:25:19]   Assembly: Suspension_Subassembly d=1 offset=(-79.4, 142.7, 210.5) mm
[16:25:19]   Assembly: Suspension_Subassembly d=1 offset=(143.1, 142.7, 210.5) mm
[16:25:19]   Assembly: base_link d=0 offset=(0.0, 0.0, 180.0) mm
[16:25:19]   Assembly: Land_V2_Assembly (synthetic root, wraps design-root leaves so phase 2 has a macro to xacro:include)
[16:25:19]   imu_link → Land_V2_Assembly
[16:25:19]   lidar_link → Land_V2_Assembly
[16:25:19]   Mecanum_Wheel_80mm → Mecanum_Wheel_Assembly
[16:25:19]   Motor_Wheel_Coupler → Mecanum_Wheel_Assembly
[16:25:19]   Mecanum_Wheel_80mm → Mecanum_Wheel_Assembly
[16:25:19]   Motor_Wheel_Coupler → Mecanum_Wheel_Assembly
[16:25:19]   Mecanum_Wheel_80mm → Mecanum_Wheel_Assembly
[16:25:19]   Motor_Wheel_Coupler → Mecanum_Wheel_Assembly
[16:25:19]   Mecanum_Wheel_80mm → Mecanum_Wheel_Assembly
[16:25:19]   Motor_Wheel_Coupler → Mecanum_Wheel_Assembly
[16:25:19]   PWDN → Pins
[16:25:19]   1 → Pins
[16:25:19]   1_1 → Pins
[16:25:19]   1_2 → Pins
[16:25:19]   1_3 → Pins
[16:25:19]   1_4 → Pins
[16:25:19]   1_5 → Pins
[16:25:19]   1_6 → Pins
[16:25:19]   1_7 → Pins
[16:25:19]   1_8 → Pins
[16:25:19]   1_9 → Pins
[16:25:19]   1_10 → Pins
[16:25:19]   1_11 → Pins
[16:25:19]   1_12 → Pins
[16:25:19]   1_13 → Pins
[16:25:19]   1_14 → Pins
[16:25:19]   1_15 → Pins
[16:25:19]   1_16 → Pins
[16:25:19]   1_17 → Pins
[16:25:19]   1_18 → Pins
[16:25:19]   1_19 → Pins
[16:25:19]   1_20 → Pins
[16:25:19]   1_21 → Pins
[16:25:19]   1_22 → Pins
[16:25:19]   1_23 → Pins
[16:25:19]   1_24 → Pins
[16:25:19]   10 → Pins
[16:25:19]   11 → Pins
[16:25:19]   12 → Pins
[16:25:19]   13 → Pins
[16:25:19]   14 → Pins
[16:25:19]   15 → Pins
[16:25:19]   2 → Pins
[16:25:19]   2_1 → Pins
[16:25:19]   2_2 → Pins
[16:25:19]   2_3 → Pins
[16:25:19]   2_4 → Pins
[16:25:19]   2_5 → Pins
[16:25:19]   2_6 → Pins
[16:25:19]   2_7 → Pins
[16:25:19]   2_8 → Pins
[16:25:19]   2_9 → Pins
[16:25:19]   2_10 → Pins
[16:25:19]   2_11 → Pins
[16:25:19]   2_12 → Pins
[16:25:19]   2_13 → Pins
[16:25:19]   2_14 → Pins
[16:25:19]   2_15 → Pins
[16:25:19]   2_16 → Pins
[16:25:19]   2_17 → Pins
[16:25:19]   2_18 → Pins
[16:25:19]   2_19 → Pins
[16:25:19]   2_20 → Pins
[16:25:19]   2_21 → Pins
[16:25:19]   2_22 → Pins
[16:25:19]   2_23 → Pins
[16:25:19]   2_24 → Pins
[16:25:19]   3 → Pins
[16:25:19]   4 → Pins
[16:25:19]   5 → Pins
[16:25:19]   6 → Pins
[16:25:19]   7 → Pins
[16:25:19]   8 → Pins
[16:25:19]   9 → Pins
[16:25:19]   AFVDD → Pins
[16:25:19]   AGND → Pins
[16:25:19]   D2 → Pins
[16:25:19]   D2_1 → Pins
[16:25:19]   DGND1 → Pins
[16:25:19]   DGND2 → Pins
[16:25:19]   DGND3 → Pins
[16:25:19]   DGND4 → Pins
[16:25:19]   DGND5 → Pins
[16:25:19]   DGND6 → Pins
[16:25:19]   DGND7 → Pins
[16:25:19]   DGND8 → Pins
[16:25:19]   DGND9 → Pins
[16:25:19]   DVDD → Pins
[16:25:19]   DVDD_GPIO → Pins
[16:25:19]   EN → Pins
[16:25:19]   EN_1 → Pins
[16:25:19]   EN_2 → Pins
[16:25:19]   EXP_PAD → Pins
[16:25:19]   FB → Pins
[16:25:19]   G2 → Pins
[16:25:19]   G2_1 → Pins
[16:25:19]   GND → Pins
[16:25:19]   GND_1 → Pins
[16:25:19]   GND_2 → Pins
[16:25:19]   GND_3 → Pins
[16:25:19]   GND_4 → Pins
[16:25:19]   GND_5 → Pins
[16:25:19]   GND_6 → Pins
[16:25:19]   IN → Pins
[16:25:19]   IN_1 → Pins
[16:25:19]   LX → Pins
[16:25:19]   MCKN → Pins
[16:25:19]   MCKP → Pins
[16:25:19]   MCLK → Pins
[16:25:19]   MD0N → Pins
[16:25:19]   MD0P → Pins
[16:25:19]   MD1N → Pins
[16:25:19]   MD1P → Pins
[16:25:19]   MECHANICAL_PIN → Pins
[16:25:19]   MECHANICAL_PIN_1 → Pins
[16:25:19]   MECHANICAL_PIN_2 → Pins
[16:25:19]   MECHANICAL_PIN_3 → Pins
[16:25:19]   MECHANICAL_PIN_4 → Pins
[16:25:19]   MECHANICAL_PIN_5 → Pins
[16:25:19]   NC → Pins
[16:25:19]   NC_1 → Pins
[16:25:19]   NC1 → Pins
[16:25:19]   NC1_1 → Pins
[16:25:19]   NC1_2 → Pins
[16:25:19]   NC2 → Pins
[16:25:19]   NC2_1 → Pins
[16:25:19]   NC2_2 → Pins
[16:25:19]   NC3 → Pins
[16:25:19]   NC3_1 → Pins
[16:25:19]   NC4 → Pins
[16:25:19]   NC6 → Pins
[16:25:19]   NC7 → Pins
[16:25:19]   NC7_1 → Pins
[16:25:19]   OE → Pins
[16:25:19]   OUT → Pins
[16:25:19]   OUT_1 → Pins
[16:25:19]   OUTPUT → Pins
[16:25:19]   P1 → Pins
[16:25:19]   P1_1 → Pins
[16:25:19]   P1_2 → Pins
[16:25:19]   P2 → Pins
[16:25:19]   P2_1 → Pins
[16:25:19]   P2_2 → Pins
[16:25:19]   P3 → Pins
[16:25:19]   P3_1 → Pins
[16:25:19]   P3_2 → Pins
[16:25:19]   P4 → Pins
[16:25:19]   P4_1 → Pins
[16:25:19]   P4_2 → Pins
[16:25:19]   PG → Pins
[16:25:19]   S2 → Pins
[16:25:19]   S2_1 → Pins
[16:25:19]   SCL → Pins
[16:25:19]   SCL_1 → Pins
[16:25:19]   SCL_2 → Pins
[16:25:19]   SDA → Pins
[16:25:19]   SDA_1 → Pins
[16:25:19]   SDA_2 → Pins
[16:25:19]   VA2V8 → Pins
[16:25:19]   VCC → Pins
[16:25:19]   VCC_1 → Pins
[16:25:19]   VDD → Pins
[16:25:19]   VIN → Pins
[16:25:19]   VO1V8 → Pins
[16:25:19]   SILKSCREEN_TOP → Shapes
[16:25:19]   PASTEMASK_TOP → Shapes
[16:25:19]   SOLDERMASK_TOP → Shapes
[16:25:19]   Dielectric → Shapes
[16:25:19]   SOLDERMASK_BOTTOM → Shapes
[16:25:19]   PASTEMASK_BOTTOM → Shapes
[16:25:19]   SILKSCREEN_BOTTOM → Shapes
[16:25:19]   AP3445 → Symbols
[16:25:19]   ATMEL_ATSHA204A_8UDFN → Symbols
[16:25:19]   ATMEL_ATSHA204A_SOIC8 → Symbols
[16:25:19]   BOURNS_SRN2512 → Symbols
[16:25:19]   CAPC1005X55N → Symbols
[16:25:19]   CAPC1005X55N_1 → Symbols
[16:25:19]   CAPC1005X55N_2 → Symbols
[16:25:19]   CAPC1005X55N_3 → Symbols
[16:25:19]   CAPC1005X55N_4 → Symbols
[16:25:19]   CAPC1005X55N_5 → Symbols
[16:25:19]   CAPC1005X55N_6 → Symbols
[16:25:19]   CAPC1005X55N_7 → Symbols
[16:25:19]   CAPC1005X55N_8 → Symbols
[16:25:19]   CAPC1005X55N_9 → Symbols
[16:25:19]   CAPC1005X55N_10 → Symbols
[16:25:19]   CAPC1005X55N_11 → Symbols
[16:25:19]   CAPC1608 → Symbols
[16:25:19]   CAPC1608X90N → Symbols
[16:25:19]   CAPC1608X90N_1 → Symbols
[16:25:19]   CAPC2012 → Symbols
[16:25:19]   FCI_SFW15R_1STE1LF → Symbols
[16:25:19]   HIROSE_DF37NC_30DS_04V → Symbols
[16:25:19]   MURATA_DLP11SNXXXHL2 → Symbols
[16:25:19]   MURATA_DLP11SNXXXHL2_1 → Symbols
[16:25:19]   MURATA_DLP11SNXXXHL2_2 → Symbols
[16:25:19]   OSC_2P5X2MM → Symbols
[16:25:19]   RESC0603 → Symbols
[16:25:19]   RESC0603_1 → Symbols
[16:25:19]   RESC1005X40N → Symbols
[16:25:19]   RESC1005X40N_1 → Symbols
[16:25:19]   RESC1005X40N_2 → Symbols
[16:25:19]   RESC1005X40N_3 → Symbols
[16:25:19]   RESC1005X40N_4 → Symbols
[16:25:19]   SOT50P160X60_6N → Symbols
[16:25:19]   SOT95P280X145_5N → Symbols
[16:25:19]   SOT95P280X145_5N_1 → Symbols
[16:25:19]   Wheel_Chassis_Left → base_link
[16:25:19]   Frame → base_link
[16:25:19]   Sensor_Array → base_link
[16:25:19]   Electronics_Hub → base_link
[16:25:19]   Battery_Box → base_link
[16:25:19]   Wheel_Chassis_Right → base_link
[16:25:19]   Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm → Suspension_Subassembly
[16:25:19]   Motor_Suspension_Face_Plate → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Lower → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Upper → Suspension_Subassembly
[16:25:19]   Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm → Suspension_Subassembly
[16:25:19]   Motor_Suspension_Face_Plate → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Lower → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Upper → Suspension_Subassembly
[16:25:19]   Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm → Suspension_Subassembly
[16:25:19]   Motor_Suspension_Face_Plate → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Lower → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Upper → Suspension_Subassembly
[16:25:19]   Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm → Suspension_Subassembly
[16:25:19]   Motor_Suspension_Face_Plate → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Lower → Suspension_Subassembly
[16:25:19]   Suspension_Arm_Upper → Suspension_Subassembly
[16:25:19] 
=== MODEL: RIGID GROUP MERGE ===
[16:25:19]   front_right_wheel: anchor=Mecanum_Wheel_80mm merged_name=front_right_wheel members=2 mass=1492.32 g bbox=(40.4 × 80.0 × 80.0) mm
[16:25:19]   front_right_wheel: dropped Mecanum_Wheel_Assembly/Motor_Wheel_Coupler (Mecanum Wheel Assembly:1+Motor-Wheel Coupler:1) -> Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm
[16:25:19]   back_right_wheel: anchor=Mecanum_Wheel_80mm merged_name=back_right_wheel members=2 mass=1492.32 g bbox=(40.4 × 80.0 × 80.0) mm
[16:25:19]   back_right_wheel: dropped Mecanum_Wheel_Assembly/Motor_Wheel_Coupler (Mecanum Wheel Assembly:2+Motor-Wheel Coupler:1) -> Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm
[16:25:19]   front_left_wheel: anchor=Mecanum_Wheel_80mm merged_name=front_left_wheel members=2 mass=1492.32 g bbox=(40.4 × 80.0 × 80.0) mm
[16:25:19]   front_left_wheel: dropped Mecanum_Wheel_Assembly/Motor_Wheel_Coupler (Mecanum Wheel Assembly:3+Motor-Wheel Coupler:1) -> Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm
[16:25:19]   back_left_wheel: anchor=Mecanum_Wheel_80mm merged_name=back_left_wheel members=2 mass=1492.32 g bbox=(40.4 × 80.0 × 80.0) mm
[16:25:19]   back_left_wheel: dropped Mecanum_Wheel_Assembly/Motor_Wheel_Coupler (Mecanum Wheel Assembly:4+Motor-Wheel Coupler:1) -> Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm
[16:25:19]   base_link: anchor=Wheel_Chassis_Right merged_name=base_link members=22 mass=5069.66 g bbox=(290.0 × 268.5 × 194.0) mm
[16:25:19]   base_link: dropped base_link/Wheel_Chassis_Left (base_link:1+Wheel Chassis Left:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped base_link/Frame (base_link:1+Frame:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped base_link/Sensor_Array (base_link:1+Sensor Array:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped base_link/Electronics_Hub (base_link:1+Electronics Hub:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped base_link/Battery_Box (base_link:1+Battery Box:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm (base_link:1+Suspension Subassembly:1+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Motor_Suspension_Face_Plate (base_link:1+Suspension Subassembly:1+Motor Suspension Face Plate:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Lower (base_link:1+Suspension Subassembly:1+Suspension Arm Lower:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Upper (base_link:1+Suspension Subassembly:1+Suspension Arm Upper:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm (base_link:1+Suspension Subassembly:2+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Motor_Suspension_Face_Plate (base_link:1+Suspension Subassembly:2+Motor Suspension Face Plate:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Lower (base_link:1+Suspension Subassembly:2+Suspension Arm Lower:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Upper (base_link:1+Suspension Subassembly:2+Suspension Arm Upper:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm (base_link:1+Suspension Subassembly:3+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Motor_Suspension_Face_Plate (base_link:1+Suspension Subassembly:3+Motor Suspension Face Plate:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Lower (base_link:1+Suspension Subassembly:3+Suspension Arm Lower:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Upper (base_link:1+Suspension Subassembly:3+Suspension Arm Upper:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Metal_DC_Geared_Motor_w_Encoder_6V_210RPM_10Kg_cm (base_link:1+Suspension Subassembly:4+Metal DC Geared Motor w/Encoder - 6V 210RPM 10Kg.cm:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Motor_Suspension_Face_Plate (base_link:1+Suspension Subassembly:4+Motor Suspension Face Plate:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Lower (base_link:1+Suspension Subassembly:4+Suspension Arm Lower:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   base_link: dropped Suspension_Subassembly/Suspension_Arm_Upper (base_link:1+Suspension Subassembly:4+Suspension Arm Upper:1) -> base_link/Wheel_Chassis_Right
[16:25:19]   Rigid Group 1: anchor=Dielectric merged_name=Dielectric members=197 mass=8.52 g bbox=(10.2 × 25.0 × 23.9) mm
[16:25:19]   Rigid Group 1: dropped Shapes/SILKSCREEN_TOP (Camera_module_3_std_model_simple:1+Shapes:1+SILKSCREEN_TOP:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/HIROSE_DF37NC_30DS_04V (Camera_module_3_std_model_simple:1+Symbols:1+HIROSE_DF37NC-30DS-04V:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/ATMEL_ATSHA204A_8UDFN (Camera_module_3_std_model_simple:1+Symbols:1+ATMEL_ATSHA204A_8UDFN:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Shapes/PASTEMASK_BOTTOM (Camera_module_3_std_model_simple:1+Shapes:1+PASTEMASK_BOTTOM:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Shapes/PASTEMASK_TOP (Camera_module_3_std_model_simple:1+Shapes:1+PASTEMASK_TOP:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND2 (Camera_module_3_std_model_simple:1+Pins:1+DGND2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND6 (Camera_module_3_std_model_simple:1+Pins:1+DGND6:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_15 (Camera_module_3_std_model_simple:1+Pins:1+1 (15):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Shapes/SILKSCREEN_BOTTOM (Camera_module_3_std_model_simple:1+Shapes:1+SILKSCREEN_BOTTOM:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/GND_4 (Camera_module_3_std_model_simple:1+Pins:1+GND (4):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_18 (Camera_module_3_std_model_simple:1+Pins:1+2 (18):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/RESC1005X40N_4 (Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (4):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/ATMEL_ATSHA204A_SOIC8 (Camera_module_3_std_model_simple:1+Symbols:1+ATMEL_ATSHA204A_SOIC8:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/FCI_SFW15R_1STE1LF (Camera_module_3_std_model_simple:1+Symbols:1+FCI_SFW15R-1STE1LF:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_2 (Camera_module_3_std_model_simple:1+Pins:1+1 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/8 (Camera_module_3_std_model_simple:1+Pins:1+8:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_12 (Camera_module_3_std_model_simple:1+Pins:1+2 (12):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_4 (Camera_module_3_std_model_simple:1+Pins:1+1 (4):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/AGND (Camera_module_3_std_model_simple:1+Pins:1+AGND:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/GND_2 (Camera_module_3_std_model_simple:1+Pins:1+GND (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MCLK (Camera_module_3_std_model_simple:1+Pins:1+MCLK:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC (Camera_module_3_std_model_simple:1+Pins:1+NC:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DVDD_GPIO (Camera_module_3_std_model_simple:1+Pins:1+DVDD/GPIO:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_1 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_8 (Camera_module_3_std_model_simple:1+Pins:1+2 (8):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_6 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (6):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/OUTPUT (Camera_module_3_std_model_simple:1+Pins:1+OUTPUT:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_10 (Camera_module_3_std_model_simple:1+Pins:1+2 (10):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_9 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (9):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_13 (Camera_module_3_std_model_simple:1+Pins:1+1 (13):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_13 (Camera_module_3_std_model_simple:1+Pins:1+2 (13):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_11 (Camera_module_3_std_model_simple:1+Pins:1+1 (11):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND3 (Camera_module_3_std_model_simple:1+Pins:1+DGND3:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MECHANICAL_PIN_5 (Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (5):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND8 (Camera_module_3_std_model_simple:1+Pins:1+DGND8:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P1 (Camera_module_3_std_model_simple:1+Pins:1+P1:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/LX (Camera_module_3_std_model_simple:1+Pins:1+LX:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1608X90N_1 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1608X90N (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_4 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (4):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_5 (Camera_module_3_std_model_simple:1+Pins:1+2 (5):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MD1N (Camera_module_3_std_model_simple:1+Pins:1+MD1N:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/VDD (Camera_module_3_std_model_simple:1+Pins:1+VDD:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_24 (Camera_module_3_std_model_simple:1+Pins:1+1 (24):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MD0N (Camera_module_3_std_model_simple:1+Pins:1+MD0N:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/GND_3 (Camera_module_3_std_model_simple:1+Pins:1+GND (3):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND7 (Camera_module_3_std_model_simple:1+Pins:1+DGND7:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC3_1 (Camera_module_3_std_model_simple:1+Pins:1+NC3 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/OSC_2P5X2MM (Camera_module_3_std_model_simple:1+Symbols:1+OSC_2P5X2MM:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MCKN (Camera_module_3_std_model_simple:1+Pins:1+MCKN:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/OE (Camera_module_3_std_model_simple:1+Pins:1+OE:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MD1P (Camera_module_3_std_model_simple:1+Pins:1+MD1P:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND9 (Camera_module_3_std_model_simple:1+Pins:1+DGND9:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_16 (Camera_module_3_std_model_simple:1+Pins:1+2 (16):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2 (Camera_module_3_std_model_simple:1+Pins:1+2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/SCL_2 (Camera_module_3_std_model_simple:1+Pins:1+SCL (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/SDA (Camera_module_3_std_model_simple:1+Pins:1+SDA:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_16 (Camera_module_3_std_model_simple:1+Pins:1+1 (16):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/VA2V8 (Camera_module_3_std_model_simple:1+Pins:1+VA2V8:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MD0P (Camera_module_3_std_model_simple:1+Pins:1+MD0P:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC7 (Camera_module_3_std_model_simple:1+Pins:1+NC7:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND4 (Camera_module_3_std_model_simple:1+Pins:1+DGND4:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC1 (Camera_module_3_std_model_simple:1+Pins:1+NC1:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC2 (Camera_module_3_std_model_simple:1+Pins:1+NC2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_5 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (5):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/OUT_1 (Camera_module_3_std_model_simple:1+Pins:1+OUT (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/RESC1005X40N_1 (Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC_1 (Camera_module_3_std_model_simple:1+Pins:1+NC (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_9 (Camera_module_3_std_model_simple:1+Pins:1+2 (9):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/OUT (Camera_module_3_std_model_simple:1+Pins:1+OUT:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_11 (Camera_module_3_std_model_simple:1+Pins:1+2 (11):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_17 (Camera_module_3_std_model_simple:1+Pins:1+2 (17):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_21 (Camera_module_3_std_model_simple:1+Pins:1+1 (21):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC6 (Camera_module_3_std_model_simple:1+Pins:1+NC6:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_20 (Camera_module_3_std_model_simple:1+Pins:1+2 (20):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_1 (Camera_module_3_std_model_simple:1+Pins:1+2 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P4_1 (Camera_module_3_std_model_simple:1+Pins:1+P4 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/VO1V8 (Camera_module_3_std_model_simple:1+Pins:1+VO1V8:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/RESC1005X40N (Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P1_2 (Camera_module_3_std_model_simple:1+Pins:1+P1 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_11 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (11):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/4 (Camera_module_3_std_model_simple:1+Pins:1+4:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MECHANICAL_PIN_4 (Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (4):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_3 (Camera_module_3_std_model_simple:1+Pins:1+1 (3):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_4 (Camera_module_3_std_model_simple:1+Pins:1+2 (4):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/3 (Camera_module_3_std_model_simple:1+Pins:1+3:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/5 (Camera_module_3_std_model_simple:1+Pins:1+5:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_3 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (3):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/6 (Camera_module_3_std_model_simple:1+Pins:1+6:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_7 (Camera_module_3_std_model_simple:1+Pins:1+2 (7):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/GND (Camera_module_3_std_model_simple:1+Pins:1+GND:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MECHANICAL_PIN_1 (Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/15 (Camera_module_3_std_model_simple:1+Pins:1+15:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P2 (Camera_module_3_std_model_simple:1+Pins:1+P2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P4 (Camera_module_3_std_model_simple:1+Pins:1+P4:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MECHANICAL_PIN_3 (Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (3):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P3 (Camera_module_3_std_model_simple:1+Pins:1+P3:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MCKP (Camera_module_3_std_model_simple:1+Pins:1+MCKP:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Shapes/SOLDERMASK_BOTTOM (Camera_module_3_std_model_simple:1+Shapes:1+SOLDERMASK_BOTTOM:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Shapes/SOLDERMASK_TOP (Camera_module_3_std_model_simple:1+Shapes:1+SOLDERMASK_TOP:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_15 (Camera_module_3_std_model_simple:1+Pins:1+2 (15):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND1 (Camera_module_3_std_model_simple:1+Pins:1+DGND1:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_22 (Camera_module_3_std_model_simple:1+Pins:1+1 (22):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/RESC0603_1 (Camera_module_3_std_model_simple:1+Symbols:1+RESC0603 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/SDA_2 (Camera_module_3_std_model_simple:1+Pins:1+SDA (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/VCC_1 (Camera_module_3_std_model_simple:1+Pins:1+VCC (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_8 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (8):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC4 (Camera_module_3_std_model_simple:1+Pins:1+NC4:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/SOT50P160X60_6N (Camera_module_3_std_model_simple:1+Symbols:1+SOT50P160X60-6N:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_14 (Camera_module_3_std_model_simple:1+Pins:1+1 (14):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_2 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC2_1 (Camera_module_3_std_model_simple:1+Pins:1+NC2 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/SOT95P280X145_5N (Camera_module_3_std_model_simple:1+Symbols:1+SOT95P280X145-5N:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_5 (Camera_module_3_std_model_simple:1+Pins:1+1 (5):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/AP3445 (Camera_module_3_std_model_simple:1+Symbols:1+AP3445:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1608 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1608:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/S2_1 (Camera_module_3_std_model_simple:1+Pins:1+S2 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/D2_1 (Camera_module_3_std_model_simple:1+Pins:1+D2 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC1_1 (Camera_module_3_std_model_simple:1+Pins:1+NC1 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/GND_1 (Camera_module_3_std_model_simple:1+Pins:1+GND (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/SOT95P280X145_5N_1 (Camera_module_3_std_model_simple:1+Symbols:1+SOT95P280X145-5N (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/SCL (Camera_module_3_std_model_simple:1+Pins:1+SCL:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_8 (Camera_module_3_std_model_simple:1+Pins:1+1 (8):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/RESC1005X40N_2 (Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/G2_1 (Camera_module_3_std_model_simple:1+Pins:1+G2 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/EN_1 (Camera_module_3_std_model_simple:1+Pins:1+EN (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/EN (Camera_module_3_std_model_simple:1+Pins:1+EN:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/GND_6 (Camera_module_3_std_model_simple:1+Pins:1+GND (6):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC2_2 (Camera_module_3_std_model_simple:1+Pins:1+NC2 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/FB (Camera_module_3_std_model_simple:1+Pins:1+FB:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_19 (Camera_module_3_std_model_simple:1+Pins:1+2 (19):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/BOURNS_SRN2512 (Camera_module_3_std_model_simple:1+Symbols:1+BOURNS_SRN2512:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P4_2 (Camera_module_3_std_model_simple:1+Pins:1+P4 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/D2 (Camera_module_3_std_model_simple:1+Pins:1+D2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P1_1 (Camera_module_3_std_model_simple:1+Pins:1+P1 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_7 (Camera_module_3_std_model_simple:1+Pins:1+1 (7):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_3 (Camera_module_3_std_model_simple:1+Pins:1+2 (3):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_9 (Camera_module_3_std_model_simple:1+Pins:1+1 (9):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/IN (Camera_module_3_std_model_simple:1+Pins:1+IN:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_19 (Camera_module_3_std_model_simple:1+Pins:1+1 (19):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_1 (Camera_module_3_std_model_simple:1+Pins:1+1 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_18 (Camera_module_3_std_model_simple:1+Pins:1+1 (18):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/IN_1 (Camera_module_3_std_model_simple:1+Pins:1+IN (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_17 (Camera_module_3_std_model_simple:1+Pins:1+1 (17):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1 (Camera_module_3_std_model_simple:1+Pins:1+1:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/MURATA_DLP11SNXXXHL2_2 (Camera_module_3_std_model_simple:1+Symbols:1+MURATA_DLP11SNXXXHL2 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_6 (Camera_module_3_std_model_simple:1+Pins:1+1 (6):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/11 (Camera_module_3_std_model_simple:1+Pins:1+11:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_10 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (10):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/9 (Camera_module_3_std_model_simple:1+Pins:1+9:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/EXP_PAD (Camera_module_3_std_model_simple:1+Pins:1+EXP_PAD:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/G2 (Camera_module_3_std_model_simple:1+Pins:1+G2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P2_1 (Camera_module_3_std_model_simple:1+Pins:1+P2 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_24 (Camera_module_3_std_model_simple:1+Pins:1+2 (24):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/RESC1005X40N_3 (Camera_module_3_std_model_simple:1+Symbols:1+RESC1005X40N (3):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/RESC0603 (Camera_module_3_std_model_simple:1+Symbols:1+RESC0603:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/GND_5 (Camera_module_3_std_model_simple:1+Pins:1+GND (5):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_14 (Camera_module_3_std_model_simple:1+Pins:1+2 (14):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/S2 (Camera_module_3_std_model_simple:1+Pins:1+S2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/13 (Camera_module_3_std_model_simple:1+Pins:1+13:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC7_1 (Camera_module_3_std_model_simple:1+Pins:1+NC7 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/VIN (Camera_module_3_std_model_simple:1+Pins:1+VIN:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/PG (Camera_module_3_std_model_simple:1+Pins:1+PG:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/10 (Camera_module_3_std_model_simple:1+Pins:1+10:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/12 (Camera_module_3_std_model_simple:1+Pins:1+12:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1608X90N (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1608X90N:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC3 (Camera_module_3_std_model_simple:1+Pins:1+NC3:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/VCC (Camera_module_3_std_model_simple:1+Pins:1+VCC:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/SCL_1 (Camera_module_3_std_model_simple:1+Pins:1+SCL (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P3_2 (Camera_module_3_std_model_simple:1+Pins:1+P3 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/14 (Camera_module_3_std_model_simple:1+Pins:1+14:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_22 (Camera_module_3_std_model_simple:1+Pins:1+2 (22):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/SDA_1 (Camera_module_3_std_model_simple:1+Pins:1+SDA (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/MURATA_DLP11SNXXXHL2 (Camera_module_3_std_model_simple:1+Symbols:1+MURATA_DLP11SNXXXHL2:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_10 (Camera_module_3_std_model_simple:1+Pins:1+1 (10):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/EN_2 (Camera_module_3_std_model_simple:1+Pins:1+EN (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_21 (Camera_module_3_std_model_simple:1+Pins:1+2 (21):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P3_1 (Camera_module_3_std_model_simple:1+Pins:1+P3 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/MURATA_DLP11SNXXXHL2_1 (Camera_module_3_std_model_simple:1+Symbols:1+MURATA_DLP11SNXXXHL2 (1):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/NC1_2 (Camera_module_3_std_model_simple:1+Pins:1+NC1 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MECHANICAL_PIN_2 (Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_23 (Camera_module_3_std_model_simple:1+Pins:1+2 (23):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_23 (Camera_module_3_std_model_simple:1+Pins:1+1 (23):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_6 (Camera_module_3_std_model_simple:1+Pins:1+2 (6):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/PWDN (Camera_module_3_std_model_simple:1+Pins:1+/PWDN:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DVDD (Camera_module_3_std_model_simple:1+Pins:1+DVDD:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/AFVDD (Camera_module_3_std_model_simple:1+Pins:1+AFVDD:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/7 (Camera_module_3_std_model_simple:1+Pins:1+7:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/P2_2 (Camera_module_3_std_model_simple:1+Pins:1+P2 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_20 (Camera_module_3_std_model_simple:1+Pins:1+1 (20):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC2012 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC2012:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Symbols/CAPC1005X55N_7 (Camera_module_3_std_model_simple:1+Symbols:1+CAPC1005X55N (7):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/DGND5 (Camera_module_3_std_model_simple:1+Pins:1+DGND5:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/2_2 (Camera_module_3_std_model_simple:1+Pins:1+2 (2):1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/MECHANICAL_PIN (Camera_module_3_std_model_simple:1+Pins:1+MECHANICAL PIN:1) -> Shapes/Dielectric
[16:25:19]   Rigid Group 1: dropped Pins/1_12 (Camera_module_3_std_model_simple:1+Pins:1+1 (12):1) -> Shapes/Dielectric
[16:25:19]   base_link: anchor=Wheel_Chassis_Right merged_name=base_link members=22 mass=5069.66 g bbox=(290.0 × 268.5 × 194.0) mm
[16:25:19]   No auto rigid islands found
[16:25:19] 
=== MODEL: RESOLVE JOINT PATHS ===
[16:25:19]   Rigid_32             base_link/Wheel_Chassis_Right → Land_V2_Assembly/lidar_link  [rigid] MOUNT
[16:25:19]   Rigid_33             base_link/Wheel_Chassis_Right → Land_V2_Assembly/lidar_link  [rigid] MOUNT
[16:25:19]   Rigid_37             base_link/Wheel_Chassis_Right → Land_V2_Assembly/imu_link  [rigid] MOUNT
[16:25:19]   Rigid_41             base_link/Wheel_Chassis_Right → Shapes/Dielectric  [rigid] MOUNT
[16:25:19]   Revolute_34          base_link/Wheel_Chassis_Right → Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm  [revolute] MOUNT
[16:25:19]   Revolute_35          base_link/Wheel_Chassis_Right → Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm  [revolute] MOUNT
[16:25:19]   Revolute_39          base_link/Wheel_Chassis_Right → Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm  [revolute] MOUNT
[16:25:19]   Revolute_40          base_link/Wheel_Chassis_Right → Mecanum_Wheel_Assembly/Mecanum_Wheel_80mm  [revolute] MOUNT
[16:25:19]   WARNING:   Revolute_2: Joint 'Revolute_2' is internal to a rigid group (both endpoints → base_link/Wheel_Chassis_Right).  Dropped — rigid groups represent one rigid body, joints between members are ignored.  Move this joint to assemble between rigid groups instead.
[16:25:19]   WARNING:   Revolute_4: Joint 'Revolute_4' is internal to a rigid group (both endpoints → base_link/Wheel_Chassis_Right).  Dropped — rigid groups represent one rigid body, joints between members are ignored.  Move this joint to assemble between rigid groups instead.
[16:25:19]   Rigid_11: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   Rigid_12: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   Rigid_13: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   Rigid_14: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   Rigid_15: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   Rigid_16: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   Rigid_17: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   Rigid_18: internal rigid joint inside rigid group base_link/Wheel_Chassis_Right; dropped as redundant
[16:25:19]   WARNING:   CLOSING(auto): Multi-parent link detected (child=lidar_link:1): keeping 'Rigid_32' as the URDF tree parent; routing ['Rigid_33'] to ``closing_joints`` (sidecar) — closed kinematic loop.  Tag the loop-closing joint(s) with prefix ``!closing_*`` in Fusion to make the choice explicit and avoid this warning.
[16:25:19] 
=== MODEL: DETECT ROOT ===
[16:25:19]   Parent-only nodes: 1
[16:25:19]     base_link/Wheel_Chassis_Right
[16:25:19]   → Root: base_link/Wheel_Chassis_Right
[16:25:19] 
=== MODEL: RESOLVE NAMES ===
[16:25:19]   Dielectric (Shapes) → Dielectric
[16:25:19]   front_right_wheel (Mecanum_Wheel_Assembly) → front_right_wheel
[16:25:19]   back_right_wheel (Mecanum_Wheel_Assembly) → back_right_wheel
[16:25:19]   front_left_wheel (Mecanum_Wheel_Assembly) → front_left_wheel
[16:25:19]   back_left_wheel (Mecanum_Wheel_Assembly) → back_left_wheel
[16:25:19]   base_link (base_link) → base_link
[16:25:19]   imu_link (Land_V2_Assembly) → imu_link
[16:25:19]   lidar_link (Land_V2_Assembly) → lidar_link
[16:25:19]   Root link URDF name: base_link
[16:25:19] 
=== MODEL: BUILD LINKS ===
[16:25:19]   front_right_wheel: MERGED (2 members) mass=1492.32 g
[16:25:19]   back_right_wheel: MERGED (2 members) mass=1492.32 g
[16:25:19]   front_left_wheel: MERGED (2 members) mass=1492.32 g
[16:25:19]   back_left_wheel: MERGED (2 members) mass=1492.32 g
[16:25:19]   Dielectric: MERGED (197 members) mass=8.52 g
[16:25:19]   base_link: MERGED (22 members) mass=5069.66 g
[16:25:19]   Built 8 links
[16:25:19] 
=== MODEL: BUILD JOINTS ===
[16:25:19]   NOTE: joint origin rpy derived from child occurrence's transform2 rotation (was hardcoded 0,0,0 pre-2026-04-13)
[16:25:19]   Rigid_32: joint origin rpy = (0.000000, 0.000000, 1.570796) rad (+0.00°, +0.00°, +90.00°) [from child transform2 rotation]
[16:25:19]   Rigid_32: origin_xyz rotated into parent-local frame: (0.041800, 0.002765, 0.094100) → (-0.002765, 0.041800, 0.094100) m
[16:25:19]   Rigid_32: base_link → lidar_link [fixed]
[16:25:19]     origin_xyz: (-0.002765, 0.041800, 0.094100) m [child_minus_parent]
[16:25:19]     origin_global: (0.032619, 0.006769, 0.387082) m
[16:25:19]   Rigid_33: joint origin rpy = (0.000000, 0.000000, 1.570796) rad (+0.00°, +0.00°, +90.00°) [from child transform2 rotation]
[16:25:19]   Rigid_33: origin_xyz rotated into parent-local frame: (0.041800, 0.002765, 0.094100) → (-0.002765, 0.041800, 0.094100) m
[16:25:19]   Rigid_33: base_link → lidar_link [fixed] [closing/auto_detected]
[16:25:19]     origin_xyz: (-0.002765, 0.041800, 0.094100) m [child_minus_parent]
[16:25:19]     origin_global: (0.032619, 0.006769, 0.387082) m
[16:25:19]   Rigid_37: joint origin rpy = (0.000000, -0.000000, 1.570796) rad (+0.00°, -0.00°, +90.00°) [from child transform2 rotation]
[16:25:19]   Rigid_37: origin_xyz rotated into parent-local frame: (0.083100, 0.002515, 0.022540) → (-0.002515, 0.083100, 0.022540) m
[16:25:19]   Rigid_37: base_link → imu_link [fixed]
[16:25:19]     origin_xyz: (-0.002515, 0.083100, 0.022540) m [child_minus_parent]
[16:25:19]     origin_global: (0.073919, 0.006519, 0.315522) m
[16:25:19]   Rigid_41: joint origin rpy = (0.000000, 0.000000, 1.570796) rad (+0.00°, +0.00°, +90.00°) [from child transform2 rotation]
[16:25:19]   Rigid_41: origin_xyz rotated into parent-local frame: (0.081000, 0.002465, 0.064692) → (-0.002465, 0.081000, 0.064692) m
[16:25:19]   Rigid_41: base_link → Dielectric [fixed]
[16:25:19]     origin_xyz: (-0.002465, 0.081000, 0.064692) m [child_minus_parent]
[16:25:19]     origin_global: (0.071819, 0.006469, 0.357674) m
[16:25:19]   Revolute_34: mesh bake offset = (-40.40, 0.00, 0.00) mm [child-local frame]
[16:25:19]   Revolute_34: joint origin rpy = (0.372055, -0.000000, -3.141593) rad (+21.32°, -0.00°, -180.00°) [from child transform2 rotation]
[16:25:19]   Revolute_34: origin_xyz rotated into parent-local frame: (0.153244, -0.136291, -0.082475) → (0.136291, 0.153244, -0.082475) m
[16:25:19]  Revolute_34: axis remapped world -> joint/child frame: (-0.000, -1.000, 0.000) -> (-1.000, 0.000, 0.000)
[16:25:19]   Revolute_34: base_link → front_right_wheel [continuous]
[16:25:19]     origin_xyz: (0.136291, 0.153244, -0.082475) m [joint_minus_parent]
[16:25:19]     origin_global: (0.144063, -0.132288, 0.210507) m
[16:25:19]   Revolute_35: mesh bake offset = (-40.40, 0.00, 0.00) mm [child-local frame]
[16:25:19]   Revolute_35: joint origin rpy = (-1.478302, -0.000000, -3.141593) rad (-84.70°, -0.00°, -180.00°) [from child transform2 rotation]
[16:25:19]   Revolute_35: origin_xyz rotated into parent-local frame: (-0.069244, -0.136291, -0.082475) → (0.136291, -0.069244, -0.082475) m
[16:25:19]  Revolute_35: axis remapped world -> joint/child frame: (-0.000, -1.000, 0.000) -> (-1.000, 0.000, 0.000)
[16:25:19]   Revolute_35: base_link → back_right_wheel [continuous]
[16:25:19]     origin_xyz: (0.136291, -0.069244, -0.082475) m [joint_minus_parent]
[16:25:19]     origin_global: (-0.078425, -0.132288, 0.210507) m
[16:25:19]   Revolute_39: mesh bake offset = (-40.40, 0.00, -0.00) mm [child-local frame]
[16:25:19]   Revolute_39: joint origin rpy = (0.822812, -0.000000, -0.000000) rad (+47.14°, -0.00°, -0.00°) [from child transform2 rotation]
[16:25:19]   Revolute_39: origin_xyz rotated into parent-local frame: (-0.070244, 0.141721, -0.082475) → (-0.141721, -0.070244, -0.082475) m
[16:25:19]  Revolute_39: axis remapped world -> joint/child frame: (0.000, 1.000, -0.000) -> (-1.000, 0.000, 0.000)
[16:25:19]   Revolute_39: base_link → back_left_wheel [continuous]
[16:25:19]     origin_xyz: (-0.141721, -0.070244, -0.082475) m [joint_minus_parent]
[16:25:19]     origin_global: (-0.079425, 0.145725, 0.210507) m
[16:25:19]   Revolute_40: mesh bake offset = (-40.40, 0.00, -0.00) mm [child-local frame]
[16:25:19]   Revolute_40: joint origin rpy = (1.811122, -0.000000, -0.000000) rad (+103.77°, -0.00°, -0.00°) [from child transform2 rotation]
[16:25:19]   Revolute_40: origin_xyz rotated into parent-local frame: (0.152244, 0.141721, -0.082475) → (-0.141721, 0.152244, -0.082475) m
[16:25:19]  Revolute_40: axis remapped world -> joint/child frame: (0.000, 1.000, -0.000) -> (-1.000, 0.000, -0.000)
[16:25:19]   Revolute_40: base_link → front_left_wheel [continuous]
[16:25:19]     origin_xyz: (-0.141721, 0.152244, -0.082475) m [joint_minus_parent]
[16:25:19]     origin_global: (0.143063, 0.145725, 0.210507) m
[16:25:19]   Built 7 joints
[16:25:19] 
=== MODEL: VALIDATE ===
[16:25:19]   Validation passed (3 warnings)
[16:25:19] 
[16:25:19] Kinematic tree:
[16:25:19]   base_link (5070g) [MERGED]
[16:25:19]     ─── Rigid_32 [fixed]
[16:25:19]       lidar_link (805g)
[16:25:19]     ─── Rigid_37 [fixed]
[16:25:19]       imu_link (2g)
[16:25:19]     ─── Rigid_41 [fixed]
[16:25:19]       Dielectric (9g) [MERGED]
[16:25:19]     ─⟳─ Revolute_34 [continuous]
[16:25:19]       front_right_wheel (1492g) [MERGED]
[16:25:19]     ─⟳─ Revolute_35 [continuous]
[16:25:19]       back_right_wheel (1492g) [MERGED]
[16:25:19]     ─⟳─ Revolute_39 [continuous]
[16:25:19]       back_left_wheel (1492g) [MERGED]
[16:25:19]     ─⟳─ Revolute_40 [continuous]
[16:25:19]       front_left_wheel (1492g) [MERGED]
[16:25:19]   
[16:25:19]   Closed-loop joints (sidecar) — emitted to robot_data.yaml,
[16:25:19]   re-applied by downstream URDF→USD pipelines as USD physics joints:
[16:25:19]       ─── Rigid_33 [fixed] [auto_detected]: base_link → lidar_link
[16:25:19] 
=== MODEL SUMMARY ===
[16:25:19]   Robot: Land_V2_Assembly
[16:25:19]   Root link: base_link
[16:25:19]   Links: 8
[16:25:19]   Joints: 7
[16:25:19]   Assemblies: 8
[16:25:19]   Warnings: 3
[16:25:19]   Errors: 0
[16:25:26] 
=== MESH EXPORT ===
[16:25:26]   imu_link:
[16:25:30]     OBJ exported (704878 bytes)
[16:25:30]     MTL preserved from Fusion (multi-material)
[16:25:30]     DAE written → meshes/Land_V2_Assembly/imu_link.dae (OBJ retained for collision fit)
[16:25:30]   lidar_link:
[16:25:31]     OBJ exported (4395513 bytes)
[16:25:31]     MTL preserved from Fusion (multi-material)
[16:25:31]     DAE written → meshes/Land_V2_Assembly/lidar_link.dae (OBJ retained for collision fit)
[16:25:31]   front_right_wheel:
[16:25:31]     front_right_wheel: rigid group has shared-component member(s) — using per-member export to avoid sibling-geometry leak
[16:25:33]     Merged rigid group (2 members, 3653 verts, 7298 faces)
[16:25:33]     DAE written → meshes/Mecanum_Wheel_Assembly/front_right_wheel.dae (OBJ retained for collision fit)
[16:25:33]   back_right_wheel:
[16:25:33]     back_right_wheel: rigid group has shared-component member(s) — using per-member export to avoid sibling-geometry leak
[16:25:34]     Merged rigid group (2 members, 3653 verts, 7298 faces)
[16:25:34]     DAE written → meshes/Mecanum_Wheel_Assembly/back_right_wheel.dae (OBJ retained for collision fit)
[16:25:34]   front_left_wheel:
[16:25:34]     front_left_wheel: rigid group has shared-component member(s) — using per-member export to avoid sibling-geometry leak
[16:25:35]     Merged rigid group (2 members, 3653 verts, 7298 faces)
[16:25:35]     DAE written → meshes/Mecanum_Wheel_Assembly/front_left_wheel.dae (OBJ retained for collision fit)
[16:25:35]   back_left_wheel:
[16:25:35]     back_left_wheel: rigid group has shared-component member(s) — using per-member export to avoid sibling-geometry leak
[16:25:35]     Merged rigid group (2 members, 3653 verts, 7298 faces)
[16:25:36]     DAE written → meshes/Mecanum_Wheel_Assembly/back_left_wheel.dae (OBJ retained for collision fit)
[16:25:36]   Dielectric:
[16:25:36]     Merge target: sub-asm 'Camera_module_3_std_model_simple' (members=197)
[16:26:02]     MTL preserved from Fusion (multi-material)
[16:26:02]     Merged OBJ written via Fusion API (30727.1 KB)
[16:26:04]     DAE written → meshes/Shapes/Dielectric.dae (OBJ retained for collision fit)
[16:26:04]   base_link:
[16:26:04]     base_link: rigid group has shared-component member(s) — using per-member export to avoid sibling-geometry leak
[16:26:11]     Merged rigid group (22 members, 18799 verts, 38270 faces)
[16:26:12]     DAE written → meshes/base_link/base_link.dae (OBJ retained for collision fit)
[16:26:12] 
  Mesh export summary:
[16:26:12]     Visual (OBJ+MTL):              8
[16:26:12]     Collision sub-component (STL):  0
[16:26:12]     Collision body + warning (STL): 0
[16:26:12]     Skipped (no Fusion ref):        0
[16:26:12] 
=== PHASE 3: SCREENSHOT ===
[16:26:12]   → images/robot.png
[16:26:12] 
=== PACKAGE: GENERATE ===
[16:26:12]   Package: Land_V2_Assembly_description
[16:26:12]   Output:  C:/Users/mvsue/OneDrive/Documents/Robotics/Land_V2_Assembly_description\Land_V2_Assembly_description
[16:26:12] 
=== COLLISION: RESOLVE ===
[16:26:12]   imu_link: primitive (box [23.5 x 10.7 x 2.0] mm)
[16:26:12]   lidar_link: primitive (cylinder r=30.1 h=41.3 mm)
[16:26:12]   front_right_wheel: primitive (box [40.4 x 80.0 x 80.0] mm)
[16:26:12]   back_right_wheel: primitive (box [40.4 x 80.0 x 80.0] mm)
[16:26:12]   front_left_wheel: primitive (box [40.4 x 80.0 x 80.0] mm)
[16:26:12]   back_left_wheel: primitive (box [40.4 x 80.0 x 80.0] mm)
[16:26:12]   Dielectric: primitive (box [27.7 x 28.0 x 0.9] mm)
[16:26:12]   base_link: primitive (box [305.8 x 281.2 x 149.5] mm)
[16:26:12] 
  Collision summary:
[16:26:12]     Explicit:        0
[16:26:12]     Primitive (STL): 8
[16:26:12]     Convex hull STL: 0
[16:26:12]     Visual reuse:    0
[16:26:12]     Visual fallback: 0
[16:26:12] 
=== COLLISION: GENERATE STL ===
[16:26:12]   imu_link: box -> 12 tris (0.7 KB)
[16:26:12]   lidar_link: cylinder -> 96 tris (4.8 KB)
[16:26:12]   front_right_wheel: box -> 12 tris (0.7 KB)
[16:26:12]   back_right_wheel: box -> 12 tris (0.7 KB)
[16:26:12]   front_left_wheel: box -> 12 tris (0.7 KB)
[16:26:12]   back_left_wheel: box -> 12 tris (0.7 KB)
[16:26:12]   Dielectric: box -> 12 tris (0.7 KB)
[16:26:12]   base_link: box -> 12 tris (0.7 KB)
[16:26:12] 
  Generated 8 collision STL files
[16:26:12] 
=== PACKAGE: FRAMES ===
[16:26:12]   -> debug/frame_model.json (pre-frame cache)
[16:26:12]   Frame convention: ros
[16:26:12]   Frame overrides:  config/frame_overrides.csv
[16:26:12]   Rebased links:    5/8
[16:26:12] 
=== PACKAGE: XACRO ===
[16:26:12]   → urdf/Land_V2_Assembly.urdf.xacro
[16:26:12]   → urdf/assemblies/Land_V2_Assembly.urdf.xacro
[16:26:12]   → urdf/assemblies/Mecanum_Wheel_Assembly.urdf.xacro
[16:26:12]   → urdf/assemblies/Shapes.urdf.xacro
[16:26:12]   → urdf/assemblies/base_link.urdf.xacro
[16:26:12] 
=== PACKAGE: URDF (flat, for validation) ===
[16:26:12]   → urdf/Land_V2_Assembly.urdf
[16:26:12] 
=== PACKAGE: ROS2 FILES ===
[16:26:12]   → package.xml
[16:26:12]   → CMakeLists.txt
[16:26:12]   → launch/display.launch.py
[16:26:12]   → rviz/display.rviz
[16:26:12]   → config/joint_state.yaml
[16:26:12]   → config/ros2_controllers.yaml
[16:26:12] 
=== PACKAGE: SUPPLEMENTARY DATA ===
[16:26:12]   → robot_data.yaml
[16:26:12]   -> docs/transforms.md
[16:26:12] 
=== PACKAGE: README ===
[16:26:12]   → README.md
[16:26:12]   Cleaned up 16 retained OBJ/MTL files
[16:26:13]   Removed 4 empty generated directories
[16:26:13] 
=== PACKAGE: COMPLETE ===
[16:26:13]   Package generated: C:/Users/mvsue/OneDrive/Documents/Robotics/Land_V2_Assembly_description\Land_V2_Assembly_description
[16:26:13]   Xacro: urdf/Land_V2_Assembly.urdf.xacro (+ 4 assembly macros)
[16:26:13]   URDF:  urdf/Land_V2_Assembly.urdf (flat, for validation)
[16:26:13]   Launch: ros2 launch Land_V2_Assembly_description display.launch.py
[16:26:13] 
=== EXPORT COMPLETE ===
```
