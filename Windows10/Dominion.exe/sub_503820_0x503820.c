// 函数: sub_503820
// 地址: 0x503820
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
void* eax_3 = sub_573400()
uint32_t eax_4 = sub_56b780()
sub_594010(eax_4, *(eax_3 + 0xc), *(eax_3 + 4), eax_4, 2)
sub_561f60(0xfffffffe, 0)
void* eax_5 = sub_573400()

if (*(eax_5 + 0x40) == 0)
    sub_591930()

int16_t eax_6 = (*(eax_5 + 0x40)).w
void* eax_7 = sub_573400()
void var_19c8
uint32_t eax_8 = sub_5777b0(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), &var_19c8, 4)
void var_cb0
__builtin_memcpy(&var_cb0, &var_19c8, 0xc84)
void* eax_9 = sub_573400()
void* ecx_2 = *(eax_9 + 0xc)
void* esi_2 = *(eax_9 + 4)
uint32_t edi = zx.d(eax_6)
void* var_cb4 = ecx_2

if (edi u>= 0x320)
    sub_591930()
    ecx_2 = var_cb4

int32_t eax_11 = edi * 0x64
sub_576e90(eax_11, esi_2, &var_cb4, ecx_2, *(eax_11 + esi_2 + 0x1a4c), 0)
void* esi_3 = var_cb4
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7ce5ca5ab40da0ec2d4dc68dc714695d>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_7ce5ca5ab40da0ec2d4dc68dc714695d>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void* var_d0c = esi_3
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7ce5ca5ab40da0ec2d4dc68dc714695d>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
int32_t* var_30_3 = &var_cb4
int32_t var_34_3 = 0
void* eax_12 = &var_cb0
void var_5c
var_cb4 = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_cec != 0)
    int32_t var_38_2 = (*var_cec)->_Move(&var_5c)
    eax_12 = &var_cb0

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_4 = GSI1::OffForSym(eax_12, eax_8, &var_cb0)

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

int32_t var_cdc = 0
int64_t var_ce4 = 0
int64_t var_cd4
__builtin_memset(&var_cd4, 0, 0x1c)
int128_t var_d40 = 0xf4.o
int128_t var_d30 = esi_3.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
int32_t* result = sub_563c40(&var_d40, 0xc, 0)

if (result != 0)
    void* eax_19 = sub_573400()
    result =
        sub_583720(eax_19, *(eax_19 + 0xc), *(eax_19 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
