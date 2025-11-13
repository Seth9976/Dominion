// 函数: _Z7PickRayRK8PickInfoRK4Vec2
// 地址: 0xc9e850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 0x10)
float v3 = *(arg1 + 0x14)
float v0 = *arg1
float v1 = *(arg1 + 4)
float v19 = *(arg1 + 0x20)
float v18 = *(arg1 + 0x24)
float v20 = *(arg1 + 0x28)
float v21 = *(arg1 + 0x2c)
float v16 = v18 * v19
float v17 = v20 * v21
float v22 = v18 * v18
float v23 = v20 * v20
float v24 = v21 * v21
float v25 = v18 * v20
v18 = v18 * v21
v21 = v19 * v21
v20 = v19 * v20
v19 = v19 * v19
float v4 = v16 - v17
v16 = v16 + v17
v17 = v20 - v18
v18 = v20 + v18
v20 = v25 + v21
v21 = v25 - v21
v0 = v0 + (*arg2 - v2) / (*(arg1 + 0x18) - v2) * (*(arg1 + 8) - v0)
v1 = v1 + (*(arg2 + 4) - v3) / (*(arg1 + 0x1c) - v3) * (*(arg1 + 0xc) - v1)
v3 = v0 * (v19 + v24 - v23 - v22)
float v6 = v0 * (v16 + v16)
v0 = v0 * (v17 + v17)
v16 = v1 * (v18 + v18)
v17 = v1 * (v21 + v21)
float v5 = v1 * (v24 + v23 - v22 - v19)
v1 = v4 + v4 + v3
v3 = v20 + v20 + v0
v0 = v1 - v16
v1 = v22 - v23 + v24 - v19 + v6 - v17
v2 = v3 - v5
int64_t* entry_x8
entry_x8[1].d = *(arg1 + 0x38)
v3 = sqrt(v2 * v2 + v1 * v1 + v0 * v0)
*entry_x8 = *(arg1 + 0x30)

if (not(v3 >= float.s(0x3727c5ac)))
    v1 = *(V0 + 4)
    v2 = *(V0 + 8)
    *(entry_x8 + 0xc) = *V0
    entry_x8[2].d = v1
    *(entry_x8 + 0x14) = v2
    return 

v4 = fconvert.s(1f)
v3 = v4 / (v3 + float.s(0x3727c5ac))
v0 = v0 * v3
v1 = v1 * v3
v2 = v2 * v3
v3 = v4 / sqrt(v2 * v2 + v0 * v0 + v1 * v1)
*(entry_x8 + 0xc) = v0 * v3
entry_x8[2].d = v1 * v3
*(entry_x8 + 0x14) = v2 * v3
