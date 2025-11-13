// 函数: sub_65b1b0
// 地址: 0x65b1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm3 = *(arg2 + 0x18)
float xmm4 = *(arg2 + 0x14)
float xmm7 = *(arg2 + 0x1c)
float xmm5_1 = *(arg2 + 0x24) - xmm4
float xmm6_1 = *(arg2 + 0x2c) - xmm7
float xmm0_1 = *(arg2 + 0x18) f+ *(arg2 + 8)
float xmm1_1 = xmm4 f+ *(arg2 + 4)
float xmm2_1 = *(arg2 + 0xc) f+ *(arg2 + 0x1c)
float xmm0_3 = *(arg2 + 0x20) f+ *(arg2 + 0x10)
float xmm0_4 = *(arg2 + 0x20)
float xmm0_6 = *(arg2 + 0x28) - xmm3
float xmm3_2 = arg3[2] - *arg3
float xmm0_8 = *(arg2 + 0x30) - xmm0_4
float xmm0_10 = arg3[3] - arg3[1]
int128_t xmm0_11 = *arg3
int128_t var_50

if (arg7 != 0)
    float xmm0_28 = sub_696e90(arg7, arg5, arg7, arg3[2], xmm7, xmm6_1, *(arg2 + 4), *(arg2 + 0xc), 
        xmm1_1, xmm2_1, xmm0_11.d + xmm3_2, arg11)
    var_50:8.d = xmm0_28
    var_50.d = sub_696e90(arg7, arg7, arg5, *arg3, xmm4, xmm5_1, *(arg2 + 4), *(arg2 + 0xc), 
        xmm1_1, xmm2_1, xmm0_28 - xmm3_2, arg9)
else
    float xmm0_17 = sub_696e90(arg7, 0, arg5, *arg3, xmm4, xmm5_1, *(arg2 + 4), *(arg2 + 0xc), 
        xmm1_1, xmm2_1, xmm0_11:8.d - xmm3_2, arg9)
    var_50.d = xmm0_17
    var_50:8.d = sub_696e90(arg7, arg5, 0, arg3[2], xmm7, xmm6_1, *(arg2 + 4), *(arg2 + 0xc), 
        xmm1_1, xmm2_1, xmm0_17 + xmm3_2, arg11)

float xmm1_10 = *(arg2 + 0x10)
float xmm4_1 = *(arg2 + 8)
int32_t xmm0_48
int32_t xmm1_16

if (arg8 != 0)
    float xmm0_54 = sub_696e90(arg3, arg6, arg8, arg3[3], xmm0_4, xmm0_8, xmm4_1, xmm1_10, xmm0_1, 
        xmm0_3, var_50:4.d + xmm0_10, arg12)
    var_50:0xc.d = xmm0_54
    xmm0_48 = sub_696e90(arg3, arg8, arg6, arg3[1], xmm3, xmm0_6, *(arg2 + 8), *(arg2 + 0x10), 
        xmm0_1, xmm0_3, xmm0_54 - xmm0_10, arg10)
    xmm1_16 = var_50:0xc.d
    var_50:4.d = xmm0_48
else
    float xmm0_42 = sub_696e90(arg7, 0, arg6, arg3[1], xmm3, xmm0_6, xmm4_1, xmm1_10, xmm0_1, 
        xmm0_3, var_50:0xc.d - xmm0_10, arg10)
    var_50:4.d = xmm0_42
    xmm1_16 = sub_696e90(arg7, arg6, 0, arg3[3], xmm0_4, xmm0_8, *(arg2 + 8), *(arg2 + 0x10), 
        xmm0_1, xmm0_3, xmm0_42 + xmm0_10, arg12)
    xmm0_48 = var_50:4.d
    var_50:0xc.d = xmm1_16

if (not(var_50:8.d f< var_50.d) && not(xmm1_16 f< xmm0_48))
    *arg4 = var_50
    return arg4

*arg4 = data_7ff530
return arg4
