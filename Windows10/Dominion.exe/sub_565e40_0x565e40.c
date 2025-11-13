// 函数: sub_565e40
// 地址: 0x565e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (sub_565de0(arg3.w, arg4) == 0)
    CookieCheckFunction(0)
    return 0

uint32_t result = sub_563590(arg4)
int32_t var_ca0 = arg3
void* eax_3 = sub_573400()
int32_t eax_4 = sub_582de0(eax_3, arg3, *(eax_3 + 4), arg2)

if (eax_4.b == 0 && sub_5690c0(eax_4, arg2, var_ca0, 9) != 0)
    void* eax_6 = sub_573400()
    char var_ca1
    sub_5822e0(&var_ca1, *(eax_6 + 0xc), *(eax_6 + 4), result, 0xa, 0x3ec, 9, 0, 0, 0, 1, 1, 
        &var_ca1, 0, nullptr, nullptr)
    uint32_t ebx_1 = zx.d(result.w)
    int32_t eax_9 = *(sub_573400() + 4)
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    int32_t* ecx_8 = *(eax_6 + 4)
    int32_t eax_11 = ecx_8[0x541]
    
    if (eax_11 != 3 && eax_11 != 5 && eax_11 != 4 && eax_11 != 6 && ecx_8[0x540].b == 0)
        int32_t edx_4 = *(eax_6 + 0xc)
        int32_t eax_12 = edx_4
        
        if (edx_4 == ecx_8[0x673])
            eax_12 = ecx_8[0x674]
        
        sub_59f9b0(eax_12, edx_4, ecx_8, eax_12, 0x25, 0, &var_ca0, 1, 
            *(ebx_1 * 0x64 + eax_9 + 0x1a4c), 0, 0, 0)
    
    void* eax_13 = sub_583350(*(eax_6 + 4))
    
    if (var_ca1 != 0)
        int32_t var_18_1 = 0
        uint32_t result_1
        
        if (result != 0)
            result_1 = result
            int32_t var_18_2 = 1
        
        sub_56f1a0(eax_13, &result_1, 0x13, 0)
    
    CookieCheckFunction(result)
    return result

CookieCheckFunction(0)
return 0
