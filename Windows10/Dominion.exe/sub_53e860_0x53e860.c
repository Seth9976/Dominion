// 函数: sub_53e860
// 地址: 0x53e860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7664ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x3f54)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_32e0[0x17]
int32_t eax_3 = sub_568920(&var_32e0, 4, 0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_23535bbd464ce7ab651baf81ea08554d>,bool,enum CardID>::VTable
    * const var_262c = &std::_Func_impl_no_alloc<class <lambda_23535bbd464ce7ab651baf81ea08554d>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cf8[0x320]
__builtin_memcpy(&var_cf8, eax_3, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_23535bbd464ce7ab651baf81ea08554d>,bool,enum CardID>::VTable
    * const* var_2608 = &var_262c
int32_t* var_2604
int32_t* eax_4 = &var_2604
int32_t var_8_1 = 0
int32_t* var_20_1 = &var_2604
int32_t var_24_1 = 0
int32_t* var_4c
var_2604 = &var_4c
int32_t var_28_1 = 0
var_8_1.b = 2

if (var_2608 != 0)
    eax_4 = (*var_2608)->vFunc_0(&var_4c)
    int32_t* var_28_2 = eax_4

var_8_1.b = 0
int32_t var_78
int32_t var_48
int32_t* var_44
int32_t eax_7 = GSI1::OffForSym(eax_4, var_78, &var_cf8, var_4c, var_48, var_44)
int32_t var_8_2 = 0xffffffff

if (var_2608 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_23535bbd464ce7ab651baf81ea08554d>,bool,enum CardID>::VTable
        * const* eax_8
    eax_8.b = var_2608 != &var_262c
    (*var_2608)->vFunc_4(eax_8)

void* eax_9 = sub_573400()
int32_t (* var_24_2)[0x17] = &var_32e0
uint32_t eax_10
int32_t edx_3
eax_10, edx_3 = sub_5777b0(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), var_24_2, 0x10)
uint32_t var_2660 = eax_10
void var_197c
__builtin_memcpy(&var_197c, &var_32e0, 0xc84)
int32_t var_28_3 = 0
int32_t eax_11
int32_t edx_4
eax_11, edx_4 = sub_561880(eax_10, edx_3, &var_197c, 4)
void* ecx_7 = &var_197c
int32_t* result

if (eax_7 != 0)
    void var_3f64
    __builtin_memcpy(&var_32e0, sub_56a060(&var_3f64, edx_4, ecx_7, &var_3f64), 0xc84)
    int32_t ecx_8 = 0
    uint32_t edx_5 = var_2660
    
    if (eax_7 s> 0)
        do
            int32_t eax_14 = var_cf8[ecx_8]
            ecx_8 += 1
            var_32e0[edx_5] = eax_14
            edx_5 = var_2660 + 1
            var_2660 = edx_5
        while (ecx_8 s< eax_7)
    
    var_44 = 0xd2
    void var_2600
    void* var_40_1 = &var_2600
    int32_t var_3c_1 = 0
    uint32_t var_38_1 = edx_5
    int128_t xmm0_1 = var_44.o
    int32_t var_34
    __builtin_memset(&var_34, 0, 0x20)
    int128_t var_265c = xmm0_1
    void* var_70_1 = &var_197c
    int128_t xmm0_2 = var_34.o
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_4b89096cd914b307e020755986ad1125>, void>::VTable
        * const var_74
    int32_t* var_50_2 = &var_74
    __builtin_memcpy(&var_2600, &var_32e0, 0xc84)
    int128_t var_264c_1 = xmm0_2
    var_74 = &std::_Func_impl_no_alloc<class <lambda_4b89096cd914b307e020755986ad1125>, void>::`vftable'{for `std::_Func_base<void>'}
    var_4c = 0x85
    int32_t var_48_1 = 0
    int128_t var_263c_1 = var_24_2.o
    var_44 = &std::_Func_impl_no_alloc<class <lambda_ec40c6cad07f6dea368b09ca64dc6f3b>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t** var_20_6 = &var_44
    int32_t var_1c_1 = 0x86
    var_18 = 0
    int32_t var_8_3 = 3
    sub_56a100(&var_265c, &var_74, 0xffffffff, 2, 1, 1, &var_265c, 0)
    int32_t var_8_4 = 0xffffffff
    result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
else
    int32_t var_20_4 = 0
    result = sub_53b010(eax_11, 7, ecx_7, -0x2c)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
