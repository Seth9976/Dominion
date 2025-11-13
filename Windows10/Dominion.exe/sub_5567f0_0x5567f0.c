// 函数: sub_5567f0
// 地址: 0x5567f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t* edi = *(eax_2 + 0x40)
uint32_t eax_3 = sub_56b800()
uint32_t esi_1 = zx.d(edi.w)
int32_t var_c9c = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t* esi_3 = *(esi_1 * 0x64 + var_c9c + 0x1a58)
void* eax_7 = sub_573400()
int32_t var_cac = 0
sub_5820c0(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), edi, esi_3, eax_3, 0xb, 0, *(eax_7 + 0x28), 
    *(eax_7 + 0x2c), 0, nullptr)
int32_t var_c98 = 1
int32_t* var_c94 = edi
int32_t var_14 = 1
uint32_t result = sub_56bba0(&var_c98, 0, sub_556760, &var_c98, 7, 2)
CookieCheckFunction(result)
return result
