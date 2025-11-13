// 函数: sub_50f980
// 地址: 0x50f980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result = sub_573400()
void* esi = nullptr
void* edi = *(result + 4)

if (arg1 != 0)
    int32_t* ecx = 7
    result = edi + 0x1594
    int32_t* var_c98_1 = 7
    
    while (true)
        if (*result == arg1)
            var_c98_1 = ecx
            break
        
        if (*(result + 4) == arg1)
            break
        
        ecx += 1
        result += 0x10
        var_c98_1 = ecx
        
        if (ecx s>= 0x48)
            CookieCheckFunction(result)
            return result
    
    if (ecx != 0)
        if (ecx s>= 0x48)
            sub_591930()
            ecx = var_c98_1
        
        void* eax_5 = (ecx << 4) + 0x152c + edi
        int32_t i = *eax_5
        
        while (i != 0)
            uint32_t ebx_1 = zx.d(i.w)
            
            if (ebx_1 u>= 0x320)
                sub_591930()
                ecx = var_c98_1
            
            void* eax_7 = ebx_1 * 0x64 + edi
            int32_t j_2 = arg2 - 1
            void* var_c9c_1 = eax_7
            i = *(eax_7 + 0x1aa4)
            
            if (j_2 s> 0)
                int32_t j
                
                do
                    sub_5727e0(eax_7, *(eax_7 + 0x1a4c), edi, ecx, 0xffffffff, esi)
                    ecx = var_c98_1
                    eax_7 = var_c9c_1
                    esi += 1
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            ecx = var_c98_1
            esi += 1
        
        int32_t* ebx_6
        
        if (arg1 s<= 0xd3d)
            if (arg1 == 0xd3d || arg1 == 0x91c || arg1 == 0x923 || arg1 == 0xd30)
                goto label_50fb09
            
            ebx_6 = var_c98_1
        else if (arg1 == 0x1128 || arg1 == 0x1301)
        label_50fb09:
            void var_c94
            int32_t i_1 = sub_590990(&var_c94, 0xffffffff, edi, ecx, &var_c94)
            int32_t i_2 = i_1
            
            if (i_1 s<= 0)
                ebx_6 = var_c98_1
            else
                ebx_6 = var_c98_1
                
                do
                    int32_t ecx_8 = *(edi + 0x1504)
                    void* ecx_9
                    
                    if (ecx_8 == 3 || ecx_8 == 5)
                        ecx_9 = &data_1777938
                    
                    if ((ecx_8 != 3 && ecx_8 != 5) || *(edi + 0x151c) == 0)
                        ecx_9 = edi
                    
                    uint32_t eax_9 = sub_63ed10(ecx_9, i_1)
                    uint32_t var_c9c_2 = eax_9
                    
                    if (ebx_6 s>= 0x48)
                        sub_591930()
                        eax_9 = var_c9c_2
                    
                    int32_t ebx_7 = 0
                    int32_t j_1 = *eax_5
                    
                    if (eax_9 s> 0)
                        while (j_1 != 0)
                            uint32_t esi_1 = zx.d(j_1.w)
                            
                            if (esi_1 u>= 0x320)
                                sub_591930()
                            
                            eax_9 = esi_1 * 0x64
                            ebx_7 += 1
                            j_1 = *(eax_9 + edi + 0x1aa4)
                            
                            if (ebx_7 s>= var_c9c_2)
                                break
                    
                    ebx_6 = var_c98_1
                    sub_572560(sub_5723a0(eax_9, j_1, edi, nullptr), j_1, edi, ebx_6, 0xffffffff)
                    int32_t eax_11 = *(edi + 0x1504)
                    
                    if (eax_11 != 3 && eax_11 != 5 && eax_11 != 4 && eax_11 != 6)
                        sub_61b1b0(eax_11, 9, eax_11 == 2, 0xffffffff, j_1, ebx_6, 0xffffffff, 
                            nullptr, 0xf, 0, 0, 0, 0, 0)
                    
                    i_1 = i_2 - 1
                    i_2 = i_1
                while (i_1 s> 0)
        else
            ebx_6 = var_c98_1
        
        result = sub_56de40(edi, ebx_6)

CookieCheckFunction(result)
return result
