// 函数: sub_6c5380
// 地址: 0x6c5380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lock_and_call@V<lambda_6c00ff020565541b7bec2b9d9869f0ef>@@@@YA_NW4__acrt_lock_id@@$$QAV<lambda_6c00ff020565541b7bec2b9d9869f0ef>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg1
int32_t var_14 = 0
int32_t var_8_1 = 1
char* arg_4
char* eax_3 = arg_4

if (eax_3 == 0 || *eax_3 == 0)
    goto label_6c54af

int32_t edx_1 = *(sub_63d4e0(&arg_4) + 8)

if (edx_1 s<= 1)
    eax_3 = arg_4
label_6c54af:
    *arg1 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_11 = sub_63d4e0(arg1)
        *(eax_11 + 4) += 1
        eax_3 = arg_4
    
    int32_t var_14_3 = 1
    int32_t var_8_4 = 2
    
    if (data_cf65bc != 0)
        goto label_6c54de
else
    char* ecx_1 = arg_4
    int32_t edx_2 = edx_1 - 1
    char* const eax_5 = &data_801800
    
    if (ecx_1 != 0)
        eax_5 = ecx_1
    
    char* const eax_6
    
    if (eax_5[edx_2] != 0x2f)
        eax_6 = &data_801800
        
        if (ecx_1 != 0)
            eax_6 = ecx_1
    
    if (eax_5[edx_2] == 0x2f || eax_6[edx_2] == 0x5c)
        edx_2 -= 1
    
    bool cond:4_1
    
    if (edx_2 s< 0)
    label_6c5435:
        *arg1 = ecx_1
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            char* eax_9 = sub_63d4e0(arg1)
            *(eax_9 + 4) += 1
            ecx_1 = arg_4
        
        int32_t var_14_1 = 1
        int32_t var_8_2 = 4
        
        if (data_cf65bc != 0 && ecx_1 != 0)
            cond:4_1 = *ecx_1 == 0
            goto label_6c54e5
    else
        while (true)
            char* const eax_7 = &data_801800
            
            if (ecx_1 != 0)
                eax_7 = ecx_1
            
            if (eax_7[edx_2] == 0x2f)
                break
            
            char* eax_8 = &data_801800
            
            if (ecx_1 != 0)
                eax_8 = ecx_1
            
            if (eax_8[edx_2] == 0x5c)
                break
            
            int32_t temp1_1 = edx_2
            edx_2 -= 1
            
            if (temp1_1 - 1 s< 0)
                goto label_6c5435
        
        if (ecx_1 == 0)
            ecx_1 = &data_801800
        
        *arg1 = &data_801800
        sub_63db30(arg1, ecx_1, edx_2 + 1)
        int32_t var_14_2 = 1
        int32_t var_8_3 = 3
        
        if (data_cf65bc != 0)
            eax_3 = arg_4
        label_6c54de:
            
            if (eax_3 != 0)
                cond:4_1 = *eax_3 == 0
            label_6c54e5:
                
                if (not(cond:4_1))
                    char* eax_12 = sub_63d4e0(&arg_4)
                    int32_t temp0_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
