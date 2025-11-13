// 函数: sub_6a1710
// 地址: 0x6a1710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14
sub_69fd50(&ExceptionList, arg1, &var_14, 3)
int32_t var_8_1 = 0
char* eax_4 = var_14
char* const ecx_1 = &data_801800

if (eax_4 != 0)
    ecx_1 = eax_4

char* const var_2c = ecx_1
sub_63b5f0("Creating %s")
int32_t result = sub_69f810(sub_6a1680(3))

if (sub_69fc10(result) == 0)
    result = 0

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
