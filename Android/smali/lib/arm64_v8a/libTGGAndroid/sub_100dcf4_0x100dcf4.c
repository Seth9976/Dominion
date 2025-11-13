// 函数: sub_100dcf4
// 地址: 0x100dcf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_50 = v12
int64_t var_40 = arg14.q
int64_t var_38 = arg13.q
int64_t var_30 = arg12.q
int64_t var_28 = arg11.q

if (arg3 s<= 0x10)
    arg11 = arg10
    int128_t v7_1
    v7_1:4.d = arg6
    int128_t v2
    v2:4.d = arg4
    arg10:4.d = arg8.d
    int128_t v3_1 = vadd_f32(vadd_f32(v7_1, v7_1), v2)
    arg13.d = fconvert.s(0.25f)
    arg13:4.d = fconvert.s(0.25f)
    arg14.d = 0x3f000000
    arg14:4.d = 0x3f000000
    int128_t v2_1 = vadd_f32(arg10, v2)
    int128_t v3_2 = vadd_f32(v3_1, arg10)
    int128_t v2_2 = vmul_f32(v2_1, arg14, 0)
    int128_t v4 = vmul_f32(v3_2, arg13, 0)
    int64_t x20_1 = arg1
    int32_t i = arg3 + 1
    int128_t v2_3 = vsub_f32(v2_2, v4)
    
    do
        double v2_4 = vmul_f32(v2_3, v2_3, 0)
        v2_4.d = v2_4.d f+ v2_4:4.d
        
        if (v2_4.d f<= arg11.d)
            if (x20_1 != 0)
                int32_t* x8_2 = x20_1 + (sx.q(*arg2) << 3)
                *x8_2 = arg8.o.d
                x8_2[1] = arg9.d
            
            *arg2 += 1
            break
        
        arg12.d = v4:4.d
        int128_t v0
        int128_t v3_3
        int128_t v4_1
        arg1, v0, v3_3, v4_1 = sub_100dcf4(x20_1, arg2, zx.q(i))
        i += 1
        int128_t v0_1 = vadd_f32(v7_1, arg10)
        int128_t v2_5 = vadd_f32(v4, arg10)
        v7_1 = vmul_f32(v0_1, arg14, 0)
        int128_t v0_2 = vmul_f32(v2_5, arg14, 0)
        v3_2 = vmul_f32(vadd_f32(vadd_f32(v4, vadd_f32(v7_1, v7_1)), arg10), arg13, 0)
        v2_3 = vsub_f32(v0_2, v3_2)
        v4 = v3_2
    while (i != 0x12)

arg12.q = var_30
arg11.q = var_28
arg14.q = var_40
arg13.q = var_38
