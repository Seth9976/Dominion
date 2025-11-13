// 函数: sub_4be9d0
// 地址: 0x4be9d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

for (void* const i = &data_77f08c; i != 0x77f0a0; i += 0x14)
    if (*(i - 4) == 1 && *i == arg1)
        void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        int32_t* eax_5 = *(*(eax_3 + 0x7200) + (((arg1 s>> 4 | arg1) & *(eax_3 + 0x7204)) << 2))
        
        if (eax_5 == 0)
        label_4bea58:
            int32_t ecx_8 = 0
            int32_t eax_6 = 0
            void* const ecx_9
            
            while (true)
                if (*(eax_6 + &data_78087c) == arg1)
                    ecx_9 = ecx_8 * 0x10c + &data_780878
                    break
                
                eax_6 += 0x10c
                ecx_8 += 1
                
                if (eax_6 u>= 0x28d4)
                    ecx_9 = &data_780878
                    break
            
            int32_t eax_7
            
            if (*(ecx_9 + 8) == 5)
                int32_t var_48
                sub_4be540(ecx_9, &var_48)
                eax_7 = var_48
            
            int32_t* var_50
            void* var_4c
            
            if (*(ecx_9 + 8) != 5 || (eax_7 != 0 && eax_7 != 1 && eax_7 != 4 && eax_7 != 6))
                uint32_t eax_11 = sub_4daf40(&var_50, &var_4c)
                int32_t edi_1 = 0
                
                if (eax_11 s> 0)
                    do
                        if (sub_4db560(var_50[edi_1], arg1).b != 0)
                            goto label_4bea07
                        
                        edi_1 += 1
                    while (edi_1 s< eax_11)
                
                int32_t* eax_13
                eax_13.b = sub_4be8d0(arg1)[1] == 1
                CookieCheckFunction(eax_13)
                return eax_13
            
            var_50 = arg1
            
            if (*(sub_4be8d0(arg1) + 4) == 1)
                void* eax_8 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                var_4c = 1
                sub_4bb260(eax_8 + 0x7200, &var_50, &var_4c)
                data_cc8dc8
                sub_4d8ad0(arg1)
                char* eax_10
                eax_10.b = 0
                CookieCheckFunction(eax_10)
                return eax_10
        else
            while (arg1 != *eax_5)
                eax_5 = eax_5[2]
                
                if (eax_5 == 0)
                    goto label_4bea58
            
            if (eax_5 == 0xfffffffc)
                goto label_4bea58
        
        break

label_4bea07:
void* eax_2
eax_2.b = 0
CookieCheckFunction(eax_2)
return eax_2
