// 函数: sub_53a5c0
// 地址: 0x53a5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7661ee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_108 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_563590(0x100)
int64_t var_40
__builtin_memset(&var_40, 0, 0x2c)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_a06ceca69ea376b4dfca76a4426c18f5>, void>::VTable
    * const var_44 = 0x36
int128_t var_104 = var_44.o
int32_t var_34
int128_t var_f4 = var_34.o
int64_t var_24
int128_t var_e4 = var_24.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3e675b6f8a47872c7013f7e9b2f2f9f>, void>::VTable
    * const* eax_5

if (eax_3 == 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3e675b6f8a47872c7013f7e9b2f2f9f>, void>::VTable
        * var_d4 = &std::_Func_impl_no_alloc<class <lambda_c35766c95823e97c2aaee1bf7a0894a1>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3e675b6f8a47872c7013f7e9b2f2f9f>, void>::VTable
        ** var_b0_1 = &var_d4
    int32_t var_ac_1 = 0x28
    int32_t var_a8_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_aa71bcad365dc17ddd56a381fc1316d3>, void>::VTable
        * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_aa71bcad365dc17ddd56a381fc1316d3>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_aa71bcad365dc17ddd56a381fc1316d3>, void>::VTable
        * const* var_80_1 = &var_a4
    int32_t var_7c_1 = 0xc0
    int32_t var_78_1 = 0x29
    int32_t var_8_2 = 1
    sub_56a100(&var_104, &var_d4, 0xffffffff, 2, 1, 1, &var_104, 0x200)
    eax_5 = &var_d4
else
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3e675b6f8a47872c7013f7e9b2f2f9f>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_d3e675b6f8a47872c7013f7e9b2f2f9f>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_d3e675b6f8a47872c7013f7e9b2f2f9f>, void>::VTable
        * const* var_50_1 = &var_74
    int32_t var_4c_1 = 0x28
    int32_t var_48_1 = 0
    var_44 = &std::_Func_impl_no_alloc<class <lambda_a06ceca69ea376b4dfca76a4426c18f5>, void>::`vftable'{for `std::_Func_base<void>'}
    var_24:4.d = &var_44
    int64_t var_1c
    var_1c.d = 0x29
    var_1c:4.d = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_104, &var_74, 0xffffffff, 2, 1, 1, &var_104, 0x200)
    eax_5 = &var_74

int32_t var_8_3 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(eax_5, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
