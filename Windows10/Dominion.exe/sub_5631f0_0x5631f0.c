// 函数: sub_5631f0
// 地址: 0x5631f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76646b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_cb8 = ecx
void var_19d0
int32_t eax_4 = sub_568780(&var_19d0, edx, 0x3ea, &var_19d0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d288b6754c3628b5a0cc56ab52da9fb7>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_d288b6754c3628b5a0cc56ab52da9fb7>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t* var_d14 = &var_cb8
void* result_4
__builtin_memcpy(&result_4, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d288b6754c3628b5a0cc56ab52da9fb7>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
void* result_3
int32_t* eax_5 = &result_3
int32_t var_14_1 = 0
int32_t* var_30_1 = &result_3
int32_t var_34 = 0
void var_5c
result_3 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    eax_5 = (*var_cf4)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_5

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_5, var_30_1, &result_4)

if (var_cf4 != 0)
    (*var_cf4)->vFunc_4(var_cf4 != &var_d18)

int64_t var_cec
__builtin_memset(&var_cec, 0, 0x2c)
void* result_1 = nullptr
char var_34_1 = 0
int32_t var_38_2 = 5
int128_t var_d48 = edx.o
int32_t var_ce0
int128_t var_d38 = var_ce0.o
int64_t var_cd0
int128_t var_d28 = var_cd0.o
__builtin_memcpy(&result_4, 
    sub_563960(&var_19d0, 0, &result_4, &var_19d0, 1, 0x17, &var_d48, var_38_2, var_34_1, 
        result_1), 
    0xc84)
void* result = result_1

if (result != 0)
    if (result != 1)
        sub_591930()
    
    void* result_2 = result_4
    result_3 = result_2
    
    if (result_2 != 0)
        void* eax_14 = sub_573400()
        void* var_30_4 = nullptr
        void* var_34_2 = nullptr
        *(eax_14 + 0xc)
        int32_t var_38_3 = 0
        int32_t var_3c_1 = 0
        void* var_50
        __builtin_memcpy(&var_50, 
            "\x01\x00\x00\x00\xea\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
        *(eax_14 + 4)
        int32_t var_4c
        int128_t* var_48_1
        int32_t var_44_1
        char var_40_1
        sub_582eb0(&result_3, var_50, var_4c, var_48_1, var_44_1, var_40_1, var_3c_1, var_38_3, 
            var_34_2, var_30_4)
    
    result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
