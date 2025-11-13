// 函数: sub_5206b0
// 地址: 0x5206b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_56b800()
void* var_c9c = nullptr
void* var_ca0 = nullptr
void* eax_3 = sub_573400()
uint32_t ebx = zx.d(eax_2.w)
int32_t eax_4 = *(eax_3 + 4)
int32_t var_ca4 = eax_4

if (ebx u>= 0x320)
    sub_591930()
    eax_4 = var_ca4

sub_582d10(eax_4, *(ebx * 0x64 + eax_4 + 0x1a70), *(eax_3 + 4), eax_2, 0x3ea, 0xb, 0x459, nullptr, 
    *(eax_3 + 0x28), *(eax_3 + 0x2c), *(eax_3 + 0x30), 0, 0, nullptr, 0, var_c9c, var_ca0)
int32_t var_c98 = 0
uint32_t result = sub_56bba0(&var_c98, 0, sub_520780, &var_c98, 5, 2)
CookieCheckFunction(result)
return result
