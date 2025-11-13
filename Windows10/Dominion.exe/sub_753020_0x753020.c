// 函数: sub_753020
// 地址: 0x753020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = *(arg1 + 0x24)
free(*(arg1 + 0x6c))
int32_t ecx = data_147ded8
int32_t _Size = ebx << 2
int32_t eax

if (ecx == 0)
    eax = malloc(_Size)
else
    eax = ecx(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x80)

float xmm1 = *(arg1 + 0x4c)
int32_t eax_1 = *(arg1 + 0x60)
float xmm2 = *(arg1 + 0x50)
uint128_t xmm3 = zx.o(*(arg1 + 0x40))
float xmm0_1 = *(arg1 + 0x58) - xmm2
uint128_t xmm4 = zx.o(*(arg1 + 0x3c))
float xmm5_1 = *(arg1 + 0x54) - xmm1
int32_t edx = *(arg1 + 0x38)
int32_t ecx_1 = *(arg1 + 0x34)
*(arg1 + 0x6c) = eax
float xmm3_1 = _mm_cvtepi32_ps(xmm3)
float xmm4_1 = _mm_cvtepi32_ps(xmm4)
int32_t eax_4

if (eax_1 == 0x5a)
    int32_t edx_1 = *(arg1 + 0x48)
    float xmm3_3 = xmm3_1 / xmm5_1
    int32_t ecx_7 = *(arg1 + 0x44)
    float xmm4_9 = xmm4_1 / xmm0_1
    eax_4 = ecx_7 - *(arg1 + 0x3c) - *(arg1 + 0x34)
    int32_t ecx_8 = 0
    float xmm1_4 = xmm1 - float.s(edx_1 - *(arg1 + 0x40) - *(arg1 + 0x38)) / xmm3_3
    float xmm2_4 = xmm2 - float.s(eax_4) / xmm4_9
    
    if (ebx s> 0)
        do
            *(eax + (ecx_8 << 2)) =
                float.s(edx_1) / xmm3_3 f* *(*(arg1 + 0x68) + (ecx_8 << 2) + 4) + xmm1_4
            eax_4 = *(arg1 + 0x68)
            *(eax + (ecx_8 << 2) + 4) =
                (1f f- *(eax_4 + (ecx_8 << 2))) * float.s(ecx_7) / xmm4_9 + xmm2_4
            ecx_8 += 2
        while (ecx_8 s< ebx)
else
    float xmm4_2 = xmm4_1 / xmm5_1
    float xmm3_2 = xmm3_1 / xmm0_1
    
    if (eax_1 == 0xb4)
        int32_t ecx_5 = *(arg1 + 0x44)
        eax_4 = ecx_5 - *(arg1 + 0x3c) - *(arg1 + 0x34)
        int32_t ecx_6 = 0
        float xmm4_8 = float.s(*(arg1 + 0x48)) / xmm3_2
        
        if (ebx s> 0)
            int32_t eax_14
            
            do
                *(eax + (ecx_6 << 2)) =
                    (1f f- *(*(arg1 + 0x68) + (ecx_6 << 2))) * float.s(ecx_5) / xmm4_2 + xmm1
                    - float.s(eax_4) / xmm4_2
                eax_14 = *(arg1 + 0x68)
                *(eax + (ecx_6 << 2) + 4) =
                    (1f f- *(eax_14 + (ecx_6 << 2) + 4)) * xmm4_8 + xmm2 - float.s(edx) / xmm3_2
                ecx_6 += 2
            while (ecx_6 s< ebx)
            
            return eax_14
    else
        eax_4 = eax_1 - 0x10e
        
        if (eax_1 == 0x10e)
            float xmm5_6 = float.s(*(arg1 + 0x48)) / xmm4_2
            int32_t ecx_4 = 0
            float xmm4_6 = float.s(*(arg1 + 0x44)) / xmm3_2
            
            if (ebx s> 0)
                int32_t eax_10
                
                do
                    *(eax + (ecx_4 << 2)) = (1f f- *(*(arg1 + 0x68) + (ecx_4 << 2) + 4)) * xmm5_6
                        + xmm1 - float.s(edx) / xmm4_2
                    eax_10 = *(arg1 + 0x68)
                    *(eax + (ecx_4 << 2) + 4) =
                        xmm4_6 f* *(eax_10 + (ecx_4 << 2)) + xmm2 - float.s(ecx_1) / xmm3_2
                    ecx_4 += 2
                while (ecx_4 s< ebx)
                
                return eax_10
        else
            int32_t ecx_2 = *(arg1 + 0x48)
            eax_4 = ecx_2 - *(arg1 + 0x40) - edx
            float xmm5_4 = float.s(*(arg1 + 0x44)) / xmm4_2
            int32_t ecx_3 = 0
            
            if (ebx s> 0)
                int32_t eax_8
                
                do
                    *(eax + (ecx_3 << 2)) =
                        xmm5_4 f* *(*(arg1 + 0x68) + (ecx_3 << 2)) + xmm1 - float.s(ecx_1) / xmm4_2
                    eax_8 = *(arg1 + 0x68)
                    *(eax + (ecx_3 << 2) + 4) =
                        float.s(ecx_2) / xmm3_2 f* *(eax_8 + (ecx_3 << 2) + 4) + xmm2
                        - float.s(eax_4) / xmm3_2
                    ecx_3 += 2
                while (ecx_3 s< ebx)
                
                return eax_8

return eax_4
