// 函数: sub_773920
// 地址: 0x773920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??1scoped_lock@reader_writer_lock@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_4e9e80(&data_1597dc4)
int32_t var_8_2 = 1
int32_t result = sub_4e9d90(&data_1597db8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
