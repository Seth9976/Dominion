// 函数: sub_6fb870
// 地址: 0x6fb870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t* esi_1 = arg2[4] + arg3
int32_t* edi_1 = *arg2 + arg3
char const* const var_20_1
int32_t var_1c_1
char const* const var_18
char* ecx_1

if (arg4 s< 0 || arg4 s>= *esi_1)
    var_18 = "DefinitionVariableArrayDeleteItem"
    var_1c_1 = 0x85
    var_20_1 = "C:\x\ax2017\Engine\DefEditor.cpp"
    ecx_1 = "position >= 0 && position < *pcount"
else
    arg1 = *(arg2[6] + 0xc)
    
    if (arg1 != 0)
        uint32_t* ebx_2 = arg1 * arg4 + *edi_1
        sub_69cb20(arg1, arg2, ebx_2, arg5)
        int32_t eax_1 = *esi_1
        
        if (eax_1 != 1)
            uint32_t count = (eax_1 - arg4 - 1) * arg1
            
            if (count s> 0)
                count = memcpy(ebx_2, ebx_2 + arg1, count)
            
            *esi_1 -= 1
            return count
        
        int32_t eax_2 = *edi_1
        
        if (eax_2 != 0)
            eax_2 = _aligned_free(eax_2)
        
        *edi_1 = 0
        *esi_1 = 0
        return eax_2
    
    var_18 = "DefinitionGetSize"
    var_1c_1 = 0x6d
    var_20_1 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_1 = "pDefMap->definitionSize != 0"

sub_63b870(arg1, &data_801800, ecx_1, var_20_1, var_1c_1, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
