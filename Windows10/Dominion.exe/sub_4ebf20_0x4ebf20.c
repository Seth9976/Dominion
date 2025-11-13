// 函数: sub_4ebf20
// 地址: 0x4ebf20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* result = nullptr
int32_t edi = 0

if (arg5 s> 0)
    int32_t var_c8c[0x321]
    
    do
        if (*(result + arg2) == 0)
            var_c8c[edi] = *(arg3 + (result << 2))
            edi += 1
        
        result = &result[1]
    while (result s< arg5)
    
    int32_t ebx_1 = 0
    int32_t* esi_2 = arg4
    result = arg3 - esi_2
    char* ecx_1 = arg2
    char* result_1 = result
    
    do
        int32_t edx_1
        
        if (ecx_1[ebx_1] == 0)
            uint32_t eax_3 = sub_63ed10(&data_1777938, edi)
            edi -= 1
            edx_1 = var_c8c[eax_3]
            var_c8c[eax_3] = var_c8c[edi]
            ecx_1 = arg2
        else
            edx_1 = *(esi_2 + result)
        
        int32_t* eax_5 = esi_2
        ebx_1 += 1
        esi_2 = &esi_2[1]
        *eax_5 = edx_1
        result = result_1
    while (ebx_1 s< arg5)

CookieCheckFunction(result)
return result
