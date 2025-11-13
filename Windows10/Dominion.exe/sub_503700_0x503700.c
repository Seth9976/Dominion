// 函数: sub_503700
// 地址: 0x503700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76524b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1938)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_1948
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_1948, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e16ff1a20f76c9913c6044854cd52f23>,bool,enum CardID>::VTable
    * const var_cc4 = &std::_Func_impl_no_alloc<class <lambda_e16ff1a20f76c9913c6044854cd52f23>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cc0 = arg1
uint32_t var_cc8 = eax_4
void var_c98
__builtin_memcpy(&var_c98, &var_1948, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e16ff1a20f76c9913c6044854cd52f23>,bool,enum CardID>::VTable
    * const* var_ca0 = &var_cc4
void* var_c9c
int32_t* eax_6 = &var_c9c
int32_t var_8_1 = 0
int32_t* var_24_1 = &var_c9c
int32_t var_28_1 = 0
void var_50
var_c9c = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_ca0 != 0)
    eax_6 = (*var_ca0)->_Copy(void *) const(&var_50)
    int32_t* var_2c_1 = eax_6

var_8_1.b = 0
uint32_t edi = GSI1::OffForSym(eax_6, eax_4, &var_c98)

if (var_ca0 != 0)
    (*var_ca0)->vFunc_4(var_ca0 != &var_cc4)

uint32_t result
result.b = edi s> 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
