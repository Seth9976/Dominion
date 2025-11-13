// 函数: sub_5cf520
// 地址: 0x5cf520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = __chkstk(0x4b28)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
uint32_t result = arg2
void* const edi = edx
uint32_t result_1 = result

if (*(edi + 0x2c) == 1)
    result = *(edi + 0x178)
    
    if (result != 0)
        uint32_t ecx_1 = zx.d(result.w)
        
        if (ecx_1 u< data_b809e4)
            edi = ecx_1 * 0x1c30 + data_b809e0
            
            if (*(edi + 0x1c28) != result)
                edi = nullptr
        else
            edi = nullptr
    else
        edi = nullptr

if (edi != 0 && *(edi + 0x2c) == 0)
    void* i = data_b809e0
    int32_t i_2 = 0
    result = data_b809e4 * 0x1c30 + i
    
    if (i u< result)
        while ((*(i + 0x1c28) & 0xffff0000) == 0)
            i += 0x1c30
            
            if (i u>= result)
                CookieCheckFunction(result)
                return result
        
        if (i != 0xffffffff)
            void var_4b10
            void* ebx_1 = &var_4b10
            
            do
                if (*(i + 0x2c) == 0 && *(i + 0xa4) == 0x474)
                    int32_t eax_4 = *(sub_5cba00(*(i + 0x9c)) + 0x68)
                    
                    if (eax_4 == *(edi + 0x98))
                        i_2 += 1
                        void* edx_1 = ebx_1
                        ebx_1 += 0x18
                        *edx_1 = eax_4
                        int32_t ecx_5 = *(i + 0xcc)
                        *(edx_1 + 8) = *(i + 0xc8)
                        *(edx_1 + 0xc) = ecx_5
                        *(edx_1 + 0x10) = i
                
                i += 0x1c30
                result = data_b809e4 * 0x1c30 + data_b809e0
                
                if (i u>= result)
                    break
                
                while ((*(i + 0x1c28) & 0xffff0000) == 0)
                    i += 0x1c30
                    
                    if (i u>= result)
                        goto label_5cf687
            while (i != 0xffffffff)
            
        label_5cf687:
            
            if (i_2 != 0)
                char var_4b1c_1 = 0
                int32_t ecx_7 = i_2 * 0x18
                int32_t eax_10 = ecx_7 s/ 0x18
                sub_638210(eax_10, &var_4b10 + ecx_7, &var_4b10, eax_10, var_4b1c_1.d)
                uint32_t result_2 = result_1
                int64_t var_4b20_1 = 0
                void* ebx_2 = *(result_2 + 0x2080)
                *(result_2 + 0x2084) += 1
                void* ebx_3 = ebx_2 + result_2
                *ebx_3 = 0
                
                if (i_2 s> 0)
                    int32_t eax_11 = var_4b1c_1.d
                    void var_4b08
                    void* edi_2 = &var_4b08
                    int32_t var_4b24_1 = eax_11
                    var_4b1c_1.d = 0
                    int32_t i_1
                    
                    do
                        int32_t ecx_10 = *ebx_3
                        
                        if (ecx_10 == 0)
                            goto label_5cf74b
                        
                        if (0 != *edi_2 || eax_11 != *(edi_2 + 4))
                            int32_t ecx_9 = *(result_2 + 0x2080)
                            int32_t eax_12 = *(ecx_9 + result_2)
                            *(result_2 + 0x2084) += 1
                            void* eax_15 = ecx_9 + ((eax_12 * 3 + 2) << 2)
                            ebx_3 = eax_15 + result_2
                            *(result_2 + 0x2080) = eax_15
                            *ebx_3 = 0
                        label_5cf74b:
                            *(ebx_3 + 4) = 0xd
                            ecx_10 = 0
                            var_4b1c_1.d = *edi_2
                            var_4b24_1 = *(edi_2 + 4)
                        
                        void* esi_2 = ebx_3 + ecx_10 * 0xc
                        *ebx_3 = ecx_10 + 1
                        result_2 = result_1
                        *(esi_2 + 8) = sub_5cbb20(*(edi_2 + 8))
                        void* eax_21 = *(edi_2 + 8)
                        edi_2 += 0x18
                        i_1 = i_2
                        i_2 -= 1
                        *(esi_2 + 0x10) = *(eax_21 + 0x1c28)
                        eax_11 = var_4b24_1
                        *(esi_2 + 0xc) = 0
                    while (i_1 != 1)
                
                int32_t ecx_12 = *(result_2 + 0x2080)
                result = ecx_12 + ((*(ecx_12 + result_2) * 3 + 2) << 2)
                *(result_2 + 0x2080) = result

CookieCheckFunction(result)
return result
