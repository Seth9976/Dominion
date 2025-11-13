// 函数: sub_54cd30
// 地址: 0x54cd30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7668a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x19f8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1a08
int32_t eax_4 = sub_568780(&var_1a08, edx, 2, &var_1a08)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a98c7b2f13a72845be5b58429d057078>,bool,enum CardID>::VTable
    * const var_d84 = &std::_Func_impl_no_alloc<class <lambda_a98c7b2f13a72845be5b58429d057078>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_d58
__builtin_memcpy(&var_d58, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a98c7b2f13a72845be5b58429d057078>,bool,enum CardID>::VTable
    * const* var_d60 = &var_d84
int32_t* var_d5c
int32_t* eax_5 = &var_d5c
int32_t var_8_1 = 0
int32_t* var_20_1 = &var_d5c
int32_t var_24 = 0
int32_t* var_4c
var_d5c = &var_4c
int32_t var_28 = 0
var_8_1.b = 2

if (var_d60 != 0)
    eax_5 = (*var_d60)->vFunc_0(&var_4c)
    int32_t* var_28_1 = eax_5

var_8_1.b = 0
int32_t var_d8
int32_t var_48
int32_t* var_44
int32_t eax_7 = GSI1::OffForSym(eax_5, var_d8, &var_d58, var_4c, var_48, var_44)

if (var_d60 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a98c7b2f13a72845be5b58429d057078>,bool,enum CardID>::VTable
        * const* eax_8
    eax_8.b = var_d60 != &var_d84
    (*var_d60)->vFunc_4(eax_8)

struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_dd33c4cd69b576c1554b5518572f0cce>, void>::VTable
    * const* eax_10

if (eax_7 != 0)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_dd33c4cd69b576c1554b5518572f0cce>, void>::VTable
        * var_d4 = &std::_Func_impl_no_alloc<class <lambda_6f4369ed8243e448ec678511148eab74>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_dd33c4cd69b576c1554b5518572f0cce>, void>::VTable
        ** var_b0_1 = &var_d4
    int32_t var_ac_1 = 0xcd
    int32_t var_a8_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_cb6246db1d12ea2a7d7d891099b74dc7>, void>::VTable
        * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_cb6246db1d12ea2a7d7d891099b74dc7>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_cb6246db1d12ea2a7d7d891099b74dc7>, void>::VTable
        * const* var_80_1 = &var_a4
    int32_t var_7c_1 = 0xce
    int32_t var_78_1 = 0
    int32_t var_8_3 = 4
    sub_56a100(&var_a4, &var_d4, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    eax_10 = &var_d4
else
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_dd33c4cd69b576c1554b5518572f0cce>, void>::VTable
        * const var_74 = &std::_Func_impl_no_alloc<class <lambda_dd33c4cd69b576c1554b5518572f0cce>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_dd33c4cd69b576c1554b5518572f0cce>, void>::VTable
        * const* var_50_2 = &var_74
    var_4c = 0xcd
    int32_t var_48_1 = eax_7
    var_44 = &std::_Func_impl_no_alloc<class <lambda_7a6b7964cf59e9ed113ca543ba33d326>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t** var_20_3 = &var_44
    int32_t var_1c_1 = 0xcf
    var_18 = eax_7
    int32_t var_8_2 = 3
    sub_56a100(&var_44, &var_74, 0xffffffff, 2, 1, 1, &data_cce9d8, eax_7)
    eax_10 = &var_74

int32_t var_8_4 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(eax_10, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
