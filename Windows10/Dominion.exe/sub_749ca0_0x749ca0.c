// 函数: sub_749ca0
// 地址: 0x749ca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
float (* result)[0x4] = data_151345c

if (result != 0)
    int32_t ecx_1 = data_151245c
    int128_t var_30
    float xmm1_3
    
    if (result != 1)
        result = sub_744f10(ecx_1, nullptr)
        xmm1_3 = (*result)[6] + result[1][0]
    else
        int32_t eax = sub_744e90(ecx_1)
        
        if (eax == 0)
            result = sub_749710(&var_30)
            float xmm0_1[0x4] = *result
            xmm1_3 = _mm_shuffle_ps(xmm0_1, xmm0_1, 0xaa) f+ xmm0_1
        else
            int32_t* ecx_2 = data_1512450
            
            if (ecx_2[1] != 0x1e)
                sub_63b870(eax, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
                    "C:\x\ax2017\Engine\UIDef.cpp", 0x127, "UIDefGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            result = *sub_5af880(ecx_2)
            xmm1_3 = (*result)[6] + result[1][0]
    
    int32_t i = 0
    var_30 = xmm1_3 * 0.5f
    
    if (data_151345c s> 0)
        do
            void* eax_2 = sub_744f10((&data_151245c)[i], nullptr)
            float xmm5_1 = *(eax_2 + 0x10)
            float xmm2_1 = *(eax_2 + 0x18)
            float xmm4_2 = *(eax_2 + 0x14) + 0f
            float xmm1_7 = var_30.d - (xmm5_1 + xmm2_1) * 0.5f
            float xmm5_2 = xmm5_1 + xmm1_7
            float xmm1_9
            
            if (0f <= xmm5_2)
                xmm1_9 = xmm5_2 + 0.5f
            else
                xmm1_9 = xmm5_2 - 0.5f
            
            result = int.d(xmm1_9)
            float xmm1_11
            
            if (0f <= xmm4_2)
                xmm1_11 = xmm4_2 + 0.5f
            else
                xmm1_11 = xmm4_2 - 0.5f
            
            float xmm2_3 = xmm2_1 + xmm1_7 - xmm5_2
            float xmm0_7 = *(eax_2 + 0x1c) + 0f - xmm4_2
            float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_11)))
            float xmm2_4
            
            if (0f <= xmm2_3)
                xmm2_4 = xmm2_3 + 0.5f
            else
                xmm2_4 = xmm2_3 - 0.5f
            
            float xmm1_13 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_4)))
            float xmm0_8
            
            if (0f <= xmm0_7)
                xmm0_8 = xmm0_7 + 0.5f
            else
                xmm0_8 = xmm0_7 - 0.5f
            
            i += 1
            float xmm2_6 = _mm_cvtepi32_ps(zx.o(result))
            float var_1c_1 = xmm7_2
            float var_18_1 = xmm1_13 + xmm2_6
            float var_14_1 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_8))) + xmm7_2
            *(eax_2 + 0x10) = xmm2_6.o
        while (i s< data_151345c)

return result
