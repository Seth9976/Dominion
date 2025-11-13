// 函数: ??0ContextBase@details@Concurrency@@QAE@PAVSchedulerBase@12@_N@Z
// 地址: 0x4e6ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@QBG@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
int32_t var_30 = *(sub_4e3950(arg2) + 0x10)
int32_t var_8_1 = 1
char* edx = &data_801800
char* var_14
char* eax_5 = *sub_63df30(&var_14, "dom_expansion_name_%s")

if (eax_5 != 0)
    edx = eax_5

sub_4d47c0(arg1, edx)
int32_t var_18_1 = 3
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        char* eax_7 = sub_63d4e0(&var_14)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
