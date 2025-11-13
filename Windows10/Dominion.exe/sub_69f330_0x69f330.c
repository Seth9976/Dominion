// 函数: sub_69f330
// 地址: 0x69f330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14
sub_69fd50(&ExceptionList, "sys/FailureAsset", &var_14, *(arg1 + 4))
int32_t var_8_1 = 0
char* const ecx_1 = &data_801800
char* eax_4 = var_14

if (eax_4 != 0)
    ecx_1 = eax_4

int32_t result = sub_69f030(ecx_1, *(arg1 + 4))
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* ecx_2 = var_14
    
    if (ecx_2 != 0 && *ecx_2 != 0)
        char* eax_5 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
