// 函数: sub_4f7550
// 地址: 0x4f7550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg4
int32_t esi = arg2
int32_t eax = ecx - 1
int32_t var_8 = esi
int32_t edi = esi
int32_t eax_1 = eax s>> 1
int32_t var_10 = eax_1

if (esi s< eax_1)
    do
        int32_t edx = edi * 2
        int32_t* ecx_1 = arg3 + (edx + 2) * 0xc
        int32_t eax_5
        eax_5.b = *ecx_1 s>= ecx_1[-3]
        int32_t eax_6 = eax_5 + edx + 1
        edi = eax_6
        int32_t eax_7 = eax_6 * 3
        int32_t eax_8 = esi * 3
        esi = edi
        int64_t* ecx_2 = arg3 + (eax_8 << 2)
        *ecx_2 = *(arg3 + (eax_7 << 2))
        ecx_2[1].d = *(arg3 + (eax_7 << 2) + 8)
        eax_1 = var_10
    while (edi s< eax_1)
    
    ecx = arg4

if (edi == eax_1 && (ecx.b & 1) == 0)
    int32_t eax_10 = ecx * 3
    int32_t eax_11 = esi * 3
    esi = eax
    int64_t* ecx_3 = arg3 + (eax_11 << 2)
    *ecx_3 = *(arg3 + (eax_10 << 2) - 0xc)
    ecx_3[1].d = *(arg3 + (eax_10 << 2) - 4)

if (var_8 s< esi)
    int32_t eax_14
    
    do
        eax_14 = (esi - 1) s>> 1
        int32_t* edi_1 = arg3 + eax_14 * 0xc
        
        if (*edi_1 s>= *arg5)
            break
        
        int64_t* edx_5 = arg3 + esi * 0xc
        esi = eax_14
        *edx_5 = *edi_1
        edx_5[1].d = edi_1[2]
    while (var_8 s< eax_14)

int64_t* ecx_8 = arg3 + esi * 0xc
*ecx_8 = *arg5
int32_t result = arg5[2]
ecx_8[1].d = result
return result
