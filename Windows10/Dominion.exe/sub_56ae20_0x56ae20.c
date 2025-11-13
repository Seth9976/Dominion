// 函数: sub_56ae20
// 地址: 0x56ae20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7673b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2670)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1958 = 6
void* eax_3 = sub_573400()
int32_t* edi = *(eax_3 + 4)
int32_t esi = edi[0x34e]
void* edx_2 = mods.dp.d(sx.q(*(eax_3 + 0xc) - 1 + esi), esi) * 0x5a30
void* eax_9 = edx_2 + 0x181f8 + edi
int32_t var_ca8[0x312]
int32_t result = sub_593ca0(eax_9, &var_ca8, edi, eax_9, *(edx_2 + edi + 0x17514))
int32_t result_1 = result

if (result != 0)
    void* eax_10 = sub_573400()
    uint32_t var_1930
    uint32_t eax_11 = sub_5777b0(eax_10, *(eax_10 + 0xc), *(eax_10 + 4), &var_1930, 4)
    uint32_t var_cb0_1 = eax_11
    void var_2690
    __builtin_memcpy(&var_2690, &var_1930, 0xc84)
    int32_t ecx_2 = 0
    int32_t var_1940_1 = 0
    int32_t var_1a10
    void* var_193c
    int32_t var_1934
    
    if (eax_11 s> 0)
        int32_t eax_12 = var_1a10
        int32_t result_2 = result
        
        do
            int32_t esi_1 = 0
            int32_t edi_1 = ecx_2 << 2
            var_1934 = edi_1
            int32_t ecx_4
            
            if (result_2 s> 0)
                uint32_t eax_13 = zx.d(*(&var_2690 + edi_1))
                var_193c = eax_13 * 0x64
                
                do
                    int32_t edi_2 = var_ca8[esi_1]
                    int32_t eax_16 = *(sub_573400() + 4)
                    
                    if (eax_13 u>= 0x320)
                        sub_591930()
                    
                    if (*(var_193c + eax_16 + 0x1a4c) == edi_2)
                        ecx_4 = var_1940_1
                        result_2 = result
                        goto label_56afd0
                    
                    esi_1 += 1
                while (esi_1 s< result)
                
                ecx_2 = var_1940_1
                eax_12 = var_1a10
                result_2 = result
                edi_1 = var_1934
            
            ecx_4 = ecx_2 - 1
            var_1a10 = eax_12 - 1
            *(&var_2690 + edi_1) = *(&var_2690 + ((eax_12 - 1) << 2))
        label_56afd0:
            eax_12 = var_1a10
            ecx_2 = ecx_4 + 1
            var_1940_1 = ecx_2
        while (ecx_2 s< eax_12)
    
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_71c560c79558e27c42258f52c8eb1965>,bool,enum CardID>::VTable
        * const var_19b0 = &std::_Func_impl_no_alloc<class <lambda_71c560c79558e27c42258f52c8eb1965>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    __builtin_memcpy(&var_1930, &var_2690, 0xc84)
    int32_t (* var_19ac_1)[0x312] = &var_ca8
    int32_t* var_19a8_1 = &result_1
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_71c560c79558e27c42258f52c8eb1965>,bool,enum CardID>::VTable
        * const* var_198c_1 = &var_19b0
    int32_t* eax_19 = &var_1934
    int32_t var_14_1 = 0
    int32_t* var_30_2 = &var_1934
    int32_t var_34_2 = 0
    void var_5c
    var_1934 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_198c_1 != 0)
        eax_19 = (*var_198c_1)->vFunc_0(&var_5c)
        int32_t* var_38_2 = eax_19
    
    var_14_1.b = 0
    int32_t var_58
    int32_t* var_54
    int32_t eax_22 = GSI1::OffForSym(eax_19, var_1a10, &var_1930, var_5c, var_58, var_54)
    int32_t var_cb0_2 = eax_22
    
    if (var_198c_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_71c560c79558e27c42258f52c8eb1965>,bool,enum CardID>::VTable
            * const* eax_24
        eax_24.b = var_198c_1 != &var_19b0
        (*var_198c_1)->vFunc_4(eax_24)
    
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d31ce06fd585255c15361957601d1674>,bool,enum CardID>::VTable
        * const var_19d8 = &std::_Func_impl_no_alloc<class <lambda_d31ce06fd585255c15361957601d1674>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t eax_25 = 1
    
    if (result_1 != eax_22)
        eax_25 = 0
    
    var_1934 = eax_25
    int32_t* var_19d4_1 = &var_1958
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d31ce06fd585255c15361957601d1674>,bool,enum CardID>::VTable
        * const* var_19b4_1 = &var_19d8
    int32_t var_14_2 = 3
    int32_t* var_30_4 = &var_193c
    int32_t var_34_3 = 0
    int32_t* eax_26 = &var_1930
    var_193c = &var_5c
    int32_t var_38_3 = 0
    var_14_2.b = 5
    
    if (var_19b4_1 != 0)
        int32_t var_38_4 = (*var_19b4_1)->vFunc_0(&var_5c)
        eax_26 = &var_1930
    
    var_14_2.b = 3
    int32_t eax_30 = GSI1::OffForSym(eax_26, eax_22, &var_1930)
    int32_t var_14_3 = 0xffffffff
    int32_t var_cb0_3 = eax_30
    
    if (var_19b4_1 != 0)
        (*var_19b4_1)->vFunc_4(var_19b4_1 != &var_19d8)
    
    int32_t var_30_6 = 0
    char var_34_4 = 0
    int32_t var_38_5 = 0xc
    int32_t var_194c = *eax_3
    int32_t var_1948_1 = *(eax_3 + 0x10)
    int128_t var_1a08
    int128_t* var_3c_1 = &var_1a08
    int32_t var_40_1 = 7
    int32_t var_44_1 = var_1934
    int64_t var_1984
    __builtin_memset(&var_1984, 0, 0x2c)
    int32_t var_48_1 = 1
    var_1a08 = 0x3c.o
    int32_t var_1978
    int128_t var_19f8_1 = var_1978.o
    int64_t var_1968
    int128_t var_19e8_1 = var_1968.o
    result = sub_5869d0(&var_1930, &var_194c, *(eax_3 + 4), *(eax_3 + 0xc), 1, &var_1930, eax_30, 
        var_48_1, var_44_1, var_40_1, var_3c_1, var_38_5, var_34_4, var_30_6)
    
    if (result != 0)
        void* eax_36 = sub_573400()
        result = sub_583720(eax_36, *(eax_36 + 0xc), *(eax_36 + 4), var_1930, 0x476, nullptr, 
            0x476, 0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
