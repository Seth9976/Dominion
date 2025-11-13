// 函数: sub_6dcff0
// 地址: 0x6dcff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_6dd320(arg3, arg4)
int32_t var_18
char const* const var_14
char* ecx

if (*(eax + 0x10) == 0xa)
    int32_t edx_1 = *arg2
    int32_t ecx_1 = 0
    
    if (edx_1 s> 0)
        eax = arg2[2]
        
        do
            if (*eax == arg4)
                if (eax == 0)
                    break
                
                int32_t eax_4
                eax_4.b = *(eax + 8) != 0
                return eax_4
            
            ecx_1 += 1
            eax += 0x10
        while (ecx_1 s< edx_1)
    
    if (arg4 s>= 0 && arg4 s< *(arg3 + 0x10))
        int32_t eax_3
        eax_3.b = *(*(*(arg3 + 0xc) + (arg4 << 2)) + 0x24) != 0
        return eax_3
    
    var_14 = "AttribTagGetField"
    var_18 = 0x8b
    ecx = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
else
    var_14 = "AttribMapGetBool"
    var_18 = 0x195
    ecx = "AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\AttribMap.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
