// 函数: sub_61d720
// 地址: 0x61d720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_78
uint32_t result = __security_cookie ^ &var_78
uint32_t result_1 = result
int32_t esi
int32_t var_7c = esi
int32_t edi
int32_t var_80 = edi

if (data_1724034 != 0)
    int32_t edx_1 = data_171efd0
    float xmm1_1 = data_1724038
    float xmm0_3 = data_8c4634 * 0.25f + xmm1_1
    data_1724038 = xmm0_3
    
    if (edx_1 != 0)
        result = zx.d(edx_1.w)
        
        if (result u< data_b4a5c4)
            int32_t* ecx_2 = result * 0x510c + data_b4a5c0
            
            if (ecx_2[0x1442] == edx_1 && ecx_2 != 0 && *ecx_2 == 2)
                result = &ecx_2[1]
                
                if (result != 0)
                    int32_t eax_1 = data_171efc8
                    float xmm0_5 = ecx_2[eax_1 * 2 + 0x141f] f- ecx_2[eax_1 * 2 + 0x1421]
                    float xmm1_3 = ecx_2[eax_1 * 2 + 0x141e] f- ecx_2[eax_1 * 2 + 0x1420]
                    int32_t __saved_ebp
                    float xmm0_9 = sub_4ac580(&__saved_ebp, xmm0_5 * xmm0_5 + xmm1_3 * xmm1_3) / 26f
                    float xmm0_10
                    
                    if (0 f<= xmm0_9)
                        xmm0_10 = xmm0_9 + 0.5f
                    else
                        xmm0_10 = xmm0_9 - 0.5f
                    
                    edi = int.d(xmm0_10)
                    float xmm0_14 = sub_4d5cb0(_mm_cvtepi32_ps(zx.o(edi)) * xmm1_1)
                    float xmm0_15
                    
                    if (0 f<= xmm0_14)
                        xmm0_15 = xmm0_14 + 0.5f
                    else
                        xmm0_15 = xmm0_14 - 0.5f
                    
                    esi = int.d(xmm0_15)
                    float xmm0_19 = sub_4d5cb0(_mm_cvtepi32_ps(zx.o(edi)) * xmm0_3)
                    float xmm0_20
                    
                    if (0 f<= xmm0_19)
                        xmm0_20 = xmm0_19 + 0.5f
                    else
                        xmm0_20 = xmm0_19 - 0.5f
                    
                    result = int.d(xmm0_20)
                    
                    if (esi != result && esi s>= 3)
                        result = edi - 5
                        
                        if (esi s<= result)
                            int32_t var_6c[0xc]
                            sub_6883d0(data_171e6b4, &var_6c)
                            result = sub_688660(&var_6c, esi, edi)
                            xmm0_3 = data_1724038
    
    if (not(xmm0_3 <= 1f))
        int32_t var_3c[0xc]
        sub_6883d0(data_171e6b8, &var_3c)
        result = sub_688660(&var_3c, esi, edi)
        data_1724034 = 0
        data_1724038 = 0

CookieCheckFunction(result)
return result
