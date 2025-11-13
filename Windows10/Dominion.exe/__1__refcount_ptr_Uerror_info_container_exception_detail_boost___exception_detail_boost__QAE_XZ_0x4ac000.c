// 函数: ??1?$refcount_ptr@Uerror_info_container@exception_detail@boost@@@exception_detail@boost@@QAE@XZ
// 地址: 0x4ac000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4ac220(ecx)
fsbase->NtTib.ExceptionList = ExceptionList
return result
