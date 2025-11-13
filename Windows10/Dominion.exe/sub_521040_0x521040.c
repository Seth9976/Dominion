// 函数: sub_521040
// 地址: 0x521040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76572b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result
int32_t edx
result, edx = sub_563590(0x100)

if (result != 0)
    void var_2650
    int32_t eax_4 = sub_568780(&var_2650, edx, 0x3ea, &var_2650)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7ed4c3f5b37f0b83533034c6f5b4bfb0>,bool,enum CardID>::VTable
        * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_7ed4c3f5b37f0b83533034c6f5b4bfb0>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_1938
    __builtin_memcpy(&var_1938, eax_4, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7ed4c3f5b37f0b83533034c6f5b4bfb0>,bool,enum CardID>::VTable
        * const* var_1974_1 = &var_1998
    void* var_193c
    int32_t* eax_5 = &var_193c
    int32_t var_14_1 = 0
    int32_t* var_30_2 = &var_193c
    int32_t var_34_1 = 0
    void var_5c
    var_193c = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_1974_1 != 0)
        eax_5 = (*var_1974_1)->vFunc_0(&var_5c)
        int32_t* var_38_2 = eax_5
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_cb8
    int32_t var_cb8_1 = GSI1::OffForSym(eax_5, var_cb8, &var_1938)
    
    if (var_1974_1 != 0)
        (*var_1974_1)->vFunc_4(var_1974_1 != &var_1998)
    
    int64_t var_196c
    __builtin_memset(&var_196c, 0, 0x2c)
    int32_t var_30_4 = 0
    char var_34_2 = 0
    int32_t var_38_3 = 0x11
    int128_t var_19c8 = 0x52.o
    int32_t var_1960
    int128_t var_19b8_1 = var_1960.o
    int64_t var_1950
    int128_t var_19a8_1 = var_1950.o
    int32_t var_cb0
    __builtin_memcpy(&var_cb0, 
        sub_563960(&var_2650, 0, &var_1938, &var_2650, 1, 0x20, &var_19c8, var_38_3, var_34_2, 
            var_30_4), 
        0xc84)
    int32_t esi_2
    
    if (var_30_4 != 0)
        esi_2 = var_cb0
    
    if (var_30_4 == 0 || esi_2 == 0)
        result = sub_563590(0x100)
        
        if (result != 0)
            void* eax_14 = sub_573400()
            result = sub_583720(eax_14, *(eax_14 + 0xc), *(eax_14 + 4), result, 0x476, nullptr, 
                0x476, 0, 0, 4)
    else
        sub_56e9c0(nullptr)
        uint32_t count = 0xc80
        void var_cac
        int32_t eax_13 = memset(&var_cac, 0, count)
        int32_t var_30_5 = count + 1
        var_cb0 = esi_2
        result = sub_566370(eax_13, 0x3ea, &var_cb0, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
