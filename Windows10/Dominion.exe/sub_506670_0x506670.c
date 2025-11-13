// 函数: sub_506670
// 地址: 0x506670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int32_t ebx = 2 - *(arg1 + 4)
void* eax = sub_573400()
uint32_t esi = *(eax + 0xc)
uint32_t edi = *(eax + 4)
sub_590760(sub_586550(eax, esi, edi, ebx, 0), esi, edi, 0, ebx, 0, 2)
int32_t esi_1 = 2
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc) * 0x5a30
int32_t eax_3 = *(eax_2 + 4)

if (*(ecx_2 + eax_3 + 0x174f4) s<= 2)
    void* eax_4 = sub_573400()
    ecx_2 = *(eax_4 + 0xc) * 0x5a30
    eax_3 = *(eax_4 + 4)
    esi_1 = *(ecx_2 + eax_3 + 0x174f4)

int32_t esi_2 = neg.d(esi_1)

if (esi_2 != 0)
    uint32_t eax_5 = sub_573400()
    eax_3, ecx_2 = sub_590760(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 0, esi_2, 0, 0)

int32_t var_1c = ecx_2
return sub_561e00(eax_3, 0, 2, 0)
