// 函数: sub_6c8c70
// 地址: 0x6c8c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t* var_14
char** result = sub_6c85b0(&var_14, arg1)
int32_t var_8_1 = 0
char* esi = var_14

if (esi != 0)
    result.b = *esi
    
    if (result.b != 0 && result.b != 0x21)
        uint8_t* var_28 = &data_87e5b4
        result = strstr(esi, var_28)
        
        if (result == 0)
            var_28 = &data_87e5d4
            uint8_t* ecx_1
            result, ecx_1 = strstr(esi, var_28)
            
            if (result == 0)
                uint8_t* eax_3 = var_14
                var_28 = ecx_1
                uint8_t** ecx_2 = &var_28
                var_28 = eax_3
                
                if (eax_3 != 0 && *eax_3 != 0)
                    char* eax_4 = sub_63d4e0(ecx_2)
                    *(eax_4 + 4) += 1
                
                void* eax_5 = sub_69ef40(ecx_2)
                
                if (eax_5 == 0)
                label_6c8d23:
                    uint8_t* eax_6 = var_14
                    uint8_t* esi_1 = &data_801800
                    uint8_t* ecx_3 = &data_801800
                    
                    if (eax_6 != 0)
                        ecx_3 = eax_6
                    
                    int32_t eax_7
                    uint8_t* ecx_4
                    eax_7, ecx_4 = sub_6b7ef0(ecx_3)
                    
                    if (data_cc8d6f == 0)
                        uint8_t* eax_9 = var_14
                        var_28 = ecx_4
                        var_28 = eax_9
                        
                        if (eax_9 != 0 && *eax_9 != 0)
                            char* eax_10 = sub_63d4e0(&var_28)
                            *(eax_10 + 4) += 1
                        
                        result = sub_69faf0(eax_7, 0)
                    else
                        uint8_t* edx_1 = var_14
                        
                        if (edx_1 != 0)
                            esi_1 = edx_1
                        
                        result = sub_6c5b80(sub_69f030(esi_1, eax_7), 0)
                else
                    result = *(eax_5 + 8)
                    
                    if (result != 1 && result != 2)
                        goto label_6c8d23
        
        esi = var_14

int32_t var_8_2 = 1

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    result = sub_63d4e0(&var_14)
    int32_t temp0_1 = result[1]
    result[1] = &result[1][0xffffffff]
    
    if (temp0_1 == 1)
        result = sub_64c080(result, &result[3][0x10])

fsbase->NtTib.ExceptionList = ExceptionList
return result
