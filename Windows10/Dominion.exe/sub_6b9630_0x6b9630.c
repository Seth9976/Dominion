// 函数: sub_6b9630
// 地址: 0x6b9630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_4c
void* ecx
int128_t* eax_3 = sub_6bcb90(&var_4c, arg2, ecx, &var_4c)
int32_t edx = 0x10
int32_t ecx_1 = *(arg2 + 0x284)
int128_t xmm0 = *eax_3

if (arg3 s< 0x10)
    edx = arg3

int128_t xmm0_1 = eax_3[1]

if (edx s< 2)
    edx = 2

float xmm7_1 = arg5 / _mm_cvtepi32_ps(zx.o(edx - 1))

if (ecx_1 == 0)
label_6b972e:
    
    if (ecx_1 - edx + 1 s> 0)
        memmove(arg2 + 0x44, arg2 + (((ecx_1 - edx + 1) * 9 + 0x11) << 2), 
            (ecx_1 - (ecx_1 - edx + 1)) * 0x24)
        ecx_1 = *(arg2 + 0x284) - (ecx_1 - edx + 1)
    
    ecx_1 += 1
    *(arg2 + 0x284) = ecx_1
else
    if (edx s< 2)
        sub_63b870(2, &data_801800, "trailNumSegments >= 2", "C:\x\ax2017\Engine\Particle.cpp", 
            0x386, "RibbonUpdate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_4 = ecx_1 * 9
    float xmm5_2 = *(arg2 + (eax_4 << 2) + 0x24) f- *(arg2 + (eax_4 << 2))
    float xmm4_2 = *(arg2 + (eax_4 << 2) + 0x20) f- *(arg2 + (eax_4 << 2) - 4)
    float xmm3_2 = *(arg2 + (eax_4 << 2) + 0x28) f- *(arg2 + (eax_4 << 2) + 4)
    float xmm6_2 = xmm0_1:4.d f- *(arg2 + (eax_4 << 2) + 0x20)
    float xmm2_2 = xmm0_1:8.d f- *(arg2 + (eax_4 << 2) + 0x24)
    float xmm1_2 = xmm0_1:0xc.d f- *(arg2 + (eax_4 << 2) + 0x28)
    
    if (not(xmm5_2 * xmm5_2 + xmm4_2 * xmm4_2 + xmm3_2 * xmm3_2 <= xmm7_1 * xmm7_1)
            && not(xmm2_2 * xmm2_2 + xmm6_2 * xmm6_2 + xmm1_2 * xmm1_2 f<= 0))
        goto label_6b972e

int32_t ecx_4 = ecx_1 * 9
float xmm5_6 = xmm0:4.d
float xmm4_4 = xmm0_1.d
float xmm6_4 = xmm0:0xc.d
float xmm3_4 = xmm0:8.d
*(arg2 + (ecx_4 << 2) + 0x20) = xmm0_1:4.q
*(arg2 + (ecx_4 << 2) + 0x28) = xmm0_1:0xc.d
float xmm2_8 = xmm5_6 * xmm6_4 + xmm4_4 * xmm3_4
float xmm1_6 = xmm6_4 * xmm3_4 - xmm5_6 * xmm4_4
*(arg2 + (ecx_4 << 2) + 0x2c) = xmm2_8 + xmm2_8
*(arg2 + (ecx_4 << 2) + 0x30) = xmm1_6 + xmm1_6
*(arg2 + (ecx_4 << 2) + 0x34) =
    xmm6_4 * xmm6_4 - xmm3_4 * xmm3_4 - xmm5_6 * xmm5_6 + xmm4_4 * xmm4_4
*(arg2 + (ecx_4 << 2) + 0x38) = arg4
*(arg2 + (ecx_4 << 2) + 0x3c) = 0
uint32_t result = *(arg2 + 0x284)

if (result == edx - 1 && result s>= 2)
    uint32_t eax_12 = result * 9
    float xmm0_13 = *(arg2 + (ecx_4 << 2) + 0x24) f- *(arg2 + (eax_12 << 2))
    float xmm2_11 = *(arg2 + (ecx_4 << 2) + 0x20) f- *(arg2 + (eax_12 << 2) - 4)
    float xmm1_9 = *(arg2 + (ecx_4 << 2) + 0x28) f- *(arg2 + (eax_12 << 2) + 4)
    int32_t __saved_ebp
    float xmm0_17
    result, xmm0_17 =
        sub_4ac580(&__saved_ebp, xmm0_13 * xmm0_13 + xmm2_11 * xmm2_11 + xmm1_9 * xmm1_9)
    *(arg2 + 0x60) = xmm0_17 / xmm7_1

CookieCheckFunction(result)
return result
