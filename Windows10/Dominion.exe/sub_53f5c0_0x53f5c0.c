// 函数: sub_53f5c0
// 地址: 0x53f5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_766526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2720)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_da0 = 0
char var_d99 = 0
uint32_t result

while (true)
    void* eax_3 = sub_573400()
    uint32_t var_1ab8
    uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_1ab8, 4)
    int32_t var_ddc_1 = 0
    uint32_t var_d98
    __builtin_memcpy(&var_d98, &var_1ab8, 0xc84)
    void var_110
    int32_t var_98[0xe]
    __builtin_memcpy(&var_110, &var_98, 0x70)
    int32_t var_a0_1 = var_da0
    void var_e00
    void* var_da4_1 = &var_e00
    int32_t var_14_1 = 0
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fbc658b812884ab7d798d98c6b94c951>,bool,enum CardID>::VTable
        ** eax_6 = operator new(0x78)
    *eax_6 = &std::_Func_impl_no_alloc<class <lambda_fbc658b812884ab7d798d98c6b94c951>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    __builtin_memcpy(&eax_6[1], &var_110, 0x74)
    void var_da8
    void* eax_7 = &var_da8
    int32_t var_14_2 = 1
    void* var_30_2 = &var_da8
    int32_t var_34_2 = 0
    void var_5c
    void* var_da4_2 = &var_5c
    int32_t var_38_2 = 0
    var_14_2.b = 3
    
    if (eax_6 != 0)
        eax_7 = (*eax_6)->vFunc_0(&var_5c)
        void* var_38_3 = eax_7
    
    var_14_2.b = 1
    result = GSI1::OffForSym(eax_7, eax_4, &var_d98)
    int32_t var_14_3 = 0xffffffff
    uint32_t result_1 = result
    uint32_t result_2 = result_1
    
    if (eax_6 != 0)
        result = (*eax_6)->vFunc_4(eax_6 != &var_e00)
    
    if (result_1 == 0)
        break
    
    uint32_t esi_1
    
    if (var_d99 != 0)
        esi_1 = var_d98
    else
        int64_t var_dd4
        __builtin_memset(&var_dd4, 0, 0x2c)
        int32_t var_30_4 = 0
        char var_34_3 = 1
        int32_t var_38_4 = 0xc
        int128_t var_e30 = 0xd5.o
        int32_t var_dc8
        int128_t var_e20_1 = var_dc8.o
        int64_t var_db8
        int128_t var_e10_1 = var_db8.o
        void var_2740
        __builtin_memcpy(&var_1ab8, 
            sub_563960(&var_2740, 0, &var_d98, &var_2740, 1, 7, &var_e30, var_38_4, var_34_3, 
                var_30_4), 
            0xc84)
        
        if (eax_4 != 0)
            esi_1 = var_1ab8
        else
            var_d99 = 1
            esi_1 = var_d98
    
    void* eax_14 = sub_573400()
    sub_583720(eax_14, *(eax_14 + 0xc), *(eax_14 + 4), esi_1, 0x476, nullptr, 0x476, 0, 0, 4)
    var_98[var_da0] = sub_57dc30(*(sub_573400() + 4), esi_1.w)
    var_da0 += 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
