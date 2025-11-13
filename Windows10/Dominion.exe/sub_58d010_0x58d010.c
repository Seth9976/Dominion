// 函数: sub_58d010
// 地址: 0x58d010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t result = arg2
uint32_t i = 0
int32_t result_1 = result
int32_t* ebx = &arg1[0x34e]

if (arg1[0x34e] s> 0)
    void* var_c9c_1 = nullptr
    
    do
        int32_t var_cc8
        uint32_t var_cc4
        
        if (*(result + 4) != 0)
            int32_t var_cb8_1 = 0
            int32_t var_cbc_1 = 0xffffffff
            result = sub_571fa0(result, i, arg1, 0x1000, 1, 0x476, nullptr, var_cc8, var_cc4, 0)
        
        int32_t eax_2 = sub_51bb20(result, i, arg1, ebx, 2)
        int32_t ecx_2 = arg1[0x350]
        int32_t var_c98_1 = eax_2
        
        if (ecx_2 == 0 || (arg1[0x351] & 0x100) != 0)
            int32_t var_cb8_3 = ecx_2
            uint32_t eax_13 = zx.d(*(arg1 + 0x1069))
            var_cc4 = eax_13
            var_c98_1 =
                eax_2 | sub_574670(eax_13, i, arg1, var_cc4.b, result_1 + 8, *(result_1 + 0x48))
        else
            int32_t* ebx_2 = var_c9c_1 + sub_5b06a0(ecx_2)
            void* j = &ebx_2[0x40]
            int32_t* var_ca4_1 = ebx_2
            void* j_3 = j
            int32_t* j_2
            
            if (ebx_2[0x40] != 0)
                void* j_5 = nullptr
                
                do
                    int32_t edx_4 = *ebx_2
                    
                    if (edx_4 == 0)
                        break
                    
                    sub_5727e0(j, edx_4, arg1, 0x3eb, i, nullptr)
                    j = j_5 + 1
                    ebx_2 = &ebx_2[1]
                    j_5 = j
                while (j s< 0x40)
                
                j_2 = j_3
                
                for (int32_t j_1 = 0; j_1 s< 0x40; )
                    int32_t edx_5 = *j_2
                    
                    if (edx_5 == 0)
                        break
                    
                    sub_5727e0(j_2, edx_5, arg1, 0x3eb, i, nullptr)
                    j_1 += 1
                    j_2 = j_3 + 4
                    j_3 = j_2
            else
                void* var_cb8_2 = var_c9c_1
                uint32_t eax_6 = zx.d(*(arg1 + 0x1069))
                var_cc4 = eax_6
                sub_574670(eax_6, i, arg1, var_cc4.b, result_1 + 8, *(result_1 + 0x48))
                j_2 = nullptr
                int32_t* j_4 = nullptr
                
                do
                    int32_t edx_3 = *ebx_2
                    
                    if (edx_3 == 0)
                        break
                    
                    if (edx_3 != 0x104 && edx_3 != 0x101)
                        sub_5727e0(j_2, edx_3, arg1, 0x3eb, i, nullptr)
                        j_2 = j_4
                    
                    j_2 += 1
                    ebx_2 = &ebx_2[1]
                    j_4 = j_2
                while (j_2 s< 0xa)
            
            int32_t* j_6 = nullptr
            void* ebx_4 = &var_ca4_1[0x80]
            
            do
                int32_t edx_6 = *ebx_4
                
                if (edx_6 == 0)
                    break
                
                sub_5727e0(j_2, edx_6, arg1, 0x3ec, i, nullptr)
                j_2 = j_6 + 1
                ebx_4 += 4
                j_6 = j_2
            while (j_2 s< 0x40)
            
            int32_t* j_7 = nullptr
            void* ebx_6 = &var_ca4_1[0xc0]
            
            do
                int32_t edx_7 = *ebx_6
                
                if (edx_7 == 0)
                    break
                
                sub_5727e0(j_2, edx_7, arg1, 0x3e9, i, nullptr)
                j_2 = j_7 + 1
                ebx_6 += 4
                j_7 = j_2
            while (j_2 s< 0x40)
        
        int32_t var_c8c[0x321]
        int32_t eax_16 = sub_590990(&var_c8c, i, arg1, 0x3eb, &var_c8c)
        uint32_t eax_18 = var_c98_1 & 1
        void* edx_10 = &var_c8c[eax_16]
        int32_t ecx_13 = eax_16 << 2 s>> 2
        
        if (eax_18 == 0)
            sub_4f6c30(eax_18, edx_10, &var_c8c, ecx_13, 0.d)
        else
            sub_5947f0(eax_18, edx_10, &var_c8c, ecx_13, arg1)
        
        int32_t eax_19 = arg1[0x541]
        
        if (eax_19 != 3 && eax_19 != 5 && eax_19 != 4 && eax_19 != 6 && arg1[0x540].b == 0)
            uint32_t i_1 = i
            
            if (i == arg1[0x673])
                i_1 = arg1[0x674]
            
            var_cc4 = eax_18
            var_cc8 = eax_16
            sub_59f9b0(i_1, i, arg1, i_1, 2, 0, &var_c8c, var_cc8, var_cc4, 0, 0, 0)
        
        var_c9c_1 += 0x400
        ebx = &arg1[0x34e]
        result = result_1
        i += 1
    while (i s< *ebx)

CookieCheckFunction(result)
return result
