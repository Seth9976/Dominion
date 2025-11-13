// 函数: sub_58ac40
// 地址: 0x58ac40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t edx
ecx, edx = __chkstk(0x1d2c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg1
int32_t* edi = arg2
void* var_14 = ecx
int32_t var_1d24 = ebx
int32_t* var_1d1c = edi
void var_1d14
void* j
int32_t edx_1
j, edx_1 = sub_576540(ecx, edx, ecx, &var_1d14)
int32_t i = 0

if (*edi s> 0)
    do
        int16_t eax_3 = (*(ebx + (i << 2))).w
        uint32_t ebx_1 = zx.d(eax_3)
        
        if (ebx_1 u>= 0x320)
            edx_1 = sub_591930()
        
        j = ebx_1 * 0x64 + ecx
        void* j_1 = j
        
        if (*(j + 0x1a50) != 0x3ea)
            ebx = var_1d24
        else
            char eax_6
            uint32_t edx_2
            eax_6, edx_2 = sub_5846c0(&var_1d14, edx_1, ecx, &var_1d14, 0x19, 0)
            
            if (eax_6 != 0)
                edx_2 = 0
                
                if (*(edx * 0x5a30 + ecx + 0x17530) s>= 3)
                    edx_2 = 1
                
                char var_1d20_1
                var_1d20_1.d = edx_2
            
            j, edx_1 = sub_5846c0(&var_1d14, edx_2, ecx, &var_1d14, 0x18, 0)
            
            if (j.b == 0)
                ebx = var_1d24
            else
                int32_t ecx_5
                j, ecx_5, edx_1 = sub_5757f0(j, eax_3, ecx, 4, 0)
                
                if (j.b == 0)
                    ebx = var_1d24
                else
                    int32_t var_190c[0x320]
                    int32_t (* var_14_2)[0x320] = &var_190c
                    int32_t var_c8c[0x31a]
                    uint32_t eax_10
                    eax_10, edx_1 = sub_586c00(&var_c8c, edx, ecx, ecx_5, &var_c8c)
                    
                    if (ebx_1 u>= 0x320)
                        edx_1 = sub_591930()
                    
                    int32_t ecx_7 = 0
                    j = *(j_1 + 0x1a4c)
                    
                    if (eax_10 s> 0)
                        while (var_c8c[ecx_7] != j)
                            ecx_7 += 1
                            
                            if (ecx_7 s>= eax_10)
                                goto label_58adb2
                    
                    if (eax_10 s<= 0 || ecx_7 == 0xffffffff)
                    label_58adb2:
                        edi = var_1d1c
                        ebx = var_1d24
                    else
                        edi = var_1d1c
                        
                        if (var_190c[ecx_7] s>= 2)
                            *edi -= 1
                            ebx = var_1d24
                            j = *(ebx + (*edi << 2))
                            *(ebx + (i << 2)) = j
                            i -= 1
                        else
                            ebx = var_1d24
        
        i += 1
    while (i s< *edi)

CookieCheckFunction(j)
return j
