// 函数: sub_596940
// 地址: 0x596940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg2
int32_t edi_1 = arg4 - 1
int32_t var_8 = arg2
int32_t eax_1 = edi_1 s>> 1
int32_t var_c = eax_1
int32_t ecx = esi
int32_t arg_c

if (esi s< eax_1)
    do
        int32_t edi_2 = ecx * 2
        ecx = (zx.d(sub_586690(&arg_c, *(arg3 + (edi_2 << 2) + 8), *(arg3 + (edi_2 << 2) + 4))) ^ 1)
            + 1 + edi_2
        *(arg3 + (esi << 2)) = *(arg3 + (ecx << 2))
        esi = ecx
        eax_1 = var_c
    while (ecx s< eax_1)
    
    arg2 = var_8

if (ecx == eax_1)
    int32_t eax_4 = arg4
    
    if ((eax_4.b & 1) == 0)
        *(arg3 + (esi << 2)) = *(arg3 + (eax_4 << 2) - 4)
        esi = edi_1

arg4 = arg_c

if (arg2 s< esi)
    int32_t edi_4
    
    do
        edi_4 = (esi - 1) s>> 1
        
        if (sub_586690(&arg4, *(arg3 + (edi_4 << 2)), *arg5) == 0)
            break
        
        *(arg3 + (esi << 2)) = *(arg3 + (edi_4 << 2))
        esi = edi_4
    while (var_8 s< edi_4)

int32_t result = *arg5
*(arg3 + (esi << 2)) = result
return result
