// 函数: sub_541120
// 地址: 0x541120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_56b800()
uint32_t esi = zx.d(eax_2.w)
void* eax_4 = *(sub_573400() + 4)
void* var_cac = eax_4

if (esi u>= 0x320)
    sub_591930()
    eax_4 = var_cac

int32_t ecx = esi * 0x64
int32_t ebx
ebx.b = *(ecx + eax_4 + 0x1a50) == 0x3ee
void* var_ca0 = nullptr
void* var_ca4 = nullptr
void* eax_5 = sub_573400()
var_cac = eax_5
int32_t ecx_1 = *(eax_5 + 4)

if (esi u>= 0x320)
    sub_591930()
    eax_5 = var_cac

uint32_t eax_6 = sub_582d10(eax_5, *(ecx + ecx_1 + 0x1a70), *(eax_5 + 4), eax_2, 
    (ebx << 1) + 0x3ec, 0xb, 0x458, nullptr, *(eax_5 + 0x28), *(eax_5 + 0x2c), *(eax_5 + 0x30), 0, 
    0, nullptr, 0, var_ca0, var_ca4)
int32_t var_c98 = 0
uint32_t result = sub_56bd60(eax_6, &var_c98, sub_541230, 0xb, 0)
CookieCheckFunction(result)
return result
