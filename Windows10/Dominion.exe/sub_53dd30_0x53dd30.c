// 函数: sub_53dd30
// 地址: 0x53dd30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76641b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 2, 1, 0, 0)
void* eax_4 = sub_573400()
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
*(ecx_2 + eax_5 + 0x17558) |= 8
int32_t eax_6
int32_t edx_1
eax_6, edx_1 = sub_5641d0()
void var_25dc
uint32_t eax_8 = sub_566240(&var_25dc, edx_1, 4, &var_25dc, &data_7bf9f8)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_529b6780f4162c4fe73a61ac46986666>,bool,enum CardID>::VTable
    * const var_1954 = &std::_Func_impl_no_alloc<class <lambda_529b6780f4162c4fe73a61ac46986666>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_1950 = eax_6
void var_c9c
__builtin_memcpy(&var_c9c, eax_8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_529b6780f4162c4fe73a61ac46986666>,bool,enum CardID>::VTable
    * const* var_1930 = &var_1954
int32_t var_8_1 = 0
void* var_ca4
int32_t* var_24_2 = &var_ca4
void var_1924
void* eax_9 = &var_1924
void* var_28_2 = &var_1924
void var_50
void* var_1928 = &var_50
int32_t var_2c_1 = 0
var_8_1.b = 1

if (var_1930 != 0)
    eax_9 = (*var_1930)->vFunc_0(&var_50)
    void* var_2c_2 = eax_9

var_8_1.b = 0
uint32_t eax_11 = GSI1::OffForSym(eax_9, arg1, &var_c9c)
int32_t var_8_2 = 0xffffffff
uint32_t esi_1 = eax_11
uint32_t var_1c_1 = esi_1

if (var_1930 != 0)
    eax_11 = (*var_1930)->vFunc_4(var_1930 != &var_1954)
    int32_t var_1930_1 = 0

if (esi_1 s> 0)
    eax_11 = sub_56e9c0(1)

sub_569330(eax_11, 0x3ee, &var_c9c, 0x18)
void* eax_14 = sub_573400()
*(eax_14 + 0xc)
*(eax_14 + 4)
uint32_t result = sub_582eb0(&var_1924, var_ca4, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
