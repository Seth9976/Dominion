// 函数: sub_6dd090
// 地址: 0x6dd090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_6dd320(arg3, arg4)
int32_t var_20
char const* const var_1c
char* ecx

if (*(eax + 0x10) == 4)
    int32_t edx_1 = *arg2
    int32_t ecx_1 = 0
    
    if (edx_1 s> 0)
        eax = arg2[2]
        
        do
            if (*eax == arg4)
                if (eax == 0)
                    break
                
                *(eax + 8)
                return eax
            
            ecx_1 += 1
            eax += 0x10
        while (ecx_1 s< edx_1)
    
    if (arg4 s>= 0 && arg4 s< *(arg3 + 0x10))
        int32_t eax_3 = *(*(*(arg3 + 0xc) + (arg4 << 2)) + 0x24)
        int32_t var_8 = eax_3
        return eax_3
    
    var_1c = "AttribTagGetField"
    var_20 = 0x8b
    ecx = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
else
    var_1c = "AttribMapGetFloat"
    var_20 = 0x1bd
    ecx = "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_FLOAT"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\AttribMap.cpp", var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
