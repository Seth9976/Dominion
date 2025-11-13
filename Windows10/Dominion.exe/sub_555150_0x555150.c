// 函数: sub_555150
// 地址: 0x555150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76646b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_cbc = *(sub_573400() + 0xc)
int32_t* var_cb8 = nullptr
void* eax_5 = sub_573400()
int32_t temp1 = mods.dp.d(sx.q(*(eax_5 + 0xc) + 1), *(*(eax_5 + 4) + 0xd38))
int32_t* var_50 = &var_cb8
int32_t* var_54 = &std::_Func_impl_no_alloc<class <lambda_7af27f3a589af73be7a7dfd7222593bc>, void>::`vftable'{for `std::_Func_base<void>'}
int32_t* var_4c = &var_cbc
int32_t** var_30 = &var_54
sub_5698b0(&var_54, temp1, temp1, var_54)
int32_t* esi = var_cb8
int32_t* var_cb4 = esi
void* eax_10 = sub_573400()
void* edi = eax_10

if (esi == 0 && *edi == 2)
    uint32_t esi_2 = zx.d((*(edi + 0x10)).w)
    int32_t eax_12 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    eax_10 = esi_2 * 0x64
    esi = *(eax_10 + eax_12 + 0x1a4c)

sub_5911e0(eax_10, *(edi + 0xc), *(edi + 4), 0x1e, var_cb4, 1, *(edi + 0x28), *(edi + 0x2c), 1, 
    0xffffffff, 0xf, esi)
void* eax_13 = sub_573400()
void var_19d0
uint32_t eax_14 = sub_5777b0(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), &var_19d0, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4fcc5e8dfbe0afdaf1ecd745680b449c>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_4fcc5e8dfbe0afdaf1ecd745680b449c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19d0, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4fcc5e8dfbe0afdaf1ecd745680b449c>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
int32_t var_14_1 = 0
int32_t** var_30_3 = &var_cb4
int32_t var_34_2 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    int32_t var_38_2 = (*var_cf4)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t* result = GSI1::OffForSym(eax_14, eax_14, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t* result_1 = result
int32_t* result_2 = result_1

if (var_cf4 != 0)
    result = (*var_cf4)->vFunc_4(var_cf4 != &var_d18)

if (result_1 != 0)
    int32_t var_ce4_1 = 0
    int64_t var_cec_1 = 0
    int64_t var_cdc
    __builtin_memset(&var_cdc, 0, 0x1c)
    int32_t var_ce0_1 = 5
    int128_t var_d48 = 9.o
    int128_t var_d38_1 = var_ce0_1.o
    int64_t var_cd0
    int128_t var_d28_1 = var_cd0.o
    result = sub_563c40(&var_d48, 0xc, 0)
    
    if (result != 0)
        void* eax_20 = sub_573400()
        result = sub_583720(eax_20, *(eax_20 + 0xc), *(eax_20 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
