// 函数: sub_6c38e0
// 地址: 0x6c38e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg2
int32_t eax_2 = (arg4 - 1) s>> 1
int32_t var_c = eax_2
int32_t edi = esi
int32_t var_8 = edi

if (esi s< eax_2)
    do
        int32_t edi_1 = arg2 * 2
        int32_t ecx_1 = arg3 + 0x10 + (edi_1 << 3)
        uint32_t eax_5 = zx.d(arg6(ecx_1, ecx_1 - 8))
        int32_t eax_6 = neg.d(eax_5)
        arg2 = sbb.d(eax_6, eax_6, eax_5 != 0) + 2 + edi_1
        int32_t ecx_2 = *(arg3 + (arg2 << 3) + 4)
        *(arg3 + (esi << 3)) = *(arg3 + (arg2 << 3))
        eax_2 = var_c
        *(arg3 + (esi << 3) + 4) = ecx_2
        esi = arg2
    while (arg2 s< eax_2)
    
    edi = var_8

if (arg2 == eax_2 && (arg4.b & 1) == 0)
    int32_t ecx_4 = *(arg3 + (arg4 << 3) - 4)
    *(arg3 + (esi << 3)) = *(arg3 + (arg4 << 3) - 8)
    *(arg3 + (esi << 3) + 4) = ecx_4
    esi = arg4 - 1

if (edi s< esi)
    int32_t edi_3
    
    do
        edi_3 = (esi - 1) s>> 1
        
        if (arg6(arg3 + (edi_3 << 3), arg5) == 0)
            break
        
        int32_t ecx_5 = *(arg3 + (edi_3 << 3) + 4)
        *(arg3 + (esi << 3)) = *(arg3 + (edi_3 << 3))
        *(arg3 + (esi << 3) + 4) = ecx_5
        esi = edi_3
    while (var_8 s< edi_3)

int32_t result = *arg5
int32_t ecx_7 = arg5[1]
*(arg3 + (esi << 3)) = result
*(arg3 + (esi << 3) + 4) = ecx_7
return result
