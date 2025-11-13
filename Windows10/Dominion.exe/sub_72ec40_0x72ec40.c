// 函数: sub_72ec40
// 地址: 0x72ec40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg3 != 0 && arg4 != 0 && arg2 != 0)
    int32_t esi_1 = *arg2
    
    if (esi_1 != 0)
        int32_t edi_1 = arg2[1]
        
        if (edi_1 != 0)
            int32_t* ecx
            ecx.b = arg2[2].b
            void* eax_2
            eax_2.b = ecx.b
            eax_2.b -= 3
            
            if (eax_2.b u<= 1 && *(arg2 + 9) u<= 1 && edi_1 u< divu.dp.d(0:0x17d78400, esi_1))
                char* result = sub_687730((zx.d(ecx.b) + 1) * edi_1 * esi_1 + 0x16)
                
                if (result != 0)
                    __builtin_strncpy(result, "qoif", 4)
                    int32_t esi_2 = 0xe
                    int32_t ecx_6 = *arg2
                    result[4] = (ecx_6 u>> 0x18).b
                    result[5] = (ecx_6 u>> 0x10).b
                    result[6] = (ecx_6 u>> 8).b
                    result[7] = ecx_6.b
                    int32_t ecx_7 = arg2[1]
                    result[8] = (ecx_7 u>> 0x18).b
                    result[9] = (ecx_7 u>> 0x10).b
                    result[0xa] = (ecx_7 u>> 8).b
                    result[0xb] = ecx_7.b
                    result[0xc] = arg2[2].b
                    result[0xd] = *(arg2 + 9)
                    int32_t var_108[0x40]
                    memset(&var_108, 0, 0x100)
                    char var_118 = 0
                    int32_t ebx_1 = 0
                    int32_t eax_17 = 0xff000000
                    int32_t var_110 = 0xff000000
                    uint32_t edx_2 = zx.d(arg2[2].b)
                    int32_t i = *arg2 * edx_2 * arg2[1]
                    
                    if (i s> 0)
                        char* edx_3 = arg3 + 2
                        char* var_11c_1 = edx_3
                        
                        do
                            void* ecx_10
                            ecx_10.b = edx_3[0xfffffffe]
                            var_110.b = ecx_10.b
                            ecx_10.b = edx_3[0xffffffff]
                            var_110:1.b = ecx_10.b
                            ecx_10.b = *edx_3
                            var_110:2.b = ecx_10.b
                            
                            if (edx_2 == 4)
                                ecx_10.b = edx_3[1]
                                var_110:3.b = ecx_10.b
                            
                            int32_t ecx_16 = var_110
                            
                            if (ecx_16 != eax_17)
                                if (ebx_1 s> 0)
                                    ebx_1.b -= 1
                                    ebx_1.b |= 0xc0
                                    result[esi_2] = ebx_1.b
                                    esi_2 += 1
                                    ebx_1 = 0
                                
                                int32_t ecx_15 = zx.d(var_110:2.b) * 7 + zx.d(var_110:1.b) * 5
                                    + zx.d(var_110.b) * 3 + zx.d(var_110:3.b) * 0xb
                                int32_t var_130_1 = ecx_15
                                ecx_16 = var_110
                                int32_t edx_12 = ecx_15 & 0x3f
                                
                                if (var_108[edx_12] != ecx_16)
                                    var_108[edx_12] = ecx_16
                                    
                                    if (var_110:3.b != (eax_17 u>> 0x18).b)
                                        eax_17.b = var_110.b
                                        result[esi_2] = 0xff
                                        result[esi_2 + 1] = eax_17.b
                                        eax_17.b = var_110:1.b
                                        result[esi_2 + 2] = eax_17.b
                                        eax_17.b = var_110:2.b
                                        result[esi_2 + 3] = eax_17.b
                                        eax_17.b = var_110:3.b
                                        result[esi_2 + 4] = eax_17.b
                                        esi_2 += 5
                                    else
                                        ecx_16.b = var_110:1.b
                                        uint16_t edx_16
                                        edx_16:1.b = var_110:2.b
                                        edx_16:1.b -= (eax_17 u>> 0x10).w.b
                                        uint16_t eax_20
                                        eax_20.b = var_110.b - var_118
                                        eax_20:1.b = ecx_16.b - edx_16.b
                                        edx_16.b = eax_20.b
                                        ecx_16 = var_110
                                        eax_20.b += 2
                                        char var_111_1 = edx_16:1.b
                                        edx_16.b -= eax_20:1.b
                                        edx_16:1.b -= eax_20:1.b
                                        char var_109_3 = edx_16:1.b
                                        
                                        if (eax_20.b u> 3)
                                            goto label_72ef35
                                        
                                        edx_16:1.b = eax_20:1.b
                                        edx_16:1.b += 2
                                        
                                        if (edx_16:1.b u> 3 || var_111_1 + 2 u> 3)
                                            edx_16:1.b = var_109_3
                                        label_72ef35:
                                            eax_20.b = edx_16.b
                                            eax_20.b += 8
                                            
                                            if (eax_20.b u> 0xf)
                                            label_72ef62:
                                                eax_20.b = var_110.b
                                                result[esi_2] = 0xfe
                                                result[esi_2 + 1] = eax_20.b
                                                eax_20.b = var_110:1.b
                                                result[esi_2 + 2] = eax_20.b
                                                eax_20.b = var_110:2.b
                                                result[esi_2 + 3] = eax_20.b
                                                esi_2 += 4
                                            else
                                                eax_20:1.b += 0x20
                                                
                                                if (eax_20:1.b u> 0x3f)
                                                    goto label_72ef62
                                                
                                                edx_16:1.b += 8
                                                
                                                if (edx_16:1.b u> 0xf)
                                                    goto label_72ef62
                                                
                                                eax_20:1.b |= 0x80
                                                edx_16.b += 8
                                                result[esi_2] = eax_20:1.b
                                                edx_16.b <<= 4
                                                edx_16.b |= edx_16:1.b
                                                result[esi_2 + 1] = edx_16.b
                                                esi_2 += 2
                                        else
                                            eax_20.b <<= 4
                                            edx_16:1.b <<= 2
                                            eax_20.b |= edx_16:1.b
                                            eax_20.b |= var_111_1 + 2
                                            eax_20.b |= 0x40
                                            result[esi_2] = eax_20.b
                                            esi_2 += 1
                                else
                                    result[esi_2] = edx_12.b
                                    esi_2 += 1
                                
                                edx_3 = var_11c_1
                            else
                                ebx_1 += 1
                                
                                if (ebx_1 == 0x3e || 0xfffffffe - arg3 + edx_3 == i - edx_2)
                                    ebx_1.b -= 1
                                    ebx_1.b |= 0xc0
                                    result[esi_2] = ebx_1.b
                                    esi_2 += 1
                                    ebx_1 = 0
                            
                            edx_3 = &edx_3[edx_2]
                            eax_17 = ecx_16
                            var_118 = eax_17.b
                            var_11c_1 = edx_3
                        while (0xfffffffe - arg3 + edx_3 s< i)
                    
                    *(result + esi_2) = 0
                    *(result + esi_2 + 4) = &data_1000000
                    *arg4 = esi_2 + 8
                    CookieCheckFunction(result)
                    return result

CookieCheckFunction(0)
return 0
