// 函数: sub_55e1e0
// 地址: 0x55e1e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_Getcat@?$collate@D@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_7c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 2, 0, 0)
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
*(ecx_2 + eax_5 + 0x17558) |= 2
uint32_t eax_6 = sub_568c40()
uint32_t eax_7 = sub_568c40()
uint32_t result

if (eax_6 == neg.d(eax_7))
    result = sub_568c40()

if (eax_6 != neg.d(eax_7) || result != 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_81ad0963b99356fde2dc7f5e13f0dff6>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_81ad0963b99356fde2dc7f5e13f0dff6>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_81ad0963b99356fde2dc7f5e13f0dff6>, void>::VTable
        * const* var_50_1 = &var_74
    int32_t var_4c_1 = 0x2c
    int32_t var_48_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c06d6b8f3e9d25d2c7bf9cec3152e503>, void>::VTable
        * const var_44 = &std::_Func_impl_no_alloc<class <lambda_c06d6b8f3e9d25d2c7bf9cec3152e503>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c06d6b8f3e9d25d2c7bf9cec3152e503>, void>::VTable
        * const* var_20_1 = &var_44
    int32_t var_1c_1 = 0x2d
    int32_t var_18_1 = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
