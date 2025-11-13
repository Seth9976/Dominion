// 函数: sub_541940
// 地址: 0x541940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76572b
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
uint32_t eax_3
int32_t ecx
eax_3, ecx = sub_56b800()
int32_t var_30 = ecx
sub_5624a0(eax_3, 0x3e9)
void* eax_4 = sub_573400()
void var_cb0
uint32_t eax_5 = sub_5777b0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), &var_cb0, 4)
uint32_t var_30_2 = eax_5
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<bool (__cdecl *)(enum CardID), bool, enum CardID>::VTable
    * const var_1998 = &std::_Func_impl_no_alloc<bool (__cdecl *)(enum CardID), bool, enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void* (* var_1994)(int32_t arg1 @ esi, int16_t arg2) = sub_56e610
int32_t* result_2
__builtin_memcpy(&result_2, &var_cb0, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<bool (__cdecl *)(enum CardID), bool, enum CardID>::VTable
    * const* var_1974 = &var_1998
int32_t var_14_1 = 0
void* var_193c
int32_t* var_30_3 = &var_193c
int32_t var_34_1 = 0
void var_5c
var_193c = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_1974 != 0)
    int32_t var_38_1 = (*var_1974)->vFunc_0(&var_5c)
    eax_5 = var_30_3

var_14_1.b = 0
int32_t eax_9
int32_t edx_2
eax_9, edx_2 = GSI1::OffForSym(eax_5, eax_5, &result_2)
int32_t var_14_2 = 0xffffffff

if (var_1974 != 0)
    edx_2 = (*var_1974)->vFunc_4(var_1974 != &var_1998)

void var_2650
__builtin_memcpy(&var_2650, sub_568780(&var_cb0, edx_2, 0x3e9, &var_cb0), 0xc84)
bool cond:0 = sub_56ca00(&var_2650, &var_cb0) s<= eax_9
int64_t var_196c
__builtin_memset(&var_196c, 0, 0x2c)
int128_t var_19c8 = 0xa2.o
int32_t var_30_6 = 0
int32_t var_1960
int128_t var_19b8 = var_1960.o
int64_t var_1950
int128_t var_19a8 = var_1950.o
int32_t* result
int32_t* result_1

if (cond:0)
    result = sub_563c40(&var_19c8, 0xc, var_30_6.b)
    result_1 = result
label_541b75:
    
    if (result_1 != 0)
        void* eax_16 = sub_573400()
        result = sub_583720(eax_16, *(eax_16 + 0xc), *(eax_16 + 4), result_1, 0x476, nullptr, 
            0x476, 0, 0, 4)
else
    result = sub_563960(&var_2650, 0, &result_2, &var_2650, 1, 7, &var_19c8, 0xc, 0, var_30_6)
    __builtin_memcpy(&result_2, result, 0xc84)
    
    if (eax_9 != 0)
        result_1 = result_2
        goto label_541b75
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
