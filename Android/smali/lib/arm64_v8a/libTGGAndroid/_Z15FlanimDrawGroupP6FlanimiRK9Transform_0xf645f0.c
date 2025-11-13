// 函数: _Z15FlanimDrawGroupP6FlanimiRK9Transform
// 地址: 0xf645f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1
int128_t v17
x0_1, v17 = FlanimGetDef(*arg1)
float v2 = *(arg3 + 8)
float v3 = *(arg3 + 0xc)
float v0 = *arg3
float v4 = *(arg3 + 4)
float v5 = *(arg3 + 0x10)
float v18 = v2 + v2
float v20 = v4 + v4
float v1 = fconvert.s(1f)
int32_t v16 = *(arg3 + 0x1c)
v17 = data_71cfa0
v5 = v5 + v5
float v21 = v2 * v18
float v22 = v2 * v20
float v24 = v3 * v20
v20 = v4 * v20
float v19 = v3 * (v3 + v3)
float v23 = v3 * v5
v2 = v2 * v5
v3 = v18 * v3
v4 = v4 * v5
v5 = v1 - v21
v1 = v1 - v20
float var_c8 = v0 * (v24 + v2)
int32_t var_c4 = *(arg3 + 0x14)
float var_b8 = v0 * (v3 - v4)
int32_t var_b4 = *(arg3 + 0x18)
float var_b0 = v0 * (v24 - v2)
float var_ac = v0 * (v3 + v4)
float var_d0 = v0 * (v5 - v19)
float var_cc = v0 * (v22 - v23)
float var_c0 = v0 * (v22 + v23)
float var_bc = v0 * (v1 - v19)
float var_a8 = v0 * (v1 - v21)
int32_t var_a4 = v16
int128_t var_a0 = v17
int32_t x1 = *(arg1 + 0x84)
int128_t var_90
int64_t result
int128_t v0_3
int128_t v1_3
int128_t v2_3
int128_t v3_3
int128_t var_128

if (x1 == 0xffffffff)
    result, v0_3, v1_3, v2_3, v3_3 = Mat4Multiply(&var_d0, arg1 + 0x24)
    v0_3 = var_128
    int128_t var_118
    v1_3 = var_118
    int128_t var_108
    v2_3 = var_108
    int128_t var_f8
    v3_3 = var_f8
else
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    v0_1, v1_1, v2_1, v3_1 = FlanimGetCurrentTransform(arg1, x1, &var_128)
    v1_1 = *(M4I + 0x10)
    v2_1 = *(M4I + 0x20)
    v3_1 = *(M4I + 0x30)
    int128_t var_170 = *M4I
    int128_t var_160_1 = v1_1
    v0_1.d = var_128.d
    v1_1.d = var_128:4.d
    int128_t var_150_1 = v2_1
    int128_t var_140_1 = v3_1
    v0_1.d = fneg(v0_1.d)
    v1_1.d = fneg(v1_1.d)
    var_170:0xc.d = v0_1.d
    var_160_1:0xc.d = v1_1.d
    int128_t v0_2
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    v0_2, v1_2, v2_2, v3_2 = Mat4Multiply(arg1 + 0x24, &var_170)
    int128_t var_1b0 = var_90
    int128_t var_80
    int128_t var_1a0_1 = var_80
    int128_t var_70
    int128_t var_190_1 = var_70
    int128_t var_60
    int128_t var_180_1 = var_60
    result, v0_3, v1_3, v2_3, v3_3 = Mat4Multiply(&var_d0, &var_1b0)
    int128_t var_1f0
    v0_3 = var_1f0
    int128_t var_1e0
    v1_3 = var_1e0
    int128_t var_1d0
    v2_3 = var_1d0
    int128_t var_1c0
    v3_3 = var_1c0
var_90 = v0_3
int128_t var_80_1 = v1_3
int128_t var_70_1 = v2_3
int128_t var_60_1 = v3_3

if (*(x0_1 + 0x28) s>= 1)
    int64_t x25_1 = 0
    int64_t i = 0
    
    do
        void* x24_1 = *(arg1 + 0x70) + x25_1
        
        if (*(x24_1 + 0x60) == arg2)
            result = FlanimDrawLayer(arg1, i.d, &var_90)
            
            if (*(x24_1 + 0x68) != 0)
                result = AttachPointDraw(x24_1 + 0x68, arg3)
        
        i += 1
        x25_1 += 0x70
    while (i s< sx.q(*(x0_1 + 0x28)))

return result
