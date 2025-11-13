// 函数: sub_55d5f0
// 地址: 0x55d5f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_766ddb
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
void* eax_3 = sub_573400()
int32_t* i = *(eax_3 + 4)

if (i[*(eax_3 + 0xc) * 0x168c + 0x5d41] s>= 3)
    int32_t var_1934 = 0
    int32_t* i_1 = 3
    
    do
        void* eax_4 = sub_573400()
        uint32_t var_2650
        uint32_t eax_5 = sub_5777b0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), &var_2650, 4)
        uint32_t var_19d0_1 = eax_5
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_157febcd7436d721145b671ae2f02986>,bool,enum CardID>::VTable
            * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_157febcd7436d721145b671ae2f02986>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
        void var_1930
        __builtin_memcpy(&var_1930, &var_2650, 0xc84)
        int32_t var_ca8[0x312]
        int32_t (* var_1994_1)[0x312] = &var_ca8
        int32_t* var_1990_1 = &var_1934
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_157febcd7436d721145b671ae2f02986>,bool,enum CardID>::VTable
            * const* var_1974_1 = &var_1998
        int32_t var_14_1 = 0
        void var_1940
        void* var_30_2 = &var_1940
        int32_t var_34_2 = 0
        void var_5c
        void* var_193c_1 = &var_5c
        int32_t var_38_1 = 0
        var_14_1.b = 2
        
        if (var_1974_1 != 0)
            int32_t var_38_2 = (*var_1974_1)->vFunc_0(&var_5c)
            eax_5 = var_19d0_1
        
        var_14_1.b = 0
        int32_t var_14_2 = 0xffffffff
        int32_t var_cb0_1 = GSI1::OffForSym(eax_5, eax_5, &var_1930)
        
        if (var_1974_1 != 0)
            (*var_1974_1)->vFunc_4(var_1974_1 != &var_1998)
        
        int32_t var_1964_1 = 0
        int64_t var_196c_1 = 0
        int64_t var_195c
        __builtin_memset(&var_195c, 0, 0x1c)
        int32_t var_30_4 = 0
        char var_34_3 = 0
        int128_t var_19c8 = 0x132.o
        int128_t var_19b8_1 = i_1.o
        int64_t var_1950
        int128_t var_19a8_1 = var_1950.o
        void var_32d8
        i = sub_563960(&var_32d8, 0, &var_1930, &var_32d8, 1, 7, &var_19c8, 0xc, var_34_3, var_30_4)
        __builtin_memcpy(&var_2650, i, 0xc84)
        
        if (var_19d0_1 == 0)
            break
        
        uint32_t esi_1 = var_2650
        
        if (esi_1 == 0)
            break
        
        void* eax_14 = sub_573400()
        sub_583720(eax_14, *(eax_14 + 0xc), *(eax_14 + 4), esi_1, 0x476, nullptr, 0x476, 0, 0, 4)
        uint32_t esi_2 = zx.d(esi_1.w)
        int32_t edi_1 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t ecx_7 = var_1934
        var_ca8[ecx_7] = *(esi_2 * 0x64 + edi_1 + 0x1a4c)
        i = i_1 - 1
        var_1934 = ecx_7 + 1
        i_1 = i
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(i)
return i
