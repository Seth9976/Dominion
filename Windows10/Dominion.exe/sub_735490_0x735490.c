// 函数: sub_735490
// 地址: 0x735490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772c5d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const edi = arg1
char* const esi = &data_801800
char* const var_14 = &data_801800
int32_t var_8_1 = 0
void* eax_3 = strrchr(edi, 0x2a)
char* const ecx = &data_801800
void* ebx

if (eax_3 == 0 || *(eax_3 + 1) == 0)
label_735582:
    char* eax_10 = *(arg2 + 0x20)
    
    if (eax_10 != 0)
        ecx = eax_10
    
    ebx.b = sub_7353d0(edi, ecx).b
else
    char* const edx = edi
    char* eax_4
    
    do
        eax_4.b = *edx
        edx = &edx[1]
    while (eax_4.b != 0)
    char* eax_6 = *(arg2 + 0x20)
    char* const eax_7
    void* ecx_3
    
    if (eax_6 != 0)
        char* ecx_4 = eax_6
        void* eax_8
        
        do
            eax_8.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (eax_8.b != 0)
        ecx_3 = ecx_4 - &ecx_4[1]
        eax_7 = eax_6
    else
        char* const ecx_2 = &data_801800
        char i
        
        do
            i = *ecx_2
            ecx_2 = &ecx_2[1]
        while (i != 0)
        ecx_3 = ecx_2 - &data_801801
        eax_7 = &data_801800
    
    if (_stricmp(ecx_3 - (edx - &edx[1] - (eax_3 - edi + 1)) + eax_7, eax_3 + 1) == 0)
        sub_63db30(&var_14, edi, eax_3 - edi + 1)
        esi = var_14
        ecx = &data_801800
        edi = &data_801800
        
        if (esi != 0)
            edi = esi
        
        goto label_735582
    
    ebx.b = 0

int32_t var_8_2 = 1
int32_t result

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    result = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
