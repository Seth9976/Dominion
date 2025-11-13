// 函数: sub_68ca30
// 地址: 0x68ca30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?accumulate_inheritable_handles@@YA_NQAPAEQAI_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
char* eax_3 = *arg2
*arg1 = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(arg1)
    *(eax_4 + 4) += 1

int32_t var_8_1 = 0
char* eax_5 = arg2[1]
arg1[1] = eax_5

if (eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(&arg1[1])
    *(eax_6 + 4) += 1

var_8_1.b = 1
char* eax_7 = arg2[2]
arg1[2] = eax_7

if (eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&arg1[2])
    *(eax_8 + 4) += 1

arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6].b = arg2[6].b
*(arg1 + 0x19) = *(arg2 + 0x19)
*(arg1 + 0x1a) = *(arg2 + 0x1a)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
