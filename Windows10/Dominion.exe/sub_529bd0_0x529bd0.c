// 函数: sub_529bd0
// 地址: 0x529bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765bbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx = __chkstk(0x2638)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = ecx
sub_561e00(&ExceptionList, 0, 2, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 1, 2, 0, 0)
void* eax_5
int32_t edx_1
eax_5, edx_1 = sub_573400()
int32_t ecx_2 = *(eax_5 + 0xc)
int32_t var_34_1
char const* const var_30_1
char* ecx_3

if (ecx_2 != 0xffffffff)
    int32_t eax_6 = *(eax_5 + 4)
    int32_t ecx_4 = ecx_2 * 0x5a30
    *(ecx_4 + eax_6 + 0x17558) |= 2
    int32_t var_1938
    int32_t eax_8 = sub_568780(&var_1938, edx_1, 0x3ea, &var_1938)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bca72008a7f96554d016000a2f4e6e39>,bool,enum CardID>::VTable
        * const var_2628 = &std::_Func_impl_no_alloc<class <lambda_bca72008a7f96554d016000a2f4e6e39>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_cb0
    __builtin_memcpy(&var_cb0, eax_8, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bca72008a7f96554d016000a2f4e6e39>,bool,enum CardID>::VTable
        * const* var_2604_1 = &var_2628
    int32_t** var_25c4
    int32_t* eax_9 = &var_25c4
    int32_t var_14_1 = 0
    int32_t* var_30_3 = &var_25c4
    int32_t var_34_2 = 0
    int32_t* var_5c
    var_25c4 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_2604_1 != 0)
        eax_9 = (*var_2604_1)->vFunc_0(&var_5c)
        int32_t* var_38_2 = eax_9
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_58
    int32_t* var_54
    int32_t var_30_4 = GSI1::OffForSym(eax_9, var_30_3, &var_cb0, var_5c, var_58, var_54)
    
    if (var_2604_1 != 0)
        (*var_2604_1)->vFunc_4(var_2604_1 != &var_2628)
        int32_t var_2604_2 = 0
    
    int64_t var_25fc
    __builtin_memset(&var_25fc, 0, 0x2c)
    int32_t var_30_6 = 0
    char var_34_3 = 0
    int32_t var_38_3 = 0x11
    int128_t var_2658 = 0x90.o
    int32_t var_25f0
    int128_t var_2648_1 = var_25f0.o
    int64_t var_25e0
    int128_t var_2638_1 = var_25e0.o
    int32_t var_25c0
    __builtin_memcpy(&var_1938, 
        sub_563960(&var_25c0, 0, &var_cb0, &var_25c0, 1, 0x20, &var_2658, var_38_3, var_34_3, 
            var_30_6), 
        0xc84)
    int32_t var_cb8
    uint32_t result
    uint32_t esi_2
    
    if (var_cb8 == 0)
    label_529e43:
        esi_2 = sub_56b800()
    else
        void* eax_17 = sub_573400()
        int32_t var_30_7 = 0
        sub_579a20(eax_17, &var_1938, *(eax_17 + 4), 0x3ea)
        
        if (var_cb8 == 0)
            goto label_529e43
        
        esi_2 = sub_56b800()
        
        if (var_1938 != 0)
            result = sub_56e9c0(1)
        label_529e23:
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
    
    int32_t var_25c8_1 = 0
    int32_t var_25cc_1 = 0
    void* eax_20 = sub_573400()
    var_25c4 = *(eax_20 + 4)
    uint32_t eax_22 = zx.d(esi_2.w)
    
    if (eax_22 u>= 0x320)
        sub_591930()
    
    int32_t** edx_5 = var_25c4
    int32_t* ecx_13 = *(eax_20 + 4)
    int32_t var_44_3
    __builtin_memset(&var_44_3, 0, 0x18)
    int32_t var_48_2 = *(eax_20 + 0x30)
    int32_t var_4c_1 = *(eax_20 + 0x2c)
    int32_t var_50_1 = *(eax_20 + 0x28)
    void* var_54_1 = nullptr
    int32_t var_58_1 = 0x457
    var_5c = 0xb
    int32_t var_40_2
    char* var_3c_2
    int32_t var_38_4
    void* var_34_4
    void* var_30_8
    result = sub_582d10(eax_22 * 0x64, edx_5[eax_22 * 0x19 + 0x69c], ecx_13, esi_2, 0x3e9, var_5c, 
        var_58_1, var_54_1, var_50_1, var_4c_1, var_48_2, var_44_3, var_40_2, var_3c_2, var_38_4, 
        var_34_4, var_30_8)
    
    if (result.b == 0)
        goto label_529e23
    
    var_25c0 = 1
    uint32_t var_25bc = esi_2
    int32_t var_193c_1 = 1
    void* eax_24
    int32_t edx_7
    eax_24, edx_7 = sub_573400()
    eax_5 = *eax_24
    int32_t var_25cc_2
    uint32_t var_25c8_2
    uint32_t eax_27
    
    if (eax_5 == 2)
        uint32_t eax_25 = *(eax_24 + 0x10)
        uint32_t esi_4 = zx.d(eax_25.w)
        var_25cc_2 = *(eax_24 + 0x14)
        int32_t** ecx_15 = *(eax_24 + 4)
        var_25c8_2 = eax_25
        var_25c4 = ecx_15
        
        if (esi_4 u>= 0x320)
            sub_591930()
            ecx_15 = var_25c4
        
        eax_27 = ecx_15[esi_4 * 0x19 + 0x693]
        goto label_529f78
    
    if (eax_5 == 3)
        uint32_t eax_28
        int32_t edx_8
        eax_28, edx_8 = sub_5916d0(eax_5, edx_7, *(eax_24 + 4), *(eax_24 + 0x10))
        var_25c8_2 = eax_28
        var_25cc_2 = 0
        eax_27 = sub_5915b0(eax_28, edx_8, *(eax_24 + 4), *(eax_24 + 0x10))
    label_529f78:
        void* eax_29 = sub_5768a0(*(eax_24 + 4))
        int32_t ecx_19 = *(eax_24 + 0xc)
        int32_t* esi_5 = eax_29
        esi_5[7] = var_25c8_2
        esi_5[8] = var_25cc_2
        esi_5[9] = eax_27
        esi_5[5] = ecx_19
        esi_5[6] = 0xffffffff
        int32_t ecx_20 = *(eax_24 + 0x1c)
        esi_5[0x12] = *(eax_24 + 0x20)
        esi_5[0x11] = ecx_20
        esi_5[0xa] = *(eax_24 + 0x24)
        int32_t* var_30_11 = &var_25c0
        *esi_5 = 3
        int32_t* var_34_5 = &esi_5[0x1e]
        esi_5[0x13] = 2
        esi_5[0x15] = 0x52a060
        esi_5[0x14] = 0
        esi_5[0x16] = 0
        esi_5[0x18] = 0xa
        esi_5[0x1c] = 0
        esi_5[0x1d] = 0
        esi_5[0x1f] = 0
        esi_5[0x21] = 1
        result =
            sub_56b8e0(&esi_5[0x1e], &esi_5[0x1c], *(eax_24 + 4), &esi_5[0x1d], var_34_5, var_30_11)
        goto label_529e23
    
    var_30_1 = "StartOfCleanup"
    var_34_1 = 0x1121
    ecx_3 = "Halt"
else
    var_30_1 = "SetGainFlag"
    var_34_1 = 0x52
    ecx_3 = "c.activePlayer != PLAYER_NONE"

sub_63b870(eax_5, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_34_1, 
    var_30_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
