// 函数: sub_570aa0
// 地址: 0x570aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_ca0 = nullptr
void* var_ca4 = nullptr
int32_t ebx = **(arg1 + 4)
void* eax_3 = sub_573400()
int32_t eax_4 = *(eax_3 + 4)
uint32_t eax_5 = zx.d(ebx.w)

if (eax_5 u>= 0x320)
    sub_591930()

sub_582d10(eax_4, *(eax_5 * 0x64 + eax_4 + 0x1a70), *(eax_3 + 4), ebx, 0x3ee, 0xb, 0x464, nullptr, 
    *(eax_3 + 0x28), *(eax_3 + 0x2c), *(eax_3 + 0x30), 0, 0, nullptr, 0, var_ca0, var_ca4)
int32_t* eax_7 = *(arg1 + 4)
int32_t var_c98 = 1
int32_t var_c94 = *eax_7
int32_t var_14 = 1
uint32_t result = sub_56bba0(&var_c98, 0, sub_542500, &var_c98, 1, 2)
CookieCheckFunction(result)
return result
