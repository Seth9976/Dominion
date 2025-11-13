// 函数: sub_5372e0
// 地址: 0x5372e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7660ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx = __chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t esi = (**ecx).w
void* eax_4 = sub_573400()
uint32_t esi_1 = zx.d(esi)
int32_t var_cb4 = *(eax_4 + 0xc)
int32_t ecx_2 = *(eax_4 + 4)
int32_t var_cb8 = ecx_2

if (esi_1 u>= 0x320)
    sub_591930()
    ecx_2 = var_cb8

int32_t eax_5 = esi_1 * 0x64
sub_576e90(eax_5, ecx_2, &var_cb4, var_cb4, *(eax_5 + ecx_2 + 0x1a4c), 0)
var_cb8 = var_cb4
int32_t esi_2 = *ecx[1]
var_cb4 = esi_2
void* eax_8 = sub_573400()
int32_t edx_1

if (esi_2 != 0xffffffff)
    edx_1 = esi_2
else
    edx_1 = *(eax_8 + 0xc)

void var_19d0
uint32_t eax_9 = sub_5777b0(eax_8, edx_1, *(eax_8 + 4), &var_19d0, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_16236f3a8d03b7981ce1a444c7306fef>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_16236f3a8d03b7981ce1a444c7306fef>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19d0, 0xc84)
int32_t* var_d14 = &var_cb8
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_16236f3a8d03b7981ce1a444c7306fef>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
int32_t var_14_1 = 0
void* var_cbc
int32_t* var_30_2 = &var_cbc
int32_t var_34_2 = 0
void var_5c
var_cbc = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    int32_t var_38_2 = (*var_cf4)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t result = GSI1::OffForSym(eax_9, eax_9, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t result_1 = result
int32_t result_2 = result_1

if (var_cf4 != 0)
    result = (*var_cf4)->vFunc_4(var_cf4 != &var_d18)

if (result_1 != 0)
    int32_t eax_15 = var_cb8
    int64_t var_cec_1 = 0
    int64_t var_cc8_1 = 0
    int64_t var_cd0_1 = 0
    int32_t eax_17
    int32_t edx_4
    edx_4:eax_17 = sx.q(var_cb4)
    int32_t var_ce4_1 = 0
    int32_t var_cd8_1 = eax_17
    int32_t var_cd4_1 = edx_4
    int128_t var_d48 = 0x31.o
    int32_t var_cdc_1 = 0
    int128_t var_d38_1 = eax_15.o
    int128_t var_d28_1 = var_cd0_1.o
    int32_t* eax_18 = sub_563c40(&var_d48, 0xd, 0)
    void* eax_19 = sub_573400()
    result = sub_583720(eax_19, var_cb4, *(eax_19 + 4), eax_18, 0x476, nullptr, 0x476, 0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
