// 函数: sub_4e6e00
// 地址: 0x4e6e00
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
int32_t var_2c = *(sub_571b30(arg2, 0x17) + 0x58)
char* var_14
sub_63df30(&var_14, "dom_card_title_%s")
int32_t var_8_1 = 1
char* const edx = &data_801800
char* eax_5 = var_14

if (eax_5 != 0)
    edx = eax_5

sub_4e6ba0((zx.d(arg4) << 1) + 1, edx, arg3, (zx.d(arg4) << 1) + 1, 2)
int32_t var_18_1 = 1
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_8 = var_14
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
