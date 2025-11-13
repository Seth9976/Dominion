// 函数: sub_549d90
// 地址: 0x549d90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()

if (*(eax_2 + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax_2 + 0x40)
void* eax_3
int32_t edx
eax_3, edx = sub_573400()
int32_t var_ca4 = 1
void* ecx = *(eax_3 + 4)
sub_578d90(eax_3, edx, ecx, esi_1, ecx, nullptr)
int32_t var_c98 = 1
int32_t var_c94 = esi_1
int32_t var_14 = 1
uint32_t result =
    sub_56c010(&var_c98, sub_549d50, 0xa, sub_549d70, 0, &var_c98, 0x43, 0, 0xffffffff)
CookieCheckFunction(result)
return result
