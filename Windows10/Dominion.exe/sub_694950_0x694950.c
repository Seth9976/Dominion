// 函数: sub_694950
// 地址: 0x694950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg3
char eax = sub_69c520(*(arg4 + 0x18))
void* ecx_2 = arg4
void* result

if (eax == 0)
    result = *(ecx_2 + 0x18)

if (eax != 0 || *(result + 0x10) == 0xf)
    result = *(*(ecx_2 + 0x18) + 0xc)
    void* result_1 = result
    char const* const var_2c
    int32_t var_28_1
    char const* const var_24_1
    char* ecx_3
    
    if (result == 0)
        var_24_1 = "DefinitionGetSize"
        var_28_1 = 0x6d
        var_2c = "C:\x\ax2017\Engine\Definition.cpp"
        ecx_3 = "pDefMap->definitionSize != 0"
    label_694a49:
        sub_63b870(result, &data_801800, ecx_3, var_2c, var_28_1, var_24_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* result_2 = nullptr
    
    if (arg2 s> 0)
        while (true)
            void* edx = *(ecx_2 + 0x18)
            int32_t* eax_2 = *(edx + 0x10)
            
            if (eax_2 != 0xf)
                if (eax_2 != 8)
                    result = eax_2 - 1
                    
                    if (result u<= 0x10)
                        break
                    
                    sub_694da0(result, edx, edi, arg5, arg6)
                else
                    char* ecx_5 = &data_801800
                    
                    if ((*(ecx_2 + 0x28) & 0x10) == 0)
                        ecx_5 = *edi
                    
                    sub_694890(eax_2, arg6[1] + *arg6, ecx_5, arg6)
                
                ecx_2 = arg4
            else
                void* eax_3 = *edi
                
                if (eax_3 != 0)
                    char* ecx_4 = &data_801800
                    int32_t* eax_4 = *(eax_3 + 0x20)
                    
                    if (eax_4 != 0)
                        ecx_4 = eax_4
                    
                    sub_694890(eax_4, arg6[1] + *arg6, ecx_4, arg6)
                    ecx_2 = arg4
            
            edi += result_1
            arg6[1] += result_1
            result = result_2 + 1
            result_2 = result
            
            if (result s>= arg2)
                return result
        
        var_24_1 = "DefBinSerializeArray"
        var_28_1 = 0x1aa
        var_2c = "C:\x\ax2017\Engine\DefBin.cpp"
        ecx_3 = "!DefTypeIsBuiltIn(pField->pSubDefMap)"
        goto label_694a49

return result
