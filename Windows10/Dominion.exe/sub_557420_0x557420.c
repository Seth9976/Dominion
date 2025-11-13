// 函数: sub_557420
// 地址: 0x557420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765a11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19d0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
void var_19f0
uint32_t eax_4 = sub_5685f0(&var_19f0, 0, 0x3e9, &var_19f0, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bc6275d112fdb7bdbd8e74251ed772fd>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_bc6275d112fdb7bdbd8e74251ed772fd>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bc6275d112fdb7bdbd8e74251ed772fd>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
void* var_cb4
int32_t* eax_5 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_cec != 0)
    eax_5 = (*var_cec)->vFunc_0(&var_5c)
    int32_t* var_38_2 = eax_5

var_14_1.b = 0
int32_t eax_8 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = eax_8

if (var_cec != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bc6275d112fdb7bdbd8e74251ed772fd>,bool,enum CardID>::VTable
        * const* eax_10
    eax_10.b = var_cec != &var_d10
    (*var_cec)->vFunc_4(eax_10)

if (*(*(sub_573400() + 4) + 0xd48) s>= 0x16)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_76b8b0a711052c6ac65c418033bad621>,bool,enum CardID>::VTable
        * const var_d38 = &std::_Func_impl_no_alloc<class <lambda_76b8b0a711052c6ac65c418033bad621>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_76b8b0a711052c6ac65c418033bad621>,bool,enum CardID>::VTable
        * const* var_d14_1 = &var_d38
    int32_t var_14_3 = 3
    void** var_30_4 = &var_cb4
    int32_t var_34_2 = 0
    void* eax_13 = &var_cb0
    var_cb4 = &var_5c
    int32_t var_38_3 = 0
    var_14_3.b = 5
    
    if (var_d14_1 != 0)
        int32_t var_38_4 = (*var_d14_1)->vFunc_0(&var_5c)
        eax_13 = &var_cb0
    
    var_14_3.b = 3
    int32_t var_14_4 = 0xffffffff
    int32_t var_30_5 = GSI1::OffForSym(eax_13, eax_8, &var_cb0)
    
    if (var_d14_1 != 0)
        (*var_d14_1)->vFunc_4(var_d14_1 != &var_d38)

int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
int128_t var_d68 = 0x97.o
int32_t var_cd8
int128_t var_d58 = var_cd8.o
int64_t var_cc8
int128_t var_d48 = var_cc8.o
int32_t* result
int32_t ecx_6
result, ecx_6 = sub_563c40(&var_d68, 0xb, 1)

if (result != 0)
    char var_30_8 = 0
    int32_t var_34_4 = ecx_6
    void* eax_20 = sub_56b800()
    result = sub_566a70(eax_20, eax_20, result, var_30_8)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
