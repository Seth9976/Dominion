// 函数: sub_54b3b0
// 地址: 0x54b3b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7667e4
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
int32_t eax_4 = sub_568780(&var_1a08, edx, 0x3ec, &var_1a08)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_864dd98bf8eb64921e40575f0c23fa00>,bool,enum CardID>::VTable
    * const var_d84 = &std::_Func_impl_no_alloc<class <lambda_864dd98bf8eb64921e40575f0c23fa00>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_d58
__builtin_memcpy(&var_d58, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_864dd98bf8eb64921e40575f0c23fa00>,bool,enum CardID>::VTable
    * const* var_d60 = &var_d84
int32_t var_8_1 = 0
int32_t** var_d5c
int32_t* var_20_1 = &var_d5c
int32_t var_24 = 0
void* eax_5 = &var_d58
int32_t* var_4c
var_d5c = &var_4c
int32_t var_28 = 0
var_8_1.b = 2

if (var_d60 != 0)
    int32_t var_28_1 = (*var_d60)->vFunc_0(&var_4c)
    eax_5 = &var_d58

var_8_1.b = 0
int32_t var_d8
int32_t var_48
int32_t* var_44
int32_t eax_9 = GSI1::OffForSym(eax_5, var_d8, &var_d58, var_4c, var_48, var_44)

if (var_d60 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_864dd98bf8eb64921e40575f0c23fa00>,bool,enum CardID>::VTable
        * const* eax_11
    eax_11.b = var_d60 != &var_d84
    (*var_d60)->vFunc_4(eax_11)

struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7314f8f35942eb24b8f95e74b536dc00>, void>::VTable
    * const* eax_13
int128_t var_a4

if (eax_9 != 0)
    int32_t var_38_1 = eax_9
    var_1c.q = 0
    var_24.q = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7314f8f35942eb24b8f95e74b536dc00>, void>::VTable
        * const* var_2c = nullptr
    var_44 = 0x114
    int32_t var_3c_1 = 0
    void* var_40_1 = &var_d58
    int32_t var_30_1 = 0
    int32_t var_34_1 = 0
    var_a4 = var_44.o
    void* var_70_1 = &var_d58
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7314f8f35942eb24b8f95e74b536dc00>, void>::VTable
        * var_74
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7314f8f35942eb24b8f95e74b536dc00>, void>::VTable
        ** var_50_2 = &var_74
    var_74 = &std::_Func_impl_no_alloc<class <lambda_782c4a896e3aeda4fff4490dea9071b7>, void>::`vftable'{for `std::_Func_base<void>'}
    int128_t var_94_1 = var_34_1.o
    var_4c = 0xc9
    int32_t var_48_1 = 0
    var_44 = &std::_Func_impl_no_alloc<class <lambda_2e38e3c7eb3e60e7711d83f59cd16d61>, void>::`vftable'{for `std::_Func_base<void>'}
    int128_t var_84_1 = var_24.o
    int32_t** var_20_4 = &var_44
    int32_t var_1c_1 = 0xca
    var_18 = 0
    int32_t var_8_3 = 4
    sub_56a100(&var_a4, &var_74, 0xffffffff, 2, 1, 1, &var_a4, 0)
    eax_13 = &var_74
else
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7314f8f35942eb24b8f95e74b536dc00>, void>::VTable
        * const var_d4 = &std::_Func_impl_no_alloc<class <lambda_7314f8f35942eb24b8f95e74b536dc00>, void>::`vftable'{for `std::_Func_base<void>'}
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_7314f8f35942eb24b8f95e74b536dc00>, void>::VTable
        * const* var_b0_1 = &var_d4
    int32_t var_ac_1 = 0xc8
    int32_t var_a8_1 = 0
    var_a4.d = &std::_Func_impl_no_alloc<class <lambda_e8b86637b772d79b5e3fc212a669eb80>, void>::`vftable'{for `std::_Func_base<void>'}
    int128_t var_84
    var_84:4.d = &var_a4
    var_84:8.d = 0xca
    var_84:0xc.d = 0
    int32_t var_8_2 = 3
    sub_56a100(&var_a4, &var_d4, 0xffffffff, 2, 1, 1, &data_cce9d8, 0)
    eax_13 = &var_d4
int32_t var_8_4 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(eax_13, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
