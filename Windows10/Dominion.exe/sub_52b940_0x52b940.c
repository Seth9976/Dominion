// 函数: sub_52b940
// 地址: 0x52b940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765cbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx = __chkstk(0x2638)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t esi = (**ecx).w
void* eax_5
int32_t edx
eax_5, edx = sub_573400()
uint32_t esi_1 = zx.d(esi)
int32_t edi = *(eax_5 + 4)

if (esi_1 u>= 0x320)
    edx = sub_591930()

int32_t var_cbc = *(esi_1 * 0x64 + edi + 0x1a4c)
void var_19d0
int32_t eax_9 = sub_568780(&var_19d0, edx, 0x3ea, &var_19d0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fc3c7f137819c732f382c65ffa5b9e64>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_fc3c7f137819c732f382c65ffa5b9e64>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t* var_d14 = &var_cbc
int32_t var_cb0
__builtin_memcpy(&var_cb0, eax_9, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fc3c7f137819c732f382c65ffa5b9e64>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
void* var_cb8
int32_t* eax_10 = &var_cb8
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_cb8
int32_t var_34 = 0
void var_5c
var_cb8 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    eax_10 = (*var_cf4)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_10

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_10, var_30_1, &var_cb0)

if (var_cf4 != 0)
    (*var_cf4)->vFunc_4(var_cf4 != &var_d18)

int32_t var_ce4 = 0
int64_t var_cec = 0
int64_t var_cdc
__builtin_memset(&var_cdc, 0, 0x1c)
int32_t var_30_4 = 0
int32_t eax_18 = **ecx
char var_34_1 = 0
int128_t var_d48 = 0x94.o
int128_t var_d38 = eax_18.o
int64_t var_cd0
int128_t var_d28 = var_cd0.o
void var_2658
__builtin_memcpy(&var_cb0, 
    sub_563960(&var_2658, 0, &var_cb0, &var_2658, 1, 0x20, &var_d48, 0x11, var_34_1, var_30_4), 
    0xc84)
int32_t ecx_5 = var_cb0

if (var_30_4 == 0)
    ecx_5 = 0

*ecx[1] = ecx_5
int32_t* result = ecx[1]
int32_t ecx_6 = *result

if (ecx_6 != 0)
    result = sub_5669b0(result, 0x3f0, ecx_6, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
