// 函数: sub_53f150
// 地址: 0x53f150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x190c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_573400()
void* ecx_1 = *(eax_2 + 0xc) * 0x5a30 + *(eax_2 + 4)
int32_t eax_3 = *(ecx_1 + 0x17504)
int32_t var_c90 = eax_3
void var_1910
memcpy(&var_1910, ecx_1 + 0x17578, eax_3 << 2)
void var_c8c
__builtin_memcpy(&var_c8c, &var_1910, 0xc84)
sub_561a00(&var_c8c, nullptr)
CookieCheckFunction(arg2)
return arg2
