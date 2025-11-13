// 函数: sub_54c410
// 地址: 0x54c410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax_2 + 0x40)
void* var_ca0 = nullptr
void* var_ca4 = nullptr
int32_t ecx = *(sub_573400() + 4)
uint32_t eax_4 = zx.d(esi_1.w)
int32_t edi = eax_4 * 0x64
int32_t var_cb0 = ecx
int32_t eax_9
void* esi_2

if (eax_4 u< 0x320)
    var_cb0 = *(edi + ecx + 0x1a58)
    esi_2 = sub_573400()
    eax_9 = *(esi_2 + 4)
else
    sub_591930()
    var_cb0 = *(var_cb0 + edi + 0x1a58)
    esi_2 = sub_573400()
    int32_t eax_8 = *(esi_2 + 4)
    sub_591930()
    eax_9 = eax_8

sub_582d10(eax_9, *(edi + eax_9 + 0x1a70), *(esi_2 + 4), esi_1, var_cb0, 0xb, 0x468, nullptr, 
    *(esi_2 + 0x28), *(esi_2 + 0x2c), *(esi_2 + 0x30), 0, 0, nullptr, 0, var_ca0, var_ca4)
int32_t var_c98 = 1
int32_t var_c94 = esi_1
int32_t var_14 = 1
uint32_t result = sub_56bd60(esi_1, &var_c98, sub_54c380, 0x3d, 0)
CookieCheckFunction(result)
return result
