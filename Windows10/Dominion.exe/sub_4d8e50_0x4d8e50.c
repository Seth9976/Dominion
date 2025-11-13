// 函数: sub_4d8e50
// 地址: 0x4d8e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?Initialize@GlobalCore@details@Concurrency@@QAEXPAUGlobalNode@23@IE@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1
int32_t var_18 = 0
void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
char* var_30 = arg2
int32_t var_34 = *(eax_3 + 0x42b0)
char* var_14
sub_63df30(&var_14, "gamelocal_%d_%d.bin")
int32_t var_8_1 = 1
char* eax_4 = var_14
var_30 = eax_4

if (eax_4 != 0 && *eax_4 != 0)
    char* eax_5 = sub_63d4e0(&var_30)
    *(eax_5 + 4) += 1

sub_69e000(arg1, 0)
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
return arg1
