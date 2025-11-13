// 函数: sub_539e20
// 地址: 0x539e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76618b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x193c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (arg2 == 0)
    result.b = 0
else
    if (arg2 != 1)
        sub_63b870(arg2, &data_801800, "numCards == 1", 
            "C:\x\ax2017\Jams\Dominion\code\DomCards_Intrigue.cpp", 0x394, 
            "Swindler_Achievement_OnTrash")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int16_t esi_1 = (*arg1).w
    void* eax_3 = sub_573400()
    uint32_t esi_2 = zx.d(esi_1)
    int32_t ebx = *(eax_3 + 0xc)
    void* edi_1 = *(eax_3 + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_4 = esi_2 * 0x64
    void var_ca0
    sub_576e90(eax_4, edi_1, &var_ca0, ebx, *(eax_4 + edi_1 + 0x1a4c), 0)
    int32_t esi_3 = *(sub_573400() + 0xc)
    void* eax_6 = sub_573400()
    
    if (esi_3 == 0xffffffff)
        esi_3 = *(eax_6 + 0xc)
    
    void var_194c
    uint32_t eax_7 = sub_5777b0(eax_6, esi_3, *(eax_6 + 4), &var_194c, 4)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fcf35bd7aff839fcd7354f0df380f26e>,bool,enum CardID>::VTable
        * const var_cc8 = &std::_Func_impl_no_alloc<class <lambda_fcf35bd7aff839fcd7354f0df380f26e>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    uint32_t var_ccc_1 = eax_7
    void* var_cc4_1 = &var_ca0
    void var_c98
    __builtin_memcpy(&var_c98, &var_194c, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fcf35bd7aff839fcd7354f0df380f26e>,bool,enum CardID>::VTable
        * const* var_ca4_1 = &var_cc8
    void* var_c9c
    int32_t* eax_8 = &var_c9c
    int32_t var_8_1 = 0
    int32_t* var_24_3 = &var_c9c
    int32_t var_28_3 = 0
    void var_50
    var_c9c = &var_50
    int32_t var_2c_2 = 0
    var_8_1.b = 2
    
    if (var_ca4_1 != 0)
        eax_8 = (*var_ca4_1)->vFunc_0(&var_50)
        int32_t* var_2c_3 = eax_8
    
    var_8_1.b = 0
    uint32_t edi_2 = GSI1::OffForSym(eax_8, eax_7, &var_c98)
    
    if (var_ca4_1 != 0)
        (*var_ca4_1)->vFunc_4(var_ca4_1 != &var_cc8)
    
    result.b = edi_2 == 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
