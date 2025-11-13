// 函数: sub_52fb30
// 地址: 0x52fb30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765d0b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()

if (*(eax_3 + 0x40) == 0)
    sub_591930()

int32_t var_cb8 = *(eax_3 + 0x40)
void* eax_5 = sub_573400()
void var_19c8
uint32_t eax_6 = sub_5777b0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), &var_19c8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_855aba401808d1fc3830d0c3dd5cd769>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_855aba401808d1fc3830d0c3dd5cd769>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
uint32_t var_cb0
__builtin_memcpy(&var_cb0, &var_19c8, 0xc84)
int32_t* var_d0c = &var_cb8
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_855aba401808d1fc3830d0c3dd5cd769>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cec != 0)
    int32_t var_38_1 = (*var_cec)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_6, eax_6, &var_cb0)

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

int16_t esi_1 = var_cb8.w
void* eax_13 = sub_573400()
uint32_t esi_2 = zx.d(esi_1)
void* ecx_4 = *(eax_13 + 0xc)
void* edi = *(eax_13 + 4)
var_cb4 = ecx_4

if (esi_2 u>= 0x320)
    sub_591930()
    ecx_4 = var_cb4

int32_t eax_14 = esi_2 * 0x64
sub_576e90(eax_14, edi, &var_cb4, ecx_4, *(eax_14 + edi + 0x1a4c), 0)
void* eax_15 = var_cb4
int32_t var_cdc = 0
int32_t var_ce8 = 0x98
int64_t var_ce4 = 0
int64_t var_cd4
__builtin_memset(&var_cd4, 0, 0x1c)
int32_t var_30_5 = 0
char var_34_3 = 0
int128_t var_d40 = var_ce8.o
int128_t var_d30 = eax_15.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
void var_2650
int32_t* result =
    sub_563960(&var_2650, 0, &var_cb0, &var_2650, 1, 7, &var_d40, 0xc, var_34_3, var_30_5)
__builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_5 != 0)
    uint32_t esi_4 = var_cb0
    
    if (esi_4 != 0)
        void* eax_17 = sub_573400()
        result = sub_583720(eax_17, *(eax_17 + 0xc), *(eax_17 + 4), esi_4, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
