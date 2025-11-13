// 函数: sub_5cd7d0
// 地址: 0x5cd7d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg2 + 0x74
int32_t edx = *eax
int32_t result = 0

if (edx != 0)
    while (true)
        uint32_t eax_2 = zx.d(edx.w)
        char const* const var_18
        int32_t var_14
        char const* const var_10
        char* ecx_2
        
        if (eax_2 u>= data_b809e4)
        label_5cd845:
            var_10 = "DataArray<struct DomGfx>::DataArrayGet"
            var_14 = 0x6d
            var_18 = "C:\x\ax2017\Engine\DataArray.h"
            ecx_2 = "DataArrayTryToGet(id) != NULL"
        else
            eax_2 = eax_2 * 0x1c30 + data_b809e0
            
            if (*(eax_2 + 0x1c28) != edx)
                goto label_5cd845
            
            if (eax_2 == arg1)
                var_10 = "PileAddToken"
                var_14 = 0xd17
                var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_2 = "&curGfx != &gfx"
            else
                edx = *(eax_2 + 0x1b94)
                eax = eax_2 + 0x1b94
                result += 1
                
                if (edx == 0)
                    break
                
                continue
        
        sub_63b870(eax_2, &data_801800, ecx_2, var_18, var_14, var_10)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

*eax = *(arg1 + 0x1c28)
*(arg1 + 0x1b98) = result
return result
