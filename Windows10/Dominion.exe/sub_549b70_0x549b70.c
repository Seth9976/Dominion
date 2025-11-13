// 函数: sub_549b70
// 地址: 0x549b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76549b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
uint32_t var_1c = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_567be0(0, 0)

if (eax_3 != 0)
    uint32_t esi_1 = zx.d(eax_3.w)
    int32_t edi = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t ebx = *(esi_1 * 0x64 + edi + 0x1a4c)
    int32_t i
    
    do
        void var_1954
        uint32_t eax_6 = sub_5678e0(esi_1, &var_1954, 4, 0, 0, 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_cab62cdb92af660942dc2750289a460f>,bool,enum CardID>::VTable
            * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_cab62cdb92af660942dc2750289a460f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
        int32_t var_cc8_1 = ebx
        int32_t var_c9c
        __builtin_memcpy(&var_c9c, eax_6, 0xc84)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_cab62cdb92af660942dc2750289a460f>,bool,enum CardID>::VTable
            * const* var_ca8_1 = &var_ccc
        void var_ca4
        void* eax_7 = &var_ca4
        int32_t var_8_1 = 0
        void* var_24_2 = &var_ca4
        int32_t var_28_2 = 0
        void var_50
        void* var_ca0_1 = &var_50
        int32_t var_2c_2 = 0
        var_8_1.b = 2
        
        if (var_ca8_1 != 0)
            eax_7 = (*var_ca8_1)->vFunc_0(&var_50)
            void* var_2c_3 = eax_7
        
        var_8_1.b = 0
        int32_t var_8_2 = 0xffffffff
        esi_1 = GSI1::OffForSym(eax_7, var_1c, &var_c9c)
        var_1c = esi_1
        
        if (var_ca8_1 != 0)
            (*var_ca8_1)->vFunc_4(var_ca8_1 != &var_ccc)
            int32_t var_ca8_2 = 0
        
        if (esi_1 == 0)
            break
        
        if (sub_567520() != 0)
            break
        
        int32_t entry_ebx
        i = sub_570120(0xb, eax_2, var_1c, entry_ebx)
    while (i != 0)

uint32_t result = sub_56e770(6)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
