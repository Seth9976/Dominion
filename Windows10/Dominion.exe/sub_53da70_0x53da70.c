// 函数: sub_53da70
// 地址: 0x53da70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7663c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ac = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56d1f0()
void* result = sub_563590(0x100)

if (result != 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_e2eabc5e9a9b3277b862cbe0e27fc293>, void>::VTable
        * const var_44 = 0xcb
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x2c)
    int128_t var_a8 = var_44.o
    int32_t var_78
    int32_t* var_70_1 = &var_78
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_77c7a96fa0c127cf6c7a85bf3ec39f30>, void>::VTable
        * const var_74
    int32_t* var_50_1 = &var_74
    var_78 = 0
    int32_t var_34
    int128_t var_98_1 = var_34.o
    var_74 = &std::_Func_impl_no_alloc<class <lambda_77c7a96fa0c127cf6c7a85bf3ec39f30>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_1 = 0x90
    int32_t var_48_1 = 0
    int64_t var_24
    int128_t var_88_1 = var_24.o
    var_44 = &std::_Func_impl_no_alloc<class <lambda_e2eabc5e9a9b3277b862cbe0e27fc293>, void>::`vftable'{for `std::_Func_base<void>'}
    var_24:4.d = &var_44
    int64_t var_1c
    var_1c.d = 2
    var_1c:4.d = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_a8, &var_74, 0xffffffff, 2, 1, 1, &var_a8, 0x200)
    int32_t var_8_2 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
    
    if (var_78 != 0)
        void* eax_4 = sub_573400()
        sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 2, 1, 0, 0)
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
        int32_t ecx_3 = ecx_2 * 0x5a30
        *(eax_6 + ecx_3 + 0x17558) |= 8
        result = sub_561af0(eax_6, 0, 2, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
