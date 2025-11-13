// 函数: sub_534d20
// 地址: 0x534d20
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
int32_t __saved_ebp
int32_t var_d4c = __security_cookie ^ &__saved_ebp
int32_t* esp_1 = &var_d4c
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_d40
int32_t* result = sub_562880(var_d4c, arg1, var_d40.d)

if (result != 0)
    void* eax_3 = sub_573400()
    uint32_t esi_2 = zx.d(result.w)
    void* ecx_1 = *(eax_3 + 0xc)
    void* edi = *(eax_3 + 4)
    void* var_cb4 = ecx_1
    
    if (esi_2 u>= 0x320)
        sub_591930()
        ecx_1 = var_cb4
    
    int32_t eax_4 = esi_2 * 0x64
    sub_576e90(eax_4, edi, &var_cb4, ecx_1, *(eax_4 + edi + 0x1a4c), 0)
    void* var_cb8 = var_cb4 + 2
    void* eax_7 = sub_573400()
    void var_cb0
    uint32_t eax_8 = sub_5777b0(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), &var_cb0, 4)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f41d91ae986f9846de163c9e1bacbe8d>,bool,enum CardID>::VTable
        * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_f41d91ae986f9846de163c9e1bacbe8d>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    uint32_t var_30_1 = eax_8
    int32_t* var_d0c_1 = &var_cb8
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f41d91ae986f9846de163c9e1bacbe8d>,bool,enum CardID>::VTable
        * const* var_cec_1 = &var_d10
    int32_t var_14_1 = 0
    int32_t* var_d50_3 = &var_cb4
    int32_t var_d54_3 = 0
    void var_d7c
    void* esp_2 = &var_d7c
    void* eax_9 = &var_cb0
    var_cb4 = &var_d7c
    int32_t var_d58_2 = 0
    var_14_1.b = 2
    
    if (var_cec_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f41d91ae986f9846de163c9e1bacbe8d>,bool,enum CardID>::VTable
            * const eax_10 = *var_cec_1
        void* var_d80 = &var_d7c
        esp_2 = &var_d80
        int32_t var_d58_3 = eax_10->vFunc_0(var_d80)
        eax_9 = &var_cb0
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    void* esp_3 = esp_2 + 0x30
    int32_t var_30_2 = GSI1::OffForSym(eax_9, eax_8, &var_cb0)
    
    if (var_cec_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f41d91ae986f9846de163c9e1bacbe8d>,bool,enum CardID>::VTable
            * const edx_4 = *var_cec_1
        *(esp_3 - 4) = var_cec_1 != &var_d10
        edx_4->vFunc_4()
    
    void* eax_16 = var_cb8
    int32_t var_cdc_1 = 0
    int64_t var_ce4_1 = 0
    int64_t var_cd4
    __builtin_memset(&var_cd4, 0, 0x1c)
    var_d40 = 0xa.o
    *(esp_3 - 4) = 0
    *(esp_3 - 8) = 0xc
    *(esp_3 - 0xc) = &var_d40
    int128_t var_d30_1 = eax_16.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    result = sub_563c40()
    esp_1 = esp_3
    
    if (result != 0)
        void* eax_17 = sub_573400()
        *(esp_1 - 4) = 4
        *(esp_1 - 8) = 0
        *(esp_1 - 0xc) = 0
        int32_t edx_6 = *(eax_17 + 0xc)
        int32_t ecx_7 = *(eax_17 + 4)
        *(esp_1 - 0x10) = 0x476
        *(esp_1 - 0x14) = 0
        *(esp_1 - 0x18) = 0x476
        *(esp_1 - 0x1c) = result
        result = sub_583720(eax_17, edx_6, ecx_7)

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
CookieCheckFunction(result)
return result
