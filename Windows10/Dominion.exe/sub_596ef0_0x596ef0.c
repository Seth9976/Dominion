// 函数: sub_596ef0
// 地址: 0x596ef0
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
        int16_t* ecx_2 = arg3 + 4 + (edi_2 << 1)
        ecx = (zx.d(sub_596040(&arg_c, ecx_2, &ecx_2[-1]).b) ^ 1) + 1 + edi_2
        *(arg3 + (esi << 1)) = *(arg3 + (ecx << 1))
        esi = ecx
        eax_1 = var_c
    while (ecx s< eax_1)
    
    arg2 = var_8

if (ecx == eax_1)
    int32_t eax_4 = arg4
    
    if ((eax_4.b & 1) == 0)
        eax_4.w = *(arg3 + (eax_4 << 1) - 2)
        *(arg3 + (esi << 1)) = eax_4.w
        esi = edi_1

arg4 = arg_c

if (arg2 s< esi)
    int32_t edi_4
    
    do
        edi_4 = (esi - 1) s>> 1
        
        if (sub_596040(&arg4, arg3 + (edi_4 << 1), arg5).b == 0)
            break
        
        *(arg3 + (esi << 1)) = *(arg3 + (edi_4 << 1))
        esi = edi_4
    while (var_8 s< edi_4)

int16_t* result
result.w = *arg5
*(arg3 + (esi << 1)) = result.w
return result
