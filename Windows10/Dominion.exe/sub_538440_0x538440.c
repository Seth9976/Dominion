// 函数: sub_538440
// 地址: 0x538440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_fstat@U_stat32i64@@@@YAHHQAU_stat32i64@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_78 = __security_cookie ^ &__saved_ebp
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
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f8a94deb1c04cbce7c4b6b240451b381>, void>::VTable
    * const var_74 = &std::_Func_impl_no_alloc<class <lambda_f8a94deb1c04cbce7c4b6b240451b381>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t var_4c = 0x24
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<void (__cdecl *)(void), void>::VTable* const 
    var_44 =
    &std::_Func_impl_no_alloc<void (__cdecl *)(void), void>::`vftable'{for `std::_Func_base<void>'}
uint32_t (* var_40)(int32_t arg1 @ esi) = sub_5383a0
int32_t var_1c = 0x25
int32_t var_18 = 0
*(ecx_2 + eax_5 + 0x17558) |= 2
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f8a94deb1c04cbce7c4b6b240451b381>, void>::VTable
    * const* var_50 = &var_74
struct std::_Func_base<void>::std::_Func_impl_no_alloc<void (__cdecl *)(void), void>::VTable* const*
     var_20 = &var_44
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
