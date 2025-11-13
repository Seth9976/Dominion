// 函数: sub_4abf60
// 地址: 0x4abf60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?StartupNewVirtualProcessor@SchedulerBase@details@Concurrency@@UAEXPAVScheduleGroupSegmentBase@23@Vlocation@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4ab4a0(&var_14:3)
int32_t var_8_1 = 0
int32_t ebx
ebx.b = sub_4b3970(arg2)
sub_4ab510()
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
