// 函数: sub_100de3c
// 地址: 0x100de3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_70 = arg13.q
int64_t var_68 = arg12.q
float v13 = arg6
int32_t x20 = arg3
float v9 = arg10
float v10 = arg9
float v11 = arg8
float v12 = arg7
int32_t x22

x22 = arg3 s> 0x11 ? arg3 : 0x11

int64_t v8
v8.d = fconvert.s(0.5f)
float var_24 = arg11

while (x22 != x20)
    arg6 = v13 - arg4
    arg7 = v12 - arg5
    arg8 = v11 - v13
    arg9 = v10 - v12
    arg10 = v9 - v11
    arg11 = var_24 - v10
    float v16 = v9 - arg4
    float v17 = var_24 - arg5
    arg6 = arg6 * arg6 + arg7 * arg7
    arg7 = arg8 * arg8 + arg9 * arg9
    arg9 = sqrt(v16 * v16 + v17 * v17)
    arg6 = sqrt(arg10 * arg10 + arg11 * arg11) + sqrt(arg6) + sqrt(arg7)
    
    if (arg6 * arg6 - arg9 * arg9 <= arg14)
        if (arg1 != 0)
            float* x8_2 = arg1 + (sx.q(*arg2) << 3)
            *x8_2 = v9
            x8_2[1] = var_24
        
        *arg2 += 1
        break
    
    arg8 = (v13 + v11) f* v8.d
    arg9 = (v12 + v10) f* v8.d
    v11 = (v11 + v9) f* v8.d
    v10 = (v10 + var_24) f* v8.d
    v16 = arg8 + v11
    v17 = arg9 + v10
    arg8 = ((arg4 + v13) f* v8.d + arg8) f* v8.d
    arg9 = ((arg5 + v12) f* v8.d + arg9) f* v8.d
    v13 = v16 f* v8.d
    v12 = v17 f* v8.d
    arg12.d = (arg8 + v13) f* v8.d
    arg13.d = (arg9 + v12) f* v8.d
    x20 += 1
    float var_80_1 = arg14
    sub_100de3c(arg1, arg2, zx.q(x20))
    arg4 = arg12.d
    arg5 = arg13.d

arg13.q = var_70
arg12.q = var_68
