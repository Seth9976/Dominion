// 函数: sub_56a310
// 地址: 0x56a310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?CaptureProcessAffinity@ResourceManager@details@Concurrency@@CAXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_84 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_50 = 0
var_8_1.b = 1
void var_74

if (arg3 != 0)
    int32_t var_50_1 = (**arg3)(&var_74)

int32_t ecx
int32_t var_4c = ecx
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a7652d2ce0fa712dd02a3f2f4704133c>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_a7652d2ce0fa712dd02a3f2f4704133c>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a7652d2ce0fa712dd02a3f2f4704133c>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 2
int32_t var_18 = 0
var_8_1.b = 2
sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, arg2, 0x280)
var_8_1.b = 0
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
void arg_4

if (arg3 != 0)
    result = (*(*arg3 + 0x10))(arg3 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
