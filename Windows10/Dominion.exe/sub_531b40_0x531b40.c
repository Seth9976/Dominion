// 函数: sub_531b40
// 地址: 0x531b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765e21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x3330)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5621a0(2, 0)
uint32_t result = sub_562f10(eax_2, arg2, var_20)

if (result != 0)
    void* eax_3 = sub_573400()
    void* var_25bc = sub_583fc0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0xa00)
    void* eax_5 = sub_573400()
    uint32_t esi_1 = zx.d(result.w)
    void* ecx_2 = *(eax_5 + 0xc)
    void* edi = *(eax_5 + 4)
    void* var_25c0 = ecx_2
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_2 = var_25c0
    
    int32_t eax_6 = esi_1 * 0x64
    char var_30_2 = 0
    int32_t var_25c4 = eax_6
    void* var_25c8
    uint32_t eax_7 = sub_576e90(eax_6, edi, &var_25c8, ecx_2, *(eax_6 + edi + 0x1a4c), var_30_2)
    void* ecx_4 = var_25bc
    
    if (ecx_4 s< 0)
        sub_63b870(eax_7, &data_801800, "n >= 0", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1549, "operator +")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* var_25cc = var_25c8 + ecx_4
    void* eax_10 = sub_573400()
    int32_t var_1930[0x320]
    uint32_t eax_11 = sub_5777b0(eax_10, *(eax_10 + 0xc), *(eax_10 + 4), &var_1930, 4)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_10a13ecf773e74fb9e33fb5e97c07cc0>,bool,enum CardID>::VTable
        * const var_2628 = &std::_Func_impl_no_alloc<class <lambda_10a13ecf773e74fb9e33fb5e97c07cc0>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_25b8
    __builtin_memcpy(&var_25b8, &var_1930, 0xc84)
    int32_t* var_2624_1 = &var_25c8
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_10a13ecf773e74fb9e33fb5e97c07cc0>,bool,enum CardID>::VTable
        * const* var_2604_1 = &var_2628
    int32_t var_14_1 = 0
    int32_t* var_30_4 = &var_25bc
    int32_t var_34_3 = 0
    void var_5c
    var_25bc = &var_5c
    int32_t var_38_2 = 0
    var_14_1.b = 2
    
    if (var_2604_1 != 0)
        int32_t var_38_3 = (*var_2604_1)->vFunc_0(&var_5c)
    
    var_14_1.b = 0
    void* eax_15 = GSI1::OffForSym(eax_11, eax_11, &var_25b8)
    int32_t var_14_2 = 0xffffffff
    var_25bc = eax_15
    void* var_1938_1 = eax_15
    
    if (var_2604_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_10a13ecf773e74fb9e33fb5e97c07cc0>,bool,enum CardID>::VTable
            * const* eax_16
        eax_16.b = var_2604_1 != &var_2628
        (*var_2604_1)->vFunc_4(eax_16)
    
    void* eax_17 = sub_573400()
    void var_3350
    uint32_t eax_18 = sub_5777b0(eax_17, *(eax_17 + 0xc), *(eax_17 + 4), &var_3350, 4)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ba51878dd54ce5090bc938b7cdb9b326>,bool,enum CardID>::VTable
        * const var_2650 = &std::_Func_impl_no_alloc<class <lambda_ba51878dd54ce5090bc938b7cdb9b326>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    __builtin_memcpy(&var_1930, &var_3350, 0xc84)
    int32_t* var_264c_1 = &var_25cc
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ba51878dd54ce5090bc938b7cdb9b326>,bool,enum CardID>::VTable
        * const* var_262c_1 = &var_2650
    int32_t var_14_3 = 3
    int32_t* var_30_7 = &var_25c0
    int32_t var_34_5 = 0
    var_25c0 = &var_5c
    int32_t var_38_4 = 0
    var_14_3.b = 5
    
    if (var_262c_1 != 0)
        int32_t var_38_5 = (*var_262c_1)->vFunc_0(&var_5c)
    
    var_14_3.b = 3
    int32_t eax_22 = GSI1::OffForSym(eax_18, eax_18, &var_1930)
    int32_t var_14_4 = 0xffffffff
    
    if (var_262c_1 != 0)
        (*var_262c_1)->vFunc_4(var_262c_1 != &var_2650)
    
    sub_56a0a0(&var_1930, &var_25b8)
    int32_t ecx_15 = 0
    void* esi_3 = var_25bc
    var_25bc = esi_3
    
    if (eax_22 s> 0)
        do
            int32_t eax_25 = var_1930[ecx_15]
            ecx_15 += 1
            *(&var_25b8 + (esi_3 << 2)) = eax_25
            esi_3 = var_1938_1 + 1
            var_1938_1 = esi_3
        while (ecx_15 s< eax_22)
    
    void var_ca8
    memset(&var_ca8, 0, esi_3 << 2)
    memset(&var_ca8 + (var_25bc << 2), 0xff, eax_22 << 2)
    void* eax_30 = var_25cc
    void* var_25fc_1 = &var_ca8
    int32_t var_25f8_1 = 0
    void* var_25f4_1 = esi_3
    int32_t var_25ec
    __builtin_memset(&var_25ec, 0, 0x1c)
    char var_30_11 = 0
    int128_t var_26b0 = 0x7e.o
    int128_t var_26a0_1 = eax_30.o
    int64_t var_25e0
    int128_t var_2690_1 = var_25e0.o
    result = sub_563c40(&var_26b0, 0xc, var_30_11)
    
    if (result != 0)
        void* eax_31 = sub_573400()
        uint32_t esi_5 = zx.d(result.w)
        var_25c0 = *(eax_31 + 0xc)
        void* ecx_17 = *(eax_31 + 4)
        var_25bc = ecx_17
        
        if (esi_5 u>= 0x320)
            sub_591930()
            ecx_17 = var_25bc
        
        int32_t eax_32 = esi_5 * 0x64
        sub_576e90(eax_32, ecx_17, &var_25bc, var_25c0, *(eax_32 + ecx_17 + 0x1a4c), 0)
        uint32_t var_2680[0x7]
        int32_t xmm0_4 = (*sub_576c00(&var_2680, var_25bc)).d
        void* eax_34 = sub_573400()
        void* ecx_19 = *(eax_34 + 0xc)
        void* esi_6 = *(eax_34 + 4)
        var_25bc = ecx_19
        
        if (esi_1 u>= 0x320)
            sub_591930()
            ecx_19 = var_25bc
        
        int32_t eax_35 = var_25c4
        sub_576e90(eax_35, esi_6, &var_25c4, ecx_19, *(eax_35 + esi_6 + 0x1a4c), 0)
        uint32_t var_26c8[0x6]
        int32_t esi_8 = xmm0_4 - (*sub_576c00(&var_26c8, var_25c4)).d
        
        if (esi_8 s> 0)
            void* eax_38 = sub_573400()
            sub_586550(eax_38, *(eax_38 + 0xc), *(eax_38 + 4), esi_8, 0)
        
        void* eax_39 = sub_573400()
        result = sub_583720(eax_39, *(eax_39 + 0xc), *(eax_39 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
