// 函数: sub_4fbd40
// 地址: 0x4fbd40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_764f21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x2660)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56d130()
void* eax_3 = sub_573400()
void var_2680
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_2680, 0x20)
void var_cb0
__builtin_memcpy(&var_cb0, &var_2680, 0xc84)
void* result_1
void var_5c
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a27f79633cc216356ec6b3ad25f5de94>,bool,enum CardID>::VTable
    * const* eax_11

if (*(*(sub_573400() + 4) + 0xd48) s< 0x17)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a27f79633cc216356ec6b3ad25f5de94>,bool,enum CardID>::VTable
        * var_19c8 = &std::_Func_impl_no_alloc<class <lambda_c9eddd18a25988619095a62c5e7dad1d>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a27f79633cc216356ec6b3ad25f5de94>,bool,enum CardID>::VTable
        ** var_19a4_1 = &var_19c8
    void** eax_12 = &result_1
    int32_t var_14_3 = 3
    void** var_30_3 = &result_1
    int32_t var_34_2 = 0
    result_1 = &var_5c
    int32_t var_38_2 = 0
    var_14_3.b = 5
    
    if (var_19a4_1 != 0)
        eax_12 = (*var_19a4_1)->allocator<int32_t>,void,uint32_t const&> >(&var_5c)
        void** var_38_3 = eax_12
    
    var_14_3.b = 3
    int32_t var_14_4 = 0xffffffff
    int32_t var_30_4 = GSI1::OffForSym(eax_12, eax_4, &var_cb0)
    
    if (var_19a4_1 != 0)
        eax_11.b = var_19a4_1 != &var_19c8
        (*var_19a4_1)->vFunc_4(zx.d(eax_11.b))
else
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a27f79633cc216356ec6b3ad25f5de94>,bool,enum CardID>::VTable
        * const var_19a0 = &std::_Func_impl_no_alloc<class <lambda_a27f79633cc216356ec6b3ad25f5de94>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a27f79633cc216356ec6b3ad25f5de94>,bool,enum CardID>::VTable
        * const* var_197c_1 = &var_19a0
    int32_t* eax_7 = &result_1
    int32_t var_14_1 = 0
    int32_t* var_30_1 = &result_1
    int32_t var_34_1 = 0
    result_1 = &var_5c
    int32_t var_38 = 0
    var_14_1.b = 2
    
    if (var_197c_1 != 0)
        eax_7 = (*var_197c_1)->allocator<int32_t>,void,uint32_t const&> >(&var_5c)
        int32_t* var_38_1 = eax_7
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_2 = GSI1::OffForSym(eax_7, eax_4, &var_cb0)
    
    if (var_197c_1 != 0)
        eax_11.b = var_197c_1 != &var_19a0
        (*var_197c_1)->vFunc_4(zx.d(eax_11.b))
int64_t var_1974
__builtin_memset(&var_1974, 0, 0x2c)
int128_t var_19f8 = 0x8e.o
int32_t var_1968
int128_t var_19e8 = var_1968.o
int64_t var_1958
int128_t var_19d8 = var_1958.o
void* result = sub_563c40(&var_19f8, 0x16, 0)
result_1 = result

if (result != 0)
    uint32_t esi_1 = zx.d(result.w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_19 = *(esi_1 * 0x64 + edi_1 + 0x1a50)
    void* eax_20 = sub_573400()
    char var_1939
    result = sub_565ff0(eax_20, eax_19, result_1, *(eax_20 + 0xc), 0x454, nullptr, &var_1939, 0xc, 
        nullptr, nullptr)
    
    if (var_1939 != 0)
        int32_t var_cb8_1 = 0
        void var_1938
        result = sub_56f1a0(result, &var_1938, 0x13, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
