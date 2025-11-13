// 函数: sub_6811e0
// 地址: 0x6811e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg4
int32_t edi = arg2
int32_t eax = ecx - 1
int32_t var_8 = edi
int32_t esi = edi
int32_t eax_1 = eax s>> 1
int32_t var_c = eax_1

if (edi s< eax_1)
    do
        int32_t esi_1 = esi * 2
        void* ecx_1 = arg3 + esi_1 * 0xc
        int32_t edx
        edx.b = *(ecx_1 + 0x20) s>= *(ecx_1 + 0x14)
        esi = esi_1 + edx + 1
        int32_t eax_4 = esi * 3
        int32_t eax_5 = edi * 3
        edi = esi
        int64_t* ecx_2 = arg3 + (eax_5 << 2)
        *ecx_2 = *(arg3 + (eax_4 << 2))
        ecx_2[1].d = *(arg3 + (eax_4 << 2) + 8)
        eax_1 = var_c
    while (esi s< eax_1)
    
    ecx = arg4

if (esi == eax_1 && (ecx.b & 1) == 0)
    int32_t eax_7 = ecx * 3
    int32_t eax_8 = edi * 3
    edi = eax
    int64_t* ecx_3 = arg3 + (eax_8 << 2)
    *ecx_3 = *(arg3 + (eax_7 << 2) - 0xc)
    ecx_3[1].d = *(arg3 + (eax_7 << 2) - 4)

if (var_8 s< edi)
    int32_t eax_11
    
    do
        eax_11 = (edi - 1) s>> 1
        int64_t* esi_2 = arg3 + eax_11 * 0xc
        
        if (esi_2[1].d s>= arg5[1].d)
            break
        
        int64_t* edx_5 = arg3 + edi * 0xc
        edi = eax_11
        *edx_5 = *esi_2
        edx_5[1].d = esi_2[1].d
    while (var_8 s< eax_11)

int64_t* ecx_8 = arg3 + edi * 0xc
*ecx_8 = *arg5
int32_t result = arg5[1].d
ecx_8[1].d = result
return result
