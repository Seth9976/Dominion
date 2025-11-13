// 函数: sub_63bd10
// 地址: 0x63bd10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* const lpFileName_2 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
lpFileName_2 = &data_801800
char* var_28 = arg1
int32_t var_8_1 = 0
sub_63de70(&lpFileName_2, "%s*.*")
char* const lpFileName_1 = lpFileName_2
char* const lpFileName = &data_801800

if (lpFileName_1 != 0)
    lpFileName = lpFileName_1

char* result = FindFirstFileA(lpFileName, arg2)
arg2->__offset(0x140).d = result
int32_t var_8_2 = 1
int32_t ebx
ebx.b = result != 0xffffffff

if (data_cf65bc != 0 && lpFileName_1 != 0 && *lpFileName_1 != 0)
    result = sub_63d4e0(&lpFileName_2)
    int32_t temp0_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
