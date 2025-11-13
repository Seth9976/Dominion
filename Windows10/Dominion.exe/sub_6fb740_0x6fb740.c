// 函数: sub_6fb740
// 地址: 0x6fb740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg2
int32_t* edi_1 = *eax + arg3
int32_t* var_18 = eax
int32_t* ecx_1
int32_t esi_1

if (arg4 s>= 0)
    ecx_1 = eax[4] + arg3
    esi_1 = *ecx_1

char const* const var_38_1
int32_t var_34_1
char const* const var_30_1
char* ecx_2

if (arg4 s< 0 || arg4 s> esi_1)
    var_30_1 = "DefinitionVariableArrayInsertItems"
    var_34_1 = 0x56
    var_38_1 = "C:\x\ax2017\Engine\DefEditor.cpp"
    ecx_2 = "position >= 0 && position <= *pcount"
else
    eax = eax[6]
    int32_t result = *edi_1
    int32_t ebx_1 = eax[3]
    
    if (ebx_1 != 0)
        int32_t eax_1 = sub_687730((arg5 + esi_1) * ebx_1)
        int32_t edx_1 = arg4
        *edi_1 = eax_1
        uint32_t count_1 = ebx_1 * edx_1
        uint32_t count = (*ecx_1 - edx_1) * ebx_1
        
        if (count_1 s> 0)
            memcpy(eax_1, result, count_1)
            edx_1 = arg4
        
        if (count s> 0)
            memcpy((arg5 + edx_1) * ebx_1 + *edi_1, result + count_1, count)
        
        if (arg5 s> 0)
            int32_t i_1 = arg5
            int32_t i
            
            do
                sub_69ca00(*edi_1 + count_1, var_18)
                count_1 += ebx_1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        *ecx_1 += arg5
        
        if (result == 0)
            return result
        
        return _aligned_free(result)
    
    var_30_1 = "DefinitionGetSize"
    var_34_1 = 0x6d
    var_38_1 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_2 = "pDefMap->definitionSize != 0"

sub_63b870(eax, &data_801800, ecx_2, var_38_1, var_34_1, var_30_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
