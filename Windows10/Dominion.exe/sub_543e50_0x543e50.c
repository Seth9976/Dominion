// 函数: sub_543e50
// 地址: 0x543e50
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
*(eax_3 + 4)
uint32_t eax_4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_05432a2c8c3fb2896d129de02d2c38d4>, void>::VTable
    * ecx_1
eax_4, ecx_1 = sub_589750(arg1, *(eax_3 + 0xc), 0x3e9, *(eax_3 + 0x28), *(eax_3 + 0x2c), 
    *(eax_3 + 0x30), 0, 1, nullptr, nullptr)
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_05432a2c8c3fb2896d129de02d2c38d4>, void>::VTable
    * const var_54 = ecx_1
var_54 = &std::_Func_impl_no_alloc<class <lambda_05432a2c8c3fb2896d129de02d2c38d4>, void>::`vftable'{for `std::_Func_base<void>'}
uint32_t var_50_1 = eax_4
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_05432a2c8c3fb2896d129de02d2c38d4>, void>::VTable
    * const* var_30_1 = &var_54
sub_5699b0(var_54)
uint32_t var_cb4 = eax_4
void* eax_5
int32_t ecx_2
int32_t edx_1
eax_5, ecx_2, edx_1 = sub_573400()
int32_t var_30_2 = 8
sub_589e00(eax_5, edx_1, *(eax_5 + 4), &var_cb4, ecx_2, 0x3e9)
void* eax_6 = sub_573400()
void var_19c8
uint32_t eax_7 = sub_5777b0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), &var_19c8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9c32fced5af2d37687ba73ff3e767de8>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_9c32fced5af2d37687ba73ff3e767de8>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19c8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_9c32fced5af2d37687ba73ff3e767de8>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
uint32_t* var_30_3 = &var_cb4
int32_t var_34_2 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_2 = 0
var_14_1.b = 2

if (var_cec != 0)
    int32_t var_38_3 = (*var_cec)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_4 = GSI1::OffForSym(eax_7, eax_7, &var_cb0)

if (var_cec != 0)
    (*var_cec)->vFunc_4(var_cec != &var_d10)

int64_t var_ce4
__builtin_memset(&var_ce4, 0, 0x2c)
int128_t var_d40 = 0xaa.o
int32_t var_cd8
int128_t var_d30 = var_cd8.o
int64_t var_cc8
int128_t var_d20 = var_cc8.o
int32_t* eax_14
int32_t ecx_8
eax_14, ecx_8 = sub_563c40(&var_d40, 0xc, 0)

if (eax_14 != 0)
    void* eax_15 = sub_573400()
    ecx_8 =
        sub_583720(eax_15, *(eax_15 + 0xc), *(eax_15 + 4), eax_14, 0x476, nullptr, 0x476, 0, 0, 4)

int32_t var_30_8 = 0xd2a
int32_t var_34_5 = ecx_8
uint32_t eax_16 = sub_56b800()
uint32_t result = sub_565e40(eax_16, 0x3e9, eax_16, var_30_8)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
