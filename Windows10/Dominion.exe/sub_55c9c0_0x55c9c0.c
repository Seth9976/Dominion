// 函数: sub_55c9c0
// 地址: 0x55c9c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
int32_t esi = *(*(eax + 0xc) * 0x5a30 + *(eax + 4) + 0x174f4)
void* eax_2 = sub_573400()
int32_t eax_3
int32_t ecx_3
eax_3, ecx_3 = sub_583fc0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 0xa00)
int32_t eax_4 = eax_3 + esi

if (eax_4 == 2)
    return 1

int32_t var_14 = ecx_3
int32_t var_18 = 0
uint32_t eax_5 = sub_568960(eax_4, 0, 0x3ea, 0)
int32_t eax_6 = neg.d(eax_5)
return sbb.d(eax_6, eax_6, eax_5 != 0) + 1
