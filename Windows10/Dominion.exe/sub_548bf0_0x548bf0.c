// 函数: sub_548bf0
// 地址: 0x548bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax_2 + 0x40)
void* eax_3 = sub_573400()
int32_t var_c98 = 2
int32_t ecx_1 = esi_1 | 0x80000000
int32_t var_14 = 1

if (*(eax_3 + 0x5c) s>= 0)
    ecx_1 = esi_1

int32_t var_c94 = ecx_1
uint32_t result = sub_56c010(&var_c98, sub_548b50, 0xa, sub_548bd0, 0, &var_c98, 0, 0, 0xffffffff)
CookieCheckFunction(result)
return result
