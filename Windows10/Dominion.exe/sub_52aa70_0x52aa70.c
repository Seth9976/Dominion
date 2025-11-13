// 函数: sub_52aa70
// 地址: 0x52aa70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765c71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx = __chkstk(0x2668)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = ecx
sub_561e00(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 1, 3, 0, 0)
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
uint32_t var_cb8 = 0xc08
int64_t var_cc0 = 0
*(ecx_3 + eax_6 + 0x17558) |= 2
void* eax_7 = sub_573400()
int32_t var_1a00
int32_t esi = sub_590990(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), 0x3ec, &var_1a00)
int32_t var_d80 = esi
int32_t** var_cb4
int32_t* var_5c
int32_t var_58
int32_t* var_54

if ((var_cc0.d | var_cc0:4.d) != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const var_d20 = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int64_t* var_d1c_1 = &var_cc0
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
        * const* var_cfc_1 = &var_d20
    int32_t var_14_1 = 0
    int32_t* var_30_2 = &var_cb4
    int32_t var_34_2 = 0
    int32_t* eax_9 = &var_1a00
    var_cb4 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_cfc_1 != 0)
        int32_t var_38_2 = (*var_cfc_1)->vFunc_0(&var_5c)
        eax_9 = &var_1a00
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    esi = GSI1::OffForSym(eax_9, esi, &var_1a00, var_5c, var_58, var_54)
    var_d80 = esi
    
    if (var_cfc_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* eax_15
        eax_15.b = var_cfc_1 != &var_d20
        (*var_cfc_1)->vFunc_4(eax_15)

if (var_cb8 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const var_d48 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_d44_1 = &var_cb8
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
        * const* var_d24_1 = &var_d48
    int32_t var_14_3 = 3
    int32_t*** var_30_4 = &var_cb4
    int32_t var_34_3 = 0
    int32_t* eax_16 = &var_1a00
    var_cb4 = &var_5c
    int32_t var_38_3 = 0
    var_14_3.b = 5
    
    if (var_d24_1 != 0)
        int32_t var_38_4 = (*var_d24_1)->vFunc_0(&var_5c)
        eax_16 = &var_1a00
    
    var_14_3.b = 3
    int32_t var_14_4 = 0xffffffff
    var_d80 = GSI1::OffForSym(eax_16, esi, &var_1a00, var_5c, var_58, var_54)
    
    if (var_d24_1 != 0)
        (*var_d24_1)->vFunc_4(var_d24_1 != &var_d48)

int64_t var_cf4
__builtin_memset(&var_cf4, 0, 0x2c)
int32_t var_30_6 = 0
char var_34_4 = 0
int32_t var_38_5 = 0xe
int128_t var_d78 = 0x92.o
int128_t* var_3c_1 = &var_d78
int32_t var_40_1 = 0x14
void var_cb0
__builtin_memcpy(&var_cb0, &var_1a00, 0xc84)
int32_t var_ce8
int128_t var_d68 = var_ce8.o
int64_t var_cd8
int128_t var_d58 = var_cd8.o
void var_2688
uint32_t result = sub_563960(&var_2688, 0, &var_cb0, &var_2688, 1, var_40_1, var_3c_1, var_38_5, 
    var_34_4, var_30_6)
__builtin_memcpy(&var_1a00, result, 0xc84)

if (var_d80 != 0)
    int32_t esi_2 = var_1a00
    
    if (esi_2 != 0)
        sub_56e9c0(1)
        var_cc0:4.d = 0
        void* var_cc4_1 = nullptr
        void* eax_24 = sub_573400()
        var_cb4 = *(eax_24 + 4)
        uint32_t eax_26 = zx.d(esi_2.w)
        var_cb8 = eax_26
        
        if (eax_26 u>= 0x320)
            sub_591930()
            eax_26 = var_cb8
        
        int32_t* ecx_14 = *(eax_24 + 4)
        void* var_34_5 = var_cc0:4.d
        int32_t** eax_27 = var_cb4
        int32_t var_38_6 = 0
        char* var_3c_2 = nullptr
        int32_t var_40_2 = 0
        int32_t var_44_2 = 0
        int32_t var_48_1 = *(eax_24 + 0x30)
        int32_t var_4c_1 = *(eax_24 + 0x2c)
        uint32_t edx_7 = eax_27[eax_26 * 0x19 + 0x69c]
        int32_t var_50_1 = *(eax_24 + 0x28)
        void* var_54_1 = 3
        int32_t var_58_1 = 0x3ea
        var_5c = 0xb
        result = sub_582d10(eax_27, edx_7, ecx_14, esi_2, 0x3ec, var_5c, var_58_1, var_54_1, 
            var_50_1, var_4c_1, var_48_1, var_44_2, var_40_2, var_3c_2, var_38_6, var_34_5, 
            var_cc4_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
