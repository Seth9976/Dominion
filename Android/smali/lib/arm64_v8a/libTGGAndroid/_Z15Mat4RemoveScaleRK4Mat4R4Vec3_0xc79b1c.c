// 函数: _Z15Mat4RemoveScaleRK4Mat4R4Vec3
// 地址: 0xc79b1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = *arg1
float v1 = *(arg1 + 4)
float v2 = *(arg1 + 8)
int64_t v3
v3.d = fconvert.s(1f)
v0 = sqrt(v0 * v0 + v1 * v1 + v2 * v2)
*arg2 = v0
v1 = *(arg1 + 0x10)
v2 = *(arg1 + 0x14)
float v4 = *(arg1 + 0x18)
v0 = v3.d f/ v0
v1 = sqrt(v1 * v1 + v2 * v2 + v4 * v4)
*(arg2 + 4) = v1
v2 = *(arg1 + 0x20)
v4 = *(arg1 + 0x24)
float v5 = *(arg1 + 0x28)
v1 = v3.d f/ v1
v2 = sqrt(v2 * v2 + v4 * v4 + v5 * v5)
*(arg2 + 8) = v2
v2 = v3.d f/ v2
v5 = *(arg1 + 0xc)
int128_t v7
v7.d = *(arg1 + 0x18)
int32_t v16 = *(arg1 + 0x1c)
v3.d = (*arg1).d f* v0
v3:4.d = v3:4.d f* v0
v0 = v0 * *(arg1 + 8)
int64_t v6
v6.d = (*(arg1 + 0x10)).d f* v1
v6:4.d = v6:4.d f* v1
int64_t v17
v17.d = (*(arg1 + 0x20)).d f* v2
v17:4.d = v17:4.d f* v2
v2 = v2 * *(arg1 + 0x28)
v4 = *(arg1 + 0x3c)
int64_t* entry_x8
*(entry_x8 + 0x2c) = *(arg1 + 0x2c)
*entry_x8 = v3
entry_x8[1].d = v0
*(entry_x8 + 0xc) = v5
entry_x8[2] = v6
entry_x8[3].d = v1 f* v7.d
*(entry_x8 + 0x1c) = v16
entry_x8[4] = v17
entry_x8[5].d = v2
*(entry_x8 + 0x3c) = v4
