// 函数: sub_553f20
// 地址: 0x553f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766a7b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_c9c
int32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_568780(&var_c9c, edx, 0x3e9, &var_c9c)
void var_1924
__builtin_memcpy(&var_1924, eax_4, 0xc84)
int32_t var_24_1 = 0
sub_561880(eax_4, edx_1, &var_1924, 2)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f245aefd8e0260066fe13d578adf9665>,bool,enum CardID>::VTable
    * const var_1954 = &std::_Func_impl_no_alloc<class <lambda_f245aefd8e0260066fe13d578adf9665>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_194c = 0x80
int32_t var_1948 = 0
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f245aefd8e0260066fe13d578adf9665>,bool,enum CardID>::VTable
    * const* var_1930 = &var_1954
void* var_1928
int32_t* eax_5 = &var_1928
int32_t var_8_1 = 0
int32_t* var_24_2 = &var_1928
int32_t var_28_1 = 0
void var_50
var_1928 = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_1930 != 0)
    eax_5 = (*var_1930)->vFunc_0(&var_50)
    int32_t* var_2c_1 = eax_5

var_8_1.b = 0
int32_t var_ca4
uint32_t eax_7 = GSI1::OffForSym(eax_5, var_ca4, &var_1924)
int32_t var_8_2 = 0xffffffff
uint32_t var_ca4_1 = eax_7

if (var_1930 != 0)
    (*var_1930)->vFunc_4(var_1930 != &var_1954)

void* eax_10 = sub_573400()
*(eax_10 + 0xc)
*(eax_10 + 4)
int32_t ecx_5
int32_t edi_1

if (eax_7 s> 0)
    edi_1, ecx_5 = __memfill_u32(&var_c9c, 0x3e9, eax_7)
int32_t var_24_4 = 0
void* result = sub_590de0(&var_1924, eax_7, &var_c9c, 0x12, arg1, var_8_2)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
