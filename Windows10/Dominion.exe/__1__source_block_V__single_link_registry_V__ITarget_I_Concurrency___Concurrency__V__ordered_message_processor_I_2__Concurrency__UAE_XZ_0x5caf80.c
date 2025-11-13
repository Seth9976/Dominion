// 函数: ??1?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAE@XZ
// 地址: 0x5caf80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??_G?$basic_ios@_WU?$char_traits@_W@std@@@std@@UAEPAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    int32_t* ecx = *arg1
    
    if (ecx != 0)
        int32_t edx_2 = arg1[2] << 6
        arg1[1] = 0
        result = sub_64c080(ecx, edx_2)
        arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
