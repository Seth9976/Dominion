// 函数: sub_511a60
// 地址: 0x511a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

for (int32_t* i = *(data_1597de8 + (((arg1 s>> 4 | arg1) & data_1597dec) << 2)); i != 0; i = i[2])
    if (arg1 == *i)
        if (i != 0xfffffffc)
            void* ebx_1 = i[1]
            
            if (ebx_1 != 0)
                int32_t j = 0
                int32_t edi_1 = 0
                
                if (data_ccb414 s> 0)
                    int32_t var_19c[0x65]
                    int32_t k
                    
                    do
                        k = *(sub_571b30(*((j << 2) + &data_cca794), 0x17) + 0x9c) & 0x800
                        
                        if (k == 0)
                            k = *(sub_571b30(*((j << 2) + &data_cca794), k + 0x17) + 0x9c) & 0x40
                            
                            if (k == 0)
                                int32_t edx_5 = *((j << 2) + &data_cca794)
                                int32_t* ecx_8 = ebx_1 + 4
                                
                                do
                                    if (*ecx_8 == edx_5)
                                        if (k != 0xffffffff)
                                            void* ecx_9
                                            
                                            if (k s< 0xa)
                                                ecx_9 = 0x32
                                            else if (k s< 0x14)
                                                ecx_9 = 0x19
                                            else if (k s>= 0x1e)
                                                int32_t ecx_10
                                                ecx_10.b = k s< 0x28
                                                ecx_9 = (ecx_10 << 1) + 5
                                            else
                                                ecx_9 = 0xd
                                            
                                            var_19c[edi_1 * 2] = ecx_9
                                            var_198
                                            *(&var_198 + (edi_1 << 3)) = edx_5
                                            edi_1 += 1
                                        
                                        break
                                    
                                    k += 1
                                    ecx_8 = &ecx_8[1]
                                while (k s< 0x32)
                        
                        j += 1
                    while (j s< data_ccb414)
                    
                    if (edi_1 != 0)
                        uint32_t result = sub_51e050(k, &var_19c, &data_cc8de0, edi_1)
                        sub_58ffd0(&data_cca794, result)
                        CookieCheckFunction(result)
                        return result
        
        break

CookieCheckFunction(0)
return 0
