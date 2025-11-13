// 函数: sub_5636e0
// 地址: 0x5636e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t* edx
ecx, edx = __chkstk(0x1984)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_573400()
void var_1984
uint32_t eax_3
int32_t edx_2
eax_3, edx_2 = sub_5777b0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), &var_1984, 4)
int32_t var_1c = arg2
uint32_t var_d04 = eax_3
void var_c94
__builtin_memcpy(&var_c94, &var_1984, 0xc84)
sub_561880(eax_3, edx_2, &var_c94, arg1)
int64_t var_cc8
__builtin_memset(&var_cc8, 0, 0x2c)
int128_t var_cfc = ecx.o
int32_t var_cbc
int128_t var_cec = var_cbc.o
int64_t var_cac
int128_t var_cdc = var_cac.o
int32_t* result = sub_563c40(&var_cfc, 0xc, 0)

if (result != 0)
    void* eax_4 = sub_573400()
    sub_583720(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), result, edx, nullptr, 0x476, 0, 0, 4)

CookieCheckFunction(result)
return result
