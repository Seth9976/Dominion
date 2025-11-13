// 函数: sub_5365f0
// 地址: 0x5365f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766064
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x3f80)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_18 = edi
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
void* eax_4 = sub_573400()
int32_t ecx_1 = *(eax_4 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_5 = *(eax_4 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_5 + 0x17558) |= 2
void* eax_6 = sub_573400()
int32_t var_330c[0x22]
uint32_t eax_7
int32_t edx_2
eax_7, edx_2 = sub_5777b0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), &var_330c, 8)
uint32_t var_268c = eax_7
void var_197c
__builtin_memcpy(&var_197c, &var_330c, 0xc84)
void var_3f90
int32_t eax_9 = sub_568780(&var_3f90, edx_2, 2, &var_3f90)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d547fc4166a747ccbcd357d1784d8ec3>,bool,enum CardID>::VTable
    * const var_2630 = &std::_Func_impl_no_alloc<class <lambda_d547fc4166a747ccbcd357d1784d8ec3>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cf8[0x320]
__builtin_memcpy(&var_cf8, eax_9, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d547fc4166a747ccbcd357d1784d8ec3>,bool,enum CardID>::VTable
    * const* var_260c = &var_2630
int32_t* var_2604
int32_t* eax_10 = &var_2604
int32_t var_8_1 = 0
int32_t* var_20_2 = &var_2604
int32_t var_24_2 = 0
int32_t* var_4c
var_2604 = &var_4c
int32_t var_28_2 = 0
var_8_1.b = 2

if (var_260c != 0)
    eax_10 = (*var_260c)->vFunc_0(&var_4c)
    int32_t* var_28_3 = eax_10

var_8_1.b = 0
int32_t var_78
int32_t var_48
int32_t* var_44
int32_t* eax_13 = GSI1::OffForSym(eax_10, var_78, &var_cf8, var_4c, var_48, var_44)
var_2604 = eax_13
int32_t* var_78_1 = eax_13

if (var_260c != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d547fc4166a747ccbcd357d1784d8ec3>,bool,enum CardID>::VTable
        * const* eax_14
    eax_14.b = var_260c != &var_2630
    (*var_260c)->vFunc_4(eax_14)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_985fd7ac89dc383908460660e739bcf1>,bool,enum CardID>::VTable
    * const var_2658 = &std::_Func_impl_no_alloc<class <lambda_985fd7ac89dc383908460660e739bcf1>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_985fd7ac89dc383908460660e739bcf1>,bool,enum CardID>::VTable
    * const* var_2634 = &var_2658
int32_t** var_2608
int32_t* eax_15 = &var_2608
int32_t var_8_2 = 3
int32_t* var_20_4 = &var_2608
int32_t var_24_3 = 0
var_2608 = &var_4c
int32_t var_28_4 = 0
var_8_2.b = 5

if (var_2634 != 0)
    eax_15 = (*var_2634)->vFunc_0(&var_4c)
    int32_t* var_28_5 = eax_15

var_8_2.b = 3
int32_t eax_18
int32_t edx_6
eax_18, edx_6 = GSI1::OffForSym(eax_15, var_268c, &var_197c)
int32_t var_8_3 = 0xffffffff
int32_t var_cfc = eax_18

if (var_2634 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_985fd7ac89dc383908460660e739bcf1>,bool,enum CardID>::VTable
        * const* eax_20
    eax_20.b = var_2634 != &var_2658
    edx_6 = (*var_2634)->vFunc_4(eax_20)

__builtin_memcpy(&var_330c, sub_56a060(&var_3f90, edx_6, &var_197c, &var_3f90), 0xc84)
int32_t* esi_3 = var_2604
int32_t edx_8 = 0

if (esi_3 s> 0)
    uint32_t ecx_12 = var_268c
    
    do
        int32_t eax_23 = var_cf8[edx_8]
        edx_8 += 1
        var_330c[ecx_12] = eax_23
        ecx_12 = var_268c + 1
        var_268c = ecx_12
    while (edx_8 s< esi_3)

void var_2600
__builtin_memcpy(&var_2600, &var_330c, 0xc84)
int32_t var_34 = 0
var_1c.q = 0
var_24_3.q = 0

if (sub_56f8d0() == 0)
    int32_t* eax_25 = var_2604
    int32_t eax_26 = neg.d(eax_25)
    int32_t var_3c_1 = 0
    int32_t var_30_1 = 0
    int32_t var_2c
    var_2c.q = 0
    var_44 = sbb.d(eax_26, eax_26, eax_25 != 0) + 0x2d
    void* var_40_1 = &var_2600
    int32_t var_1980
    int32_t var_38_1 = var_1980
else
    int32_t var_40
    var_40.q = 0
    int32_t var_38 = 0
    int32_t var_30
    var_30.q = 0
    int32_t var_28_6 = 0
    var_44 = nullptr

int128_t xmm0 = var_44.o
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8ba756c0e7c9236d593623d3e233f25f>, void>::VTable
    * const var_74 = &std::_Func_impl_no_alloc<class <lambda_8ba756c0e7c9236d593623d3e233f25f>, void>::`vftable'{for `std::_Func_base<void>'}
struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_8ba756c0e7c9236d593623d3e233f25f>, void>::VTable
    * const* var_50_3 = &var_74
int128_t var_2688 = xmm0
var_4c = 0x1a
int32_t var_48_1 = 0
var_44 = &std::_Func_impl_no_alloc<class <lambda_c6d1454d92fea0e777dab8c29910f68f>, void>::`vftable'{for `std::_Func_base<void>'}
int128_t var_2678 = var_34.o
int32_t** var_20_7 = &var_44
int32_t var_1c_1 = 0x1b
int128_t var_2668 = var_24_3.o
int32_t var_18_1 = 0
int32_t var_8_4 = 6
sub_56a100(&var_2688, &var_74, 0xffffffff, 2, 1, 1, &var_2688, 0)
int32_t var_8_5 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
