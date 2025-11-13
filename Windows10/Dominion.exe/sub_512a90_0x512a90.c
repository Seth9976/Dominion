// 函数: sub_512a90
// 地址: 0x512a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax_2 + 0x40)
int32_t var_c98 = esi_1
int32_t var_18 = 1
void* eax_3 = sub_573400()
uint32_t esi_2 = zx.d(esi_1.w)
int32_t edi = *(eax_3 + 4)

if (esi_2 u>= 0x320)
    eax_3 = sub_591930()

uint32_t result =
    sub_566140(eax_3, *(esi_2 * 0x64 + edi + 0x1a58), &var_c98, 0x3eb, 2, 0, 0xb, nullptr, nullptr)
CookieCheckFunction(result)
return result
