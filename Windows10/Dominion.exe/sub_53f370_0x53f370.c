// 函数: sub_53f370
// 地址: 0x53f370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t result = sub_563590(0x106)
int32_t result_1 = result

if (result_1 != 0)
    void* eax_2 = sub_573400()
    result =
        sub_583720(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), result_1, 0x45b, nullptr, 0x476, 0, 0, 4)
    
    if (result.b != 0 && result_1 != 0)
        result = sub_56f260(result_1)
        
        if (result.b != 0)
            int32_t var_c98 = 1
            int32_t result_2 = result_1
            int32_t var_14_1 = 1
            result = sub_56bba0(&var_c98, 0, sub_4ffce0, &var_c98, 1, 2)

CookieCheckFunction(result)
return result
