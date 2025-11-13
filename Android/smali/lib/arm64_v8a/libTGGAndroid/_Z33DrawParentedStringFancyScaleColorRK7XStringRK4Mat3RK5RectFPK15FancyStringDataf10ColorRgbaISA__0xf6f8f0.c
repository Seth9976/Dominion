// 函数: _Z33DrawParentedStringFancyScaleColorRK7XStringRK4Mat3RK5RectFPK15FancyStringDataf10ColorRgbaISA_
// 地址: 0xf6f8f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (not(arg5 != 0f))
    return 

float v1 = *arg2
float v2 = *(arg2 + 4)
float v3 = *(arg2 + 8)
float v4 = *(arg2 + 0xc)
int128_t v18
v18.q = *M3I
int128_t v19
v19.d = *(M3I + 8)
int128_t v20
v20.q = *(M3I + 0xc)
int128_t v21
v21.d = *(M3I + 0x14)
float v5 = *(arg2 + 0x10)
float v6 = *(arg2 + 0x14)
float v7 = *(arg2 + 0x18)
float v16 = *(arg2 + 0x1c)
int128_t v22
v22.q = *(M3I + 0x18)
int128_t v23
v23.d = *(M3I + 0x20)
float v17 = *(arg2 + 0x20)
v18.d = v18.d f* arg5
v18:4.d = v18:4.d f* arg5
v19.d = v19.d f* arg5
v20.d = v20.d f* arg5
v20:4.d = v20:4.d f* arg5
v21.d = v21.d f* arg5
v22.d = v22.d f* arg5
v22:4.d = v22:4.d f* arg5
arg5 = v23.d f* arg5
int128_t var_30 = data_71a7f0
v23.d = v18.d f* v1
v23:4.d = v18:4.d f* v1
int128_t v24
v24.d = v20.d f* v2
v24:4.d = v20:4.d f* v2
v1 = v19.d f* v1
v2 = v21.d f* v2
int128_t v26
v26.d = v18.d f* v4
v26:4.d = v18:4.d f* v4
v4 = v19.d f* v4
v18.d = v18.d f* v7
v18:4.d = v18:4.d f* v7
v7 = v19.d f* v7
v19.d = v20.d f* v5
v19:4.d = v20:4.d f* v5
v5 = v21.d f* v5
v20.d = v20.d f* v16
v20:4.d = v20:4.d f* v16
v16 = v21.d f* v16
int128_t v25
v25.d = v22.d f* v3
v25:4.d = v22:4.d f* v3
v21.d = v22.d f* v6
v21:4.d = v22:4.d f* v6
v22.d = v22.d f* v17
v22:4.d = v22:4.d f* v17
int128_t v17_1 = vadd_f32(v23, v24)
int128_t v2_1 = vadd_f32(v26, v19)
int128_t v5_1 = vadd_f32(v18, v20)
double v16_1 = vadd_f32(v17_1, v25)
double v2_2 = vadd_f32(v2_1, v21)
double v4_1 = vadd_f32(v5_1, v22)
int32_t var_48 = 0
int32_t var_38 = 0
int32_t var_18 = 0
double var_50 = v16_1
float var_44 = v1 + v2 + arg5 * v3
double var_40 = v2_2
float var_34 = v4 + v5 + arg5 * v6
double var_20 = v4_1
float var_14 = v7 + v16 + arg5 * v17
DrawParentedStringFancy4(arg1, &var_50, arg3, arg4, zx.q(arg6), arg7)
