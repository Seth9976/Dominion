// 函数: sub_55ac40
// 地址: 0x55ac40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_766d3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19c8
int32_t eax_4 = sub_568780(&var_19c8, edx, 0x44d, &var_19c8)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0505eef462bf740f9d3b12c81c141c0b>,bool,enum CardID>::VTable
    * const var_d40 = &std::_Func_impl_no_alloc<class <lambda_0505eef462bf740f9d3b12c81c141c0b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0[0x314]
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0505eef462bf740f9d3b12c81c141c0b>,bool,enum CardID>::VTable
    * const* var_d1c = &var_d40
void* var_cb4
int32_t* eax_5 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_cb4
int32_t var_34 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_d1c != 0)
    eax_5 = (*var_d1c)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_5

var_14_1.b = 0
int32_t eax_8 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = eax_8

if (var_d1c != 0)
    eax_8 = (*var_d1c)->vFunc_4(var_d1c != &var_d40)

void* var_30_4 = nullptr
int32_t eax_12
int32_t edx_4
eax_12, edx_4 = sub_568780(&var_19c8, 
    sub_566140(eax_8, 0x44d, &var_cb0, 0x450, 4, 0, 0xb, nullptr, var_30_4), 0x44f, &var_19c8)
__builtin_memcpy(&var_cb0, eax_12, 0xc84)
int128_t var_d18

if (var_30_4 s> 1)
    int32_t eax_13 = 0
    
    if (var_30_4 s> 0)
        edx_4 = var_cb0[0]
        
        do
            if (var_cb0[eax_13] != edx_4)
                int64_t var_ce4
                __builtin_memset(&var_ce4, 0, 0x2c)
                var_d18 = 0x125.o
                int32_t var_cd8
                int128_t var_d08_1 = var_cd8.o
                int64_t var_cc8
                int128_t var_cf8_1 = var_cc8.o
                edx_4 = sub_563d00(eax_13, &var_d18, &var_cb0, 0xe)
                break
            
            eax_13 += 1
        while (eax_13 s< var_30_4)

void* var_30_6 = &var_19c8
uint32_t result = sub_568780(&var_19c8, edx_4, 0x450, var_30_6)
__builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_6 s> 1)
    result = 0
    
    if (var_30_6 s> 0)
        do
            if (var_cb0[result] != var_cb0[0])
                int64_t var_ce4_1
                __builtin_memset(&var_ce4_1, 0, 0x2c)
                var_d18 = 0x126.o
                int32_t var_cd8_1
                int128_t var_d08_2 = var_cd8_1.o
                int64_t var_cc8_1
                int128_t var_cf8_2 = var_cc8_1.o
                result = sub_563d00(result, &var_d18, &var_cb0, 0x3a)
                break
            
            result += 1
        while (result s< var_30_6)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
