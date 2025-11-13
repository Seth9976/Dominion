// 函数: sub_401000
// 地址: 0x401000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1?$Mailbox@V_UnrealizedChore@details@Concurrency@@@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20)(void* arg1) = sub_4ab280
int32_t var_8_1 = 0
`eh vector constructor iterator'(0x8d2ff8, 0x20, 0x280, sub_4ab270)
__builtin_memset(&data_8d804c, 0, 0x14)
data_8d8060 = 1
data_8d8064 = 0
data_8d80a0 = &data_801800
data_8d80a4 = &data_801800
data_8d80a8 = &data_801800
data_8d93c8 = &data_801800
data_8d93cc = &data_801800
data_8d93d0 = &data_801800
data_8da540 = 0
data_8da544 = 0
data_8da548 = 0
int32_t* var_14 = &data_8da588
__builtin_memset(&data_8da588, 0, 0x18)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_1)(void* arg1) = sub_4ab1f0
var_8_1.b = 6
`eh vector constructor iterator'(0x8da5ac, 0xc, 0xf, sub_4ab1e0)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_2)(void* arg1) = sub_4ab1f0
var_8_1.b = 7
`eh vector constructor iterator'(0x8da66c, 0xc, 0xf, sub_4ab1e0)
__builtin_memset(&data_8da724, 0, 0x14)
data_8da738 = 1
data_8da73c = 0
int32_t result = _atexit(sub_7733f0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
