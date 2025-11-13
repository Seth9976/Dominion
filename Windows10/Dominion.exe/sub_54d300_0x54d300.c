// 函数: sub_54d300
// 地址: 0x54d300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7668eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x32b8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_547860(0x476)
int32_t var_1934 = 0

while (true)
    void* eax_3 = sub_573400()
    uint32_t var_2650
    uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_2650, 4)
    uint32_t var_19d0_1 = eax_4
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f8e77ebce7d71622f3af24c01b3b4f22>,bool,enum CardID>::VTable
        * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_f8e77ebce7d71622f3af24c01b3b4f22>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_1930
    __builtin_memcpy(&var_1930, &var_2650, 0xc84)
    int32_t var_ca8[0x312]
    int32_t (* var_1994_1)[0x312] = &var_ca8
    int32_t* var_1990_1 = &var_1934
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f8e77ebce7d71622f3af24c01b3b4f22>,bool,enum CardID>::VTable
        * const* var_1974_1 = &var_1998
    int32_t var_14_1 = 0
    void var_193c
    void* var_30_2 = &var_193c
    int32_t var_34_2 = 0
    void var_5c
    void* var_1938_1 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_1974_1 != 0)
        int32_t var_38_2 = (*var_1974_1)->vFunc_0(&var_5c)
        eax_4 = var_19d0_1
    
    var_14_1.b = 0
    int32_t* result = GSI1::OffForSym(eax_4, eax_4, &var_1930)
    int32_t var_14_2 = 0xffffffff
    int32_t* result_1 = result
    int32_t* result_2 = result_1
    
    if (var_1974_1 != 0)
        result = (*var_1974_1)->vFunc_4(var_1974_1 != &var_1998)
    
    if (result_1 == 0)
    label_54d571:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int64_t var_196c
    __builtin_memset(&var_196c, 0, 0x2c)
    int32_t var_30_4 = 0
    char var_34_3 = 0
    int32_t var_38_3 = 0xc
    int128_t var_19c8 = 0x11b.o
    int32_t var_1960
    int128_t var_19b8_1 = var_1960.o
    int64_t var_1950
    int128_t var_19a8_1 = var_1950.o
    void var_32d8
    result = sub_563960(&var_32d8, 0, &var_1930, &var_32d8, 1, 7, &var_19c8, var_38_3, var_34_3, 
        var_30_4)
    __builtin_memcpy(&var_2650, result, 0xc84)
    
    if (var_19d0_1 == 0)
        goto label_54d571
    
    uint32_t esi_1 = var_2650
    
    if (esi_1 == 0)
        goto label_54d571
    
    void* eax_11 = sub_573400()
    sub_583720(eax_11, *(eax_11 + 0xc), *(eax_11 + 4), esi_1, 0x476, nullptr, 0x476, 0, 0, 4)
    uint32_t esi_2 = zx.d(esi_1.w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t ecx_7 = var_1934
    var_ca8[ecx_7] = *(esi_2 * 0x64 + edi_1 + 0x1a4c)
    var_1934 = ecx_7 + 1
