// 函数: sub_55f3a0
// 地址: 0x55f3a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76572b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x2630)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_2650
uint32_t eax_4 = sub_566240(&var_2650, edx, 2, &var_2650, &data_7bfab4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_85ee9da5d97228af7c1e02c7a83578b1>,bool,enum CardID>::VTable
    * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_85ee9da5d97228af7c1e02c7a83578b1>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0[0x314]
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_85ee9da5d97228af7c1e02c7a83578b1>,bool,enum CardID>::VTable
    * const* var_1974 = &var_1998
void var_1938
__builtin_memcpy(&var_1938, eax_4, 0xc84)
void* var_193c
int32_t* eax_5 = &var_193c
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_193c
int32_t var_34_1 = 0
void var_5c
var_193c = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_1974 != 0)
    eax_5 = (*var_1974)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_5

var_14_1.b = 0
int32_t var_cb8
int32_t eax_8 = GSI1::OffForSym(eax_5, var_cb8, &var_1938)
int32_t var_14_2 = 0xffffffff
int32_t var_cb8_1 = eax_8

if (var_1974 != 0)
    (*var_1974)->vFunc_4(var_1974 != &var_1998)

if (eax_8 == 0)
    sub_56e9c0(nullptr)
else
    sub_56e9c0(1)
    void* eax_11
    int32_t ecx_4
    eax_11, ecx_4 = sub_573400()
    int64_t var_196c_1 = 0
    int64_t var_195c
    __builtin_memset(&var_195c, 0, 0x1c)
    int32_t eax_12 = *(eax_11 + 0xc)
    int32_t var_30_3 = ecx_4
    int32_t var_1964_1 = 0
    int32_t var_34_2 = 8
    int128_t var_19c8 = 0x3e.o
    int32_t* eax_13 = *ecx
    int128_t var_19b8_1 = eax_12.o
    int64_t var_1950
    int128_t var_19a8_1 = var_1950.o
    uint32_t eax_14 = sub_563b20(eax_13, 9, &var_1938, *eax_13, &var_19c8, var_34_2)
    
    if (eax_14 != 0)
        int32_t var_30_4 = 0
        *ecx[1] = 1
        sub_562400(eax_14, 0x3ee, eax_14, var_30_4)
        int32_t eax_15 = 0
        
        if (var_30_4 s> 0)
            do
                if (var_cb0[eax_15] == eax_14)
                    int32_t var_30_5 = var_30_4 - 1
                    var_cb0[eax_15] = var_cb0[var_30_4 - 1]
                    break
                
                eax_15 += 1
            while (eax_15 s< var_30_4)

void* eax_17 = sub_573400()
*(eax_17 + 0xc)
*(eax_17 + 4)
uint32_t result = sub_582eb0(&var_cb0, nullptr, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
