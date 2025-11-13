// 函数: sub_725b60
// 地址: 0x725b60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_9c = 0
int32_t var_4c[0x11]
memset(&var_4c, 0, 0x44)
memset(arg3, 0, 0x400)
int32_t ecx = 0

if (arg4 s> 0)
    do
        uint32_t eax_2 = zx.d(arg2[ecx])
        ecx += 1
        var_4c[eax_2] += 1
    while (ecx s< arg4)

var_4c[0] = 0
int32_t ecx_1 = 1

while (var_4c[ecx_1] s<= 1 << ecx_1.b)
    ecx_1 += 1
    
    if (ecx_1 s>= 0x10)
        int32_t esi_1 = 0
        int32_t var_94_1 = 0xf
        int32_t* edx_1 = arg3 + 0x424
        int16_t* eax_4 = arg3 + 0x466
        int32_t* var_a0_1 = edx_1
        int16_t* var_98_1 = eax_4
        int32_t ebx_1 = 1
        
        while (true)
            eax_4[-0x32] = esi_1.w
            int32_t var_8c[0x10]
            var_8c[ebx_1] = esi_1
            *eax_4 = var_9c.w
            int32_t eax_5 = var_4c[ebx_1]
            int32_t esi_2 = esi_1 + eax_5
            char ecx_3 = var_94_1.b
            
            if (eax_5 != 0)
                if (esi_2 - 1 s>= 1 << ebx_1.b)
                    break
                
                ecx_3 = var_94_1.b
                edx_1 = var_a0_1
            
            var_94_1 -= 1
            esi_1 = esi_2 * 2
            *edx_1 = esi_2 << ecx_3
            edx_1 = &edx_1[1]
            int32_t eax_10 = var_9c + var_4c[ebx_1]
            ebx_1 += 1
            var_9c = eax_10
            eax_4 = &var_98_1[1]
            var_a0_1 = edx_1
            var_98_1 = eax_4
            
            if (ebx_1 s>= 0x10)
                int32_t ebx_2 = 0
                *(arg3 + 0x460) = 0x10000
                
                if (arg4 s> 0)
                    do
                        char* eax_12
                        eax_12.b = arg2[ebx_2]
                        uint32_t esi_3 = zx.d(eax_12.b)
                        
                        if (eax_12.b != 0)
                            int32_t edx_5 = zx.d(*(arg3 + (esi_3 << 1) + 0x464))
                                - zx.d(*(arg3 + (esi_3 << 1) + 0x400)) + var_8c[esi_3]
                            int16_t ecx_6 = ebx_2.w
                            int16_t eax_17
                            eax_17.b = eax_12.b
                            *(arg3 + edx_5 + 0x484) = eax_17.b
                            *(arg3 + (edx_5 << 1) + 0x5a4) = ecx_6
                            
                            if (esi_3 u<= 9)
                                int32_t eax_18 = var_8c[esi_3]
                                int32_t ecx_10 = (eax_18 s>> 1 & 0x5555) | ((eax_18 & 0x5555) * 2)
                                int32_t eax_24 = (ecx_10 u>> 2 & 0x3333) | (ecx_10 & 0x3333) << 2
                                int32_t ecx_16 = (eax_24 u>> 4 & 0xf0f) | (eax_24 & 0xf0f) << 4
                                
                                for (int32_t i =
                                        (zx.d(ecx_16.b) << 8 | ecx_16 u>> 8) s>> (0x10 - esi_3.b); 
                                        i s< 0x200; i += 1 << esi_3.b)
                                    *(arg3 + (i << 1)) = (esi_3 << 9).w | ecx_6
                            
                            var_8c[esi_3] += 1
                        
                        ebx_2 += 1
                    while (ebx_2 s< arg4)
                
                CookieCheckFunction(1)
                return 1
        
        break

CookieCheckFunction(0)
return 0
