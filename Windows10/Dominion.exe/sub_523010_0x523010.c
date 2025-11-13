// 函数: sub_523010
// 地址: 0x523010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76582b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx = __chkstk(0x19a8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = ecx
sub_561e00(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 1, 1, 0, 0)
void* eax_5 = sub_573400()
int32_t ecx_2 = *(eax_5 + 0xc)
char const* const var_38_1
int32_t var_34_1
char const* const var_30_1
char* ecx_3

if (ecx_2 != 0xffffffff)
    int32_t eax_6 = *(eax_5 + 4)
    int32_t ecx_4 = ecx_2 * 0x5a30
    char var_30_2 = 0
    *(ecx_4 + eax_6 + 0x17558) |= 2
    int32_t var_1938
    int32_t eax_8 = sub_568780(&var_1938, sub_561af0(eax_6, 0, 1, var_30_2), 0x3ea, &var_1938)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7f342e1ce0a18086ca97704b752fc3a8>,bool,enum CardID>::VTable
        * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_7f342e1ce0a18086ca97704b752fc3a8>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_cb0
    __builtin_memcpy(&var_cb0, eax_8, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7f342e1ce0a18086ca97704b752fc3a8>,bool,enum CardID>::VTable
        * const* var_1974_1 = &var_1998
    void* var_193c
    int32_t* eax_9 = &var_193c
    int32_t var_14_1 = 0
    int32_t* var_30_4 = &var_193c
    int32_t var_34_2 = 0
    void var_5c
    var_193c = &var_5c
    int32_t var_38_2 = 0
    var_14_1.b = 2
    
    if (var_1974_1 != 0)
        eax_9 = (*var_1974_1)->vFunc_0(&var_5c)
        int32_t* var_38_3 = eax_9
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_5 = GSI1::OffForSym(eax_9, var_30_4, &var_cb0)
    
    if (var_1974_1 != 0)
        (*var_1974_1)->vFunc_4(var_1974_1 != &var_1998)
        int32_t var_1974_2 = 0
    
    int64_t var_196c
    __builtin_memset(&var_196c, 0, 0x2c)
    int32_t var_30_7 = 0
    char var_34_3 = 0
    int32_t var_38_4 = 5
    int128_t var_19c8 = 0x54.o
    int32_t var_1960
    int128_t var_19b8_1 = var_1960.o
    int64_t var_1950
    int128_t var_19a8_1 = var_1950.o
    int32_t* result = sub_563960(&var_1938, 0, &var_cb0, &var_1938, 1, 0x17, &var_19c8, var_38_4, 
        var_34_3, var_30_7)
    __builtin_memcpy(&var_cb0, result, 0xc84)
    
    if (var_30_7 == 0)
    label_523418:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    if (var_30_7 != 1)
        result = sub_591930()
    
    sub_566140(result, 0x3ea, &var_cb0, 0x46e, nullptr, 0, 7, nullptr, nullptr)
    var_1938 = 4
    void var_1934
    memcpy(&var_1934, &var_cb0, var_30_7 << 2)
    int32_t var_cb4_1 = var_30_7
    sub_56c010(&var_1938, sub_523470, 0x13, 0, 0, &var_1938, 0, 0, 0xffffffff)
    void* eax_18 = sub_573400()
    void* esi_3 = *(eax_18 + 4)
    eax_5 = sub_57da30(esi_3, 0x718)
    int32_t edx_4 = 7
    void* esi_4 = esi_3 + 0x1594
    
    while (true)
        int32_t i = *esi_4
        
        if (i != 0x718)
            if (*(esi_4 + 4) != 0x718 && i != eax_5)
                edx_4 += 1
                esi_4 += 0x10
                
                if (edx_4 s< 0x48)
                    continue
                
                goto label_523433
            
            if (i == 0)
            label_523433:
                var_30_1 = "Rewards"
                var_34_1 = 0x2ea
                var_38_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Cornucopia.cpp"
                ecx_3 = "where != CW_NONE"
                break
        
        int32_t edx_5 = 7
        eax_5 = *(eax_18 + 4) + 0x1594
        
        while (*eax_5 != i)
            if (*(eax_5 + 4) == i)
                break
            
            edx_5 += 1
            eax_5 += 0x10
            
            if (edx_5 s>= 0x48)
                edx_5 = 0
                break
        
        if (edx_5 == 0)
            goto label_523433
        
        int32_t eax_21 = sub_568780(&var_1938, edx_5, edx_5, &var_1938)
        int64_t var_196c_1
        __builtin_memset(&var_196c_1, 0, 0x2c)
        var_19c8 = 0x55.o
        char var_30_11 = 0
        int32_t var_34_6 = 0xc
        __builtin_memcpy(&var_cb0, eax_21, 0xc84)
        int32_t var_1960_1
        int128_t var_19b8_2 = var_1960_1.o
        int64_t var_1950_1
        int128_t var_19a8_2 = var_1950_1.o
        result = sub_563c40(&var_19c8, var_34_6, var_30_11)
        
        if (result != 0)
            void* eax_22 = sub_573400()
            sub_583720(eax_22, *(eax_22 + 0xc), *(eax_22 + 4), result, 0x3ea, nullptr, 0x476, 0, 0, 
                4)
            result = sub_56e9c0(1)
        
        goto label_523418
else
    var_30_1 = "SetGainFlag"
    var_34_1 = 0x52
    var_38_1 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_3 = "c.activePlayer != PLAYER_NONE"

sub_63b870(eax_5, &data_801800, ecx_3, var_38_1, var_34_1, var_30_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
