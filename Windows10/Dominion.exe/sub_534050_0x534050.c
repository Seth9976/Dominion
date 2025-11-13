// 函数: sub_534050
// 地址: 0x534050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_56b800()
void var_c88
int32_t eax_3 = memset(&var_c88, 0, 0xc80)
int32_t var_c
int32_t var_c_1 = var_c + 1
uint32_t var_c8c = eax_2
sub_566370(eax_3, 0x3ea, &var_c8c, 0)
void* eax_4 = sub_573400()

if (*(eax_4 + 0x40) == 0)
    sub_591930()

int32_t esi_2 = *(eax_4 + 0x40)
void* eax_5 = sub_573400()
uint32_t edi = zx.d(esi_2.w)
int32_t ebx = *(eax_5 + 4)

if (edi u>= 0x320)
    eax_5 = sub_591930()

uint32_t result = sub_565e40(eax_5, *(edi * 0x64 + ebx + 0x1a58), esi_2, 0x105)
CookieCheckFunction(result)
return result
