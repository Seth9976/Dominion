// 函数: sub_503480
// 地址: 0x503480
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
uint32_t eax_3 = sub_56b800()
uint32_t var_cb4 = eax_3

if (eax_3 != 0)
    void* eax_4 = sub_573400()
    void* var_30_1 = nullptr
    void* var_34_1 = nullptr
    *(eax_4 + 0xc)
    int32_t var_38_1 = 0
    int32_t var_3c_1 = 0
    void* var_50
    __builtin_memcpy(&var_50, 
        "\x01\x00\x00\x00\x02\x00\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
    *(eax_4 + 4)
    int32_t var_4c
    int128_t* var_48
    int32_t var_44
    char var_40
    sub_582eb0(&var_cb4, var_50, var_4c, var_48, var_44, var_40, var_3c_1, var_38_1, var_34_1, 
        var_30_1)

int16_t eax_5 = sub_56b800()
void* eax_6 = sub_573400()
uint32_t esi_1 = zx.d(eax_5)
uint32_t ecx_2 = *(eax_6 + 0xc)
void* edi = *(eax_6 + 4)
var_cb4 = ecx_2

if (esi_1 u>= 0x320)
    sub_591930()
    ecx_2 = var_cb4

int32_t eax_7 = esi_1 * 0x64
void var_19c8
int32_t var_cb8
int32_t eax_9 = sub_568780(&var_19c8, 
    sub_576e90(eax_7, edi, &var_cb8, ecx_2, *(eax_7 + edi + 0x1a4c), 0), 2, &var_19c8)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_93adaf0b3e2128e04b510db889c443f9>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_93adaf0b3e2128e04b510db889c443f9>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t* var_d0c = &var_cb8
void var_cb0
__builtin_memcpy(&var_cb0, eax_9, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_93adaf0b3e2128e04b510db889c443f9>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
uint32_t* eax_10 = &var_cb4
int32_t var_14_1 = 0
uint32_t* var_30_4 = &var_cb4
int32_t var_34_3 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_3 = 0
var_14_1.b = 2

if (var_cec != 0)
    eax_10 = (*var_cec)->_Move(void *)(&var_5c)
    uint32_t* var_38_4 = eax_10

var_14_1.b = 0
int32_t* result = GSI1::OffForSym(eax_10, var_30_4, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t* result_1 = result
int32_t* result_2 = result_1

if (var_cec != 0)
    result = (*var_cec)->vFunc_4(var_cec != &var_d10)

if (result_1 != 0)
    int32_t eax_15 = var_cb8
    int32_t var_cdc_1 = 0
    int64_t var_ce4_1 = 0
    int64_t var_cd4
    __builtin_memset(&var_cd4, 0, 0x1c)
    int128_t var_d40 = 0xec.o
    int128_t var_d30_1 = eax_15.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    result = sub_563c40(&var_d40, 0xc, 0)
    
    if (result != 0)
        void* eax_16 = sub_573400()
        result = sub_583720(eax_16, *(eax_16 + 0xc), *(eax_16 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
