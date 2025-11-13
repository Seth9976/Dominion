// 函数: sub_4fb770
// 地址: 0x4fb770
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764ebb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1954
int32_t eax_4 = sub_568780(&var_1954, edx, 0x3e9, &var_1954)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_6e277b4631a6dc7ffbc442a3da60aa19>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_6e277b4631a6dc7ffbc442a3da60aa19>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c9c
__builtin_memcpy(&var_c9c, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_6e277b4631a6dc7ffbc442a3da60aa19>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_5 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_20_1 = &var_ca0
int32_t var_24 = 0
void var_4c
var_ca0 = &var_4c
int32_t var_28 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_5 = (*var_ca8)->message<uint32_t>*> >(&var_4c)
    int32_t* var_28_1 = eax_5

var_8_1.b = 0
int32_t var_8_2 = 0xffffffff
int32_t var_1c_1 = GSI1::OffForSym(eax_5, eax_2, &var_c9c)

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)

void var_25dc
uint32_t result = sub_562540(&var_25dc, 2, &var_c9c, &var_25dc, 0x3e9, 0x13, 0, 0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
