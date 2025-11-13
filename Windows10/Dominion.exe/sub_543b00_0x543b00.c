// 函数: sub_543b00
// 地址: 0x543b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764e1b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1954
void var_c9c
__builtin_memcpy(&var_c9c, 
    sub_568780(&var_1954, sub_561af0(&ExceptionList, 0, 2, 0), 0x3e9, &var_1954), 0xc84)
uint32_t var_cc8 = sub_56b800()
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_05f25d3d12840acc45d1968f6726e73f>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_05f25d3d12840acc45d1968f6726e73f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_05f25d3d12840acc45d1968f6726e73f>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_7 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_20_2 = &var_ca0
int32_t var_24 = 0
void var_4c
var_ca0 = &var_4c
int32_t var_28 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_7 = (*var_ca8)->vFunc_0(&var_4c)
    int32_t* var_28_1 = eax_7

var_8_1.b = 0
int32_t eax_9 = GSI1::OffForSym(eax_7, eax_2, &var_c9c)
int32_t var_8_2 = 0xffffffff

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)

void* result

if (eax_9 != 0)
    void* eax_13 = sub_573400()
    *(eax_13 + 4)
    void* eax_14
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c99ba462917260403ce458e57cd050c7>, void>::VTable
        * ecx_5
    eax_14, ecx_5 = sub_589750(eax_9, *(eax_13 + 0xc), 0x3e9, *(eax_13 + 0x28), *(eax_13 + 0x2c), 
        *(eax_13 + 0x30), 0, 1, nullptr, nullptr)
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c99ba462917260403ce458e57cd050c7>, void>::VTable
        * const var_44 = ecx_5
    var_44 = &std::_Func_impl_no_alloc<class <lambda_c99ba462917260403ce458e57cd050c7>, void>::`vftable'{for `std::_Func_base<void>'}
    void* var_40_2 = eax_14
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c99ba462917260403ce458e57cd050c7>, void>::VTable
        * const* var_20_6 = &var_44
    sub_5699b0(var_44)
    var_ca0 = eax_14
    void* eax_15
    int32_t ecx_6
    int32_t edx_5
    eax_15, ecx_6, edx_5 = sub_573400()
    int32_t var_20_7 = 8
    result = sub_589e00(eax_15, edx_5, *(eax_15 + 4), &var_ca0, ecx_6, 0x3e9)
else
    result = sub_563590(0xd2b)
    
    if (result != 0)
        void* eax_12 = sub_573400()
        result = sub_583720(eax_12, *(eax_12 + 0xc), *(eax_12 + 4), result, 0x476, nullptr, 0x476, 
            0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
