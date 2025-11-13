// 函数: sub_68e110
// 地址: 0x68e110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e47b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
int32_t var_18 = 0
char* const var_14 = &data_801800
int32_t var_8_1 = 1
int32_t esi = 0
void* const var_34 = &data_871b58
void* const var_30 = &data_824db0
void* const var_2c = &data_877f58
void* const var_28 = &data_877e34
void* const var_24 = &data_877f54
bool cond:5_1

while (true)
    wchar32 const* const var_1c
    
    if (sub_68cbb0(&var_14, (&var_34)[esi], arg2, &var_14) != 0)
        sub_63d720(&var_1c, U"s")
        var_8_1.b = 3
        char* eax_25 = *arg2
        *arg1 = eax_25
        
        if (eax_25 != 0 && *eax_25 != 0)
            char* eax_26 = sub_63d4e0(arg1)
            *(eax_26 + 4) += 1
        
        char* esi_6 = var_1c
        char* eax_27 = &data_801800
        int32_t var_18_9 = 2
        
        if (esi_6 != 0)
            eax_27 = esi_6
        
        sub_63d960(arg1, eax_27)
        int32_t var_8_10 = 2
        int32_t var_18_10 = 1
        var_8_10.b = 4
        
        if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
            char* eax_28 = sub_63d4e0(&var_1c)
            int32_t temp0_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
        
        int32_t var_8_11 = 5
        break
    
    esi += 1
    
    if (esi s>= 5)
        var_2c = &data_85e314
        int32_t esi_1 = 0
        void* const var_28_1 = &data_824db4
        void* const var_24_1 = &data_877f60
        
        while (true)
            if (sub_68cbb0(&var_14, (&var_2c)[esi_1], arg2, &var_14) != 0)
                sub_63d720(&var_1c, "es")
                var_8_1.b = 7
                char* eax_21 = *arg2
                *arg1 = eax_21
                
                if (eax_21 != 0 && *eax_21 != 0)
                    char* eax_22 = sub_63d4e0(arg1)
                    *(eax_22 + 4) += 1
                
                char* esi_5 = var_1c
                char* eax_23 = &data_801800
                int32_t var_18_7 = 4
                
                if (esi_5 != 0)
                    eax_23 = esi_5
                
                sub_63d960(arg1, eax_23)
                int32_t var_8_8 = 6
                int32_t var_18_8 = 1
                var_8_8.b = 8
                
                if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
                    char* eax_24 = sub_63d4e0(&var_1c)
                    int32_t temp2_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                
                int32_t var_8_9 = 9
                break
            
            esi_1 += 1
            
            if (esi_1 s>= 3)
                var_1c = &(*U"{[p\rnm")[5]
                int32_t esi_2 = 0
                
                while (true)
                    char* const esi_4
                    
                    if (sub_68cbb0(&var_14, (&var_1c)[esi_2], arg2, &var_14) != 0)
                        sub_63d720(&var_1c, "ns")
                        var_8_1.b = 0xb
                        esi_4 = var_14
                        *arg1 = esi_4
                        
                        if (esi_4 != 0 && *esi_4 != 0)
                            char* eax_18 = sub_63d4e0(arg1)
                            *(eax_18 + 4) += 1
                        
                        char* edi_2 = var_1c
                        char* eax_19 = &data_801800
                        int32_t var_18_5 = 8
                        
                        if (edi_2 != 0)
                            eax_19 = edi_2
                        
                        sub_63d960(arg1, eax_19)
                        int32_t var_8_6 = 0xa
                        int32_t var_18_6 = 1
                        var_8_6.b = 0xc
                        
                        if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                            char* eax_20 = sub_63d4e0(&var_1c)
                            int32_t temp3_1 = *(eax_20 + 4)
                            *(eax_20 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                        
                        int32_t var_8_7 = 0xd
                    label_68e34a:
                        
                        if (data_cf65bc == 0)
                            goto label_68e545
                        
                        if (esi_4 == 0)
                            goto label_68e545
                        
                        cond:5_1 = *esi_4 == 0
                        goto label_68e523
                    
                    esi_2 += 1
                    
                    if (esi_2 s>= 1)
                        var_1c = &data_877f68
                        
                        for (int32_t i = 0; i s< 1; i += 1)
                            if (sub_68cbb0(&var_14, (&var_1c)[i], arg2, &var_14) != 0)
                                sub_63d720(&var_1c, "is")
                                var_8_1.b = 0xf
                                esi_4 = var_14
                                *arg1 = esi_4
                                
                                if (esi_4 != 0 && *esi_4 != 0)
                                    char* eax_15 = sub_63d4e0(arg1)
                                    *(eax_15 + 4) += 1
                                
                                char* edi_1 = var_1c
                                char* eax_16 = &data_801800
                                int32_t var_18_3 = 0x10
                                
                                if (edi_1 != 0)
                                    eax_16 = edi_1
                                
                                sub_63d960(arg1, eax_16)
                                int32_t var_8_4 = 0xe
                                int32_t var_18_4 = 1
                                var_8_4.b = 0x10
                                
                                if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                                    char* eax_17 = sub_63d4e0(&var_1c)
                                    int32_t temp4_1 = *(eax_17 + 4)
                                    *(eax_17 + 4) -= 1
                                    
                                    if (temp4_1 == 1)
                                        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                                
                                int32_t var_8_5 = 0x11
                                goto label_68e34a
                        
                        sub_63d720(&var_1c, "_s")
                        var_8_1.b = 0x13
                        char* eax_11 = *arg2
                        *arg1 = eax_11
                        
                        if (eax_11 != 0 && *eax_11 != 0)
                            char* eax_12 = sub_63d4e0(arg1)
                            *(eax_12 + 4) += 1
                        
                        wchar32 const* const esi_3 = var_1c
                        char* const eax_13 = &data_801800
                        int32_t var_18_1 = 0x20
                        
                        if (esi_3 != 0)
                            eax_13 = esi_3
                        
                        sub_63d960(arg1, eax_13)
                        int32_t var_8_2 = 0x12
                        int32_t var_18_2 = 1
                        var_8_2.b = 0x14
                        
                        if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                            char* eax_14 = sub_63d4e0(&var_1c)
                            int32_t temp5_1 = *(eax_14 + 4)
                            *(eax_14 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                        
                        int32_t var_8_3 = 0x15
                        break
                
                break
        
        break

if (data_cf65bc != 0)
    char* const eax_29 = var_14
    
    if (eax_29 != 0)
        cond:5_1 = *eax_29 == 0
    label_68e523:
        
        if (not(cond:5_1))
            char* eax_30 = sub_63d4e0(&var_14)
            int32_t temp1_1 = *(eax_30 + 4)
            *(eax_30 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)

label_68e545:
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
