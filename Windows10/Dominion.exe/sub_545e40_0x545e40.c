// 函数: sub_545e40
// 地址: 0x545e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76667b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19b8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void* result = sub_5887c0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0)
void* result_1

if (result != 0)
    sub_562400(result, 0x3eb, result, 0x20)
    result_1 = result
    int32_t eax_6 = *(*(sub_573400() + 4) + 0x1504)
    uint32_t var_58
    int32_t* var_54
    
    if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
        __builtin_memset(&var_54, 0, 0x28)
        var_58 = 0xffffffff
        int32_t* var_50
        void* var_4c
        void* var_48
        int128_t* var_44
        int32_t var_40
        int32_t var_3c
        int32_t var_38
        int32_t var_34
        int32_t var_30_2
        sub_61b1b0(eax_6, 7, eax_6 == 2, var_58, var_54, var_50, var_4c, var_48, var_44, var_40, 
            var_3c, var_38, var_34, var_30_2)
    
    uint32_t esi_2 = zx.d(result_1.w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    uint32_t esi_4
    int32_t edi_2
    
    if (*(esi_2 * 0x64 + edi_1 + 0x1a4c) != 0x104)
        esi_4 = zx.d(result_1.w)
        edi_2 = *(sub_573400() + 4)
        
        if (esi_4 u>= 0x320)
            sub_591930()
    
    if (*(esi_2 * 0x64 + edi_1 + 0x1a4c) == 0x104 || *(esi_4 * 0x64 + edi_2 + 0x1a4c) == 0x101)
        result = sub_563590(0x100)
    else
        void* eax_11 = sub_573400()
        void var_19d8
        uint32_t eax_12 = sub_5777b0(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), &var_19d8, 4)
        void var_cb0
        __builtin_memcpy(&var_cb0, &var_19d8, 0xc84)
        int16_t result_2 = result_1.w
        void* eax_13 = sub_573400()
        uint32_t result_5 = zx.d(result_2)
        int32_t var_cb8 = *(sub_573400() + 4)
        
        if (result_5 u>= 0x320)
            sub_591930()
        
        int32_t eax_16 = result_5 * 0x64
        uint32_t eax_17
        int32_t edx_4
        eax_17, edx_4 = sub_573890(eax_16, *(eax_16 + var_cb8 + 0x1a4c), *(eax_13 + 4), 0, 
            0xffffffff, 0xffffffff)
        uint32_t var_cc8 = eax_17
        int32_t var_cc4_1 = edx_4
        int32_t eax_18 = edx_4 & 0x20000
        int32_t var_34_3
        char const* const var_30_5
        char* ecx_7
        
        if (eax_18 != 0)
            var_30_5 = "Locusts"
            var_34_3 = 0x407
            ecx_7 = "(trashedType & STANDARD) == 0"
        label_546290:
            sub_63b870(eax_18, &data_801800, ecx_7, 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Nocturne.cpp", var_34_3, var_30_5)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        eax_18 = edx_4 & 0x10000
        
        if (eax_18 != 0)
            var_30_5 = "Locusts"
            var_34_3 = 0x408
            ecx_7 = "(trashedType & NONKINGDOM) == 0"
            goto label_546290
        
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0123f756af98f4b209537eaee9ddaa8b>,bool,enum CardID>::VTable
            * const var_d20 = &std::_Func_impl_no_alloc<class <lambda_0123f756af98f4b209537eaee9ddaa8b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
        uint32_t* var_d1c_1 = &var_cc8
        void** var_d18_1 = &result_1
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0123f756af98f4b209537eaee9ddaa8b>,bool,enum CardID>::VTable
            * const* var_cfc_1 = &var_d20
        void* var_cbc
        int32_t* eax_19 = &var_cbc
        int32_t var_14_1 = 0
        int32_t* var_30_6 = &var_cbc
        int32_t var_34_4 = 0
        void var_5c
        var_cbc = &var_5c
        int32_t var_38_2 = 0
        var_14_1.b = 2
        
        if (var_cfc_1 != 0)
            eax_19 = (*var_cfc_1)->vFunc_0(&var_5c)
            int32_t* var_38_3 = eax_19
        
        var_14_1.b = 0
        int32_t var_14_2 = 0xffffffff
        int32_t var_30_7 = GSI1::OffForSym(eax_19, eax_12, &var_cb0, var_5c, var_58, var_54)
        
        if (var_cfc_1 != 0)
            (*var_cfc_1)->vFunc_4(var_cfc_1 != &var_d20)
        
        int16_t result_3 = result_1.w
        void* eax_25 = sub_573400()
        uint32_t result_6 = zx.d(result_3)
        var_cb8 = *(sub_573400() + 4)
        
        if (result_6 u>= 0x320)
            sub_591930()
        
        int32_t eax_28 = result_6 * 0x64
        uint32_t eax_29
        void* edx_10
        eax_29, edx_10 = sub_573890(eax_28, *(eax_28 + var_cb8 + 0x1a4c), *(eax_25 + 4), 0, 
            0xffffffff, 0xffffffff)
        int16_t result_4 = result_1.w
        var_cbc = edx_10
        void* eax_30 = sub_573400()
        uint32_t result_7 = zx.d(result_4)
        int32_t ecx_12 = *(eax_30 + 0xc)
        void* edi_5 = *(eax_30 + 4)
        var_cb8 = ecx_12
        
        if (result_7 u>= 0x320)
            sub_591930()
            ecx_12 = var_cb8
        
        int32_t eax_31 = result_7 * 0x64
        sub_576e90(eax_31, edi_5, &var_cb8, ecx_12, *(eax_31 + edi_5 + 0x1a4c), 0)
        int32_t eax_32 = var_cb8
        int64_t var_cf4_1 = 0
        int64_t var_cd0_1 = 0
        int64_t var_cd8_1 = 0
        int32_t var_cec_1 = 0
        uint32_t var_ce0_1 = eax_29
        void* var_cdc_1 = var_cbc
        int128_t var_d50 = 0xb1.o
        int32_t var_ce4_1 = 0
        int128_t var_d40_1 = eax_32.o
        int128_t var_d30_1 = var_cd8_1.o
        result = sub_563c40(&var_d50, 0xc, 0)
    
    if (result != 0)
        void* eax_35 = sub_573400()
        result = sub_583720(eax_35, *(eax_35 + 0xc), *(eax_35 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)
else
    result_1 = result
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
