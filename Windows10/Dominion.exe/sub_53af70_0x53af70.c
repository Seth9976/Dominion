// 函数: sub_53af70
// 地址: 0x53af70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx
uint32_t result = sub_563590(ecx)

if (result != 0)
    void* eax_2 = sub_573400()
    char var_c99
    void* eax_3 = sub_565ff0(eax_2, 7, result, *(eax_2 + 0xc), 0x462, nullptr, &var_c99, 0xb, 
        nullptr, nullptr)
    
    if (var_c99 != 0)
        uint32_t result_1 = result
        int32_t var_18_1 = 1
        sub_56f1a0(eax_3, &result_1, 0x13, 0)

CookieCheckFunction(result)
return result
