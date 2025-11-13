// 函数: sub_4d5a00
// 地址: 0x4d5a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg2
int32_t esi = arg2
int32_t eax_2 = (arg4 - 1) s>> 1
int32_t var_c = eax_2
int32_t ecx = esi

if (esi s< eax_2)
    do
        int32_t edi_1 = ecx * 2
        uint32_t eax_4 = zx.d(arg6(*(arg3 + (edi_1 << 2) + 8), *(arg3 + (edi_1 << 2) + 4)))
        int32_t eax_5 = neg.d(eax_4)
        ecx = sbb.d(eax_5, eax_5, eax_4 != 0) + 2 + edi_1
        *(arg3 + (esi << 2)) = *(arg3 + (ecx << 2))
        esi = ecx
        eax_2 = var_c
    while (ecx s< eax_2)
    
    arg2 = var_8

if (ecx == eax_2 && (arg4.b & 1) == 0)
    *(arg3 + (esi << 2)) = *(arg3 + (arg4 << 2) - 4)
    esi = arg4 - 1

if (arg2 s< esi)
    int32_t edi_3
    
    do
        edi_3 = (esi - 1) s>> 1
        
        if (arg6(*(arg3 + (edi_3 << 2)), *arg5) == 0)
            break
        
        *(arg3 + (esi << 2)) = *(arg3 + (edi_3 << 2))
        esi = edi_3
    while (var_8 s< edi_3)

int32_t result = *arg5
*(arg3 + (esi << 2)) = result
return result
