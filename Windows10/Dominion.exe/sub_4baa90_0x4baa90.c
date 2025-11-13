// 函数: sub_4baa90
// 地址: 0x4baa90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_24 = arg2
int32_t eax_2 = sub_4baa40(arg2)

if (eax_2 != 0)
    sub_63b870(eax_2, &data_801800, "SyncedKeyType(key) == SYNCEDDATA_SUM", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x1742, "SyncedDataIncrement")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ebx_2 = arg2 s>> 4 | arg2
int32_t* eax_4 = *(*(arg1 + 0x429c) + ((*(arg1 + 0x42a0) & ebx_2) << 2))
void* eax_5

if (eax_4 == 0)
label_4baae0:
    int32_t var_38_1 = 0
    eax_5 = sub_4bac10(eax_4, arg2, arg1, 1)
else
    while (arg2 != *eax_4)
        eax_4 = eax_4[6]
        
        if (eax_4 == 0)
            goto label_4baae0
    
    int32_t* temp0_1 = eax_4
    eax_4 = &eax_4[2]
    
    if (temp0_1 == 0xfffffff8)
        goto label_4baae0
    
    int32_t temp1_1 = eax_4[2]
    eax_4[2] += 1
    *eax_4 = 0
    eax_4[3] = adc.d(eax_4[3], 0, temp1_1 u>= 0xffffffff)
    void* edi_1 = arg1 + 0x4290
    eax_4[1] = 0
    void* var_20_1 = edi_1
    int32_t* eax_7 = *(*edi_1 + ((*(edi_1 + 4) & ebx_2) << 2))
    
    if (eax_7 == 0)
        goto label_4bab55
    
    while (arg2 != *eax_7)
        eax_7 = eax_7[4]
        
        if (eax_7 == 0)
            goto label_4bab55
    
    void* edi_2 = &eax_7[2]
    int32_t var_14
    
    if (edi_2 == 0)
        edi_1 = var_20_1
    label_4bab55:
        var_14 = 1
        int32_t var_10_1 = 0
        sub_4bb130(edi_1, &var_24, &var_14)
        int32_t* eax_9 = *(*edi_1 + ((ebx_2 & *(edi_1 + 4)) << 2))
        
        if (eax_9 == 0)
        label_4bab8b:
            edi_2 = nullptr
        else
            while (arg2 != *eax_9)
                eax_9 = eax_9[4]
                
                if (eax_9 == 0)
                    goto label_4bab8b
            
            edi_2 = &eax_9[2]
    else
        int32_t temp2_1 = *edi_2
        *edi_2 += 1
        *(edi_2 + 4) = adc.d(*(edi_2 + 4), 0, temp2_1 u>= 0xffffffff)
    
    data_cc8dc8
    sub_4d8ad0(arg2)
    eax_5 = var_20_1
    
    if (eax_5 == data_cc8d68)
        int32_t eax_10 = *edi_2
        int32_t var_10_2 = *(edi_2 + 4)
        int32_t var_1c = arg2
        var_14 = eax_10
        void* eax_11 = sub_4bb950(&var_1c)
        CookieCheckFunction(eax_11)
        return eax_11

CookieCheckFunction(eax_5)
return eax_5
