// 函数: _Z18UITransformComposeRK11UITransformS1_
// 地址: 0x10531f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = *(arg1 + 0xc)
int128_t v1
v1.d = *(arg2 + 0xc)
int128_t v2
v2.q = *arg1
float v3 = v0.d f* v1.d
v1.q = *arg2
v0.d = v1.d f* v0.d
v0:4.d = v1:4.d f* v0.d
int64_t* entry_x8
*entry_x8 = vadd_f32(v0, v2).q
*(entry_x8 + 0x2c) = *(arg1 + 0x2c)
*(entry_x8 + 0x3c) = *(arg1 + 0x3c)
*(entry_x8 + 0x4c) = *(arg1 + 0x4c)
int128_t v0_1
v0_1.d = *(arg1 + 8)
v1.d = *(arg2 + 8)
v0_1.d = v0_1.d f* v1.d
entry_x8[1].d = v0_1.d
*(entry_x8 + 0xc) = v3
v0_1.q = *(arg1 + 0x10)
v1.q = *(arg2 + 0x10)
entry_x8[2] = vmul_f32(v0_1, v1, 0)
entry_x8[3] = *(arg1 + 0x18)
