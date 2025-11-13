// 函数: sub_56d960
// 地址: 0x56d960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765d0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
void* ecx = __chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_cb4 = ecx
int32_t var_30 = 0
int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
char var_34 = 0
int32_t var_38 = 0x17
int128_t var_d40
int128_t* var_3c = &var_d40
var_d40 = 0xd0.o
int32_t var_cd8
int128_t var_d30 = var_cd8.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
void var_19c8
int32_t* eax_4 = sub_563960(ecx, 0, ecx, &var_19c8, 1, 0x1b, var_3c, var_38, var_34, var_30)
int16_t var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)

if (var_30 != 0 && var_30 s<= 1)
    void* eax_5 = sub_573400()
    uint32_t edi_1 = zx.d(var_cb0)
    int32_t esi_1 = *(eax_5 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2f9aee706be1beb7f994cc598fe05904>,bool,enum CardID>::VTable
        * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_2f9aee706be1beb7f994cc598fe05904>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t var_d0c_1 = *(edi_1 * 0x64 + esi_1 + 0x1a4c)
    __builtin_memcpy(&var_cb0, var_cb4, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2f9aee706be1beb7f994cc598fe05904>,bool,enum CardID>::VTable
        * const* var_cec_1 = &var_d10
    void** eax_8 = &var_cb4
    int32_t var_14_1 = 0
    void** var_30_1 = &var_cb4
    int32_t var_34_1 = 0
    void var_5c
    var_cb4 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_cec_1 != 0)
        eax_8 = (*var_cec_1)->vFunc_0(&var_5c)
        void** var_38_2 = eax_8
    
    var_14_1.b = 0
    int32_t eax_11 = GSI1::OffForSym(eax_8, var_30_1, &var_cb0)
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_2 = eax_11
    
    if (var_cec_1 != 0)
        (*var_cec_1)->vFunc_4(var_cec_1 != &var_d10)
    
    int64_t var_ce4_1
    __builtin_memset(&var_ce4_1, 0, 0x2c)
    int32_t var_30_4 = 0
    char var_34_2 = 1
    int32_t var_38_3 = 0x17
    var_d40 = 0xd0.o
    int32_t var_cd8_1
    int128_t var_d30_1 = var_cd8_1.o
    int64_t var_cc8_1
    int128_t var_d20_1 = var_cc8_1.o
    void var_2650
    eax_4 = sub_563960(&var_2650, 0, &var_cb0, &var_2650, eax_11, 0x1b, &var_d40, var_38_3, 
        var_34_2, var_30_4)

__builtin_memcpy(arg2, eax_4, 0xc84)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg2)
return arg2
