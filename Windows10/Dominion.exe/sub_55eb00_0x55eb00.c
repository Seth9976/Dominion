// 函数: sub_55eb00
// 地址: 0x55eb00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766e2b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x323c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = *(sub_573400() + 4)
void* eax_4 = sub_573400()
int32_t ecx_1 = *(*(eax_4 + 4) + 0xd38)
void* eax_9 = mods.dp.d(sx.q(*(eax_4 + 0xc) - 1 + ecx_1), ecx_1) * 0x5a30
void* eax_11 = eax_9 + 0x181f8 + ebx
int32_t var_c94[0x310]
int32_t eax_12 = sub_593ca0(eax_11, &var_c94, ebx, eax_11, *(eax_9 + ebx + 0x17514))
int32_t var_1914[0x320]
int32_t eax_21
int32_t esi_2

if (eax_12 != 0)
    void* eax_13 = sub_573400()
    void var_324c
    uint32_t eax_14 = sub_5777b0(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), &var_324c, 4)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_b0444e9e0bdb2478c62bfff72d37ca5b>,bool,enum CardID>::VTable
        * const var_25c8 = &std::_Func_impl_no_alloc<class <lambda_b0444e9e0bdb2478c62bfff72d37ca5b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_2598
    __builtin_memcpy(&var_2598, &var_324c, 0xc84)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_b0444e9e0bdb2478c62bfff72d37ca5b>,bool,enum CardID>::VTable
        * const* var_25a4_1 = &var_25c8
    int32_t var_8_1 = 0
    void* var_259c
    int32_t* var_24_2 = &var_259c
    int32_t var_28_2 = 0
    void var_50
    var_259c = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_25a4_1 != 0)
        int32_t var_2c_2 = (*var_25a4_1)->vFunc_0(&var_50)
    
    var_8_1.b = 0
    int32_t eax_17 = GSI1::OffForSym(eax_14, eax_14, &var_2598)
    int32_t var_8_2 = 0xffffffff
    int32_t var_1918_1 = eax_17
    
    if (var_25a4_1 != 0)
        (*var_25a4_1)->vFunc_4(var_25a4_1 != &var_25c8)
        int32_t var_25a4_2 = 0
    
    eax_21 = sub_593ca0(&var_2598, &var_1914, ebx, &var_2598, eax_17)
    esi_2 = 0

uint32_t result

if (eax_12 == 0 || eax_12 s<= 0)
label_55eca3:
    result = 1
else
    while (true)
        int32_t ecx_8 = 0
        
        if (eax_21 s> 0)
            while (var_1914[ecx_8] != var_c94[esi_2])
                ecx_8 += 1
                
                if (ecx_8 s>= eax_21)
                    goto label_55ec9e
            
            result = 0
            break
        
    label_55ec9e:
        esi_2 += 1
        
        if (esi_2 s>= eax_12)
            goto label_55eca3

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
