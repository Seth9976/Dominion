// 函数: sub_4fba20
// 地址: 0x4fba20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x25a0)
__security_cookie
sub_56b270(sub_56d1f0(), 0)
int32_t result
int32_t edx
result, edx = sub_56b3a0()

if (result.b != 0)
    void var_8
    void arg_1908
    int32_t ecx_1
    int32_t esi_2
    esi_2, ecx_1 = __builtin_memcpy(&arg_1908, sub_568780(&var_8, edx, 0x3e9, &var_8), 0xc84)
    int32_t var_14_2 = 0xc
    void arg_c80
    result = sub_56dc10(esi_2, &arg_c80, ecx_1, 7, 0x8d)
    __builtin_memcpy(&var_8, result, 0xc84)
    int32_t esi_4 = 0
    
    if (arg1 s> 0)
        do
            result = sub_5638e0(*(&var_8 + (esi_4 << 2)))
            esi_4 += 1
        while (esi_4 s< arg1)

CookieCheckFunction(result)
return result
