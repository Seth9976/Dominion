// 函数: sub_53cae0
// 地址: 0x53cae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76637b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_cb0
int32_t eax_4 = sub_568780(&var_cb0, edx, 0x3ea, &var_cb0)
int32_t var_30_1 = 0
void var_1938
int32_t* result = sub_53b010(eax_4, 0x3ea, __builtin_memcpy(&var_1938, eax_4, 0xc84), -0x41)
int16_t var_1944 = result.w

if (result != 0)
    uint32_t esi_2 = zx.d(result.w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_6 = esi_2 * 0x64
    int32_t var_1940 = eax_6
    void* var_193c = *(eax_6 + edi_1 + 0x1a4c)
    void* eax_8 = sub_573400()
    uint32_t eax_9 = sub_5777b0(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), &var_1938, 4)
    __builtin_memcpy(&var_cb0, &var_1938, 0xc84)
    void* eax_10 = sub_573400()
    int32_t edi_2 = *(eax_10 + 0xc)
    void* esi_3 = *(eax_10 + 4)
    
    if (var_1944 u>= 0x320)
        sub_591930()
    
    int32_t eax_11 = var_1940
    sub_576e90(eax_11, esi_3, &var_1940, edi_2, *(eax_11 + esi_3 + 0x1a4c), 0)
    int32_t esi_4 = var_1940
    void* var_199c_1 = var_193c
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_cb9bea87a8c0890a15d3524a38549b4c>,bool,enum CardID>::VTable
        * const var_19a0 = &std::_Func_impl_no_alloc<class <lambda_cb9bea87a8c0890a15d3524a38549b4c>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t var_1998_1 = esi_4
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_cb9bea87a8c0890a15d3524a38549b4c>,bool,enum CardID>::VTable
        * const* var_197c_1 = &var_19a0
    int32_t var_14_1 = 0
    int32_t* var_30_4 = &var_193c
    int32_t var_34_3 = 0
    void* eax_13 = &var_cb0
    void var_5c
    var_193c = &var_5c
    int32_t var_38_2 = 0
    var_14_1.b = 2
    
    if (var_197c_1 != 0)
        int32_t var_38_3 = (*var_197c_1)->vFunc_0(&var_5c)
        eax_13 = &var_cb0
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_5 = GSI1::OffForSym(eax_13, eax_9, &var_cb0)
    
    if (var_197c_1 != 0)
        (*var_197c_1)->vFunc_4(var_197c_1 != &var_19a0)
    
    int32_t var_196c_1 = 0
    int64_t var_1974_1 = 0
    int64_t var_1964
    __builtin_memset(&var_1964, 0, 0x1c)
    int128_t var_19d0 = 0xc6.o
    int128_t var_19c0_1 = (esi_4 + 2).o
    int64_t var_1958
    int128_t var_19b0_1 = var_1958.o
    result = sub_563c40(&var_19d0, 0xc, 0)
    
    if (result != 0)
        void* eax_21 = sub_573400()
        result = sub_583720(eax_21, *(eax_21 + 0xc), *(eax_21 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
