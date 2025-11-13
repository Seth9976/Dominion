// 函数: sub_538d70
// 地址: 0x538d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7659ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
void* eax_4
int32_t edx_1
eax_4, edx_1 = sub_573400()
int32_t ecx_1 = *(eax_4 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_5 = *(eax_4 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
int32_t* const var_20_1 = &data_7bf9e4
*(ecx_2 + eax_5 + 0x17558) |= 2
void var_25dc
uint32_t eax_7 = sub_566240(&var_25dc, edx_1, 4, &var_25dc, var_20_1)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0b203aae534c97578131c130270cb35f>,bool,enum CardID>::VTable
    * const var_1954 = &std::_Func_impl_no_alloc<class <lambda_0b203aae534c97578131c130270cb35f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c9c
__builtin_memcpy(&var_c9c, eax_7, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0b203aae534c97578131c130270cb35f>,bool,enum CardID>::VTable
    * const* var_1930 = &var_1954
int32_t var_8_1 = 0
void var_ca4
void* var_20_2 = &var_ca4
void var_1924
void* eax_8 = &var_1924
void* var_24_2 = &var_1924
void var_4c
void* var_1928 = &var_4c
int32_t var_28_1 = 0
var_8_1.b = 1

if (var_1930 != 0)
    eax_8 = (*var_1930)->vFunc_0(&var_4c)
    void* var_28_2 = eax_8

var_8_1.b = 0
int32_t eax_10 = GSI1::OffForSym(eax_8, eax_2, &var_c9c)
int32_t var_8_2 = 0xffffffff
int32_t var_1c_1 = eax_10

if (var_1930 != 0)
    eax_10 = (*var_1930)->vFunc_4(var_1930 != &var_1954)
    int32_t var_1930_1 = 0

uint32_t result = sub_569330(
    sub_566140(eax_10, 0x3ee, &var_c9c, 0x3ea, 3, 0, 0xb, nullptr, nullptr), 0x3ee, &var_1924, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
