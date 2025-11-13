// 函数: _Z13OBBoxContainsRK5OBBoxRK4Vec3
// 地址: 0xf893e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v2 = *(arg1 + 0xc)
float v1 = *(arg1 + 0x10)
float v0 = *(arg1 + 0x14)
float v18 = *(arg1 + 0x18)
float v20 = fconvert.s(0.5f)
float v3 = *arg2 - *arg1
float v4 = *(arg2 + 4) - *(arg1 + 4)
float v5 = *(arg2 + 8) - *(arg1 + 8)
float v6 = v18 * v18
float v7 = v2 * v2
float v16 = v2 * v1
float v24 = v0 * v18
float v25 = v2 * v0
float v26 = v1 * v18
float v27 = v1 * v0
v2 = v2 * v18
float v21 = v7 + v6
float v22 = v16 + v24
v16 = v16 - v24
v6 = v6 - v7
float v17 = fconvert.s(1f) / *TI
float v23 = v5 + v5
v1 = v1 * v1
v24 = (v25 - v26) * v23
v7 = (v27 + v2) * v23
v23 = v3 + v3
v16 = v16 * v23
v23 = (v25 + v26) * v23
v25 = v4 + v4
v0 = v0 * v0
v22 = v22 * v25
v2 = (v27 - v2) * v25
v21 = v21 - v1 - v0
v25 = v1 + v6 - v0
v0 = v5 * (v0 + v6 - v1) + v23 + v2
v1 = v17 * (v24 + v3 * v21 + v22)
v2 = v17 * (v7 + v16 + v4 * v25)
v0 = v17 * v0
uint64_t result = zx.q(*(arg1 + 0x24) * v20 >= v0 ? 1 : 0)
    & zx.q(*(arg1 + 0x20) * v20 >= v2 ? 1 : 0) & zx.q(*(arg1 + 0x1c) * v20 >= v1 ? 1 : 0)
    & zx.q(*V0 <= v1 ? 1 : 0) & zx.q(*(V0 + 4) <= v2 ? 1 : 0) & zx.q(*(V0 + 8) <= v0 ? 1 : 0)
return result
