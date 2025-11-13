// 函数: sub_548780
// 地址: 0x548780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x25a4)
void var_8
sub_561af0(__security_cookie ^ &var_8, 0, 2, 0)
void* eax_2 = sub_573400()
int32_t var_18_1 = 0xc
int32_t __saved_ebp
uint32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_588db0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 3, 0x3ee, 1, *(eax_2 + 0x28), 
    *(eax_2 + 0x2c), *(eax_2 + 0x30), &__saved_ebp, 0)
uint32_t arg_c7c = eax_3
void arg_c84
__builtin_memcpy(&arg_c84, &__saved_ebp, 0xc84)
void arg_190c
__builtin_memcpy(&arg_190c, &__saved_ebp, 0xc84)
int32_t var_18_2 = 0
sub_561880(eax_3, edx_1, &arg_190c, 2)
int32_t eax_4 = sub_570120(2)
int32_t ecx_2 = 0

if (eax_3 s> 0)
    do
        if (*(&arg_c84 + (ecx_2 << 2)) == eax_4)
            int32_t arg_1904 = eax_3 - 1
            eax_4 = *(&arg_c84 + ((eax_3 - 1) << 2))
            *(&arg_c84 + (ecx_2 << 2)) = eax_4
            break
        
        ecx_2 += 1
    while (ecx_2 s< eax_3)

uint32_t result = sub_569330(eax_4, 0x3ee, &arg_c84, 0x18)
CookieCheckFunction(result)
return result
