// 函数: ?atomic_store_explicit@std@@YAXPAU_Atomic_long@1@JW4memory_order@1@@Z
// 地址: 0x773b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1_UShinit@std@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t result = sub_4d4b30(&data_b4a5dc)
fsbase->NtTib.ExceptionList = ExceptionList
return result
