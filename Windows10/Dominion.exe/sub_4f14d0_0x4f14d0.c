// 函数: sub_4f14d0
// 地址: 0x4f14d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = arg6
void* ebx = arg4
void* edi = arg3
char* ecx = arg7
void* var_d28 = edi
void* var_d3c = ebx
uint32_t result_2 = result
char* var_d2c = ecx

if (*(arg2 + 0xd4) s< 0x1f4)
    if (result == *(ebx + 0x6c))
        void var_d24
        sub_5939a0(&var_d24, ebx)
        int32_t ecx_2 = *(ebx + 0x6c)
        
        if (ecx_2 s> 0)
            void var_cb4
            __builtin_memcpy(&var_cb4, arg5, ecx_2 << 2)
            edi = var_d28
        
        result = sub_4efcf0(&var_d24, arg2, edi, &var_d24)
        ecx = var_d2c
    
    int32_t i = 0
    
    if (*(ebx + 0x6c) s> 0)
        void* edx_2 = ebx + 0x70
        void* var_d40_1 = edx_2
        void* var_d30_1 = edx_2
        
        do
            result = &ecx[i]
            uint32_t result_1 = result
            
            if (ecx[i] == 0)
                result = 0
                
                if (i s<= 0)
                label_4f1675:
                    *(arg5 + (result_2 << 2)) = *var_d30_1
                    edi = var_d28
                    ecx[i] = 1
                    sub_4f14d0(ebx, arg5, result_2 + 1, ecx)
                    result = result_1
                    edx_2 = ebx + 0x70
                    ecx = var_d2c
                    *result = 0
                else
                    void* ebx_1 = edx_2
                    
                    while (true)
                        if (ecx[result] == 0)
                            void* edx_4 = *ebx_1 * 0x64 + edi
                            int32_t edi_1 = *(var_d40_1 + (i << 2)) * 0x64
                            
                            if (*(edi_1 + var_d28 + 0x1a4c) != *(edx_4 + 0x1a4c)
                                    || *(edi_1 + var_d28 + 0x1a70) != *(edx_4 + 0x1a70))
                                ecx = var_d2c
                                edi = var_d28
                            else
                                edi = var_d28
                                ecx = var_d2c
                                
                                if (*(edi_1 + var_d28 + 0x1a50) == *(edx_4 + 0x1a50))
                                    ebx = var_d3c
                                    edx_2 = var_d40_1
                                    break
                        
                        result += 1
                        ebx_1 += 4
                        
                        if (result s>= i)
                            ebx = var_d3c
                            goto label_4f1675
            
            var_d30_1 += 4
            i += 1
        while (i s< *(ebx + 0x6c))

CookieCheckFunction(result)
return result
