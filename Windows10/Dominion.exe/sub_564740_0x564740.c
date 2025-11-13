// 函数: sub_564740
// 地址: 0x564740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765f3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_d44 = esi
int32_t edi
int32_t var_d48 = edi
int32_t __saved_ebp
int32_t var_d4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_cb0
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_cb0, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_014fb869ac660a72b83266533ba1c2fa>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_014fb869ac660a72b83266533ba1c2fa>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
uint32_t var_30 = eax_4
int32_t arg_4
int32_t* var_d0c = &arg_4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_014fb869ac660a72b83266533ba1c2fa>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_d50_1 = &var_cb4
int32_t var_d54_1 = 0
void var_d7c
void* esp_1 = &var_d7c
void* eax_5 = &var_cb0
var_cb4 = &var_d7c
int32_t var_d58 = 0
var_14_1.b = 2

if (var_cec != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_014fb869ac660a72b83266533ba1c2fa>,bool,enum CardID>::VTable
        * const eax_6 = *var_cec
    void* var_d80 = &var_d7c
    esp_1 = &var_d80
    int32_t var_d58_1 = eax_6->vFunc_0(var_d80)
    eax_5 = &var_cb0

var_14_1.b = 0
int32_t eax_9 = GSI1::OffForSym(eax_5, eax_4, &var_cb0)
int32_t var_14_2 = 0xffffffff
void* esp_2 = esp_1 + 0x30
int32_t var_30_1 = eax_9

if (var_cec != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_014fb869ac660a72b83266533ba1c2fa>,bool,enum CardID>::VTable
        * const edx_2 = *var_cec
    *(esp_2 - 4) = var_cec != &var_d10
    edx_2->vFunc_4()

uint32_t result

if (eax_9 != 0)
    int32_t eax_12 = arg_4
    *(esp_2 - 4) = arg1
    int32_t var_cdc_1 = 0
    int64_t var_ce4_1 = 0
    int64_t var_cd4
    __builtin_memset(&var_cd4, 0, 0x1c)
    int128_t var_d40 = 0xa.o
    *(esp_2 - 8) = 0xc
    *(esp_2 - 0xc) = &var_d40
    int128_t var_d30_1 = eax_12.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    uint32_t result_1 = sub_563c40()
    void* eax_13 = sub_573400()
    *(esp_2 - 4) = 4
    *(esp_2 - 8) = 0
    *(esp_2 - 0xc) = 0
    int32_t edx_4 = *(eax_13 + 0xc)
    int32_t ecx_4 = *(eax_13 + 4)
    *(esp_2 - 0x10) = 0x476
    *(esp_2 - 0x14) = 0
    *(esp_2 - 0x18) = 0x476
    *(esp_2 - 0x1c) = result_1
    sub_583720(eax_13, edx_4, ecx_4)
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
*(esp_2 + 4)
*(esp_2 + 8)
CookieCheckFunction(result)
return result
