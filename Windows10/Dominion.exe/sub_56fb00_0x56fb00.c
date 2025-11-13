// 函数: sub_56fb00
// 地址: 0x56fb00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76744b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int16_t ecx = __chkstk(0x19b8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
uint32_t esi_1 = zx.d(ecx)
int32_t eax_5 = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

void* ecx_1 = esi_1 * 0x64
int32_t var_30 = 0xffffffff
int32_t var_34 = 0xffffffff
char var_38 = 0
void* var_cb4 = ecx_1
uint32_t eax_6
int32_t edx_1
eax_6, edx_1 = sub_573890(eax_5, *(ecx_1 + eax_5 + 0x1a4c), *(eax_3 + 4), var_38, var_34, var_30)
uint32_t var_cc8 = eax_6
void* eax_7 = sub_573400()
int32_t ecx_3 = *(eax_7 + 0xc)
void* edi_1 = *(eax_7 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

void* eax_8 = var_cb4
int32_t var_cbc
sub_576e90(eax_8, edi_1, &var_cbc, ecx_3, *(eax_8 + edi_1 + 0x1a4c), 0)
void* eax_9 = sub_573400()
void var_19d8
uint32_t eax_10 = sub_5777b0(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), &var_19d8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4eece438e92ac9e8b17aff836b808f4f>,bool,enum CardID>::VTable
    * const var_d20 = &std::_Func_impl_no_alloc<class <lambda_4eece438e92ac9e8b17aff836b808f4f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19d8, 0xc84)
int32_t* var_d1c = &var_cbc
uint32_t* var_d18 = &var_cc8
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4eece438e92ac9e8b17aff836b808f4f>,bool,enum CardID>::VTable
    * const* var_cfc = &var_d20
int32_t var_14_1 = 0
int32_t* var_30_3 = &var_cb4
int32_t var_34_3 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_2 = 0
var_14_1.b = 2

if (var_cfc != 0)
    int32_t var_38_3 = (*var_cfc)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t eax_14 = GSI1::OffForSym(eax_10, eax_10, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t var_30_4 = eax_14

if (var_cfc != 0)
    (*var_cfc)->vFunc_4(var_cfc != &var_d20)

int32_t* result_2

if (eax_14 != 0)
    int32_t eax_17 = var_cbc
    int64_t var_cf4_1 = 0
    int64_t var_cd0_1 = 0
    int64_t var_cd8_1 = 0
    int32_t var_cec_1 = 0
    uint32_t var_ce0_1 = var_cc8
    int32_t var_cdc_1 = edx_1
    int128_t var_d50 = 0xd8.o
    int32_t var_ce4_1 = 0
    int128_t var_d40_1 = eax_17.o
    int128_t var_d30_1 = var_cd8_1.o
    result_2 = sub_563c40(&var_d50, 0xc, 0)

int32_t* result

if (eax_14 == 0 || result_2 == 0)
    result = nullptr
else
    void* eax_19 = sub_573400()
    int32_t* result_1 = nullptr
    
    if (sub_583720(eax_19, *(eax_19 + 0xc), *(eax_19 + 4), result_2, 0x476, nullptr, 0x476, 0, 0, 4)
            != 0)
        result_1 = result_2
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
