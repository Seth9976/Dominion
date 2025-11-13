// 函数: sub_5242d0
// 地址: 0x5242d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$construct_environment_block@_W@@YAHQBQB_WQAPA_W@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_561af0(&ExceptionList, 0, 1, 0)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_adcf3c4b8ad0f8b1072cecfddeb6e0a3>, void>::VTable
    * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_adcf3c4b8ad0f8b1072cecfddeb6e0a3>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_adcf3c4b8ad0f8b1072cecfddeb6e0a3>, void>::VTable
    * const* var_80 = &var_a4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_74ffbf79773c21f88ac7ff337d237e71>, void>::VTable
    * const var_74
int32_t* var_50 = &var_74
int32_t var_7c = 0x60
int32_t var_78 = 0
var_74 = &std::_Func_impl_no_alloc<class <lambda_74ffbf79773c21f88ac7ff337d237e71>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0x61
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_2058dd2a2afcd96b09a68d3f36995d7c>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_2058dd2a2afcd96b09a68d3f36995d7c>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_2058dd2a2afcd96b09a68d3f36995d7c>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 0x62
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_a4, 0xffffffff, 3, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_a4, 0x30, 3, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
