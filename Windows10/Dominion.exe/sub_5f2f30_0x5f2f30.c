// 函数: sub_5f2f30
// 地址: 0x5f2f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
*arg2 = 0
void* result = sub_5cc410(arg1, arg4, arg5, arg6, arg7)

if (result != 0)
    int32_t ecx_1 = *(result + 0x7c)
    
    if (ecx_1 != 0)
        while (true)
            uint32_t eax = zx.d(ecx_1.w)
            char const* const var_20
            int32_t var_1c_1
            char const* const var_18_1
            char* ecx_4
            
            if (eax u>= data_b809e4)
            label_5f3000:
                var_18_1 = "DataArray<struct DomGfx>::DataArrayGet"
                var_1c_1 = 0x6d
                var_20 = "C:\x\ax2017\Engine\DataArray.h"
                ecx_4 = "DataArrayTryToGet(id) != NULL"
            else
                int32_t edx_1 = eax * 0x1c30
                eax = data_b809e0
                
                if (*(edx_1 + eax + 0x1c28) != ecx_1)
                    goto label_5f3000
                
                if (*(edx_1 + eax + 0x2c) != 0)
                    var_18_1 = "AssignCardsFromPile"
                    var_1c_1 = 0x78e2
                    var_20 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx_4 = "gfx.type == DOMGFX_CARD"
                else
                    *(arg3 + (*arg2 << 2)) = *(edx_1 + eax + 0x98)
                    *arg2 += 1
                    ecx_1 = *(edx_1 + eax + 0x13c)
                    
                    if (ecx_1 == 0)
                        break
                    
                    continue
            
            sub_63b870(eax, &data_801800, ecx_4, var_20, var_1c_1, var_18_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    int32_t esi_2 = *arg2
    int32_t ebx_1 = 0
    int32_t eax_2
    int32_t edx_2
    edx_2:eax_2 = sx.q(esi_2)
    result = (eax_2 - edx_2) s>> 1
    
    if (result s> 0)
        do
            int32_t esi_3 = esi_2 - ebx_1
            int32_t ecx_3 = *(arg3 + (esi_3 << 2) - 4)
            *(arg3 + (esi_3 << 2) - 4) = *(arg3 + (ebx_1 << 2))
            *(arg3 + (ebx_1 << 2)) = ecx_3
            ebx_1 += 1
            esi_2 = *arg2
            int32_t eax_6
            int32_t edx_4
            edx_4:eax_6 = sx.q(esi_2)
            result = (eax_6 - edx_4) s>> 1
        while (ebx_1 s< result)

return result
