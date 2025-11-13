// 函数: sub_596d90
// 地址: 0x596d90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg3
int32_t ecx = arg4
int32_t edi = arg2
int32_t var_8 = ebx
int32_t eax = ecx - 1
int32_t var_c = edi
int32_t esi = edi
int32_t eax_1 = eax s>> 1
int32_t var_10 = eax_1

if (edi s< eax_1)
    do
        int32_t esi_1 = esi * 2
        int32_t ecx_2 = ebx + (esi_1 + 2) * 0x1c
        uint32_t eax_6 = zx.d(arg6(ecx_2, ecx_2 - 0x1c))
        int32_t eax_7 = neg.d(eax_6)
        esi = esi_1 + sbb.d(eax_7, eax_7, eax_6 != 0) + 2
        int32_t eax_11 = esi * 7
        void* edx = ebx + (eax_11 << 2)
        int32_t eax_13 = edi * 7
        edi = esi
        int128_t* ecx_3 = ebx + (eax_13 << 2)
        *ecx_3 = *(ebx + (eax_11 << 2))
        ecx_3[1].q = *(edx + 0x10)
        *(ecx_3 + 0x18) = *(edx + 0x18)
        eax_1 = var_10
    while (esi s< eax_1)
    
    ecx = arg4

if (esi == eax_1 && (ecx.b & 1) == 0)
    int32_t eax_16 = ecx * 7
    void* edx_1 = ebx + (eax_16 << 2)
    int32_t eax_18 = edi * 7
    edi = eax
    int128_t* ecx_4 = ebx + (eax_18 << 2)
    *ecx_4 = *(ebx + (eax_16 << 2) - 0x1c)
    ecx_4[1].q = *(edx_1 - 0xc)
    *(ecx_4 + 0x18) = *(edx_1 - 4)

if (var_c s< edi)
    int32_t esi_3
    
    do
        esi_3 = (edi - 1) s>> 1
        int128_t* ebx_1 = ebx + esi_3 * 0x1c
        
        if (arg6(ebx_1, arg5) == 0)
            break
        
        int32_t eax_24 = edi * 7
        edi = esi_3
        int128_t* ecx_6 = var_8 + (eax_24 << 2)
        *ecx_6 = *ebx_1
        ecx_6[1].q = ebx_1[1].q
        ebx = var_8
        *(ecx_6 + 0x18) = *(ebx_1 + 0x18)
    while (var_c s< esi_3)
    ebx = var_8

int128_t* ecx_7 = ebx + edi * 0x1c
*ecx_7 = *arg5
ecx_7[1].q = arg5[1].q
int32_t result = *(arg5 + 0x18)
*(ecx_7 + 0x18) = result
return result
