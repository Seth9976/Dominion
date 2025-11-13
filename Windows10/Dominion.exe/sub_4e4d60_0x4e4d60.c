// 函数: sub_4e4d60
// 地址: 0x4e4d60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_764400
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t i = __chkstk(0x3438)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t* eax_5 = *(*(eax_3 + 0x56dc) + (((i s>> 4 | i) & *(eax_3 + 0x56e0)) << 2))
void* result

if (eax_5 == 0)
label_4e4ded:
    void* ecx_2 = data_cc8dc8
    int32_t i_1 = i
    void* eax_6 = sub_4d8f30(*(ecx_2 + 0x1e1a4))
    int32_t var_1ac0 = 1
    sub_4bb260(eax_6 + 0x56dc, &i_1, &var_1ac0)
    data_cc8dc8
    int32_t var_128[0x3c]
    int32_t i_2 = sub_4e4b30(sub_4d8ad0(i), &var_128, i, 0x20)
    i_1 = i_2
    int32_t edi_1 = 0
    int32_t i_3 = i_2
    var_1ac0 = 0
    
    while (true)
        void* eax_9 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + edi_1 + 0x10
        void var_3458
        void var_1ab8
        int32_t eax_11 = memcpy(&var_1ab8, sub_4e49d0(i_3, &var_3458), 0x1990)
        int32_t edi_3 = 0
        
        if (i_3 s> 0)
            while (true)
                int32_t eax_12 = var_128[edi_3 * 2]
                void var_10f0
                int32_t var_10e8[0x3f0]
                var_10e4
                var_124
                
                if (eax_12 == 1)
                    int32_t esi_2 = *(&var_124 + (edi_3 << 3))
                    void* ecx_16 = &var_10f0
                    int32_t eax_18 = 0
                    void* ecx_17
                    
                    while (true)
                        int32_t edx_7 = *ecx_16
                        
                        if (edx_7 != 0)
                            if (edx_7 == esi_2)
                                eax_11 = eax_18 << 4
                                ecx_17 = &var_10f0 + eax_11
                                break
                            
                            eax_18 += 1
                            ecx_16 += 0x10
                            
                            if (eax_18 s< 0x20)
                                continue
                        
                        eax_11 = eax_18 << 4
                        ecx_17 = &var_10f0 + eax_11
                        *ecx_17 = zx.o(0)
                        *ecx_17 = esi_2
                        *(&var_10e8 + eax_11) = 0
                        *(&var_10e4 + eax_11) = 0xa
                        break
                    
                    *(ecx_17 + 4) = 0xffffffff
                else if (eax_12 == 2)
                    int32_t eax_15 = 0
                    void* ecx_13 = &var_10f0
                    
                    while (true)
                        int32_t edx_6 = *ecx_13
                        
                        if (edx_6 != 0)
                            if (edx_6 == 0x13)
                                void* ecx_15 = &var_10f0 + (eax_15 << 4)
                                eax_11 = *(&var_124 + (edi_3 << 3))
                                *(ecx_15 + 4) |= eax_11
                                break
                            
                            eax_15 += 1
                            ecx_13 += 0x10
                            
                            if (eax_15 s< 0x20)
                                continue
                        
                        int32_t eax_16 = eax_15 << 4
                        int32_t* ecx_14 = &var_10f0 + eax_16
                        *ecx_14 = zx.o(0)
                        var_10e8[eax_15 * 4] = 0
                        *(&var_10e4 + eax_16) = 0xa
                        eax_11 = *(&var_124 + (edi_3 << 3))
                        *ecx_14 = 0x13
                        ecx_14[1] |= eax_11
                        break
                else
                    eax_11 = eax_12 - 3
                    
                    if (eax_12 == 3)
                        int32_t esi_1 = *(&var_124 + (edi_3 << 3))
                        void* ecx_10 = &var_10f0
                        
                        while (true)
                            int32_t edx_5 = *ecx_10
                            
                            if (edx_5 != 0)
                                if (edx_5 == esi_1)
                                    eax_11 <<= 4
                                    *(&var_10f0 + eax_11 + 4) = 2
                                    break
                                
                                eax_11 += 1
                                ecx_10 += 0x10
                                
                                if (eax_11 s< 0x20)
                                    continue
                            
                            eax_11 <<= 4
                            void* ecx_11 = &var_10f0 + eax_11
                            *ecx_11 = zx.o(0)
                            *ecx_11 = esi_1
                            *(&var_10e8 + eax_11) = 0
                            *(&var_10e4 + eax_11) = 0xa
                            *(ecx_11 + 4) = 2
                            break
                edi_3 += 1
                
                if (edi_3 s>= i_1)
                    break
            
            i_3 = i_1
        
        int32_t var_30_4 = 0
        int32_t var_14_1 = 0
        char* const var_1ac4
        sub_63d850(eax_9 + 0x30, sub_4e0ff0(eax_11, &var_1ab8, &var_1ac4, *(eax_9 + 0x28)))
        int32_t var_14_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_20 = var_1ac4
            
            if (eax_20 != 0 && *eax_20 != 0)
                char* eax_21 = sub_63d4e0(&var_1ac4)
                int32_t temp4_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    var_1ac4 = &data_801800
        
        int32_t var_14_3 = 0xffffffff
        data_cc8dc8
        result = sub_4d8ad0(i_3)
        edi_1 = var_1ac0 + 0x11a8
        var_1ac0 = edi_1
        
        if (edi_1 s>= 0x34f8)
            break
else
    while (i != *eax_5)
        eax_5 = eax_5[2]
        
        if (eax_5 == 0)
            goto label_4e4ded
    
    result = &eax_5[1]
    
    if (eax_5 == 0xfffffffc || *result != 1)
        goto label_4e4ded

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
