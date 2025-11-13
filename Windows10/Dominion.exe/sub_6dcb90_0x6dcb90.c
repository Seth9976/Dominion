// 函数: sub_6dcb90
// 地址: 0x6dcb90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_6dd320(arg3, arg2)
void* edx = eax
int32_t ecx = *(edx + 0x10)
int32_t* ebx_1

if (ecx != 8)
    if (ecx s> 0 && ecx s< 0x12)
        return eax
    
    if (arg2 s>= 0 && arg2 s< *(arg3 + 0x10))
        ebx_1 = arg4
        eax = *(*(arg3 + 0xc) + (arg2 << 2))
        int32_t ecx_2 = *ebx_1
        
        if (ecx_2 == *(eax + 0x24))
            return eax
        
        eax = sub_69cee0(ecx_2, edx)
    label_6dcc09:
        ebx_1[1] = 0
        *ebx_1 = 0
        return eax
else if (arg2 s>= 0 && arg2 s< *(arg3 + 0x10))
    ebx_1 = arg4
    eax = *(*(arg3 + 0xc) + (arg2 << 2))
    int32_t ecx_1 = *ebx_1
    
    if (ecx_1 == *(eax + 0x24))
        return eax
    
    if (ecx_1 == 0)
        goto label_6dcc09
    
    int32_t eax_2 = _aligned_free(ecx_1)
    ebx_1[1] = 0
    *ebx_1 = 0
    return eax_2
sub_63b870(eax, &data_801800, "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
    "C:\x\ax2017\Engine\AttribMap.cpp", 0x8b, "AttribTagGetField")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
