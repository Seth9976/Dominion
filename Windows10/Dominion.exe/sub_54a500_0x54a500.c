// 函数: sub_54a500
// 地址: 0x54a500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t ebx = *(eax_2 + 0x28)
int32_t edi = *(eax_2 + 0x2c)
uint32_t eax_3 = sub_56b800()
void* eax_4 = sub_573400()
int32_t eax_8

if (sub_576b30(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x1a, eax_3, ebx, edi) s<= 0)
    eax_8 = 0xffffffff
else
    eax_8 = *(*(sub_573400() + 4) + 0x19e4)

int32_t var_c94 = eax_8
int32_t var_c98 = 2
int32_t var_14 = 1
uint32_t result = sub_56c680(&var_c98, j_sub_54a5b0, 1, 0, 0, &var_c98, 1)
CookieCheckFunction(result)
return result
