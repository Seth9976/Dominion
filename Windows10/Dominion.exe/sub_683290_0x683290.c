// 函数: sub_683290
// 地址: 0x683290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float var_60[0x4]
float var_50[0x4]
TEB* fsbase

if (data_1a99fd0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a99fd0)
    
    if (data_1a99fd0 == 0xffffffff)
        var_50[0] = 0x80000000
        var_50[1] = 0xbf800000
        var_50[2] = 0x80000000
        data_1a99fd4.o =
            *sub_4ac840(&var_60, &var_50, &data_7fef74, &var_60, 0x7fef20, &data_7fef14)
        __Init_thread_footer(&data_1a99fd0)

float xmm2_1 = arg3[1] f* 0.5f
float eax_6 = data_cf6664
float xmm6[0x4] = data_cf664c
float xmm3_1 = data_cf65c0 / xmm2_1
int64_t xmm0_2 = data_cf665c
float xmm1_2 = (*arg3 ^ (data_8937c0.o).d) * 0.5f
float xmm0_4 = xmm6[0] f* xmm6
float xmm2_2 = xmm2_1 * xmm3_1
float xmm4_1[0x4] = _mm_shuffle_ps(xmm6, xmm6, 0x55)
float xmm1_3 = xmm1_2 * xmm3_1
float xmm0_6 = xmm4_1[0] f* xmm4_1
float xmm5 = xmm4_1[0]
float xmm2_4[0x4] = _mm_shuffle_ps(xmm6, xmm6, 0xaa)
float xmm0_8 = xmm2_4[0] f* xmm2_4
float xmm7_1[0x4] = _mm_shuffle_ps(xmm6, xmm6, 0xff)
float xmm3_3 = xmm2_4[0] f* xmm7_1
float xmm5_1 = xmm5 f* xmm6
var_60 = xmm2_4
float xmm0_10 = xmm5_1 - xmm3_3
float xmm1_5 = xmm7_1[0] f* xmm7_1
float xmm3_5 = xmm2_4[0] f* xmm6
float xmm6_1 = xmm4_1[0]
var_50 = xmm7_1
float xmm6_2 = xmm6_1 f* xmm7_1
float xmm2_6 = data_cf664c.d * var_50[0]
float xmm3_7 = xmm2_4[0] f* xmm4_1
float xmm4_3 = xmm2_6 + xmm3_7
float xmm7_3 = xmm1_5 - xmm0_4
float xmm2_8 = data_1a99fdc
float xmm5_4 = data_1a99fd4
float xmm6_3 = var_60.d
float xmm4_8 = data_1a99fe0
float xmm7_7 = xmm4_1[0]
float xmm3_16 = data_1a99fd8
float xmm0_38 = data_cf664c.d * xmm4_8
xmm4_1[3] = var_50[0] * xmm4_8 - data_cf664c.d * xmm5_4 - xmm7_7 * xmm3_16 - xmm6_3 * xmm2_8
xmm4_1[0] = var_50[0] * xmm5_4 + xmm0_38 + xmm7_7 * xmm2_8 - xmm6_3 * xmm3_16
float xmm0_50 = var_50.d * xmm2_8
xmm4_1[1] = var_50[0] * xmm3_16 + xmm7_7 * xmm4_8 + xmm6_3 * xmm5_4 - data_cf664c.d * xmm2_8
xmm4_1[2] = xmm0_50 + xmm6_3 * xmm4_8 + (data_cf664c).d * xmm3_16 - xmm7_7 * xmm5_4
float var_3c[0x4] = xmm4_1
int64_t var_30
var_30:4.d = (xmm0_4 + xmm1_5 - xmm0_6 - xmm0_8) * xmm1_3 + xmm0_10 + xmm0_10
    + (xmm6_2 + xmm3_5) * (xmm2_2 + xmm2_2) f+ xmm0_2.d
float var_28_1 = (xmm3_3 + xmm5_1) * (xmm1_3 + xmm1_3) + xmm7_3 + xmm0_6 - xmm0_8
    + (xmm3_7 - xmm2_6) * (xmm2_2 + xmm2_2) f+ xmm0_2:4.d
float var_24 = (xmm3_5 - xmm6_2) * (xmm1_3 + xmm1_3) + xmm4_3 + xmm4_3
    + (xmm7_3 - xmm0_6 + xmm0_8) * xmm2_2 + eax_6
*arg4 = xmm3_1.o
arg4[1] = var_30.o
CookieCheckFunction(arg4)
return arg4
