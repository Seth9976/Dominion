// 函数: _Z11PickRayPoseRK4Pose
// 地址: 0xc9e7f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
entry_x8[1].d = *(arg1 + 0x18)
*entry_x8 = *(arg1 + 0x10)
float v1 = *arg1
float v0 = *(arg1 + 4)
float v2 = *(arg1 + 8)
float v3 = *(arg1 + 0xc)
float v6 = v0 * v0
float v4 = v0 * v1 - v2 * v3
v0 = v0 * v2 + v1 * v3
*(entry_x8 + 0xc) = v4 + v4
entry_x8[2].d = v6 - v2 * v2 + v3 * v3 - v1 * v1
*(entry_x8 + 0x14) = v0 + v0
