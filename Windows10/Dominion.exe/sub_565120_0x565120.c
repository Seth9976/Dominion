// 函数: sub_565120
// 地址: 0x565120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766fab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t* edx
ecx, edx = __chkstk(0x25d8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_ca8 = ecx
void* eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_573400()
int32_t var_24 = ecx_1
uint32_t result_2
uint32_t eax_5 = sub_577640(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), &result_2)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_26dc126f42d981e5efcee2c6428d278e>,bool,enum CardID>::VTable
    * const var_cd8 = &std::_Func_impl_no_alloc<class <lambda_26dc126f42d981e5efcee2c6428d278e>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t* var_cd4 = &var_ca8
void var_ca0
__builtin_memcpy(&var_ca0, &result_2, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_26dc126f42d981e5efcee2c6428d278e>,bool,enum CardID>::VTable
    * const* var_cb4 = &var_cd8
void* var_ca4
int32_t* eax_6 = &var_ca4
int32_t var_8_1 = 0
int32_t* var_24_1 = &var_ca4
int32_t var_28_1 = 0
void var_50
var_ca4 = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_cb4 != 0)
    eax_6 = (*var_cb4)->vFunc_0(&var_50)
    int32_t* var_2c_1 = eax_6

var_8_1.b = 0
int32_t var_8_2 = 0xffffffff
int32_t var_20_1 = GSI1::OffForSym(eax_6, eax_5, &var_ca0)

if (var_cb4 != 0)
    (*var_cb4)->vFunc_4(var_cb4 != &var_cd8)

void var_25e8
__builtin_memcpy(&result_2, sub_563960(&var_25e8, 0, &var_ca0, &var_25e8, 1, 7, arg2, 0xc, 0, 0), 
    0xc84)
uint32_t result_1

if (eax_5 != 0)
    result_1 = result_2

uint32_t result

if (eax_5 == 0 || result_1 == 0)
    result = 0
else
    void* eax_13 = sub_573400()
    
    if (sub_583720(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), result_1, edx, nullptr, 0x476, 0, 0, 4)
            == 0)
        result_1 = 0
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
