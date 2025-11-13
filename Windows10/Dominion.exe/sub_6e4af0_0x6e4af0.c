// 函数: sub_6e4af0
// 地址: 0x6e4af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7715ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_58 = arg1
sub_6e1920(arg2)
int32_t var_54
___std_fs_get_file_attributes_by_handle@8(&var_54, arg2)
int32_t var_8_1 = 0
char* eax_5

if (var_54 != 1)
    int32_t var_38
    *arg1 = var_38
    int32_t var_34
    arg1[1] = var_34
    char* var_30
    eax_5 = var_30
else
    int32_t var_50
    *arg1 = var_50
    int32_t var_4c
    arg1[1] = var_4c
    char* var_48
    eax_5 = var_48

arg1[2] = eax_5

if (eax_5 != 0 && *eax_5 != 0)
    char* eax_8 = sub_63d4e0(&arg1[2])
    *(eax_8 + 4) += 1

sub_6e4a60(&var_54)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg1)
return arg1
