// 函数: sub_544c70
// 地址: 0x544c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765a58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x1970)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = ecx
sub_561e00(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 1, 1, 0, 0)
void* eax_5 = sub_573400()
int32_t ecx_2 = *(eax_5 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_5, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_6 = *(eax_5 + 4)
int32_t edx_1 = ecx_2 * 0x5a30
*(edx_1 + eax_6 + 0x17558) |= 2
void var_1980
uint32_t result = sub_566320(&var_1980, edx_1, 1, &var_1980)
uint32_t result_1
__builtin_memcpy(&result_1, result, 0xc84)
int32_t var_7c
uint32_t result_2

if (var_7c != 0)
    result = result_1
    result_2 = result
    
    if (result != 0)
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_34a6016c063cb5589262ecf4df9b6fc1>, void>::VTable
            * const var_74 = &std::_Func_impl_no_alloc<class <lambda_34a6016c063cb5589262ecf4df9b6fc1>, void>::`vftable'{for `std::_Func_base<void>'}
        uint32_t* var_70_1 = &result_2
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_34a6016c063cb5589262ecf4df9b6fc1>, void>::VTable
            * const* var_50_1 = &var_74
        uint32_t* var_40_1 = &result_2
        int32_t var_4c_1 = 0x70
        int32_t var_48_1 = 0
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_5dab1d01b0d6ea3ad778e33dc6ab2df6>, void>::VTable
            * const var_44 = &std::_Func_impl_no_alloc<class <lambda_5dab1d01b0d6ea3ad778e33dc6ab2df6>, void>::`vftable'{for `std::_Func_base<void>'}
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_5dab1d01b0d6ea3ad778e33dc6ab2df6>, void>::VTable
            * const* var_20_2 = &var_44
        int32_t var_1c_1 = 0x71
        var_18 = 0
        int32_t var_8_1 = 0
        sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0x200)
        int32_t var_8_2 = 0xffffffff
        result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
else
    result_2 = 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
