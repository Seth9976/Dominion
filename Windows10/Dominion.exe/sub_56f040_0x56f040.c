// 函数: sub_56f040
// 地址: 0x56f040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_Getcat@?$collate@D@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_7c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = arg1
int32_t var_50 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<void (__cdecl *)(void), void>::VTable* const 
    var_74

if (arg1 != 0)
    var_74 = &std::_Func_impl_no_alloc<void (__cdecl *)(void), void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_70_1 = arg1
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<void (__cdecl *)(void), void>::VTable* 
        const* var_50_1 = &var_74

int32_t var_4c = 0x82
int32_t* var_40 = &var_78
int32_t var_48 = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_017002a87375df5f5eaa16153a4e2299>, void>::VTable
    * const var_44 = &std::_Func_impl_no_alloc<class <lambda_017002a87375df5f5eaa16153a4e2299>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t edx
int32_t var_3c = edx
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_017002a87375df5f5eaa16153a4e2299>, void>::VTable
    * const* var_20 = &var_44
int32_t var_1c = 0x83
int32_t var_18 = 0
int32_t var_8_1 = 0
sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, 0x200)
int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
