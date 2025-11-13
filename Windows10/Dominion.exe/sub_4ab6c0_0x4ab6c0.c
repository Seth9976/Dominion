// 函数: sub_4ab6c0
// 地址: 0x4ab6c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?StartupNewVirtualProcessor@SchedulerBase@details@Concurrency@@UAEXPAVScheduleGroupSegmentBase@23@Vlocation@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_63b7f0("GameAppInit")
memset(0x8d2fd0, 0, 0x7770)
memset(0x8da740, 0, 0xda0)
void var_11
sub_4ab4a0(&var_11)
int32_t var_8_1 = 0
sub_4b8210()
int32_t var_8_2 = 0xffffffff
sub_4ab510()
sub_4ab5b0(&var_11)
sub_4dcf80(sub_4ab620())
int32_t* result = sub_51bd80()
fsbase->NtTib.ExceptionList = ExceptionList
return result
