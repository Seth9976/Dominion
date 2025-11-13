// 函数: sub_5a0940
// 地址: 0x5a0940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7684b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_2cc)(struct _EXCEPTION_REGISTRATION_RECORD*
    ** arg1) = sub_5a0bf0
void* var_2a8 = arg5
void var_298
`eh vector constructor iterator'(&var_298, 0x14, 0x20, 0x5a0be0)
int32_t var_8_1 = 0
int32_t i_1 = 0
int32_t i_2 = data_1597e30
void* eax_5 = data_1597e2c
void* ecx_2 = (i_2 << 6) + eax_5

if (eax_5 != ecx_2)
    while (*(eax_5 + 8) != 4)
        eax_5 += 0x40
        i_1 += 1
        
        if (eax_5 == ecx_2)
            break

if (i_2 s< i_1)
    i_1 = i_2

int32_t ebx = 0
uint32_t result

if (i_1 s<= 0)
    result = 0
else
    int32_t* eax_6 = nullptr
    void var_294
    void* esi_1 = &var_294
    int32_t* var_2a4_1 = nullptr
    
    while (true)
        char const* const var_2cc_2
        
        if (eax_6 s< 0 || ebx s>= i_2)
            var_2cc_2 = "XDynArray<struct DomLogEvent>::operator []"
        else
            int32_t* eax_7 = eax_6 + data_1597e2c
            var_8_1.b = 1
            char* var_29c
            sub_63d850(esi_1 - 4, 
                sub_59ded0(eax_7, arg3, &var_29c, arg2, arg4, eax_7, 0xffffffff, 3))
            var_8_1.b = 2
            
            if (data_cf65bc != 0)
                char* eax_9 = var_29c
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_63d4e0(&var_29c)
                    int32_t temp0_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_29c = &data_801800
            
            var_8_1.b = 0
            *esi_1 = 0
            *(esi_1 + 8) = 0xffffffff
            *(esi_1 + 0xc) = *eax_7
            eax_6 = eax_7
            int32_t edx_3 = eax_6[0xc]
            
            if (edx_3 s< 0)
            label_5a0ae8:
                ebx += 1
                eax_6 = &var_2a4_1[0x10]
                esi_1 += 0x14
                var_2a4_1 = eax_6
                
                if (ebx s>= i_1)
                    break
                
                i_2 = data_1597e30
                continue
            else
                if (edx_3 s< data_1597e3c)
                    int32_t* edx_5 = (edx_3 << 4) + data_1597e38
                    
                    if (edx_5[2] == ebx && *edx_5 == 0xffffffff)
                        int32_t ecx_7
                        ecx_7.b = eax_6[0xf] s<= data_1597e4c
                        *esi_1 = ecx_7 + 1
                        *(esi_1 + 4) = edx_5[1]
                        *(esi_1 + 8) = *edx_5
                    
                    goto label_5a0ae8
                
                var_2cc_2 = "XDynArray<struct DomLogDecision>::operator []"
        
        sub_63b870(eax_6, &data_801800, "index >= 0 && index < mSize", 
            "C:\x\ax2017\Engine\xDynArray.h", 0xd4, var_2cc_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = 0
    void* esi_2 = &var_298
    int32_t i
    
    do
        int32_t eax_17 = *(esi_2 + 0x10)
        
        if (eax_17 == 0xffffffff || eax_17 == arg6)
            char* _Str1_1 = *esi_2
            char* const _Str1 = &data_801800
            
            if (_Str1_1 != 0)
                _Str1 = _Str1_1
            
            if (strncmp(_Str1, "{campaign}", 0xa) == 0)
                int32_t* eax_19 = var_2a8
                result += 1
                var_2a8 = &eax_19[1]
                sub_63d850(eax_19, esi_2)
        
        esi_2 += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_298, 0x14, 0x20, sub_5a0bf0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
