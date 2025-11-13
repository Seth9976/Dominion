// 函数: sub_6e0f70
// 地址: 0x6e0f70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
float xmm1 = arg3[7]
float xmm2 = arg3[1]
float xmm0 = arg3[0xe]
float xmm0_1 = arg3[0xb]
float xmm0_2 = arg3[5]
float xmm2_1 = xmm2 * xmm1
float xmm6 = arg3[6]
float xmm7 = arg3[2]
float xmm3_1 = xmm2 * xmm6
float xmm5 = arg3[5]
float xmm3_3 = xmm7 * xmm1
float xmm5_1 = xmm5 f* arg3[3]
float xmm6_1 = xmm6 f* arg3[3]
float xmm4_1 = xmm5 * xmm7
float xmm2_7 = xmm0_2 f* arg3[0xa] f* arg3[0xf] - xmm0_2 * xmm0_1 * xmm0
    + arg3[6] f* arg3[0xb] f* arg3[0xd] - arg3[9] f* arg3[6] f* arg3[0xf]
float xmm0_17 = arg3[1]
float xmm1_9 = xmm0_17 f* arg3[0xa] f* arg3[0xf] - xmm0_17 * xmm0_1 * xmm0
    + xmm7 f* arg3[0xb] f* arg3[0xd] - arg3[9] f* xmm7 f* arg3[0xf]
float xmm0_45 = (xmm2_7 + arg3[9] f* xmm1 f* arg3[0xe] - arg3[0xa] f* xmm1 f* arg3[0xd]) f* *arg3
    - (xmm1_9 + arg3[9] f* arg3[3] f* arg3[0xe] - arg3[0xa] f* arg3[3] f* arg3[0xd]) f* arg3[4] + (
    xmm3_1 f* arg3[0xf] - xmm2_1 f* arg3[0xe] + xmm3_3 f* arg3[0xd] - xmm4_1 f* arg3[0xf]
    + xmm5_1 f* arg3[0xe] - xmm6_1 f* arg3[0xd]) f* arg3[8]
float xmm0_46 = xmm0_45 - (xmm3_1 f* arg3[0xb] - xmm2_1 f* arg3[0xa] + xmm3_3 f* arg3[9]
    - xmm4_1 f* arg3[0xb] + xmm5_1 f* arg3[0xa] - xmm6_1 f* arg3[9]) f* arg3[0xc]

if (9.99999975e-06f f> __andps_xmmxud_memxud(xmm0_46 - 0f, data_8937a0.o))
    sub_63b870(arg1, &data_801800, U"0", "C:\x\ax2017\Engine\Mat4.cpp", 0x124, "Mat4Inverse")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

float var_68[0x11]
float* eax_1 = sub_6e0ae0(&var_68, arg2, arg3, &var_68)
float xmm4_3 = 1f / xmm0_46
float xmm1_24[0x4] = *eax_1
float xmm2_11[0x4] = *(eax_1 + 0x10)
float xmm3_5[0x4] = *(eax_1 + 0x20)
float xmm5_3[0x4] = *(eax_1 + 0x30)
*arg4 = xmm1_24[0] * xmm4_3
arg4[1] = _mm_shuffle_ps(xmm1_24, xmm1_24, 0x55) * xmm4_3
float xmm0_54 = _mm_shuffle_ps(xmm1_24, xmm1_24, 0xaa) * xmm4_3
float xmm1_26 = _mm_shuffle_ps(xmm1_24, xmm1_24, 0xff) * xmm4_3
arg4[2] = xmm0_54
float xmm0_56 = xmm2_11[0] * xmm4_3
arg4[3] = xmm1_26
arg4[4] = xmm0_56
arg4[5] = _mm_shuffle_ps(xmm2_11, xmm2_11, 0x55) * xmm4_3
float xmm0_62 = _mm_shuffle_ps(xmm2_11, xmm2_11, 0xaa) * xmm4_3
float xmm2_13 = _mm_shuffle_ps(xmm2_11, xmm2_11, 0xff) * xmm4_3
arg4[6] = xmm0_62
float xmm0_64 = xmm3_5[0] * xmm4_3
arg4[7] = xmm2_13
arg4[8] = xmm0_64
arg4[9] = _mm_shuffle_ps(xmm3_5, xmm3_5, 0x55) * xmm4_3
float xmm0_70 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xaa) * xmm4_3
float xmm3_7 = _mm_shuffle_ps(xmm3_5, xmm3_5, 0xff) * xmm4_3
arg4[0xa] = xmm0_70
float xmm0_72 = xmm5_3[0] * xmm4_3
arg4[0xb] = xmm3_7
arg4[0xc] = xmm0_72
arg4[0xd] = _mm_shuffle_ps(xmm5_3, xmm5_3, 0x55) * xmm4_3
float xmm0_77 = _mm_shuffle_ps(xmm5_3, xmm5_3, 0xaa)
float xmm5_5 = _mm_shuffle_ps(xmm5_3, xmm5_3, 0xff) * xmm4_3
arg4[0xe] = xmm0_77 * xmm4_3
arg4[0xf] = xmm5_5
return arg4
