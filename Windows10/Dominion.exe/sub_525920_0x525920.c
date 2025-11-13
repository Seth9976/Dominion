// 函数: sub_525920
// 地址: 0x525920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76587b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x1938)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = ecx
sub_561e00(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 1, 1, 0, 0)
void* eax_5 = sub_573400()
int32_t ecx_2 = *(eax_5 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_5, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_6 = *(eax_5 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_6 + 0x17558) |= 2
uint32_t eax_7
int32_t edx_1
eax_7, edx_1 = sub_563590(0x911)

if (eax_7 != 0)
    void* eax_8 = sub_573400()
    edx_1 = sub_583720(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), eax_7, 0x476, nullptr, 0x476, 0, 0, 4)

void var_1948
int32_t eax_10 = sub_568780(&var_1948, edx_1, 0x3ea, &var_1948)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ea2cba039133952aab4cfabd1edcef77>,bool,enum CardID>::VTable
    * const var_cc4 = &std::_Func_impl_no_alloc<class <lambda_ea2cba039133952aab4cfabd1edcef77>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c98
__builtin_memcpy(&var_c98, eax_10, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ea2cba039133952aab4cfabd1edcef77>,bool,enum CardID>::VTable
    * const* var_ca0 = &var_cc4
void* var_c9c
int32_t* eax_11 = &var_c9c
int32_t var_8_1 = 0
int32_t* var_20_3 = &var_c9c
int32_t var_24_2 = 0
void var_4c
var_c9c = &var_4c
int32_t var_28_2 = 0
var_8_1.b = 2

if (var_ca0 != 0)
    eax_11 = (*var_ca0)->vFunc_0(&var_4c)
    int32_t* var_28_3 = eax_11

var_8_1.b = 0
int32_t eax_13 = GSI1::OffForSym(eax_11, arg2, &var_c98)
int32_t var_8_2 = 0xffffffff
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ea2cba039133952aab4cfabd1edcef77>,bool,enum CardID>::VTable
    * const* ecx_7 = var_ca0
int32_t esi_2 = eax_13
int32_t var_18_1 = esi_2

if (ecx_7 != 0)
    eax_13, ecx_7 = (*ecx_7)->vFunc_4(ecx_7 != &var_cc4)
    int32_t var_ca0_1 = 0

uint32_t result

if (esi_2 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ea2cba039133952aab4cfabd1edcef77>,bool,enum CardID>::VTable
        * const* var_20_5 = ecx_7
    result = sub_56ab80(eax_13, 0x3ea, &var_c98, 0x12, 7)
else
    result = sub_566800(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
