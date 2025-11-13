// 函数: sub_4d48c0
// 地址: 0x4d48c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?CreateInternalContext@UMSThreadScheduler@details@Concurrency@@MAEPAVInternalContextBase@23@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg3
int32_t var_18 = 0
char* var_14
sub_4d47c0(&var_14, arg2)
char* const edx = &data_801800
int32_t var_8_1 = 1
char* const ecx_1 = &data_801800
char* eax_4 = *arg5

if (eax_4 != 0)
    ecx_1 = eax_4

char* eax_5 = var_14

if (eax_5 != 0)
    edx = eax_5

sub_63dfa0(eax_5, edx, arg3, arg4, ecx_1)
int32_t var_18_1 = 1
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
return arg3
