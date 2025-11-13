// 函数: sub_4011d0
// 地址: 0x4011d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0_TaskCollection@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0x8da748
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20)(void* arg1) = sub_4ab1f0
int32_t var_8_1 = 1
int32_t var_18 = 0x8da794
`eh vector constructor iterator'(0x8da794, 0xc, 0x14, sub_4ab1e0)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_1)(void* arg1) = sub_4ab410
var_8_1.b = 2
`eh vector constructor iterator'(0x8da888, 0x14, 0x78, sub_4ab490)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_2)(void* arg1) = sub_4ab410
var_8_1.b = 3
`eh vector constructor iterator'(0x8db1ec, 0x18, 0x14, sub_4ab490)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_20_3)(void* arg1) = sub_4ab1f0
int32_t var_8_2 = 4
`eh vector constructor iterator'(0x8db3e8, 0xc, 0x14, sub_4ab1e0)
int32_t result = _atexit(sub_773500)
fsbase->NtTib.ExceptionList = ExceptionList
return result
