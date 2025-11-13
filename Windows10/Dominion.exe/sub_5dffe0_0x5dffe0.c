// 函数: sub_5dffe0
// 地址: 0x5dffe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Handle_message@?$source_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@AAEXPAV?$message@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_2 = *(arg1 + 0x8c)
int32_t* eax_4 = *(data_be3598 + (((i_2 s>> 4 | i_2) & data_be359c) << 2))
void* result

if (eax_4 == 0)
label_5e004b:
    char* var_28
    sub_5dfeb0(&var_28, arg1)
    int32_t var_8_1 = 0
    int32_t i = *(arg1 + 0x8c)
    int32_t edx_5 = ((i s>> 4 | i) & data_be359c) << 2
    int32_t* esi = *(edx_5 + data_be3598)
    char* var_24
    int32_t var_20
    char* var_1c
    
    if (esi == 0)
    label_5e0094:
        int32_t* eax_10 = sub_64bfd0(0x18)
        eax_10[3] += 1
        
        if (*eax_10 == 0)
            sub_64be70(eax_10)
        
        int32_t* edi_1 = *eax_10
        *eax_10 = *edi_1
        *edi_1 = *(arg1 + 0x8c)
        char* eax_13 = var_28
        void* var_18_1 = &edi_1[1]
        edi_1[1] = eax_13
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&edi_1[1])
            *(eax_14 + 4) += 1
        
        var_8_1.b = 1
        char* eax_15 = var_24
        edi_1[2] = eax_15
        
        if (eax_15 != 0 && *eax_15 != 0)
            char* eax_16 = sub_63d4e0(&edi_1[2])
            *(eax_16 + 4) += 1
        
        var_8_1.b = 2
        edi_1[3] = var_20
        char* eax_18 = var_1c
        edi_1[4] = eax_18
        
        if (eax_18 != 0 && *eax_18 != 0)
            char* eax_19 = sub_63d4e0(&edi_1[4])
            *(eax_19 + 4) += 1
        
        edi_1[5] = *(edx_5 + data_be3598)
        *(edx_5 + data_be3598) = edi_1
        data_be35a0 += 1
    else
        while (i != *esi)
            esi = esi[5]
            
            if (esi == 0)
                goto label_5e0094
        
        sub_63d850(&esi[1], &var_28)
        sub_63d850(&esi[2], &var_24)
        esi[3] = var_20
        sub_63d850(&esi[4], &var_1c)
    int32_t i_1 = *(arg1 + 0x8c)
    int32_t* eax_24 = *(data_be3598 + (((i_1 s>> 4 | i_1) & data_be359c) << 2))
    void* result_1
    
    if (eax_24 == 0)
    label_5e015c:
        result_1 = nullptr
    else
        while (i_1 != *eax_24)
            eax_24 = eax_24[5]
            
            if (eax_24 == 0)
                goto label_5e015c
        
        result_1 = &eax_24[1]
    
    sub_5dfdb0(&var_28)
    result = result_1
else
    while (i_2 != *eax_4)
        eax_4 = eax_4[5]
        
        if (eax_4 == 0)
            goto label_5e004b
    
    result = &eax_4[1]
    
    if (eax_4 == 0xfffffffc)
        goto label_5e004b

fsbase->NtTib.ExceptionList = ExceptionList
return result
