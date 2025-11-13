// 函数: sub_6e3960
// 地址: 0x6e3960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771475
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18 = arg2
void** const ebx = &data_882138
int32_t* result

while (true)
    int32_t eax_3 = *(arg2 + 4)
    void var_40
    int32_t* eax_5 = (*ebx)(&var_40, arg2, eax_2)
    int32_t var_8_1 = 0
    char* esi_1 = eax_5[2]
    int32_t ecx = eax_5[1]
    int32_t edi_1 = *eax_5
    int32_t var_34_1 = edi_1
    int32_t var_30_1 = ecx
    char* const var_2c = esi_1
    
    if (esi_1 != 0 && *esi_1 != 0)
        char* eax_6 = sub_63d4e0(&var_2c)
        *(eax_6 + 4) += 1
    
    var_8_1.b = 3
    int32_t ecx_2 = data_cf65bc
    
    if (ecx_2 != 0)
        char* const var_38
        char* eax_7 = var_38
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(&var_38)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                var_38 = &data_801800
            
            ecx_2 = data_cf65bc
    
    arg2 = var_18
    var_8_1.b = 2
    
    if (**(arg2 + 4) == 0)
        if (edi_1 == 1)
            *arg1 = 1
            arg1[1] = ecx
            arg1[2] = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_20 = sub_63d4e0(&arg1[2])
                ecx_2 = data_cf65bc
                *(eax_20 + 4) += 1
            
            int32_t var_8_6 = 5
        label_6e3b5f:
            
            if (ecx_2 != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_21 = sub_63d4e0(&var_2c)
                int32_t temp2_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
            
            result = arg1
            break
        
        if (edi_1 == 2 || edi_1 == 3 || edi_1 == 4)
            *arg1 = edi_1
            arg1[1] = ecx
            arg1[2] = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_18 = sub_63d4e0(&arg1[2])
                ecx_2 = data_cf65bc
                *(eax_18 + 4) += 1
            
            int32_t var_8_5 = 6
            goto label_6e3b5f
        
        int32_t var_8_3 = 7
    else
        *(arg2 + 4) = eax_3
        int32_t var_8_2 = 4
    
    if (ecx_2 != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_11 = sub_63d4e0(&var_2c)
        int32_t temp1_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
            var_2c = &data_801800
        
        arg2 = var_18
    
    ebx = &ebx[1]
    int32_t var_8_4 = 0xffffffff
    
    if (ebx s>= &data_882148)
        result = arg1
        *result = data_cb2f14
        result[1] = data_cb2f18
        void* eax_14 = data_cb2f1c
        result[2] = eax_14
        
        if (eax_14 == 0 || *eax_14 == 0)
            break
        
        char* eax_15 = sub_63d4e0(&result[2])
        *(eax_15 + 4) += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return result
