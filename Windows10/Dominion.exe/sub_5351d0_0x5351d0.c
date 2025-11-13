// 函数: sub_5351d0
// 地址: 0x5351d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765f9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x19c8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19d8
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19d8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_93c529755b426a103f858f84bde6bd23>,bool,enum CardID>::VTable
    * const var_d24 = &std::_Func_impl_no_alloc<class <lambda_93c529755b426a103f858f84bde6bd23>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cf8
__builtin_memcpy(&var_cf8, &var_19d8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_93c529755b426a103f858f84bde6bd23>,bool,enum CardID>::VTable
    * const* var_d00 = &var_d24
int32_t var_8_1 = 0
int32_t** var_cfc
int32_t* var_20_1 = &var_cfc
int32_t var_24_1 = 0
int32_t* var_4c
var_cfc = &var_4c
int32_t var_28 = 0
var_8_1.b = 2

if (var_d00 != 0)
    int32_t var_28_1 = (*var_d00)->vFunc_0(&var_4c)

var_8_1.b = 0
int32_t var_48
int32_t* var_44
int32_t eax_8 = GSI1::OffForSym(eax_4, eax_4, &var_cf8, var_4c, var_48, var_44)

if (var_d00 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_93c529755b426a103f858f84bde6bd23>,bool,enum CardID>::VTable
        * const* eax_10
    eax_10.b = var_d00 != &var_d24
    (*var_d00)->vFunc_4(eax_10)

int32_t var_38 = eax_8
var_1c.q = 0
var_24_1.q = 0
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_34c4f8dfa9b29bc3cd955b45309ee974>, void>::VTable
    * const* var_2c = nullptr
var_44 = 0x107
int32_t var_3c = 0
void* var_40 = &var_cf8
int32_t var_30 = 0
int32_t var_34 = 0
int128_t var_d54 = var_44.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_34c4f8dfa9b29bc3cd955b45309ee974>, void>::VTable
    * const var_74
int32_t* var_50_2 = &var_74
var_74 = &std::_Func_impl_no_alloc<class <lambda_34c4f8dfa9b29bc3cd955b45309ee974>, void>::`vftable'{for `std::_Func_base<void>'}
var_4c = 0xbe
int128_t var_d44 = var_34.o
int32_t var_48_1 = 0
var_44 = &std::_Func_impl_no_alloc<class <lambda_90ef4ec242acbd541d636d82e1132ab0>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t** var_20_3 = &var_44
int128_t var_d34 = var_24_1.o
int32_t var_1c_1 = 0xbf
int32_t var_18_1 = 0
int32_t var_8_2 = 3
sub_56a100(&var_d54, &var_74, 0xffffffff, 2, 1, 1, &var_d54, 0x200)
int32_t var_8_3 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
