// 函数: sub_564550
// 地址: 0x564550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_766f5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
uint32_t result_2
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &result_2, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_94578a414a021978d5385e3ce41c8d31>,bool,enum CardID>::VTable
    * const var_ce0 = &std::_Func_impl_no_alloc<class <lambda_94578a414a021978d5385e3ce41c8d31>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
uint32_t var_30_1 = eax_4
int32_t arg_4
int32_t* var_cdc = &arg_4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_94578a414a021978d5385e3ce41c8d31>,bool,enum CardID>::VTable
    * const* var_cbc = &var_ce0
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_30_2 = &var_cb4
int32_t var_34_1 = 0
int32_t* eax_5 = &result_2
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cbc != 0)
    int32_t var_38_1 = (*var_cbc)->vFunc_0(&var_5c)
    eax_5 = &result_2

var_14_1.b = 0
int32_t eax_9 = GSI1::OffForSym(eax_5, eax_4, &result_2)
int32_t var_14_2 = 0xffffffff
int32_t var_30_3 = eax_9

if (var_cbc != 0)
    (*var_cbc)->vFunc_4(var_cbc != &var_ce0)

int32_t var_30_6

if (eax_9 != 0)
    int32_t esi_1 = arg_4
    uint32_t eax_12 = sub_56b800()
    void* eax_13
    int32_t ecx_4
    eax_13, ecx_4 = sub_573400()
    int32_t var_30_5 = esi_1
    int32_t var_34_2 = *(eax_13 + 0x2c)
    void var_d40
    int32_t* eax_14 = sub_591880(&var_d40, 0xb5, ecx_4, eax_12, *(eax_13 + 0x28))
    var_30_6 = 0
    char var_34_3 = 0
    int128_t var_d10 = *eax_14
    int128_t var_d00_1 = *(eax_14 + 0x10)
    int128_t var_cf0_1 = *(eax_14 + 0x20)
    void var_19c8
    __builtin_memcpy(&result_2, 
        sub_563960(&var_19c8, 0, &result_2, &var_19c8, 1, 7, &var_d10, 0xc, var_34_3, var_30_6), 
        0xc84)

uint32_t result

if (eax_9 == 0 || var_30_6 == 0)
    result = 0
else
    void* eax_17 = sub_573400()
    uint32_t result_1 = result_2
    sub_583720(eax_17, *(eax_17 + 0xc), *(eax_17 + 4), result_1, 0x3eb, nullptr, 0x476, 0, 0, 4)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
