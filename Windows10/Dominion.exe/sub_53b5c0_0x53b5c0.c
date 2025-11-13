// 函数: sub_53b5c0
// 地址: 0x53b5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76623b
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
void var_2650
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_2650, 0x10)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_464d9d4cb9ce77056032217bf98d8ea8>,bool,enum CardID>::VTable
    * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_464d9d4cb9ce77056032217bf98d8ea8>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_2650, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_464d9d4cb9ce77056032217bf98d8ea8>,bool,enum CardID>::VTable
    * const* var_1974 = &var_1998
int32_t var_14_1 = 0
void* var_1940
int32_t* var_30_1 = &var_1940
int32_t var_34_1 = 0
void var_5c
var_1940 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_1974 != 0)
    int32_t var_38_1 = (*var_1974)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_4, eax_4, &var_cb0)

if (var_1974 != 0)
    (*var_1974)->vFunc_4(var_1974 != &var_1998)

int64_t var_196c
__builtin_memset(&var_196c, 0, 0x2c)
int128_t var_19c8 = 0xc3.o
int32_t var_1960
int128_t var_19b8 = var_1960.o
int64_t var_1950
int128_t var_19a8 = var_1950.o
int32_t* eax_11 = sub_563c40(&var_19c8, 0x17, 0)
uint32_t esi = zx.d(eax_11.w)
var_1940 = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t esi_2 = *(esi * 0x64 + var_1940 + 0x1a50)
void* eax_15 = sub_573400()
char var_1939
int32_t result = sub_565ff0(eax_15, esi_2, eax_11, *(eax_15 + 0xc), 0x462, nullptr, &var_1939, 0xc, 
    nullptr, nullptr)

if (var_1939 != 0)
    int32_t var_cb8_1 = 0
    int32_t* var_1938
    
    if (eax_11 != 0)
        var_1938 = eax_11
        int32_t var_cb8_2 = 1
    
    result = sub_56f1a0(result, &var_1938, 0x13, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
