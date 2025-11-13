// 函数: sub_540120
// 地址: 0x540120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_56b800()
void* var_ca0 = nullptr
void* var_ca4 = nullptr
void* eax_3 = sub_573400()
uint32_t ebx = zx.d(eax_2.w)
int32_t eax_4 = *(eax_3 + 4)

if (ebx u>= 0x320)
    sub_591930()

int32_t eax_5 = ebx * 0x64
uint32_t result = sub_582d10(eax_5, *(eax_5 + eax_4 + 0x1a70), *(eax_3 + 4), eax_2, 0x3e9, 0xb, 
    0x45c, nullptr, *(eax_3 + 0x28), *(eax_3 + 0x2c), *(eax_3 + 0x30), 0, 0, nullptr, 0, var_ca0, 
    var_ca4)

if (result.b != 0)
    int32_t var_c98 = 0
    result = sub_56bba0(&var_c98, 0, sub_540200, &var_c98, 1, 0x40000)

CookieCheckFunction(result)
return result
