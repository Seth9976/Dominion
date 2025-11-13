// 函数: sub_72f030
// 地址: 0x72f030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* var_11c = nullptr

if (arg3 != 0 && arg4 != 0 && arg2 s>= 0x16)
    uint32_t eax_3 = zx.d(arg3[1])
    uint32_t ecx = zx.d(*arg3)
    uint32_t eax_4 = zx.d(arg3[2])
    uint32_t eax_5 = zx.d(arg3[3])
    uint32_t edx_6 =
        ((zx.d(arg3[4]) << 8 | zx.d(arg3[5])) << 8 | zx.d(arg3[6])) << 8 | zx.d(arg3[7])
    *arg4 = edx_6
    uint32_t ebx_7 =
        ((zx.d(arg3[8]) << 8 | zx.d(arg3[9])) << 8 | zx.d(arg3[0xa])) << 8 | zx.d(arg3[0xb])
    arg4[1] = ebx_7
    uint32_t eax_11
    eax_11.b = arg3[0xc]
    arg4[2].b = eax_11.b
    eax_11:1.b = arg3[0xd]
    *(arg4 + 9) = eax_11:1.b
    int32_t esi_1 = 0xe
    char var_10d_1 = eax_11.b
    
    if (edx_6 != 0 && ebx_7 != 0)
        eax_11.b -= 3
        
        if (eax_11.b u<= 1 && eax_11:1.b u<= 1
                && (((ecx << 8 | eax_3) << 8 | eax_4) << 8 | eax_5) == 0x716f6966
                && ebx_7 u< divu.dp.d(0:0x17d78400, edx_6))
            uint32_t eax_14 = zx.d(var_10d_1)
            uint32_t i = eax_14 * edx_6 * ebx_7
            uint32_t result = sub_687730(i)
            
            if (result != 0)
                int32_t var_108[0x40]
                memset(&var_108, 0, 0x100)
                int32_t edx_9
                edx_9.b = 0
                edx_9:1.b = 0xff
                int16_t var_10c = 0
                char var_10a = 0
                ebx_7.b = 0
                char var_109 = 0xff
                ebx_7:1.b = 0
                
                if (i s> 0)
                    char* eax_17 = result + 2
                    char* ecx_10 = nullptr
                    void* var_114_2 = eax_17
                    void* eax_29
                    
                    do
                        if (ecx_10 s> 0)
                            var_11c = ecx_10 - 1
                        else if (esi_1 s< arg2 - 8)
                            edx_9:1.b = arg3[esi_1]
                            esi_1 += 1
                            uint32_t ecx_12 = zx.d(edx_9:1.b)
                            
                            if (ecx_12 == 0xfe)
                                ebx_7.b = arg3[esi_1]
                                ebx_7:1.b = arg3[esi_1 + 1]
                                ecx_12.b = arg3[esi_1 + 2]
                                esi_1 += 3
                                var_10c.b = ebx_7.b
                                var_10c:1.b = ebx_7:1.b
                                var_10a = ecx_12.b
                                eax_17.b = var_109
                            else if (ecx_12 != 0xff)
                                eax_17 = ecx_12 & 0xc0
                                
                                if (eax_17 == 0)
                                    eax_17 = var_108[ecx_12]
                                    ebx_7.b = eax_17.b
                                    var_10c.d = eax_17
                                    ebx_7:1.b = var_10c:1.b
                                else if (eax_17 == 0x40)
                                    edx_9:1.b &= 3
                                    edx_9:1.b -= 2
                                    eax_17.b = (ecx_12 u>> 4).b & 3
                                    ecx_12.b = (ecx_12 u>> 2).b & 3
                                    eax_17.b -= 2
                                    ecx_12.b -= 2
                                    ebx_7.b += eax_17.b
                                    ebx_7:1.b += ecx_12.b
                                    var_10c.b = ebx_7.b
                                    edx_9.b += edx_9:1.b
                                    var_10c:1.b = ebx_7:1.b
                                    var_10a = edx_9.b
                                else if (eax_17 == 0x80)
                                    ecx_12.b = arg3[esi_1]
                                    edx_9:1.b &= 0x3f
                                    eax_17.b = ecx_12.b
                                    edx_9:1.b -= 0x20
                                    eax_17.b u>>= 4
                                    ecx_12.b &= 0xf
                                    eax_17.b -= 8
                                    ecx_12.b -= 8
                                    eax_17.b += edx_9:1.b
                                    ebx_7:1.b += edx_9:1.b
                                    ebx_7.b += eax_17.b
                                    var_10c:1.b = ebx_7:1.b
                                    ecx_12.b += edx_9:1.b
                                    var_10c.b = ebx_7.b
                                    esi_1 += 1
                                    edx_9.b += ecx_12.b
                                    var_10a = edx_9.b
                                else if (eax_17 == 0xc0)
                                    var_11c = ecx_12 & 0x3f
                                
                                ecx_12.b = var_10a
                                eax_17.b = var_109
                            else
                                ebx_7.b = arg3[esi_1]
                                ebx_7:1.b = arg3[esi_1 + 1]
                                ecx_12.b = arg3[esi_1 + 2]
                                eax_17.b = arg3[esi_1 + 3]
                                esi_1 += 4
                                var_10c.b = ebx_7.b
                                var_10c:1.b = ebx_7:1.b
                                var_10a = ecx_12.b
                                var_109 = eax_17.b
                            
                            var_108[(zx.d(eax_17.b) * 0xb + zx.d(ecx_12.b) * 7 + zx.d(ebx_7:1.b) * 5
                                + zx.d(ebx_7.b) * 3) & 0x3f] = var_10c.d
                            edx_9.b = var_10a
                            eax_17 = var_114_2
                            edx_9:1.b = var_109
                        
                        eax_17[0xfffffffe] = ebx_7.b
                        eax_17[0xffffffff] = ebx_7:1.b
                        *eax_17 = edx_9.b
                        
                        if (eax_14 == 4)
                            eax_17[1] = edx_9:1.b
                        
                        eax_29 = &eax_17[eax_14]
                        ecx_10 = var_11c
                        var_114_2 = eax_29
                        eax_17 = var_114_2
                    while (eax_29 + 0xfffffffe - result s< i)
                
                CookieCheckFunction(result)
                return result

CookieCheckFunction(0)
return 0
