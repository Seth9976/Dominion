// 函数: sub_558b20
// 地址: 0x558b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7651fb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx = __chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = ecx
int32_t var_34 = 0
uint32_t result
int32_t edx
result, edx = sub_568960(&ExceptionList, 0, 0x3ea, 0)

if (result s>= 5)
    void var_19c8
    int32_t eax_5 = sub_568780(&var_19c8, edx, 0x3ea, &var_19c8)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_67a36f639ac5b3d559c623ebc3872e00>,bool,enum CardID>::VTable
        * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_67a36f639ac5b3d559c623ebc3872e00>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_cb0
    __builtin_memcpy(&var_cb0, eax_5, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_67a36f639ac5b3d559c623ebc3872e00>,bool,enum CardID>::VTable
        * const* var_cec_1 = &var_d10
    void* var_cb4
    int32_t* eax_6 = &var_cb4
    int32_t var_14_1 = 0
    int32_t* var_30_2 = &var_cb4
    int32_t var_34_1 = 0
    void var_5c
    var_cb4 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_cec_1 != 0)
        eax_6 = (*var_cec_1)->vFunc_0(&var_5c)
        int32_t* var_38_2 = eax_6
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_3 = GSI1::OffForSym(eax_6, var_30_2, &var_cb0)
    
    if (var_cec_1 != 0)
        (*var_cec_1)->vFunc_4(var_cec_1 != &var_d10)
    
    int64_t var_ce4
    __builtin_memset(&var_ce4, 0, 0x2c)
    int128_t var_d40 = 0xb9.o
    int32_t var_cd8
    int128_t var_d30_1 = var_cd8.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    void* eax_12 = sub_563c40(&var_d40, 5, 0)
    
    if (eax_12 == 0)
        result = sub_566800(eax_2)
    else
        var_cb4 = eax_12
        void* eax_13 = sub_573400()
        void* var_30_6 = nullptr
        void* var_34_3 = nullptr
        *(eax_13 + 0xc)
        int32_t var_38_4 = 0
        int32_t var_3c_1 = 0
        void* var_50
        __builtin_memcpy(&var_50, 
            "\x01\x00\x00\x00\xea\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
        *(eax_13 + 4)
        int32_t var_4c
        int128_t* var_48
        int32_t var_44
        char var_40
        result = sub_582eb0(&var_cb4, var_50, var_4c, var_48, var_44, var_40, var_3c_1, var_38_4, 
            var_34_3, var_30_6)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
