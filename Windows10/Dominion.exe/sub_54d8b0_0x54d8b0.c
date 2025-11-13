// 函数: sub_54d8b0
// 地址: 0x54d8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t edi = *(eax_2 + 0x40)
void* var_c9c = nullptr
void* var_ca0 = nullptr
void* eax_3 = sub_573400()
uint32_t ebx = zx.d(edi.w)
int32_t eax_4 = *(eax_3 + 4)
int32_t var_ca4 = eax_4

if (ebx u>= 0x320)
    sub_591930()
    eax_4 = var_ca4

uint32_t eax_5 = sub_582d10(eax_4, *(ebx * 0x64 + eax_4 + 0x1a70), *(eax_3 + 4), edi, 0x3e9, 0xb, 
    0x46c, nullptr, *(eax_3 + 0x28), *(eax_3 + 0x2c), *(eax_3 + 0x30), 0, 0, nullptr, 0, var_c9c, 
    var_ca0)
int32_t var_c98 = 1
int32_t var_c94 = edi
int32_t var_14 = 1
uint32_t result = sub_56bd60(eax_5, &var_c98, sub_54d9a0, 0x48, 2)
CookieCheckFunction(result)
return result
