// 函数: sub_725e20
// 地址: 0x725e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t edi = *(arg1 + 0xc)
int32_t edx = 0xa
int32_t esi_3 = (edi s>> 1 & 0x5555) | ((edi & 0x5555) * 2)
int32_t ecx_3 = (esi_3 u>> 2 & 0x3333) | (esi_3 & 0x3333) << 2
int32_t eax_6 = (ecx_3 u>> 4 & 0xf0f) | (ecx_3 & 0xf0f) << 4
uint32_t i = zx.d(eax_6.b) << 8 | eax_6 u>> 8
int32_t* eax_8 = arg2 + 0x448

if (i s>= *eax_8)
    do
        eax_8 = &eax_8[1]
        edx += 1
    while (i s>= *eax_8)
    
    if (edx == 0x10)
        return 0xffffffff

int32_t esi_10 =
    (i s>> (0x10 - edx.b)) - zx.d(*(arg2 + (edx << 1) + 0x400)) + zx.d(*(arg2 + (edx << 1) + 0x464))
*(arg1 + 8) -= edx
*(arg1 + 0xc) = edi u>> edx.b
return zx.d(*(arg2 + (esi_10 << 1) + 0x5a4))
