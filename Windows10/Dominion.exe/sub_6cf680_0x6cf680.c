// 函数: sub_6cf680
// 地址: 0x6cf680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_14 = 0
uint32_t result = sub_6d1370(arg1)
uint32_t result_1 = result

if (*result_1 != 0)
    int32_t eax = sub_64b0d0(result_1 + 0x40)
    int32_t var_28
    char* ecx_1
    
    if (eax.b == 0)
        char const* const var_24_1 = "FabDraw"
        var_28 = 0x4c9
        ecx_1 = "QuatIsValid(state.transform.t.r)"
    label_6cf73d:
        sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\FabDef.cpp", var_28, "FabDraw")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = sub_6d03f0(&var_14, arg2, result_1, &var_14)
    int32_t esi_1 = 0
    
    if (*(result_1 + 0x47c) s> 0)
        int32_t* edi_1 = result_1 + 0x27c
        
        while (true)
            int32_t* eax_2 = sub_6d1370(*edi_1)
            eax = sub_64b0d0(&eax_2[0x10])
            
            if (eax.b == 0)
                break
            
            result = sub_6d03f0(&var_14, arg2, eax_2, &var_14)
            esi_1 += 1
            edi_1 = &edi_1[1]
            
            if (esi_1 s>= *(result_1 + 0x47c))
                return result
        
        char const* const var_24_5 = "FabDraw"
        var_28 = 0x4ce
        ecx_1 = "QuatIsValid(addedState.transform.t.r)"
        goto label_6cf73d

return result
