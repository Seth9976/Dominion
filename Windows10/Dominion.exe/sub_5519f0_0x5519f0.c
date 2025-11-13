// 函数: sub_5519f0
// 地址: 0x5519f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$construct_environment_block@_W@@YAHQBQB_WQAPA_W@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
void* eax_4 = sub_573400()
int32_t ecx_1 = *(eax_4 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_5 = *(eax_4 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6525caa61557779c207d100c7a2bbd7e>, void>::VTable
    * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_6525caa61557779c207d100c7a2bbd7e>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_7c = 0x88
int32_t var_78 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a6111e08a93d877f37c372281d956710>, void>::VTable
    * const var_74 = &std::_Func_impl_no_alloc<class <lambda_a6111e08a93d877f37c372281d956710>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0x89
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c3ba81b441defad82ee2a938b15484be>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_c3ba81b441defad82ee2a938b15484be>, void>::`vftable'{for `std::_Func_base<void>'}
*(ecx_2 + eax_5 + 0x17558) |= 2
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_6525caa61557779c207d100c7a2bbd7e>, void>::VTable
    * const* var_80 = &var_a4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a6111e08a93d877f37c372281d956710>, void>::VTable
    * const* var_50 = &var_74
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c3ba81b441defad82ee2a938b15484be>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 0x8a
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_a4, 0xffffffff, 3, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_a4, 0x30, 3, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
