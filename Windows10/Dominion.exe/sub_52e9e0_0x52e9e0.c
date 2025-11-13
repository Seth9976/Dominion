// 函数: sub_52e9e0
// 地址: 0x52e9e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
int32_t ebx = 2 - *(*(eax + 0xc) * 0x5a30 + *(eax + 4) + 0x174f4)

if (ebx s> 0)
    void* eax_2 = sub_573400()
    uint32_t esi_1 = *(eax_2 + 0xc)
    uint32_t edi_1 = *(eax_2 + 4)
    sub_590760(sub_586550(eax_2, esi_1, edi_1, ebx, 0), esi_1, edi_1, 0, ebx, 0, 2)

void* eax_4 = sub_573400()
int32_t result = *(eax_4 + 4)

if (*(*(eax_4 + 0xc) * 0x5a30 + result + 0x174f4) s< 2)
    return result

void* eax_5 = sub_573400()
int32_t eax_6 = sub_573460()
uint32_t esi_3 = zx.d(sub_56b800())
int32_t eax_9 = *(sub_573400() + 4)

if (esi_3 u>= 0x320)
    sub_591930()

int32_t eax_11
int32_t edx_3
edx_3:eax_11 = sx.q(eax_6)
int32_t eax_12 = esi_3 * 0x64
sub_5911e0(eax_12, *(eax_5 + 0xc), *(eax_5 + 4), 7, *(eax_12 + eax_9 + 0x1a4c), 7, eax_11, edx_3, 
    0, 0xffffffff, 0, 0)
int32_t eax_13 = sub_56d6b0()
int32_t eax_14 = neg.d(eax_13)
sub_56e9c0(neg.d(sbb.d(eax_14, eax_14, eax_13 != 0)))
void* eax_17 = sub_573400()
uint32_t eax_18 = sub_56b780()
return sub_56d510(sub_594010(eax_18, *(eax_17 + 0xc), *(eax_17 + 4), eax_18, 2), 2)
