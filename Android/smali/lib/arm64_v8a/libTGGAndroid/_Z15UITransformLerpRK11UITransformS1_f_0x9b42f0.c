// 函数: _Z15UITransformLerpRK11UITransformS1_f
// 地址: 0x9b42f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v1 = *(arg1 + 0x10)
int128_t* entry_x8
*entry_x8 = *arg1
entry_x8[1] = v1
v1 = *(arg1 + 0x50)
float128 v4 = *(arg1 + 0x20)
float128 v3 = *(arg1 + 0x30)
entry_x8[4] = *(arg1 + 0x40)
entry_x8[5] = v1
entry_x8[2] = v4
entry_x8[3] = v3
v1 = *arg1
float128 v2_1
v2_1.d = vsubq_f32(*arg2, v1).d f* arg3
v2_1:4.d = v2_1:4.d f* arg3
v2_1:8.d = v2_1:8.d f* arg3
v2_1:0xc.d = v2_1:0xc.d f* arg3
float128 v5 = vaddq_f32(v1, v2_1)
v2_1 = *(arg1 + 0x10)
float128 v1_1
v1_1.d = vsubq_f32(*(arg2 + 0x10), v2_1).d f* arg3
v1_1:4.d = v1_1:4.d f* arg3
v1_1:8.d = v1_1:8.d f* arg3
v1_1:0xc.d = v1_1:0xc.d f* arg3
float128 v1_2 = vaddq_f32(v2_1, v1_1)
*entry_x8 = v5
entry_x8[1] = v1_2
v1_2.d = *(arg1 + 0x58)
v2_1.d = *(arg2 + 0x58)
v5.d = fconvert.s(1f)
v2_1.d = v2_1.d f- v1_2.d
v2_1.d = v2_1.d f* arg3
v1_2.d = v1_2.d f+ v2_1.d
*(entry_x8 + 0x58) = v1_2.d
v1_2 = *(arg1 + 0x28)
float128 v2_2
v2_2.d = vsubq_f32(*(arg2 + 0x28), v1_2).d f* arg3
v2_2:4.d = v2_2:4.d f* arg3
v2_2:8.d = v2_2:8.d f* arg3
v2_2:0xc.d = v2_2:0xc.d f* arg3
*(entry_x8 + 0x28) = vaddq_f32(v1_2, v2_2)
float128 v1_3 = *(arg1 + 0x38)
v3 = *(arg1 + 0x48)
v4 = *(arg2 + 0x48)
float128 v2_3
v2_3.d = vsubq_f32(*(arg2 + 0x38), v1_3).d f* arg3
v2_3:4.d = v2_3:4.d f* arg3
v2_3:8.d = v2_3:8.d f* arg3
v2_3:0xc.d = v2_3:0xc.d f* arg3
float128 v4_1 = vsubq_f32(v4, v3)
float128 v1_4 = vaddq_f32(v1_3, v2_3)
float128 v0 = vaddq_f32(v3, v4_1:0xc.d f* v4_1:8.d f* v4_1:4.d f* v4_1.d f* arg3)
*(entry_x8 + 0x38) = v1_4
*(entry_x8 + 0x48) = v0

if (arg3 f>= v5.d)
    *(entry_x8 + 0x5c) = *(arg2 + 0x5c)
    return 

int32_t x9 = *(arg1 + 0x5c)
int32_t x10 = *(arg2 + 0x5c)
int32_t x9_1

x9_1 = x9 s> x10 ? x9 : x10

*(entry_x8 + 0x5c) = x9_1
