// 函数: sub_6fec00
// 地址: 0x6fec00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx
ebx.b = 0
int32_t esi = 0
uint32_t result

while (true)
    result = glGetError()
    
    if (result != 0)
        uint32_t result_1 = result
        int32_t var_38_1 = arg1
        int32_t edx
        int32_t var_3c_1 = edx
        int32_t ecx
        int32_t var_40_1 = ecx
        sub_63b5f0("%s(%d): %s - glError (0x%x)\n")
        esi += 1
        ebx.b = 1
        
        if (esi s< 5)
            continue
    else if (ebx.b == 0)
        break
    
    result = IsDebuggerPresent()
    
    if (result == 1)
        breakpoint
    
    break

CookieCheckFunction(result)
return result
