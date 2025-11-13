// 函数: sub_4b1b50
// 地址: 0x4b1b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?CreateWorkQueue@ContextBase@details@Concurrency@@QAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t* esi = arg2
arg2 = &arg1[2]
int32_t edx = esi[1]
*arg1 = *esi
arg1[1] = edx
arg1[2] = esi[2]
int32_t eax_5 = esi[3]
arg1[4] = esi[4]
arg1[3] = eax_5
arg1[5] = esi[5]
arg1[6] = esi[6]
arg1[7] = esi[7]
arg1[8] = esi[8]
arg1[9] = esi[9]
arg1[0xa] = esi[0xa]
arg1[0xb] = esi[0xb]
char* eax_13 = esi[0xc]
arg1[0xc] = eax_13

if (eax_13 != 0 && *eax_13 != 0)
    char* eax_14 = sub_63d4e0(&arg1[0xc])
    *(eax_14 + 4) += 1

int32_t var_8_1 = 0
char* eax_15 = esi[0xd]
arg1[0xd] = eax_15

if (eax_15 != 0 && *eax_15 != 0)
    char* eax_16 = sub_63d4e0(&arg1[0xd])
    *(eax_16 + 4) += 1

var_8_1.b = 1
char* eax_17 = esi[0xe]
arg1[0xe] = eax_17

if (eax_17 != 0 && *eax_17 != 0)
    char* eax_18 = sub_63d4e0(&arg1[0xe])
    *(eax_18 + 4) += 1

arg1[0xf] = esi[0xf]
memcpy(&arg1[0x10], &esi[0x10], 0x1160)
arg1[0x468] = esi[0x468]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
