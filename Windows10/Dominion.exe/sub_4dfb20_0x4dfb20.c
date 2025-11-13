// 函数: sub_4dfb20
// 地址: 0x4dfb20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?GetSubAllocator@SchedulerBase@details@Concurrency@@SAPAVSubAllocator@23@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t* result_1 = result
int32_t var_8_1 = 0
int32_t var_14 = 0
sub_4df830(arg1, arg2)
int32_t var_8_2 = 0
int32_t var_14_1 = 1

if (*(arg2 + 0x31c) == 1)
    char* eax_3 = *result
    
    if (eax_3 == 0 || *eax_3 == 0)
        int32_t* eax_5 = sub_64bfd0(0x13)
        eax_5[3] += 1
        
        if (*eax_5 == 0)
            sub_64be70(eax_5)
        
        int32_t* ecx_4 = *eax_5
        int16_t* const edx_1 = &data_807478
        *eax_5 = *ecx_4
        *ecx_4 = 0xfafafafa
        ecx_4[1] = 1
        ecx_4[2] = 2
        ecx_4[3] = 3
        void* ecx_5 = &ecx_4[4]
        *result = ecx_5
        int32_t eax_6
        
        do
            eax_6.b = *edx_1
            edx_1 += 1
            *ecx_5 = eax_6.b
            ecx_5 += 1
        while (eax_6.b != 0)
    else
        char* eax_4 = sub_63d4e0(result)
        int32_t esi_1 = *(eax_4 + 8)
        sub_63d5e0(eax_4, esi_1 + 2, result, 1)
        int16_t* ecx_2 = *result
        *(ecx_2 + esi_1) = 0x202c
        *(ecx_2 + esi_1 + 2) = 0
    
    char* eax_7 = *result
    
    if (eax_7 == 0 || *eax_7 == 0)
        int32_t* eax_9 = sub_64bfd0(0x19)
        eax_9[3] += 1
        
        if (*eax_9 == 0)
            sub_64be70(eax_9)
        
        int32_t* ecx_10 = *eax_9
        char const* const edx_3 = "colonies"
        *eax_9 = *ecx_10
        *ecx_10 = 0xfafafafa
        ecx_10[1] = 1
        ecx_10[2] = 8
        ecx_10[3] = 9
        void* ecx_11 = &ecx_10[4]
        *result = ecx_11
        int32_t eax_10
        
        do
            eax_10.b = *edx_3
            edx_3 = &edx_3[1]
            *ecx_11 = eax_10.b
            ecx_11 += 1
        while (eax_10.b != 0)
    else
        char* eax_8 = sub_63d4e0(result)
        int32_t esi_3 = *(eax_8 + 8)
        sub_63d5e0(eax_8, esi_3 + 8, result, 1)
        __builtin_strncpy(*result + esi_3, "colonies", 9)

if (*(arg2 + 0x31d) == 1)
    char* eax_11 = *result
    
    if (eax_11 == 0 || *eax_11 == 0)
        int32_t* eax_13 = sub_64bfd0(0x13)
        eax_13[3] += 1
        
        if (*eax_13 == 0)
            sub_64be70(eax_13)
        
        int32_t* ecx_16 = *eax_13
        int16_t* const edx_5 = &data_807478
        *eax_13 = *ecx_16
        *ecx_16 = 0xfafafafa
        ecx_16[1] = 1
        ecx_16[2] = 2
        ecx_16[3] = 3
        void* ecx_17 = &ecx_16[4]
        *result = ecx_17
        int32_t eax_14
        
        do
            eax_14.b = *edx_5
            edx_5 += 1
            *ecx_17 = eax_14.b
            ecx_17 += 1
        while (eax_14.b != 0)
    else
        char* eax_12 = sub_63d4e0(result)
        int32_t esi_5 = *(eax_12 + 8)
        sub_63d5e0(eax_12, esi_5 + 2, result, 1)
        int16_t* ecx_14 = *result
        *(ecx_14 + esi_5) = 0x202c
        *(ecx_14 + esi_5 + 2) = 0
    
    char* eax_15 = *result
    
    if (eax_15 != 0 && *eax_15 != 0)
        char* eax_16 = sub_63d4e0(result)
        int32_t esi_7 = *(eax_16 + 8)
        sub_63d5e0(eax_16, esi_7 + 8, result, 1)
        __builtin_strncpy(*result + esi_7, "shelters", 9)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t* eax_18 = sub_64bfd0(0x19)
    eax_18[3] += 1
    
    if (*eax_18 == 0)
        sub_64be70(eax_18)
    
    int32_t* ecx_24 = *eax_18
    char const* const edx_7 = "shelters"
    *eax_18 = *ecx_24
    *ecx_24 = 0xfafafafa
    ecx_24[1] = 1
    ecx_24[2] = 8
    ecx_24[3] = 9
    void* ecx_25 = &ecx_24[4]
    *result = ecx_25
    int32_t eax_19
    
    do
        eax_19.b = *edx_7
        edx_7 = &edx_7[1]
        *ecx_25 = eax_19.b
        ecx_25 += 1
    while (eax_19.b != 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
