// 函数: sub_749930
// 地址: 0x749930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t result = data_151345c

if (result == 0)
    return result

int32_t ecx_1 = data_151245c
char* ecx_2
int32_t xmm0_1

if (result != 1)
    void* eax_2
    eax_2, ecx_2 = sub_744f10(ecx_1, nullptr)
    xmm0_1 = *(eax_2 + 0x14)
else
    int32_t eax
    eax, ecx_2 = sub_744e90(ecx_1)
    
    if (eax == 0)
        xmm0_1 = (zx.o(0)).d
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
        xmm0_1 = *(*eax_1 + 0x14)

int32_t i = 0

if (data_151345c s> 0)
    do
        char* eax_3 = sub_744f10((&data_151245c)[i], nullptr)
        float xmm0_3 = xmm0_1 f- *(eax_3 + 0x14)
        float xmm5_2 = *(eax_3 + 0x10) + 0f
        float xmm1_2 = *(eax_3 + 0x18) + 0f
        float xmm4_2 = xmm0_3 f+ *(eax_3 + 0x14)
        float xmm0_4 = xmm0_3 f+ *(eax_3 + 0x1c)
        float xmm3_2
        
        if (0f <= xmm5_2)
            xmm3_2 = xmm5_2 + 0.5f
        else
            xmm3_2 = xmm5_2 - 0.5f
        
        float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_2)))
        float xmm3_4
        
        if (0f <= xmm4_2)
            xmm3_4 = xmm4_2 + 0.5f
        else
            xmm3_4 = xmm4_2 - 0.5f
        
        float xmm1_3 = xmm1_2 - xmm5_2
        float xmm0_5 = xmm0_4 - xmm4_2
        float xmm3_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_4)))
        float xmm1_4
        
        if (0f <= xmm1_3)
            xmm1_4 = xmm1_3 + 0.5f
        else
            xmm1_4 = xmm1_3 - 0.5f
        
        float xmm1_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_4)))
        float xmm0_6
        
        if (0f <= xmm0_5)
            xmm0_6 = xmm0_5 + 0.5f
        else
            xmm0_6 = xmm0_5 - 0.5f
        
        i += 1
        float var_2c_1 = xmm3_6
        float var_28_1 = xmm1_6 + xmm7_2
        float var_24_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_6))) + xmm3_6
        *(eax_3 + 0x10) = xmm7_2.o
    while (i s< data_151345c)

ecx_2.b = 1
return sub_744ce0(ecx_2)
