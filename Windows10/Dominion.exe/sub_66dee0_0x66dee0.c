// 函数: sub_66dee0
// 地址: 0x66dee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_a18
void var_a10
void* ecx
int32_t result = sub_6dd1e0(sub_66a920(&var_a18, &var_a10, ecx, &var_a18), arg2, &data_8cae70, 
    data_1724a88, 0x71)
int32_t result_1 = result
int32_t result_2 = result_1

if (result_1 != 0)
    va_list ecx_2 = arg4 - var_a18
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = muls.dp.d(0x66666667, ecx_2)
    int32_t edx_3 = edx_2 s>> 1
    result = arg3 - 0x72
    int32_t* ebx_5 = ((ecx_2 s/ 5) << 4) + *(result_1 + 8)
    int32_t ecx_5
    
    switch (result)
        case 0
            int32_t* esi_1 = &data_7ff180
            
            while (true)
                result = _stricmp(esi_1[1], arg5)
                
                if (result == 0)
                    break
                
                esi_1 = &esi_1[2]
                
                if (esi_1[1] == 0)
                    CookieCheckFunction(result)
                    return result
            
            if (esi_1 != 0)
                int32_t result_3 = result_2
                ecx_5 = 0
                int32_t edx_4 = *esi_1
                int32_t esi_2 = *(result_3 + 0x10)
                
                if (esi_2 s> 0)
                    result = *(result_3 + 8)
                    
                    do
                        if (*result == edx_4)
                            goto label_66e083
                        
                        ecx_5 += 1
                        result += 0x10
                    while (ecx_5 s< esi_2)
                
                *ebx_5 = edx_4
                ecx_5.b = 1
                result = sub_665770(ecx_5)
        case 1
            int32_t* var_a2c_2 = &result_2
            result, ecx_5 = sub_64b6d0(&result_2, edx_3, ecx_2, arg5, " %f")
            
            if (result == 1)
                ebx_5[1] = __maxss_xmmss_memss(result_2, 0)
                ecx_5.b = 1
                result = sub_665770(ecx_5)
        case 2
            int32_t* var_a2c_3 = &result_2
            result, ecx_5 = sub_64b6d0(&result_2, edx_3, ecx_2, arg5, " %f")
            
            if (result == 1)
                ebx_5[2] = __maxss_xmmss_memss(result_2, 0)
                ecx_5.b = 1
                result = sub_665770(ecx_5)
        case 3
            void* const esi_3 = &data_7ffbc8
            
            while (true)
                result, ecx_5 = _stricmp(*(esi_3 + 4), arg5)
                
                if (result == 0)
                    break
                
                esi_3 += 8
                
                if (*(esi_3 + 4) == 0)
                    CookieCheckFunction(result)
                    return result
            
            if (esi_3 != 0)
                ebx_5[3] = *esi_3
                ecx_5.b = 1
                result = sub_665770(ecx_5)

label_66e083:
CookieCheckFunction(result)
return result
