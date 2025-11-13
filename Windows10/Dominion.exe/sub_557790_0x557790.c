// 函数: sub_557790
// 地址: 0x557790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7659ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = ecx
sub_561e00(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 1, 1, 0, 0)
void* eax_5
int32_t edx_1
eax_5, edx_1 = sub_573400()
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
int32_t* const var_20_1 = &data_7bfa7c
*(ecx_3 + eax_6 + 0x17558) |= 2
void var_25dc
void var_c9c
__builtin_memcpy(&var_c9c, sub_566240(&var_25dc, edx_1, 3, &var_25dc, var_20_1), 0xc84)
int32_t eax_11 = *(*(sub_573400() + 4) + 0x1504)
uint32_t var_48
int32_t* var_44

if (eax_11 != 3 && eax_11 != 5 && eax_11 != 4 && eax_11 != 6)
    void* var_3c
    __builtin_memset(&var_3c, 0, 0x20)
    var_44 = nullptr
    var_48 = 0xffffffff
    void* var_38
    int128_t* var_34_1
    int32_t var_30_1
    int32_t var_2c_1
    int32_t var_28_1
    int32_t var_24_2
    int32_t var_20_2
    sub_61b1b0(eax_11, 7, eax_11 == 2, var_48, var_44, 1, var_3c, var_38, var_34_1, var_30_1, 
        var_2c_1, var_28_1, var_24_2, var_20_2)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fcf559362a937d211b2e1a4ecf3def41>,bool,enum CardID>::VTable
    * const var_1954 = &std::_Func_impl_no_alloc<class <lambda_fcf559362a937d211b2e1a4ecf3def41>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fcf559362a937d211b2e1a4ecf3def41>,bool,enum CardID>::VTable
    * const* var_1930 = &var_1954
int32_t var_8_1 = 0
void var_ca4
void* var_20_3 = &var_ca4
void var_1924
void* eax_12 = &var_1924
void* var_24_3 = &var_1924
void var_4c
void* var_1928 = &var_4c
int32_t var_28_2 = 0
var_8_1.b = 1

if (var_1930 != 0)
    eax_12 = (*var_1930)->vFunc_0(&var_4c)
    void* var_28_3 = eax_12

var_8_1.b = 0
int32_t eax_14 = GSI1::OffForSym(eax_12, eax_2, &var_c9c, var_4c, var_48, var_44)
int32_t var_8_2 = 0xffffffff
int32_t var_1c_1 = eax_14

if (var_1930 != 0)
    (*var_1930)->vFunc_4(var_1930 != &var_1954)
    int32_t var_1930_1 = 0

sub_569500(&var_c9c, 0x3ee)
int32_t* ecx_9
ecx_9.b = eax_14 s> 0
uint32_t result = sub_569330(sub_56e9c0(ecx_9), 0x3ee, &var_1924, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
