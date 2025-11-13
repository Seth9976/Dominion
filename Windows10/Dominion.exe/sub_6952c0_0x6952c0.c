// 函数: sub_6952c0
// 地址: 0x6952c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3

if (arg6 u> 0x5f5e100)
    arg1.b = 0
else
    int32_t* eax_1 = *arg4 + arg2
    
    if (arg6 == 0)
        *eax_1 = arg6
        eax_1.b = 1
        return eax_1
    
    int32_t ebx_1 = arg4[0xa]
    int32_t ecx = *eax_1
    
    if ((ebx_1.b & 0x10) != 0)
        eax_1.b = 1
        return eax_1
    
    if ((ebx_1 & 0x100) != 0 && ecx s>= arg7)
        *eax_1 = ecx
        eax_1.b = 1
        return eax_1
    
    *eax_1 = arg3 + ecx
    int32_t eax_3 = *(arg4[6] + 0xc)
    
    if (eax_3 == 0)
        sub_63b870(eax_3, &data_801800, "pDefMap->definitionSize != 0", 
            "C:\x\ax2017\Engine\Definition.cpp", 0x6d, "DefinitionGetSize")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (eax_3 * arg6 + ecx s> arg7)
        arg1.b = 0
    else
        arg1 = arg3 + ecx
        
        if (arg1 s<= arg2)
            arg1.b = 0
        else
            arg1 = sub_6950c0(arg1, arg1, arg3, arg6, arg4, arg5, arg7)
            
            if (arg1.b == 0)
                arg1.b = 0

return arg1
