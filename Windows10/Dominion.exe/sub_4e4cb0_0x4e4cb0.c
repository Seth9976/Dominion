// 函数: sub_4e4cb0
// 地址: 0x4e4cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0
int32_t var_8_1 = 0
char* const var_14
void* edx
sub_63d850(arg1 + 0x30, sub_4e0ff0(&ExceptionList, edx, &var_14, *(arg1 + 0x28)))
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_5 = var_14
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
            var_14 = &data_801800

int32_t var_8_3 = 0xffffffff
data_cc8dc8
char* result = sub_4d8ad0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
