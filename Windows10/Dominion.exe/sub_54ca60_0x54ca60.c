// 函数: sub_54ca60
// 地址: 0x54ca60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76682b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2650)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_2670
void* eax_3 = sub_56ca80(&var_2670)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f866d6f46743e99c5ab1d169b288ca84>,bool,enum CardID>::VTable
    * const var_19b8 = &std::_Func_impl_no_alloc<class <lambda_f866d6f46743e99c5ab1d169b288ca84>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0[0x314]
__builtin_memcpy(&var_cb0, eax_3, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_f866d6f46743e99c5ab1d169b288ca84>,bool,enum CardID>::VTable
    * const* var_1994 = &var_19b8
int32_t var_14_1 = 0
void* var_cb8
int32_t* var_30_1 = &var_cb8
void var_1938
void* eax_4 = &var_1938
void* var_34 = &var_1938
void var_5c
void* var_193c = &var_5c
int32_t var_38 = 0
var_14_1.b = 1

if (var_1994 != 0)
    eax_4 = (*var_1994)->vFunc_0(&var_5c)
    void* var_38_1 = eax_4

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t esi_1 = GSI1::OffForSym(eax_4, var_30_1, &var_cb0)
int32_t var_30_2 = esi_1

if (var_1994 != 0)
    (*var_1994)->vFunc_4(var_1994 != &var_19b8)

if (esi_1 != 0)
    int64_t var_1954 = 0
    int64_t var_195c = 0
    bool cond:0_1
    
    do
        int64_t var_198c
        __builtin_memset(&var_198c, 0, 0x2c)
        int128_t var_19e8 = 0x118.o
        int32_t var_1980
        int128_t var_19d8_1 = var_1980.o
        int64_t var_1970
        int128_t var_19c8_1 = var_1970.o
        int32_t* eax_10 = sub_563c40(&var_19e8, 0xb, 0)
        void* eax_11 = sub_573400()
        int32_t* ecx_3 = *(eax_11 + 4)
        uint32_t eax_12 = *(eax_11 + 0xc)
        uint32_t eax_13 = zx.d(eax_10.w)
        
        if (eax_13 u>= 0x320)
            sub_591930()
        
        char var_30_5 = 0
        int32_t var_1948_1 = ecx_3[eax_13 * 0x19 + 0x695]
        int32_t* var_34_2 = &var_1954
        int32_t* var_194c = eax_10
        sub_586320(&var_194c, eax_12, ecx_3, &var_194c, &var_195c, var_34_2, var_30_5)
        int32_t eax_17 = 0
        cond:0_1 = esi_1 != 0
        
        if (esi_1 s> 0)
            do
                if (var_cb0[eax_17] == eax_10)
                    var_cb0[eax_17] = var_cb0[esi_1 - 1]
                    esi_1 -= 1
                    break
                
                eax_17 += 1
            while (eax_17 s< esi_1)
            
            cond:0_1 = esi_1 != 0
    while (cond:0_1)

void* eax_19 = sub_573400()
*(eax_19 + 0xc)
*(eax_19 + 4)
uint32_t result = sub_582eb0(&var_1938, var_cb8, 0x469, 0xb, 7, 0, 0, 0, nullptr, nullptr)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
