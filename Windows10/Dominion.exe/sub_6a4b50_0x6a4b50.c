// 函数: sub_6a4b50
// 地址: 0x6a4b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = sub_6a49a0(arg1, arg2)
char* var_14
sub_63d720(&var_14, "UI2StateOverride")
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    char* ecx_1 = var_14
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        char* eax_3 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff
int32_t* eax_4 = sub_6a2fa0()
result[3] = eax_4
sub_63d8d0(eax_4, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
