// 函数: sub_561880
// 地址: 0x561880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?unlink_target@?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAEXPAV?$ITarget@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* arg_8
void* edx = arg_8
int32_t var_34 = arg4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_b884619a11c953bf6acbf7f130fae76c>,bool,enum CardID>::VTable
    * const var_3c = &std::_Func_impl_no_alloc<class <lambda_b884619a11c953bf6acbf7f130fae76c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void* var_30 = edx
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_b884619a11c953bf6acbf7f130fae76c>,bool,enum CardID>::VTable
    * const* var_18 = &var_3c
int32_t* eax_4 = &arg_8
int32_t var_8_1 = 0
int32_t ebx = *(arg3 + 0xc80)
int32_t* var_50 = &arg_8
int32_t var_54 = 0
void var_7c
arg_8 = &var_7c
int32_t var_58 = 0
var_8_1.b = 2

if (var_18 != 0)
    eax_4 = (*var_18)->vFunc_0(&var_7c)
    int32_t* var_58_1 = eax_4

var_8_1.b = 0
int32_t result = GSI1::OffForSym(eax_4, ebx, arg3)
*(arg3 + 0xc80) = result

if (var_18 != 0)
    result = (*var_18)->vFunc_4(var_18 != &var_3c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
