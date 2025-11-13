// 函数: sub_54d5d0
// 地址: 0x54d5d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76646b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx
int32_t edx
ecx, edx = __chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = sub_577bb0(*(sub_573400() + 4) + 0xd4c, ecx)
int32_t eax_5 = 0
void* var_cb4 = eax_4
int32_t var_cb8 = 0

while (*(eax_4 + (eax_5 << 2)) != 0)
    if (*(eax_4 + (eax_5 << 2) + 4) == 0)
        var_cb8 = eax_5 + 1
        break
    
    eax_5 += 2
    var_cb8 = eax_5
    
    if (eax_5 s>= 0xe)
        break

void* eax_7 = sub_573400()
void var_19d0
uint32_t eax_8 = sub_5777b0(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), &var_19d0, 4)
void* var_d14 = var_cb4
int32_t var_d10 = var_cb8
void var_cb0
__builtin_memcpy(&var_cb0, &var_19d0, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8055c69b52bd819ff5cd360040ba4567>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_8055c69b52bd819ff5cd360040ba4567>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8055c69b52bd819ff5cd360040ba4567>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
void** eax_11 = &var_cb4
int32_t var_14_1 = 0
void** var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    eax_11 = (*var_cf4)->vFunc_0(&var_5c)
    void** var_38_1 = eax_11

var_14_1.b = 0
int32_t* result = GSI1::OffForSym(eax_11, eax_8, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t* result_1 = result
int32_t* result_2 = result_1

if (var_cf4 != 0)
    result = (*var_cf4)->vFunc_4(var_cf4 != &var_d18)

if (result_1 != 0)
    int64_t var_cec
    __builtin_memset(&var_cec, 0, 0x2c)
    int128_t var_d48 = edx.o
    int32_t var_ce0
    int128_t var_d38_1 = var_ce0.o
    int64_t var_cd0
    int128_t var_d28_1 = var_cd0.o
    result = sub_563c40(&var_d48, 0xc, 0)
    
    if (result != 0)
        void* eax_17 = sub_573400()
        result = sub_583720(eax_17, *(eax_17 + 0xc), *(eax_17 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
