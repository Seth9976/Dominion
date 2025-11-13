// 函数: sub_6e3750
// 地址: 0x6e3750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771435
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg2
int32_t var_1c = eax_3
int32_t ebx = 0
int32_t* result

if (arg5 s<= 0)
label_6e3914:
    result = arg3
    *result = data_cb2f14
    result[1] = data_cb2f18
    void* eax_19 = data_cb2f1c
    result[2] = eax_19
    
    if (eax_19 != 0 && *eax_19 != 0)
        char* eax_20 = sub_63d4e0(&result[2])
        *(eax_20 + 4) += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else
    while (true)
        void var_3c
        int32_t* eax_6 = (*(arg4 + (ebx << 2)))(&var_3c, eax_3, eax_2)
        int32_t var_8_1 = 0
        char* esi_1 = eax_6[2]
        int32_t ecx = eax_6[1]
        int32_t edi_1 = *eax_6
        int32_t var_30_1 = edi_1
        int32_t var_2c_1 = ecx
        char* const var_28 = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            char* eax_7 = sub_63d4e0(&var_28)
            *(eax_7 + 4) += 1
        
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            char* const var_34
            char* eax_8 = var_34
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_63d4e0(&var_34)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                    var_34 = &data_801800
        
        var_8_1.b = 2
        
        if (edi_1 == 1)
            arg3[1] = ecx
            *arg3 = 1
            arg3[2] = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_16 = sub_63d4e0(&arg3[2])
                *(eax_16 + 4) += 1
            
            int32_t var_8_5 = 4
        else
            if (edi_1 != 2 && edi_1 != 3 && edi_1 != 4)
                int32_t var_8_2 = 6
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_10 = sub_63d4e0(&var_28)
                    int32_t temp2_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_28 = &data_801800
                
                ebx += 1
                int32_t var_8_3 = 0xffffffff
                
                if (ebx s>= arg5)
                    goto label_6e3914
                
                eax_3 = var_1c
                continue
            
            arg3[1] = ecx
            *arg3 = edi_1
            arg3[2] = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_12 = sub_63d4e0(&arg3[2])
                *(eax_12 + 4) += 1
            
            int32_t var_8_4 = 5
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_13 = sub_63d4e0(&var_28)
            int32_t temp1_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
        
        result = arg3
        break

fsbase->NtTib.ExceptionList = ExceptionList
return result
