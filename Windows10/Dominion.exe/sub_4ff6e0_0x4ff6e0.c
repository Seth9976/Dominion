// 函数: sub_4ff6e0
// 地址: 0x4ff6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76506b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19c0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_561af0(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
void* eax_5
int32_t edx_1
eax_5, edx_1 = sub_5887c0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0)
int64_t var_cbc

if (eax_5 != 0)
    void* var_cb8_1 = eax_5
    void* eax_6 = sub_573400()
    void* var_30_2 = nullptr
    void* var_34_1 = nullptr
    *(eax_6 + 0xc)
    int32_t var_38_1 = 0
    int32_t var_3c_1 = 0
    void* var_50
    __builtin_memcpy(&var_50, 
        "\x01\x00\x00\x00\xeb\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
    *(eax_6 + 4)
    int32_t var_4c
    int128_t* var_48
    int32_t var_44
    char var_40
    edx_1 = sub_582eb0(&var_cbc:4, var_50, var_4c, var_48, var_44, var_40, var_3c_1, var_38_1, 
        var_34_1, var_30_2)

void var_19e0
int32_t eax_8 = sub_568780(&var_19e0, edx_1, 0x3ec, &var_19e0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4b51e44edbc1a1177796d259cf7b6d11>,bool,enum CardID>::VTable
    * const var_d28 = &std::_Func_impl_no_alloc<class <lambda_4b51e44edbc1a1177796d259cf7b6d11>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0
__builtin_memcpy(&var_cb0, eax_8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4b51e44edbc1a1177796d259cf7b6d11>,bool,enum CardID>::VTable
    * const* var_d04 = &var_d28
void* var_cb4
int32_t* eax_9 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_4 = &var_cb4
int32_t var_34_2 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_2 = 0
var_14_1.b = 2

if (var_d04 != 0)
    eax_9 = (*var_d04)->vFunc_0(&var_5c)
    int32_t* var_38_3 = eax_9

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_5 = GSI1::OffForSym(eax_9, var_30_4, &var_cb0)

if (var_d04 != 0)
    (*var_d04)->vFunc_4(var_d04 != &var_d28)

int64_t var_cfc
__builtin_memset(&var_cfc, 0, 0x2c)
int32_t var_30_7 = 0
char var_34_3 = 0
int32_t var_38_4 = 0xb
int128_t var_d58 = 0xd6.o
int32_t var_cf0
int128_t var_d48 = var_cf0.o
int64_t var_ce0
int128_t var_d38 = var_ce0.o
void* result =
    sub_563960(&var_19e0, 0, &var_cb0, &var_19e0, 1, 1, &var_d58, var_38_4, var_34_3, var_30_7)
__builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_7 != 0)
    int32_t esi_2 = var_cb0
    
    if (esi_2 != 0)
        void* eax_16 = sub_573400()
        uint32_t edi_1 = zx.d(esi_2.w)
        int32_t* ecx_6 = *(eax_16 + 4)
        var_cb4 = *(eax_16 + 0xc)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        void* edx_5 = var_cb4
        char var_30_8 = 0
        var_cbc = 0
        int64_t var_ccc = 0
        int32_t var_cc0_1 = ecx_6[edi_1 * 0x19 + 0x695]
        int32_t* var_34_4 = &var_cbc
        int32_t var_cc4 = esi_2
        result = sub_586320(&var_cc4, edx_5, ecx_6, &var_cc4, &var_ccc, var_34_4, var_30_8)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
