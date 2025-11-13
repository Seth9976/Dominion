// 函数: sub_5265e0
// 地址: 0x5265e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7651fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_561af0(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 2, 1, 0, 0)
void* eax_5 = sub_573400()
int32_t ecx_1 = *(eax_5 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_5, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_6 = *(eax_5 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
int32_t var_30_2 = 0
int32_t var_34_1 = 0
int32_t var_38_1 = 0
int32_t var_3c_1 = 2
*(ecx_2 + eax_6 + 0x17558) |= 8
void var_19c8
uint32_t eax_7 = sub_5678e0(arg1, &var_19c8, var_3c_1, var_38_1, var_34_1, var_30_2)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_da1a1603d04cac90ca05a3b9a344452d>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_da1a1603d04cac90ca05a3b9a344452d>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0
__builtin_memcpy(&var_cb0, eax_7, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_da1a1603d04cac90ca05a3b9a344452d>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
void* var_cb4
int32_t* eax_8 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_3 = &var_cb4
int32_t var_34_2 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_2 = 0
var_14_1.b = 2

if (var_cec != 0)
    eax_8 = (*var_cec)->vFunc_0(&var_5c)
    int32_t* var_38_3 = eax_8

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_4 = GSI1::OffForSym(eax_8, var_30_3, &var_cb0)

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
int32_t var_30_6 = 0
char var_34_3 = 0
int32_t var_38_4 = 0x37
int128_t var_d40 = 0x75.o
int32_t var_cd8
int128_t var_d30 = var_cd8.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
int32_t* result =
    sub_563960(&var_19c8, 0, &var_cb0, &var_19c8, 1, 1, &var_d40, var_38_4, var_34_3, var_30_6)
int32_t ecx_7 = __builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_6 != 0)
    int32_t esi_2 = var_cb0
    
    if (esi_2 != 0)
        char var_30_7 = 0
        int32_t var_34_4 = ecx_7
        uint32_t eax_15 = sub_56b800()
        sub_566c60(eax_15, 2, esi_2, eax_15, var_30_7)
        void* eax_16 = sub_573400()
        int32_t var_38_5 = 0x3e9
        int32_t var_cb8 = esi_2
        int32_t edi_1 = *(eax_16 + 4)
        var_cb4 = *(eax_16 + 0xc)
        result = sub_582de0(eax_16, esi_2, edi_1, var_38_5)
        
        if (result.b == 0)
            int32_t var_30_8 = 0
            int32_t var_34_6 = 0x12
            char var_38_6 = &var_cb0
            var_cb0 = 0x3e9
            result = sub_590de0(&var_cb8, 1, var_38_6, var_34_6, arg1, var_14_2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
