// 函数: sub_54a9f0
// 地址: 0x54a9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7651fb
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
int16_t eax_3 = sub_56b800()
void* eax_4 = sub_573400()
uint32_t esi_1 = zx.d(eax_3)
void* ecx = *(eax_4 + 0xc)
void* edi = *(eax_4 + 4)
void* var_cb4 = ecx

if (esi_1 u>= 0x320)
    sub_591930()
    ecx = var_cb4

int32_t eax_5 = esi_1 * 0x64
sub_576e90(eax_5, edi, &var_cb4, ecx, *(eax_5 + edi + 0x1a4c), 0)
void* eax_6 = sub_573400()
void var_19c8
uint32_t eax_7 = sub_5777b0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), &var_19c8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_719f3eddf68325dc770e6c199e85cc3c>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_719f3eddf68325dc770e6c199e85cc3c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19c8, 0xc84)
void* esi_2 = var_cb4
void* var_d0c = esi_2
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_719f3eddf68325dc770e6c199e85cc3c>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
int32_t* var_30_2 = &var_cb4
int32_t var_34_2 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_cec != 0)
    int32_t var_38_2 = (*var_cec)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t result = GSI1::OffForSym(eax_7, eax_7, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t result_1 = result
int32_t result_2 = result_1

if (var_cec != 0)
    result = (*var_cec)->vFunc_4(var_cec != &var_d10)

if (result_1 != 0)
    int32_t var_cdc_1 = 0
    int64_t var_ce4_1 = 0
    int64_t var_cd4
    __builtin_memset(&var_cd4, 0, 0x1c)
    int128_t var_d40 = 0x111.o
    int128_t var_d30_1 = esi_2.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    int32_t* eax_13 = sub_563c40(&var_d40, 0xc, 0)
    void* eax_14 = sub_573400()
    uint32_t eax_15 = sub_56b780()
    result = sub_583720(eax_15, *(eax_14 + 0xc), *(eax_14 + 4), eax_13, 0x3ea, nullptr, 0x476, 
        eax_15, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
