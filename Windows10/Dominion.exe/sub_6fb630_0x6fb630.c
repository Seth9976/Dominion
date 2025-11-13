// 函数: sub_6fb630
// 地址: 0x6fb630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* eax = arg2
int32_t* edi_1 = *eax + arg3
int32_t* var_18 = eax
int32_t ecx
int32_t* esi_2

if (arg4 s>= 0)
    esi_2 = eax[4] + arg3
    ecx = *esi_2

char const* const var_34_1
int32_t var_30_1
char const* const var_2c_1
char* ecx_1

if (arg4 s< 0 || arg4 s> ecx)
    var_2c_1 = "DefinitionVariableArrayAddItem"
    var_30_1 = 0x29
    var_34_1 = "C:\x\ax2017\Engine\DefEditor.cpp"
    ecx_1 = "position >= 0 && position <= *pcount"
else
    int32_t ebx_1 = *edi_1
    eax = *(eax[6] + 0xc)
    
    if (eax != 0)
        int32_t eax_2 = sub_687730((ecx + 1) * eax)
        int32_t* edx_1 = eax
        int32_t ecx_4 = arg4
        *edi_1 = eax_2
        uint32_t count_2 = edx_1 * ecx_4
        uint32_t count = (*esi_2 - ecx_4) * edx_1
        uint32_t count_1 = count_2
        
        if (count_1 s> 0)
            memcpy(eax_2, ebx_1, count_1)
            ecx_4 = arg4
            count_1 = count_2
            edx_1 = eax
        
        if (count s> 0)
            memcpy((ecx_4 + 1) * edx_1 + *edi_1, count_1 + ebx_1, count)
        
        int32_t result = sub_69ca00(*edi_1 + count_2, var_18)
        *esi_2 += 1
        
        if (ebx_1 == 0)
            return result
        
        return _aligned_free(ebx_1)
    
    var_2c_1 = "DefinitionGetSize"
    var_30_1 = 0x6d
    var_34_1 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_1 = "pDefMap->definitionSize != 0"

sub_63b870(eax, &data_801800, ecx_1, var_34_1, var_30_1, var_2c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
