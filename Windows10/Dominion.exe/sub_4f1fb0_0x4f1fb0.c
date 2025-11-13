// 函数: sub_4f1fb0
// 地址: 0x4f1fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (*(arg2 + 0x40) == 2)
    sub_4f19c0(arg1, arg2)

if (*(arg2 + 0x40) == 3)
    sub_4f1d90(arg1, arg2)

if (*(arg2 + 0x40) == 1)
    int32_t edi_1 = *(arg2 + 0x50)
    
    if (edi_1 == *(arg2 + 0x4c) && sub_4f1f40(arg1, edi_1) s<= 5)
        int32_t ecx_2 = 0
        int32_t i = *(edi_1 * 0x5a30 + arg1 + 0x172d0)
        
        if (i != 0)
            do
                ecx_2 += 1
                i = *(i * 0x64 + arg1 + 0x1aa4)
            while (i != 0)
            
            if (ecx_2 s> 1)
                int32_t i_1 = 0
                
                if (*(arg2 + 0x6c) s> 0)
                    void* ecx_3 = arg2 + 0x70
                    
                    do
                        int32_t eax_6 = *(*ecx_3 * 0x64 + arg1 + 0x1a4c)
                        
                        if (eax_6 s> 0xc0b)
                            if (eax_6 == 0xe10)
                                goto label_4f2130
                            
                            if (eax_6 == 0xe0c || eax_6 == 0xe0d)
                                goto label_4f2130
                            
                            if (eax_6 == 0xe08 || eax_6 == 0xc12 || eax_6 == 0xc13)
                                goto label_4f2130
                            
                            if (eax_6 == 0x1211)
                                goto label_4f2130
                            
                            if (eax_6 == 0x1111 || eax_6 == 0x1006 || eax_6 == 0x1033)
                                goto label_4f2130
                        else if (eax_6 == 0xc0b)
                        label_4f2130:
                            *(arg2 + 0x6c) -= 1
                            i_1 -= 1
                            *ecx_3 = *(arg2 + (*(arg2 + 0x6c) << 2) + 0x70)
                            ecx_3 -= 4
                        else
                            if (eax_6 == 0x603)
                                goto label_4f2130
                            
                            if (eax_6 == 0x501 || eax_6 == 0x50b)
                                goto label_4f2130
                            
                            if (eax_6 == 0x40f || eax_6 == 0x316 || eax_6 == 0x407)
                                goto label_4f2130
                            
                            if (eax_6 == 0x91b || eax_6 == 0xb04)
                                goto label_4f2130
                            
                            if (eax_6 == 0x904 || eax_6 == 0x605 || eax_6 == 0x61d)
                                goto label_4f2130
                        
                        i_1 += 1
                        ecx_3 += 4
                    while (i_1 s< *(arg2 + 0x6c))

uint32_t result = *(arg2 + 0x40)

if (result == 7)
    int32_t edx_2 = *(arg2 + 0x50)
    
    if (edx_2 == *(arg2 + 0x4c))
        int32_t eax_19 = sub_4f1f40(arg1, edx_2)
        uint32_t result_1 = *(arg2 + 0x60)
        result = eax_19 - 5
        
        if (result_1 s<= result)
            result_1 = result
        
        if (*(arg2 + 0x5c) s> result_1)
            *(arg2 + 0x5c) = result_1
            CookieCheckFunction(result)
            return result
else if (result == 0x32)
    int32_t i_2 = result - 0x2b
    int32_t ebx_1 = 0
    void* ecx_8 = arg1 + 0x1594
    int32_t var_c8c[0x321]
    
    do
        if (*(ecx_8 + 8) != 0)
            result = *ecx_8
            var_c8c[ebx_1] = result
            ebx_1 += 1
        
        i_2 += 1
        ecx_8 += 0x10
    while (i_2 s< 0x21)
    
    int32_t i_3 = 0
    
    if (*(arg2 + 0x6c) s> 0)
        void* ecx_9 = arg2 + 0x70
        void* var_c94_1 = ecx_9
        
        do
            int32_t eax_20 = 0
            char var_c8d_1 = 1
            
            if (ebx_1 s> 0)
                do
                    if (*(ecx_9 + (i_3 << 2)) == var_c8c[eax_20])
                        var_c8d_1 = 0
                        break
                    
                    eax_20 += 1
                while (eax_20 s< ebx_1)
            
            int32_t edx_3 = 0
            int32_t eax_21 = *(arg1 + 0x19b8)
            int32_t var_c9c_1 = eax_21
            
            if (eax_21 s> 0)
                void* ecx_12 = arg1 + 0x3b5b8
                
                do
                    if (*(ecx_12 - 4) == 3 && *ecx_12 == 0x1e)
                        if (*(ecx_12 + 4) == *(arg2 + (i_3 << 2) + 0x70))
                            var_c8d_1 = 1
                            break
                        
                        eax_21 = var_c9c_1
                    
                    edx_3 += 1
                    ecx_12 += 0xa8
                while (edx_3 s< eax_21)
            
            result = *(sub_571b30(*var_c94_1, *(arg1 + 0xd48)) + 0x90)
            void* ecx_18
            
            if ((result & 0x10000) u> 0 || result s>> 0x18 s> 0 || var_c8d_1 != 0)
                *(arg2 + 0x6c) -= 1
                i_3 -= 1
                result = *(arg2 + (*(arg2 + 0x6c) << 2) + 0x70)
                *var_c94_1 = result
                ecx_18 = var_c94_1 - 4
            else
                ecx_18 = var_c94_1
            
            i_3 += 1
            var_c94_1 = ecx_18 + 4
            ecx_9 = arg2 + 0x70
        while (i_3 s< *(arg2 + 0x6c))

CookieCheckFunction(result)
return result
