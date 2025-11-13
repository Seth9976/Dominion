// 函数: sub_5420b0
// 地址: 0x5420b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t eax = sub_56b800()
void* eax_1
int32_t ecx
eax_1, ecx = sub_573400()
uint32_t esi_1 = zx.d(eax)
int32_t edi = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_3 = *(esi_1 * 0x64 + edi + 0x1a50)
int32_t esi_2

if (eax_3 != 0x3ea && eax_3 != 0x3ec && eax_3 != 0x45c && eax_3 != 0x469 && eax_3 != 0x46a)
    esi_2 = 7

if (eax_3 == 0x3ea || eax_3 == 0x3ec || eax_3 == 0x45c || eax_3 == 0x469 || eax_3 == 0x46a
        || eax_3 == 0x46b)
    esi_2 = 6

int32_t var_14 = ecx
int32_t var_18 = 0
int32_t result
result.b = sub_568960(eax_3, 0, 0x3e9, 0) == esi_2
return result
