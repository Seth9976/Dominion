// 函数: sub_6393e0
// 地址: 0x6393e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg2
int32_t edx = arg3
int32_t ecx = arg4
int32_t esi = edi
int32_t var_8 = edx
int32_t var_c = edi
int32_t eax = ecx - 1
int32_t ebx_1 = eax s>> 1

if (edi s< ebx_1)
    do
        int32_t esi_1 = esi * 2
        int32_t ecx_2 = edx + (esi_1 + 2) * 0x38
        edx = var_8
        uint32_t eax_5 = zx.d(arg6(ecx_2, ecx_2 - 0x38))
        int32_t eax_6 = neg.d(eax_5)
        esi = esi_1 + sbb.d(eax_6, eax_6, eax_5 != 0) + 2
        int32_t eax_10 = esi * 7
        void* ecx_3 = edx + (eax_10 << 3)
        int32_t eax_12 = edi * 7
        edi = esi
        *(edx + (eax_12 << 3)) = *(edx + (eax_10 << 3))
        *(edx + (eax_12 << 3) + 0x10) = *(ecx_3 + 0x10)
        *(edx + (eax_12 << 3) + 0x20) = *(ecx_3 + 0x20)
        *(edx + (eax_12 << 3) + 0x30) = *(ecx_3 + 0x30)
    while (esi s< ebx_1)
    
    ecx = arg4

if (esi == ebx_1 && (ecx.b & 1) == 0)
    int32_t eax_14 = ecx * 7
    void* ecx_4 = edx + (eax_14 << 3)
    int32_t eax_16 = edi * 7
    edi = eax
    *(edx + (eax_16 << 3)) = *(edx + (eax_14 << 3) - 0x38)
    *(edx + (eax_16 << 3) + 0x10) = *(ecx_4 - 0x28)
    *(edx + (eax_16 << 3) + 0x20) = *(ecx_4 - 0x18)
    *(edx + (eax_16 << 3) + 0x30) = *(ecx_4 - 8)

if (var_c s< edi)
    int32_t esi_3
    
    do
        esi_3 = (edi - 1) s>> 1
        int128_t* ebx_2 = edx + esi_3 * 0x38
        edx = var_8
        
        if (arg6(ebx_2, arg5) == 0)
            break
        
        int32_t eax_21 = edi * 7
        edi = esi_3
        *(edx + (eax_21 << 3)) = *ebx_2
        *(edx + (eax_21 << 3) + 0x10) = ebx_2[1]
        *(edx + (eax_21 << 3) + 0x20) = ebx_2[2]
        *(edx + (eax_21 << 3) + 0x30) = ebx_2[3].q
    while (var_c s< esi_3)

int32_t result = edi * 7
*(edx + (result << 3)) = *arg5
*(edx + (result << 3) + 0x10) = arg5[1]
*(edx + (result << 3) + 0x20) = arg5[2]
*(edx + (result << 3) + 0x30) = arg5[3].q
return result
