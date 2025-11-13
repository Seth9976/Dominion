// 函数: sub_5caff0
// 地址: 0x5caff0
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
        int32_t eax_3 = arg1[2]
        arg1[1] = 0
        result = sub_64c080(ecx, eax_3 * 0x38)
        arg1[2] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
