// 函数: sub_720510
// 地址: 0x720510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg4 == arg2)
    return arg3

if (arg4 s>= 0 && arg5 s>= 0 && (arg5 == 0 || arg4 s<= divu.dp.d(0:0x7fffffff, arg5)))
    int32_t ecx_1 = arg4 * arg5
    
    if (ecx_1 s>= 0 && arg6 s>= 0 && (arg6 == 0 || ecx_1 s<= divu.dp.d(0:0x7fffffff, arg6)))
        void* eax_8 = malloc(ecx_1 * arg6)
        void* var_1c_1 = eax_8
        
        if (eax_8 != 0)
            if (arg6 s> 0)
                char* esi_1 = arg3
                var_1c_1 = eax_8
                char* var_14_1 = esi_1
                int32_t edx_6 = arg4 - 0xa + (arg2 << 3)
                int32_t var_8_1 = edx_6
                void* eax_11 = eax_8
                int32_t ecx_3 = ecx_1
                void* var_18_1 = eax_11
                int32_t i
                
                do
                    if (edx_6 u<= 0x19)
                        uint32_t ecx_4
                        
                        switch (edx_6)
                            case 0
                                int32_t edx_7 = arg5 - 1
                                
                                if (edx_7 s>= 0)
                                    int32_t temp6_1
                                    
                                    do
                                        temp6_1 = edx_7
                                        edx_7 -= 1
                                        ecx_4.b = *esi_1
                                        *eax_11 = ecx_4.b
                                        esi_1 = &esi_1[1]
                                        *(eax_11 + 1) = 0xff
                                        eax_11 += 2
                                    while (temp6_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                            case 1
                                int32_t edx_8 = arg5 - 1
                                
                                if (edx_8 s>= 0)
                                    int32_t temp7_1
                                    
                                    do
                                        temp7_1 = edx_8
                                        edx_8 -= 1
                                        ecx_4.b = *esi_1
                                        *(eax_11 + 2) = ecx_4.b
                                        esi_1 = &esi_1[1]
                                        *(eax_11 + 1) = ecx_4.b
                                        eax_11 += 3
                                        *(eax_11 - 3) = ecx_4.b
                                    while (temp7_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                            case 2
                                int32_t edx_9 = arg5 - 1
                                
                                if (edx_9 s>= 0)
                                    int32_t temp11_1
                                    
                                    do
                                        temp11_1 = edx_9
                                        edx_9 -= 1
                                        ecx_4.b = *esi_1
                                        *(eax_11 + 2) = ecx_4.b
                                        esi_1 = &esi_1[1]
                                        *(eax_11 + 1) = ecx_4.b
                                        eax_11 += 4
                                        *(eax_11 - 4) = ecx_4.b
                                        *(eax_11 - 1) = 0xff
                                    while (temp11_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                            case 7
                                int32_t edx_10 = arg5 - 1
                                
                                if (edx_10 s>= 0)
                                    int32_t temp12_1
                                    
                                    do
                                        temp12_1 = edx_10
                                        edx_10 -= 1
                                        ecx_4.b = *esi_1
                                        *eax_11 = ecx_4.b
                                        esi_1 = &esi_1[2]
                                        eax_11 += 1
                                    while (temp12_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                            case 9
                                int32_t edx_11 = arg5 - 1
                                
                                if (edx_11 s>= 0)
                                    int32_t temp13_1
                                    
                                    do
                                        temp13_1 = edx_11
                                        edx_11 -= 1
                                        ecx_4.b = *esi_1
                                        *(eax_11 + 2) = ecx_4.b
                                        esi_1 = &esi_1[2]
                                        *(eax_11 + 1) = ecx_4.b
                                        eax_11 += 3
                                        *(eax_11 - 3) = ecx_4.b
                                    while (temp13_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                            case 0xa
                                int32_t edx_12 = arg5 - 1
                                
                                if (edx_12 s>= 0)
                                    int32_t temp8_1
                                    
                                    do
                                        temp8_1 = edx_12
                                        edx_12 -= 1
                                        ecx_4.b = *esi_1
                                        *(eax_11 + 2) = ecx_4.b
                                        esi_1 = &esi_1[2]
                                        *(eax_11 + 1) = ecx_4.b
                                        eax_11 += 4
                                        *(eax_11 - 4) = ecx_4.b
                                        *(eax_11 - 1) = esi_1[0xffffffff]
                                    while (temp8_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                            case 0xf
                                int32_t edi_2 = arg5 - 1
                                
                                if (edi_2 s>= 0)
                                    int32_t temp14_1
                                    
                                    do
                                        uint32_t ecx_8 = zx.d(esi_1[1])
                                        esi_1 = &esi_1[3]
                                        eax_11 += 1
                                        temp14_1 = edi_2
                                        edi_2 -= 1
                                        *(eax_11 - 1) = ((ecx_8 * 0x96
                                            + zx.d(esi_1[0xffffffff]) * 0x1d
                                            + zx.d(esi_1[0xfffffffd]) * 0x4d) u>> 8).b
                                    while (temp14_1 - 1 s>= 0)
                                    edx_6 = var_8_1
                            case 0x10
                                int32_t edi_3 = arg5 - 1
                                
                                if (edi_3 s>= 0)
                                    int32_t temp15_1
                                    
                                    do
                                        uint32_t ecx_13 = zx.d(esi_1[1])
                                        esi_1 = &esi_1[3]
                                        eax_11 += 2
                                        int32_t edx_19 =
                                            ecx_13 * 0x96 + zx.d(esi_1[0xffffffff]) * 0x1d
                                        int32_t ecx_17 = zx.d(esi_1[0xfffffffd]) * 0x4d
                                        *(eax_11 - 1) = 0xff
                                        temp15_1 = edi_3
                                        edi_3 -= 1
                                        *(eax_11 - 2) = ((edx_19 + ecx_17) u>> 8).b
                                    while (temp15_1 - 1 s>= 0)
                                    edx_6 = var_8_1
                            case 0x12
                                int32_t edx_13 = arg5 - 1
                                
                                if (edx_13 s>= 0)
                                    int32_t temp9_1
                                    
                                    do
                                        temp9_1 = edx_13
                                        edx_13 -= 1
                                        *eax_11 = *esi_1
                                        esi_1 = &esi_1[3]
                                        eax_11 += 4
                                        *(eax_11 - 3) = esi_1[0xfffffffe]
                                        *(eax_11 - 2) = esi_1[0xffffffff]
                                        *(eax_11 - 1) = 0xff
                                    while (temp9_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                            case 0x17
                                int32_t edi_4 = arg5 - 1
                                
                                if (edi_4 s>= 0)
                                    int32_t temp10_1
                                    
                                    do
                                        uint32_t ecx_18 = zx.d(esi_1[1])
                                        esi_1 = &esi_1[4]
                                        eax_11 += 1
                                        temp10_1 = edi_4
                                        edi_4 -= 1
                                        *(eax_11 - 1) = ((ecx_18 * 0x96
                                            + zx.d(esi_1[0xfffffffe]) * 0x1d
                                            + zx.d(esi_1[0xfffffffc]) * 0x4d) u>> 8).b
                                    while (temp10_1 - 1 s>= 0)
                                    edx_6 = var_8_1
                            case 0x18
                                int32_t edi_5 = arg5 - 1
                                
                                if (edi_5 s>= 0)
                                    int32_t temp16_1
                                    
                                    do
                                        uint32_t ecx_23 = zx.d(esi_1[1])
                                        esi_1 = &esi_1[4]
                                        eax_11 += 2
                                        temp16_1 = edi_5
                                        edi_5 -= 1
                                        *(eax_11 - 2) = ((ecx_23 * 0x96
                                            + zx.d(esi_1[0xfffffffe]) * 0x1d
                                            + zx.d(esi_1[0xfffffffc]) * 0x4d) u>> 8).b
                                        int32_t ecx_27
                                        ecx_27.b = esi_1[0xffffffff]
                                        *(eax_11 - 1) = ecx_27.b
                                    while (temp16_1 - 1 s>= 0)
                                    edx_6 = var_8_1
                            case 0x19
                                int32_t edx_30 = arg5 - 1
                                
                                if (edx_30 s>= 0)
                                    int32_t temp17_1
                                    
                                    do
                                        temp17_1 = edx_30
                                        edx_30 -= 1
                                        *eax_11 = *esi_1
                                        esi_1 = &esi_1[4]
                                        eax_11 += 3
                                        *(eax_11 - 2) = esi_1[0xfffffffd]
                                        *(eax_11 - 1) = esi_1[0xfffffffe]
                                    while (temp17_1 - 1 s>= 0)
                                
                                edx_6 = var_8_1
                        
                        ecx_3 = ecx_1
                    
                    esi_1 = &var_14_1[arg2 * arg5]
                    eax_11 = var_18_1 + ecx_3
                    i = arg6
                    arg6 -= 1
                    var_14_1 = esi_1
                    var_18_1 = eax_11
                while (i != 1)
            
            free(arg3)
            return var_1c_1

free(arg3)
return 0
