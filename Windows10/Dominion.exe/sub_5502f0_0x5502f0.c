// 函数: sub_5502f0
// 地址: 0x5502f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_571b30(arg1, data_cce9b0)

if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) != 0)
label_55053a:
    CookieCheckFunction(0)
    return 0

int32_t edx_4 = data_cce9b0

if (edx_4 s>= 0x12)
    void* eax_5 = sub_571b30(arg1, edx_4)
    int32_t edx_5 = 0
    void* esi_1 = eax_5 + 0xa8
    
    while (true)
        int32_t ecx_1 = *esi_1
        
        if (ecx_1 != 0)
            if (ecx_1 == 1)
                goto label_55053a
            
            if (ecx_1 == 0xd)
                goto label_55053a
            
            edx_5 += 1
            esi_1 += 0xb4
            
            if (edx_5 s< 8)
                continue
        
        int32_t ecx_2 = 0
        void* eax_6 = eax_5 + 0xc8
        
        while (true)
            int32_t edx_6 = *(eax_6 - 0x20)
            
            if (edx_6 == 0)
                goto label_5503b6
            
            if (edx_6 == 0xd && *eax_6 != 0)
                if (*(ecx_2 * 0xb4 + eax_5 + 0xc0) != 0)
                    goto label_55053a
                
            label_5503b6:
                int32_t ecx_3 = 0
                void* eax_8 = eax_5 + 0xc4
                
                while (true)
                    int32_t edx_7 = *(eax_8 - 0x1c)
                    
                    if (edx_7 == 0)
                        goto label_5503ff
                    
                    if (edx_7 == 0xd && *eax_8 != 0)
                        if (*(ecx_3 * 0xb4 + eax_5 + 0xc0) != 0)
                            goto label_55053a
                        
                    label_5503ff:
                        int32_t ecx_5 = 0
                        void* eax_11 = sub_571b30(arg1, data_cce9b0) + 0xac
                        
                        while (true)
                            int32_t edx_9 = *(eax_11 - 4)
                            
                            if (edx_9 != 0)
                                if (edx_9 == 6)
                                    goto label_55053a
                                
                                if (*eax_11 == 2)
                                    goto label_55053a
                                
                                ecx_5 += 1
                                eax_11 += 0xb4
                                
                                if (ecx_5 s< 8)
                                    continue
                            
                            int32_t i = 0
                            void* eax_13 = sub_571b30(arg1, data_cce9b0) + 0xa8
                            
                            do
                                int32_t edx_11 = *eax_13
                                
                                if (edx_11 == 0)
                                    break
                                
                                if (edx_11 == 0xf)
                                    goto label_55053a
                                
                                i += 1
                                eax_13 += 0xb4
                            while (i s< 8)
                            
                            int32_t esi_2 = 0
                            int32_t i_1 = 0
                            void* eax_15 = sub_571b30(arg1, data_cce9b0) + 0xbc
                            
                            do
                                int32_t edx_13 = *(eax_15 - 0x14)
                                
                                if (edx_13 == 0)
                                    break
                                
                                if (edx_13 == 0x10)
                                    esi_2 += 1
                                
                                i_1 += 1
                                eax_15 += 0xb4
                            while (i_1 s< 8)
                            
                            if (esi_2 s> 0)
                                goto label_55053a
                            
                            int32_t i_2 = *(sub_571b30(arg1, data_cce9b0) + 0x98) & 0x20000
                            
                            if (i_2 != 0)
                                goto label_55053a
                            
                            int32_t var_a4 = 0xd1e
                            int32_t var_a0_1 = 0xb01
                            int32_t var_9c_1 = 0xb02
                            
                            do
                                if ((&var_a4)[i_2] == arg1)
                                    goto label_55053a
                                
                                i_2 += 1
                            while (i_2 s< 3)
                            
                            int32_t var_8c[0x1a]
                            
                            if ((*(sub_571b30(arg1, data_cce9b0) + 0x92) & 1) != 0)
                                int32_t eax_20 = sub_593ef0(data_cce9c4, &var_8c)
                                int32_t esi_3 = 0
                                
                                if (eax_20 s<= 0)
                                    goto label_55053a
                                
                                while ((*(sub_571b30(var_8c[esi_3], data_cce9b0) + 0x92) & 1) == 0)
                                    esi_3 += 1
                                    
                                    if (esi_3 s>= eax_20)
                                        goto label_55053a
                            
                            int32_t var_24 = 0x1000
                            int32_t* ebx_1 = &var_24
                            int32_t var_20_1 = 0
                            int32_t esi_4 = 0x1000
                            int32_t var_1c_1 = 0x80000000
                            int32_t edi_3 = 0
                            int32_t var_18_1 = 0
                            int32_t var_14_1 = 0
                            int32_t var_10_1 = 0x400
                            
                            while (true)
                                void* eax_22 = sub_571b30(arg1, data_cce9b0)
                                
                                if (((esi_4 & *(eax_22 + 0x98)) | (*(eax_22 + 0x9c) & edi_3)) != 0)
                                    int32_t eax_25 = sub_593ef0(data_cce9c4, &var_8c)
                                    int32_t esi_5 = 0
                                    
                                    if (eax_25 s<= 0)
                                        goto label_55053a
                                    
                                    while (true)
                                        void* eax_26 = sub_571b30(var_8c[esi_5], data_cce9b0)
                                        
                                        if (((esi_4 & *(eax_26 + 0x98))
                                                | (*(eax_26 + 0x9c) & edi_3)) != 0)
                                            break
                                        
                                        esi_5 += 1
                                        
                                        if (esi_5 s>= eax_25)
                                            CookieCheckFunction(0)
                                            return 0
                                
                                ebx_1 = &ebx_1[2]
                                void var_c
                                
                                if (ebx_1 == &var_c)
                                    break
                                
                                esi_4 = *ebx_1
                                edi_3 = ebx_1[1]
                            
                            break
                        
                        break
                    
                    ecx_3 += 1
                    eax_8 += 0xb4
                    
                    if (ecx_3 s>= 8)
                        goto label_5503ff
                
                break
            
            ecx_2 += 1
            eax_6 += 0xb4
            
            if (ecx_2 s>= 8)
                goto label_5503b6
        
        break

CookieCheckFunction(1)
return 1
