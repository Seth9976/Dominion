// 函数: sub_6b59e0
// 地址: 0x6b59e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
var_14 = arg2
int32_t* esi = arg1

if (esi[0x2c].b == 0)
    int32_t ebx_1 = esi[2]
    char* edi_1 = *esi
    
    if (edi_1[ebx_1] == 0x7b)
        for (int32_t i = ebx_1 + 1; i s< esi[1]; i += 1)
            arg1.b = edi_1[i]
            
            if (arg1.b == 0x7d)
                int32_t* edx_1 = var_14
                var_14 = &data_801800
                *edx_1 = i - ebx_1 + 1
                int32_t var_8_1 = 0
                sub_63db30(&var_14, esi[2] + *esi + 1, i - ebx_1 - 1)
                int32_t* result = sub_6b5770(esi, &var_14)
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    int32_t* ecx_7 = var_14
                    
                    if (ecx_7 != 0 && *ecx_7 != 0)
                        char* eax_8 = sub_63d4e0(&var_14)
                        int32_t temp0_1 = *(eax_8 + 4)
                        *(eax_8 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            if (arg1.b == 0xd)
                break
            
            if (arg1.b == 0x7b)
                break

fsbase->NtTib.ExceptionList = ExceptionList
return 0
