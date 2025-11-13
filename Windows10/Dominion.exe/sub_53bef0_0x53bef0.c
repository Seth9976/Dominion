// 函数: sub_53bef0
// 地址: 0x53bef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7662db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x32b8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_32d8
uint32_t eax_4 = sub_566240(&var_32d8, edx, 2, &var_32d8, &data_7bf9f8)
int32_t var_cb0[0x314]
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
void var_1938
__builtin_memcpy(&var_1938, eax_4, 0xc84)
int32_t eax_7 = *(*(sub_573400() + 4) + 0x1504)
uint32_t var_58
int32_t* var_54

if (eax_7 != 3 && eax_7 != 5 && eax_7 != 4 && eax_7 != 6)
    void* var_4c
    __builtin_memset(&var_4c, 0, 0x20)
    var_54 = nullptr
    var_58 = 0xffffffff
    void* var_48
    int128_t* var_44
    int32_t var_40
    int32_t var_3c
    int32_t var_38
    int32_t var_34_1
    int32_t var_30_1
    sub_61b1b0(eax_7, 7, eax_7 == 2, var_58, var_54, 1, var_4c, var_48, var_44, var_40, var_3c, 
        var_38, var_34_1, var_30_1)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_901cc5873840757f7428aa5c1c32346c>,bool,enum CardID>::VTable
    * const var_2620 = &std::_Func_impl_no_alloc<class <lambda_901cc5873840757f7428aa5c1c32346c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_901cc5873840757f7428aa5c1c32346c>,bool,enum CardID>::VTable
    * const* var_25fc = &var_2620
void* var_25c8
int32_t* eax_8 = &var_25c8
int32_t var_14_1 = 0
int32_t* var_30_2 = &var_25c8
int32_t var_34_2 = 0
void var_5c
var_25c8 = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_25fc != 0)
    eax_8 = (*var_25fc)->vFunc_0(&var_5c)
    int32_t* var_38_2 = eax_8

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_cb8
int32_t var_cb8_1 = GSI1::OffForSym(eax_8, var_cb8, &var_1938, var_5c, var_58, var_54)

if (var_25fc != 0)
    (*var_25fc)->vFunc_4(var_25fc != &var_2620)

int64_t var_25f4
__builtin_memset(&var_25f4, 0, 0x2c)
int128_t var_2650 = 0xbf.o
int32_t var_25e8
int128_t var_2640 = var_25e8.o
int64_t var_25d8
int128_t var_2630 = var_25d8.o
int32_t* eax_14 = sub_563c40(&var_2650, 0x17, 0)

if (eax_14 == 0)
    sub_56e9c0(nullptr)
else
    sub_56e9c0(1)
    void* eax_15 = sub_573400()
    void* var_30_5 = nullptr
    char var_25c1
    void* eax_16 = sub_565ff0(eax_15, 0x3ee, eax_14, *(eax_15 + 0xc), 0x462, nullptr, &var_25c1, 
        0xc, nullptr, var_30_5)
    
    if (var_25c1 != 0)
        var_30_5 = nullptr
        int32_t* var_25c0 = eax_14
        int32_t var_1940_1 = 1
        sub_56f1a0(eax_16, &var_25c0, 0x13, var_30_5)
    
    int32_t eax_17 = 0
    
    if (var_30_5 s> 0)
        do
            if (var_cb0[eax_17] == eax_14)
                void* var_30_6 = var_30_5 - 1
                var_cb0[eax_17] = var_cb0[var_30_5 - 1]
                break
            
            eax_17 += 1
        while (eax_17 s< var_30_5)

void* eax_19 = sub_573400()
*(eax_19 + 0xc)
*(eax_19 + 4)
uint32_t result = sub_582eb0(&var_cb0, nullptr, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
