// 函数: sub_675230
// 地址: 0x675230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = *(arg1 + 0x1718)

if (edx != 0)
    int32_t var_14
    uint32_t result_1
    char const* const ecx
    
    if (*(arg1 + 0x171c) != 0)
        char const* const var_10 = "UI2GetNext"
        var_14 = 0x4f04
        ecx = "target.clone == false"
    label_6752da:
        sub_63b870(result_1, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_14, "UI2GetNext")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t edx_1 = *(edx + 0x189c)
    int32_t eax = 0
    
    if (edx_1 != 0)
        while (*(edx + 0x179c + (eax << 2)) != *(arg1 + 0x18c8))
            eax += 1
            
            if (eax == edx_1)
                return 0
        
        if (eax + 1 != edx_1)
            result_1 = sub_64e7a0(*(edx + 0x179c + ((eax + 1) << 2)))
            uint32_t result = result_1
            
            if (*(result + 0x171c) == 0)
                result_1 = *(result + 0x1600)
                
                if (result_1 == *(arg1 + 0x1600))
                    return result
                
                char const* const var_10_2 = "UI2GetNext"
                var_14 = 0x4f11
                ecx = "next.sourceAsset == target.sourceAsset"
            else
                char const* const var_10_1 = "UI2GetNext"
                var_14 = 0x4f10
                ecx = "next.clone == false"
            
            goto label_6752da

return 0
