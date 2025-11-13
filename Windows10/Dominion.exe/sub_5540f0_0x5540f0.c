// 函数: sub_5540f0
// 地址: 0x5540f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76641b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_25dc
void var_c9c
__builtin_memcpy(&var_c9c, sub_566240(&var_25dc, edx, 3, &var_25dc, &data_7bfa58), 0xc84)
int32_t eax_7 = *(*(sub_573400() + 4) + 0x1504)
uint32_t var_4c
int32_t* var_48

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    void* var_40
    __builtin_memset(&var_40, 0, 0x20)
    var_48 = nullptr
    var_4c = 0xffffffff
    void* var_3c
    int128_t* var_38
    int32_t var_34
    int32_t var_30
    int32_t var_2c
    int32_t var_28_1
    int32_t var_24_1
    sub_61b1b0(eax_7, 7, eax_7 == 2, var_4c, var_48, 1, var_40, var_3c, var_38, var_34, var_30, 
        var_2c, var_28_1, var_24_1)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_25803763f7320df8f0796c2bb8bf8806>,bool,enum CardID>::VTable
    * const var_1954 = &std::_Func_impl_no_alloc<class <lambda_25803763f7320df8f0796c2bb8bf8806>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_25803763f7320df8f0796c2bb8bf8806>,bool,enum CardID>::VTable
    * const* var_1930 = &var_1954
int32_t var_8_1 = 0
void var_ca4
void* var_24_2 = &var_ca4
void var_1924
void* eax_8 = &var_1924
void* var_28_2 = &var_1924
void var_50
void* var_1928 = &var_50
int32_t var_2c_1 = 0
var_8_1.b = 1

if (var_1930 != 0)
    eax_8 = (*var_1930)->vFunc_0(&var_50)
    void* var_2c_2 = eax_8

var_8_1.b = 0
void* eax_10 = GSI1::OffForSym(eax_8, arg1, &var_c9c, var_50, var_4c, var_48)
int32_t var_8_2 = 0xffffffff

if (var_1930 != 0)
    (*var_1930)->vFunc_4(var_1930 != &var_1954)
    int32_t var_1930_1 = 0

void* eax_13 = sub_573400()
*(eax_13 + 0xc)
*(eax_13 + 4)
uint32_t result = sub_569330(
    sub_582eb0(&var_c9c, eax_10, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr), 0x3ee, &var_1924, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
