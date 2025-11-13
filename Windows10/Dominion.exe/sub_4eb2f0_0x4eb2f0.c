// 函数: sub_4eb2f0
// 地址: 0x4eb2f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
float xmm0 = arg3[2]
float xmm0_4 = (xmm0 + xmm0) * 3.14159274f * 0.00277777785f * 0.5f
float xmm0_5 = sub_4ae0f0(ebp, xmm0_4)
float xmm0_7 = sub_4ae0d0(ebp, xmm0_4)
float xmm0_8 = *arg3
float xmm0_12 = (xmm0_8 + xmm0_8) * 3.14159274f * 0.00277777785f * 0.5f
float xmm0_13 = sub_4ae0f0(ebp, xmm0_12)
float xmm0_15 = sub_4ae0d0(ebp, xmm0_12)
float xmm0_16 = arg3[1]
float xmm0_20 = (xmm0_16 + xmm0_16) * 3.14159274f * 0.00277777785f * 0.5f
float xmm0_21 = sub_4ae0f0(ebp, xmm0_20)
float xmm0_23 = sub_4ae0d0(ebp, xmm0_20)
float xmm3_1 = xmm0_15 * xmm0_7
float xmm2_1 = xmm0_13 * xmm0_5
float xmm5_1 = xmm0_15 * xmm0_5
float xmm0_27 = xmm0_13 * xmm0_7
float var_14 = xmm3_1 * xmm0_23 + xmm2_1 * xmm0_21
float var_1c = xmm3_1 * xmm0_21 + xmm2_1 * xmm0_23
float var_18 = xmm5_1 * xmm0_23 - xmm0_27 * xmm0_21
*arg4 = (xmm0_27 * xmm0_23 - xmm5_1 * xmm0_21).o
return arg4
