// 函数: ?OffForSym@GSI1@@UAEKPAE@Z
// 地址: 0x57eb70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_mbstowcs_l_helper@@YAIPA_WPBDIAAV__crt_cached_ptd_host@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
int32_t var_14 = arg3
int32_t esi = 0
int32_t var_8_1 = 0
*arg6 = 0

if (result s> 0)
    do
        int32_t var_18 = *(arg3 + (esi << 2))
        
        if (arg4 == 0)
            std::_Xbad_function_call()
            noreturn
        
        if ((*(*arg4 + 8))(&var_18) != 0)
            arg3 = var_14
        else
            if (arg5 != 0)
                *(arg5 + (*arg6 << 2)) = *(var_14 + (esi << 2))
                *arg6 += 1
            
            arg3 = var_14
            result -= 1
            *(arg3 + (esi << 2)) = *(arg3 + (result << 2))
            esi -= 1
        
        esi += 1
    while (esi s< result)

void arg_4

if (arg4 != 0)
    (*(*arg4 + 0x10))(arg4 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
