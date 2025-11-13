// 函数: sub_4d5590
// 地址: 0x4d5590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg2
int32_t edx = arg4
int32_t eax = esi
int32_t edi = esi
int32_t var_c = edi
int32_t ecx = edx - 1
int32_t ecx_1 = ecx s>> 1
int32_t var_14 = ecx_1

if (esi s< ecx_1)
    do
        int32_t edi_1 = eax * 2
        void* ecx_4 = ((edi_1 + 2) << 5) + arg3
        uint32_t eax_3 = zx.d(arg6(ecx_4, ecx_4 - 0x20))
        int32_t eax_4 = neg.d(eax_3)
        int32_t* esi_2 = (esi << 5) + arg3
        int32_t edi_2 = edi_1 + sbb.d(eax_4, eax_4, eax_3 != 0) + 2
        int32_t* edi_4 = (edi_2 << 5) + arg3
        *esi_2 = *edi_4
        esi_2[1] = edi_4[1]
        sub_63d850(&esi_2[2], &edi_4[2])
        esi_2[3] = edi_4[3]
        esi_2[4] = edi_4[4]
        int32_t ecx_6 = edi_4[7]
        esi_2[6] = edi_4[6]
        eax = edi_2
        esi_2[7] = ecx_6
        esi = eax
        ecx_1 = var_14
    while (eax s< ecx_1)
    
    edx = arg4
    edi = var_c

if (eax == ecx_1 && (edx.b & 1) == 0)
    int32_t edx_1 = edx << 5
    int32_t* esi_4 = (esi << 5) + arg3
    *esi_4 = *(edx_1 + arg3 - 0x20)
    esi_4[1] = *(edx_1 + arg3 - 0x1c)
    sub_63d850(&esi_4[2], arg3 - 0x18 + edx_1)
    esi_4[3] = *(edx_1 + arg3 - 0x14)
    esi_4[4] = *(edx_1 + arg3 - 0x10)
    int32_t ecx_9 = *(edx_1 + arg3 - 4)
    esi_4[6] = *(edx_1 + arg3 - 8)
    esi_4[7] = ecx_9
    esi = ecx

if (edi s< esi)
    int32_t ebx_2
    
    do
        ebx_2 = (esi - 1) s>> 1
        int32_t* edi_7 = (ebx_2 << 5) + arg3
        
        if (arg6(edi_7, arg5) == 0)
            break
        
        int32_t* esi_6 = (esi << 5) + arg3
        *esi_6 = *edi_7
        esi_6[1] = edi_7[1]
        sub_63d850(&esi_6[2], &edi_7[2])
        esi_6[3] = edi_7[3]
        esi_6[4] = edi_7[4]
        int32_t ecx_11 = edi_7[7]
        esi_6[6] = edi_7[6]
        esi_6[7] = ecx_11
        esi = ebx_2
    while (var_c s< ebx_2)

void* esi_8 = (esi << 5) + arg3
*esi_8 = *arg5
*(esi_8 + 4) = arg5[1]
sub_63d850(esi_8 + 8, &arg5[2])
*(esi_8 + 0xc) = arg5[3]
*(esi_8 + 0x10) = arg5[4]
int32_t result = arg5[6]
int32_t ecx_13 = arg5[7]
*(esi_8 + 0x18) = result
*(esi_8 + 0x1c) = ecx_13
return result
