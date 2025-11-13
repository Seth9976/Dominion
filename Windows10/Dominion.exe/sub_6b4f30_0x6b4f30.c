// 函数: sub_6b4f30
// 地址: 0x6b4f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = *(arg2 + 8)
int32_t eax

if (ecx == 0)
    int32_t* ecx_2 = *(arg2 + 0x50)
    
    if (ecx_2 == 0)
        return 
    
    eax = *(arg2 + 0x3c)
    
    if (eax == 0)
        int32_t eax_2 = *(arg2 + 0x54)
        int32_t* ecx_3 = *ecx_2
        int32_t var_44_1
        char* ecx_4
        char const* const edx
        int32_t var_40_2
        int128_t* eax_3
        int32_t* edx_1
        
        if (eax_2 != 0)
            int32_t var_30 = eax_2
            int32_t var_2c_1 = 0
            int32_t var_1c_1 = 0
            int32_t var_28_1 = 0
            
            if (ecx_3 != 0)
                if (ecx_3[1] != 0x22)
                    goto label_6b505c
                
                eax_3 = sub_5af880(ecx_3)
                
                if (*(eax_3 + 8) == 0)
                    goto label_6b5017
                
                var_40_2 = 1
                edx_1 = &var_30
                goto label_6b5032
            
            char const* const var_40_1 = "UI2DefGet"
            var_44_1 = 0xc16
            edx = "UI2DefGet on null pointer"
            ecx_4 = &data_874470
        else if (ecx_3 != 0)
            if (ecx_3[1] == 0x22)
                eax_3 = sub_5af880(ecx_3)
                int128_t var_14
                int128_t xmm0_7
                
                if (*(eax_3 + 8) != 0)
                    var_40_2 = 0
                    edx_1 = nullptr
                label_6b5032:
                    xmm0_7 = *sub_64f140(eax_3, edx_1, *eax_3, &var_14, var_40_2)
                else
                label_6b5017:
                    xmm0_7 = data_7ff520
                
                var_14 = xmm0_7
                *(arg2 + 0x20)
                *(arg1 + 0x28)
                return 
            
        label_6b505c:
            char const* const var_40_4 = "UI2DefGet"
            ecx_4 = "ptr->assetType == ASSET_TYPE_UI2"
            edx = &data_801800
            var_44_1 = 0xc17
        else
            char const* const var_40_3 = "UI2DefGet"
            var_44_1 = 0xc16
            edx = "UI2DefGet on null pointer"
            ecx_4 = &data_874470
        sub_63b870(eax_2, edx, ecx_4, "C:\x\ax2017\Engine\UI2.cpp", var_44_1, "UI2DefGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
else
    eax = *(arg2 + 0x3c)
    
    if (eax == 0)
        *ecx
        sub_5a0e40() f* *(arg2 + 0x20)
        *(arg1 + 0x28)
        return 

_mm_cvtepi32_ps(zx.o(eax)) f* *(arg2 + 0x20)
*(arg1 + 0x28)
