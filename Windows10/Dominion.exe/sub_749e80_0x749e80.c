// 函数: sub_749e80
// 地址: 0x749e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t result = data_151345c

if (result == 0)
    return result

int32_t ecx_1 = data_151245c
int128_t var_30
int32_t ecx_2
float xmm1_3
void* eax_2

if (result != 1)
    eax_2, ecx_2 = sub_744f10(ecx_1, nullptr)
    xmm1_3 = *(eax_2 + 0x1c) f+ *(eax_2 + 0x14)
else
    int32_t eax
    eax, ecx_2 = sub_744e90(ecx_1)
    
    if (eax == 0)
        float xmm0_1[0x4] = *sub_749710(&var_30)
        xmm1_3 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55) + _mm_shuffle_ps(xmm0_1, xmm0_1, 0xff)
    else
        int32_t* ecx_3 = data_1512450
        
        if (ecx_3[1] != 0x1e)
            sub_63b870(eax, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
                "C:\x\ax2017\Engine\UIDef.cpp", 0x127, "UIDefGet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* eax_1
        eax_1, ecx_2 = sub_5af880(ecx_3)
        eax_2 = *eax_1
        xmm1_3 = *(eax_2 + 0x1c) f+ *(eax_2 + 0x14)
int32_t i = 0
var_30 = xmm1_3 * 0.5f

if (data_151345c s> 0)
    do
        void* eax_4 = sub_744f10((&data_151245c)[i], nullptr)
        float xmm4_1 = *(eax_4 + 0x14)
        float xmm2_1 = *(eax_4 + 0x1c)
        float xmm5_2 = *(eax_4 + 0x10) + 0f
        float xmm1_7 = var_30.d - (xmm4_1 + xmm2_1) * 0.5f
        float xmm4_2 = xmm4_1 + xmm1_7
        float xmm1_9
        
        if (0f <= xmm5_2)
            xmm1_9 = xmm5_2 + 0.5f
        else
            xmm1_9 = xmm5_2 - 0.5f
        
        float xmm1_11
        
        if (0f <= xmm4_2)
            xmm1_11 = xmm4_2 + 0.5f
        else
            xmm1_11 = xmm4_2 - 0.5f
        
        float xmm0_8 = *(eax_4 + 0x18) + 0f - xmm5_2
        float xmm2_3 = xmm2_1 + xmm1_7 - xmm4_2
        float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_11)))
        float xmm0_9
        
        if (0f <= xmm0_8)
            xmm0_9 = xmm0_8 + 0.5f
        else
            xmm0_9 = xmm0_8 - 0.5f
        
        float xmm1_13 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_9)))
        float xmm2_4
        
        if (0f <= xmm2_3)
            xmm2_4 = xmm2_3 + 0.5f
        else
            xmm2_4 = xmm2_3 - 0.5f
        
        i += 1
        float xmm2_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_9)))
        float var_1c_1 = xmm7_2
        float var_18_1 = xmm1_13 + xmm2_6
        float var_14_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_4))) + xmm7_2
        *(eax_4 + 0x10) = xmm2_6.o
    while (i s< data_151345c)

ecx_2.b = 1
return sub_744ce0(ecx_2)
