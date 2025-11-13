// 函数: sub_4b9d20
// 地址: 0x4b9d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t var_28c[0x28]
memset(&var_28c, 0, 0x280)
uint32_t result = sub_4b9b40(&var_28c)
int32_t ebx
ebx.b = 0
uint32_t result_1 = result - 1
uint32_t result_2 = result_1

if (result_2 s>= 0)
    int32_t __saved_ebp
    void* ecx_3 = &(&__saved_ebp)[result_2 * 4 - 0xa2]
    uint32_t result_3
    
    do
        if (*ecx_3 == 0x13)
            ebx.b = 1
            break
        
        ecx_3 -= 0x10
        result_3 = result_2
        result_2 -= 1
    while (result_3 - 1 s>= 0)

if (ebx.b == 0)
    result_1 = result

result.b = result_1 s< 4
CookieCheckFunction(result)
return result
