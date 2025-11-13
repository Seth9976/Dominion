// 函数: sub_564f00
// 地址: 0x564f00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76646b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx
char edx
ecx, edx = __chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19d0
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19d0, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2e415c4bd163efc1f0f4ed696abf70e3>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_2e415c4bd163efc1f0f4ed696abf70e3>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19d0, 0xc84)
int32_t arg_4
int32_t* var_d14 = &arg_4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2e415c4bd163efc1f0f4ed696abf70e3>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    int32_t var_38_1 = (*var_cf4)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t eax_8 = GSI1::OffForSym(eax_4, eax_4, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = eax_8

if (var_cf4 != 0)
    (*var_cf4)->vFunc_4(var_cf4 != &var_d18)

int32_t* result_1

if (eax_8 != 0)
    int32_t eax_11 = arg_4
    int32_t var_ce4_1 = 0
    int64_t var_cec_1 = 0
    int64_t var_cdc
    __builtin_memset(&var_cdc, 0, 0x1c)
    int128_t var_d48 = 0xd.o
    int128_t var_d38_1 = eax_11.o
    int64_t var_cd0
    int128_t var_d28_1 = var_cd0.o
    result_1 = sub_563c40(&var_d48, 0xc, edx)

int32_t* result

if (eax_8 == 0 || result_1 == 0)
    result = nullptr
else
    void* eax_13 = sub_573400()
    
    if (sub_583720(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), result_1, ecx, nullptr, 0x476, 0, 0, 4)
            == 0)
        result_1 = nullptr
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
