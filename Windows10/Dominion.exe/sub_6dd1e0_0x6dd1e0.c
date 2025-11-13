// 函数: sub_6dd1e0
// 地址: 0x6dd1e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t* eax = sub_6dd320(arg3, arg5)
int32_t var_1c
char const* const var_18
char* ecx

if (eax == arg4)
    int32_t edx_1 = *arg2
    int32_t ecx_1 = 0
    
    if (edx_1 s> 0)
        eax = arg2[2]
        
        do
            if (*eax == arg5)
                if (eax != 0)
                    return eax[2]
                
                break
            
            ecx_1 += 1
            eax = &eax[4]
        while (ecx_1 s< edx_1)
    
    if (arg5 s>= 0 && arg5 s< *(arg3 + 0x10))
        return *(*(*(arg3 + 0xc) + (arg5 << 2)) + 0x24)
    
    var_18 = "AttribTagGetField"
    var_1c = 0x8b
    ecx = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
else
    var_18 = "AttribMapGetDef"
    var_1c = 0x1da
    ecx = "AttribTagGetDefMap(pAttribTable, tag) == pDefMap"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\AttribMap.cpp", var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
