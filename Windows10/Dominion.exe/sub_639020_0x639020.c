// 函数: sub_639020
// 地址: 0x639020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2
int32_t* edx = arg4
int32_t edi = arg3
int32_t var_c = ebx
void* ecx = edx - 1
int32_t var_8 = edi
int32_t eax = ebx
int32_t ecx_1 = ecx s>> 1
int32_t var_14 = ecx_1

if (ebx s< ecx_1)
    do
        int32_t esi_1 = eax * 2
        int32_t ecx_2 = edi + (esi_1 + 2) * 0xc
        uint32_t eax_5 = zx.d(arg6(ecx_2, ecx_2 - 0xc))
        int32_t eax_6 = neg.d(eax_5)
        int32_t eax_8 = sbb.d(eax_6, eax_6, eax_5 != 0) + esi_1 + 2
        int32_t* edi_1 = edi + eax_8 * 0xc
        int32_t* esi_3 = var_8 + ebx * 0xc
        *esi_3 = *edi_1
        sub_63d850(&esi_3[1], &edi_1[1])
        ecx_1 = var_14
        edi = var_8
        esi_3[2] = edi_1[2]
        eax = eax_8
        ebx = eax
    while (eax s< ecx_1)
    
    edx = arg4

if (eax == ecx_1 && (edx.b & 1) == 0)
    void* edi_2 = edi + edx * 0xc
    int32_t* esi_4 = var_8 + ebx * 0xc
    *esi_4 = *(edi_2 - 0xc)
    sub_63d850(&esi_4[1], edi_2 - 8)
    ebx = ecx
    esi_4[2] = *(edi_2 - 4)

if (var_c s< ebx)
    int32_t esi_6
    
    do
        esi_6 = (ebx - 1) s>> 1
        int32_t* eax_20 = var_8 + esi_6 * 0xc
        
        if (arg6(eax_20, arg5) == 0)
            break
        
        int32_t* edi_4 = var_8 + ebx * 0xc
        *edi_4 = *eax_20
        sub_63d850(&edi_4[1], &eax_20[1])
        ebx = esi_6
        edi_4[2] = eax_20[2]
    while (var_c s< esi_6)

int32_t* esi_7 = var_8 + ebx * 0xc
*esi_7 = *arg5
sub_63d850(&esi_7[1], &arg5[1])
int32_t result = arg5[2]
esi_7[2] = result
return result
