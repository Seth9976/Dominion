// 函数: sub_64b040
// 地址: 0x64b040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_70
sub_6db800(arg1, &var_70)
uint32_t result

for (void* const i = &data_872e3c; i s< "Union"; i += 8)
    int32_t eax_3 = *i * 3
    int32_t eax_6 = *(i - 4) * 3
    int32_t var_68[0x17]
    result = sub_64ac90(*(&var_70 + (eax_6 << 2)), var_68[eax_6], *(&var_70 + (eax_3 << 2)), 
        var_68[eax_3], *arg2)

CookieCheckFunction(result)
return result
