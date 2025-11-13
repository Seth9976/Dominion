// 函数: sub_4e6cf0
// 地址: 0x4e6cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?message@_System_error_category@std@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg3
int32_t var_18 = 0
int32_t* eax_4 = *(data_1597ddc + (((arg2 s>> 4 | arg2) & data_1597de0) << 2))
char const* const eax_5

if (eax_4 == 0)
label_4e6d4f:
    eax_5 = "none"
else
    while (arg2 != *eax_4)
        eax_4 = eax_4[2]
        
        if (eax_4 == 0)
            goto label_4e6d4f_1
    
    if (eax_4 == 0xfffffffc)
    label_4e6d4f_1:
        eax_5 = "none"
    else
        eax_5 = *(eax_4[1] + 4)

char const* const var_2c = eax_5
char* var_14
sub_63df30(&var_14, "dom_category_%s")
int32_t var_8_1 = 1
char* const edx = &data_801800
char* eax_6 = var_14

if (eax_6 != 0)
    edx = eax_6

sub_4e6ba0((zx.d(arg4) << 1) + 1, edx, arg3, (zx.d(arg4) << 1) + 1, 1)
int32_t var_18_1 = 1
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_9 = var_14
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
