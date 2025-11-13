// 函数: _Z19UILocalTransformRelRK5RectFS1_
// 地址: 0x9b422c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = RectScreen()
int32_t var_30 = v0.d
int32_t var_2c = v1
int32_t var_28 = v2
int32_t var_24 = v3
uint64_t var_40 = *V20
int64_t var_38 = 0x45000000454a6000
int64_t result
float128 v0_1
float128 v1_1
int128_t v3_1
result, v0_1, v1_1, v3_1 = UIScreenTransformRel(&var_30, &var_40)
int32_t var_94
v0_1.d = var_94
int64_t* entry_x8
entry_x8[1].d = 0x3f800000
v1_1.q = *arg1
float v2_1 = fconvert.s(1f)
v3_1.d = v2_1 f- v0_1.d
v3_1.d = v1_1.d f* v3_1.d
v3_1:4.d = v1_1:4.d f* v3_1.d
*(entry_x8 + 0xc) = v0_1.d
*entry_x8 = v3_1.q
float128 v4 = v1_1
v1_1:8.d = *(arg1 + 8)
v1_1:0xc.d = *(arg1 + 0xc)
v4:8.q = v4.q
v0_1.d = v2_1 f/ v0_1.d
v3_1 = *RECT0
float128 v1_2 = vsubq_f32(v1_1, v4)
v0_1.d = v1_2.d f* v0_1.d
v0_1:4.d = v1_2:4.d f* v0_1.d
v0_1:8.d = v1_2:8.d f* v0_1.d
v0_1:0xc.d = v1_2:0xc.d f* v0_1.d
*(entry_x8 + 0x2c) = vaddq_f32(v4, v0_1)
*(entry_x8 + 0x3c) = v3_1
*(entry_x8 + 0x4c) = *arg2
return result
