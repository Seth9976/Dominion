// 函数: sub_ef5620
// 地址: 0xef5620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 != 0)
    int128_t v0 = *arg5
    int128_t v1 = arg5[1]
    *arg5 = *arg6 + v0.q
    *(arg5 + 8) = arg6[1] + v0:8.q
    arg5[1].q = arg6[2] + v1.q
    int64_t x9_4 = arg5[2].q
    *(arg5 + 0x18) = arg6[3] + v1:8.q
    arg5[2].q = arg6[4] + x9_4
    int128_t v2_1 = v0 - *arg6
    v0 = data_71cbe0
    int128_t v3_1 = v1 - *(arg6 + 0x10)
    v1.q = 0x3ffffffffffff8
    v1:8.q = 0x3ffffffffffff8
    int64_t x8_13 = x9_4 - arg6[4] - -0x3ffffffffffff8
    *arg6 = v2_1 + v0
    *(arg6 + 0x10) = v3_1 + v1
    arg6[4] = x8_13
    
    if (arg7 != 0)
        int128_t v2_2 = *arg7
        int128_t v3_2 = arg7[1]
        *arg7 = *arg8 + v2_2.q
        *(arg7 + 8) = arg8[1] + v2_2:8.q
        arg7[1].q = arg8[2] + v3_2.q
        int64_t x9_8 = arg7[2].q
        *(arg7 + 0x18) = arg8[3] + v3_2:8.q
        arg7[2].q = arg8[4] + x9_8
        int128_t v1_1 = v3_2 - *(arg8 + 0x10) + v1
        int64_t x8_26 = x9_8 - arg8[4] - -0x3ffffffffffff8
        *arg8 = v2_2 - *arg8 + v0
        *(arg8 + 0x10) = v1_1
        arg8[4] = x8_26
        int64_t var_100
        sub_d0bf84(&var_100, arg7, arg6)
        int64_t var_128
        sub_d0bf84(&var_128, arg8, arg5)
        int64_t x8_27 = var_100
        int64_t x13 = var_128
        var_100 = x13 + x8_27
        int64_t var_120
        int64_t var_f8
        int64_t var_f8_1 = var_120 + var_f8
        int64_t var_118
        int64_t var_f0
        int64_t var_f0_1 = var_118 + var_f0
        int64_t var_110
        int64_t var_e8
        int64_t var_e8_1 = var_110 + var_e8
        int64_t var_108
        int64_t var_e0
        int64_t var_e0_1 = var_108 + var_e0
        var_128 = x8_27 - -0x3fffffffffff68 - x13
        int64_t var_120_1 = var_f8 - var_120 - -0x3ffffffffffff8
        int64_t var_118_1 = var_f0 - var_118 - -0x3ffffffffffff8
        int64_t var_110_1 = var_e8 - var_110 - -0x3ffffffffffff8
        int64_t var_108_1 = var_e0 - var_108 - -0x3ffffffffffff8
        sub_ef5a0c(arg3, &var_100, 1)
        void var_150
        sub_ef5a0c(&var_150, &var_128, 1)
        sub_d0bf84(arg4, &var_150, arg9)
        int64_t var_b0
        sub_ef5a0c(&var_b0, arg5, 1)
        int64_t var_d8
        sub_ef5a0c(&var_d8, arg6, 1)
        sub_d0bf84(arg1, &var_b0, &var_d8)
        int64_t x11_3 = var_b0
        int64_t x13_2 = x11_3 - -0x3fffffffffff68 - var_d8
        var_d8 = x13_2
        int64_t var_d0
        int64_t var_a8
        int64_t var_d0_1 = var_a8 - var_d0 - -0x3ffffffffffff8
        int64_t var_c8
        int64_t var_a0
        int64_t var_c8_1 = var_a0 - var_c8 - -0x3ffffffffffff8
        int64_t var_c0
        int64_t var_98
        int64_t var_c0_1 = var_98 - var_c0 - -0x3ffffffffffff8
        int64_t var_b8
        int64_t var_90
        int64_t var_b8_1 = var_90 - var_b8 - -0x3ffffffffffff8
        int64_t x13_4 = (x13_2 & 0xffffffff) * 0x1db41
        int64_t x14_6 = ((var_a8 - var_d0 - -0x3ffffffffffff8) & 0xffffffff) * 0x1db41
        int64_t x15_6 = ((var_a0 - var_c8 - -0x3ffffffffffff8) & 0xffffffff) * 0x1db41
        int64_t x16_6 = ((var_98 - var_c0 - -0x3ffffffffffff8) & 0xffffffff) * 0x1db41
        int64_t x17_6 = ((var_90 - var_b8 - -0x3ffffffffffff8) & 0xffffffff) * 0x1db41
        int64_t x0_9 = (x13_2 u>> 0x20) * 0x1db41 + (x13_4 u>> 0x20)
        int64_t x0_11 = (x0_9 u>> 0x20 << 0x40 | x0_9 << 0x20) u>> 0x33
        int64_t x1_12 =
            ((var_a8 - var_d0 - -0x3ffffffffffff8) u>> 0x20) * 0x1db41 + (x14_6 u>> 0x20)
        int64_t x14_7 = (0xffffffff & x14_6) | (0xffffffff & x1_12) << 0x20
        uint64_t x1_13 = x1_12 u>> 0x20
        int64_t x14_8 = x14_7 + x0_11
        int64_t x2_6 = ((var_a0 - var_c8 - -0x3ffffffffffff8) u>> 0x20) * 0x1db41 + (x15_6 u>> 0x20)
        uint64_t x0_12
        
        if (x14_7 + x0_11 u< x14_7)
            x0_12 = x1_13 + 1
        else
            x0_12 = x1_13
        
        int64_t x15_7 = (0xffffffff & x15_6) | (0xffffffff & x2_6) << 0x20
        int64_t x14_9 = (x0_12 << 0x40 | x14_8) u>> 0x33
        uint64_t x2_7 = x2_6 u>> 0x20
        int64_t x14_10 = x14_9 + x15_7
        int64_t x3_2 = ((var_98 - var_c0 - -0x3ffffffffffff8) u>> 0x20) * 0x1db41 + (x16_6 u>> 0x20)
        uint64_t x15_8
        
        if (x14_9 + x15_7 u< x14_9)
            x15_8 = x2_7 + 1
        else
            x15_8 = x2_7
        
        int64_t x16_7 = (0xffffffff & x16_6) | (0xffffffff & x3_2) << 0x20
        int64_t x14_11 = (x15_8 << 0x40 | x14_10) u>> 0x33
        uint64_t x3_3 = x3_2 u>> 0x20
        int64_t x14_12 = x14_11 + x16_7
        int64_t x4_2 = ((var_90 - var_b8 - -0x3ffffffffffff8) u>> 0x20) * 0x1db41 + (x17_6 u>> 0x20)
        uint64_t x15_9
        
        if (x14_11 + x16_7 u< x14_11)
            x15_9 = x3_3 + 1
        else
            x15_9 = x3_3
        
        int64_t x17_7 = (0xffffffff & x17_6) | (0xffffffff & x4_2) << 0x20
        int64_t x14_13 = (x15_9 << 0x40 | x14_12) u>> 0x33
        uint64_t x4_3 = x4_2 u>> 0x20
        int64_t x14_14 = x14_13 + x17_7
        int64_t var_78 = (x14_10 & 0x7ffffffffffff) + var_a0
        int64_t var_70 = (x14_12 & 0x7ffffffffffff) + var_98
        uint64_t x9_14
        
        if (x14_13 + x17_7 u< x14_13)
            x9_14 = x4_3 + 1
        else
            x9_14 = x4_3
        
        int64_t var_88 = ((x13_4 & 0xffffffff) | (0x7ffff & x0_9) << 0x20) + x11_3
            + ((x9_14 << 0x40 | x14_14) u>> 0x33) * 0x13
        int64_t var_80 = (x14_8 & 0x7ffffffffffff) + var_a8
        int64_t var_68 = (x14_14 & 0x7ffffffffffff) + var_90
        return sub_d0bf84(arg2, &var_d8, &var_88)

int64_t x0_16
int64_t* x1_16
int64_t x2_9
x0_16, x1_16, x2_9 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return sub_ef5a0c(x0_16, x1_16, x2_9) __tailcall
