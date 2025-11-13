// 函数: sub_4e01e0
// 地址: 0x4e01e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$?release@?$source_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAEXHPAV?$ITarget@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = arg2
char** var_3c = arg1
int32_t var_34 = 0
*arg1 = &data_801800
int32_t i = 0
int32_t var_14_1 = 0
int32_t var_34_1 = 1
int32_t i_1 = 0

do
    void* eax_5 = (i << 4) + arg2
    
    if (*(eax_5 + 0x9c8) == 0)
        break
    
    int32_t esi = *(arg2 + (i + 0x9d) * 0x10)
    
    if (esi != 0)
        char* eax_8 = *arg1
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(arg1)
            int32_t esi_1 = *(eax_9 + 8)
            sub_63d5e0(eax_9, esi_1 + 2, arg1, 1)
            char* ecx_2 = *arg1
            *(ecx_2 + esi_1) = 0x202c
            ecx_2[esi_1 + 2] = 0
        
        sub_63d960(arg1, *(sub_4e3950(*(eax_5 + 0x9c8)) + 0x10))
        
        if (*(eax_5 + 0x9c8) != 0x13)
            int32_t var_58_2 = esi
            int32_t var_14_2 = 1
            char* ecx_57 = &data_801800
            char* const var_2c
            char* eax_49 = *sub_63df30(&var_2c, "(%d)")
            
            if (eax_49 != 0)
                ecx_57 = eax_49
            
            sub_63d960(arg1, ecx_57)
            int32_t var_14_3 = 2
            
            if (data_cf65bc != 0)
                char* eax_50 = var_2c
                
                if (eax_50 != 0 && *eax_50 != 0)
                    char* eax_51 = sub_63d4e0(&var_2c)
                    int32_t temp0_1 = *(eax_51 + 4)
                    *(eax_51 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                        var_2c = &data_801800
            
            var_14_3.b = 0
        else if (*(eax_5 + 0x9cc) != 0)
            char* eax_13 = *arg1
            char* eax_15
            
            if (eax_13 == 0 || *eax_13 == 0)
                int32_t* eax_16 = sub_64bfd0(0x12)
                eax_16[3] += 1
                
                if (*eax_16 == 0)
                    sub_64be70(eax_16)
                
                char** ecx_8 = *eax_16
                *eax_16 = *ecx_8
                *ecx_8 = 0xfafafafa
                ecx_8[1] = 1
                ecx_8[2] = 1
                ecx_8[3] = 2
                void* const ecx_9 = &data_807488
                *arg1 = &ecx_8[4]
                
                do
                    eax_15.b = *ecx_9
                    ecx_9 += 1
                    *(ecx_8 - &data_807478 + ecx_9 - 1) = eax_15.b
                while (eax_15.b != 0)
            else
                char* eax_14 = sub_63d4e0(arg1)
                int16_t* esi_2 = *(eax_14 + 8)
                sub_63d5e0(eax_14, esi_2 + 1, arg1, 1)
                *(esi_2 + *arg1) = 0x28
            
            void* ecx_16 = eax_5
            eax_15.b = 0
            
            if ((*(ecx_16 + 0x9cc) & 1) != 0)
                char* eax_17 = *arg1
                
                if (eax_17 == 0 || *eax_17 == 0)
                    char** eax_19 = sub_64bfd0(0x1d)
                    eax_19[3] = &eax_19[3][1]
                    
                    if (*eax_19 == 0)
                        sub_64be70(eax_19)
                    
                    char* ecx_14 = *eax_19
                    *eax_19 = *ecx_14
                    *ecx_14 = 0xfafafafa
                    *(ecx_14 + 4) = 1
                    *(ecx_14 + 8) = 0xc
                    *(ecx_14 + 0xc) = 0xd
                    char* ecx_15 = "Black Market"
                    *arg1 = &ecx_14[0x10]
                    
                    do
                        eax_15.b = *ecx_15
                        ecx_15 = &ecx_15[1]
                        ecx_15[ecx_14 + 0xff7f8e1b] = eax_15.b
                    while (eax_15.b != 0)
                else
                    char* eax_18 = sub_63d4e0(arg1)
                    int32_t esi_4 = *(eax_18 + 8)
                    sub_63d5e0(eax_18, esi_4 + 0xc, arg1, 1)
                    __builtin_strncpy(&(*arg1)[esi_4], "Black Market", 0xd)
                    eax_15.b = 0
                
                ecx_16 = eax_5
                eax_15.b = 1
            
            if ((*(ecx_16 + 0x9cc) & 2) != 0)
                if (eax_15.b != 0)
                    char* eax_20 = *arg1
                    
                    if (eax_20 == 0 || *eax_20 == 0)
                        int32_t* eax_22 = sub_64bfd0(0x13)
                        eax_22[3] += 1
                        
                        if (*eax_22 == 0)
                            sub_64be70(eax_22)
                        
                        int32_t* ecx_21 = *eax_22
                        *eax_22 = *ecx_21
                        *ecx_21 = 0xfafafafa
                        ecx_21[1] = 1
                        ecx_21[2] = 2
                        ecx_21[3] = 3
                        int16_t* const ecx_22 = &data_807478
                        *arg1 = &ecx_21[4]
                        int32_t eax_23
                        
                        do
                            eax_23.b = *ecx_22
                            ecx_22 += 1
                            *(ecx_21 - "rds" + ecx_22 - 1) = eax_23.b
                        while (eax_23.b != 0)
                    else
                        char* eax_21 = sub_63d4e0(arg1)
                        int32_t esi_6 = *(eax_21 + 8)
                        sub_63d5e0(eax_21, esi_6 + 2, arg1, 1)
                        char* ecx_19 = *arg1
                        *(ecx_19 + esi_6) = 0x202c
                        ecx_19[esi_6 + 2] = 0
                
                char* eax_24 = *arg1
                
                if (eax_24 == 0 || *eax_24 == 0)
                    char** eax_26 = sub_64bfd0(0x1d)
                    eax_26[3] = &eax_26[3][1]
                    
                    if (*eax_26 == 0)
                        sub_64be70(eax_26)
                    
                    char* ecx_27 = *eax_26
                    *eax_26 = *ecx_27
                    *ecx_27 = 0xfafafafa
                    *(ecx_27 + 4) = 1
                    *(ecx_27 + 8) = 0xc
                    *(ecx_27 + 0xc) = 0xd
                    char* ecx_28 = "Promo Pack 1"
                    *arg1 = &ecx_27[0x10]
                    
                    do
                        eax_15.b = *ecx_28
                        ecx_28 = &ecx_28[1]
                        ecx_28[ecx_27 + 0xff7f8e0b] = eax_15.b
                    while (eax_15.b != 0)
                else
                    char* eax_25 = sub_63d4e0(arg1)
                    int32_t esi_8 = *(eax_25 + 8)
                    sub_63d5e0(eax_25, esi_8 + 0xc, arg1, 1)
                    __builtin_strncpy(&(*arg1)[esi_8], "Promo Pack 1", 0xd)
                    eax_15.b = 0
                
                ecx_16 = eax_5
                eax_15.b = 1
            
            if ((*(ecx_16 + 0x9cc) & 4) != 0)
                if (eax_15.b != 0)
                    char* eax_27 = *arg1
                    
                    if (eax_27 == 0 || *eax_27 == 0)
                        int32_t* eax_29 = sub_64bfd0(0x13)
                        eax_29[3] += 1
                        
                        if (*eax_29 == 0)
                            sub_64be70(eax_29)
                        
                        int32_t* ecx_33 = *eax_29
                        *eax_29 = *ecx_33
                        *ecx_33 = 0xfafafafa
                        ecx_33[1] = 1
                        ecx_33[2] = 2
                        ecx_33[3] = 3
                        int16_t* const ecx_34 = &data_807478
                        *arg1 = &ecx_33[4]
                        int32_t eax_30
                        
                        do
                            eax_30.b = *ecx_34
                            ecx_34 += 1
                            *(ecx_33 - "rds" + ecx_34 - 1) = eax_30.b
                        while (eax_30.b != 0)
                    else
                        char* eax_28 = sub_63d4e0(arg1)
                        int32_t esi_10 = *(eax_28 + 8)
                        sub_63d5e0(eax_28, esi_10 + 2, arg1, 1)
                        char* ecx_31 = *arg1
                        *(ecx_31 + esi_10) = 0x202c
                        ecx_31[esi_10 + 2] = 0
                
                char* eax_31 = *arg1
                
                if (eax_31 == 0 || *eax_31 == 0)
                    char** eax_33 = sub_64bfd0(0x1d)
                    eax_33[3] = &eax_33[3][1]
                    
                    if (*eax_33 == 0)
                        sub_64be70(eax_33)
                    
                    char* ecx_39 = *eax_33
                    *eax_33 = *ecx_39
                    *ecx_39 = 0xfafafafa
                    *(ecx_39 + 4) = 1
                    *(ecx_39 + 8) = 0xc
                    *(ecx_39 + 0xc) = 0xd
                    char* ecx_40 = "Promo Pack 2"
                    *arg1 = &ecx_39[0x10]
                    
                    do
                        eax_15.b = *ecx_40
                        ecx_40 = &ecx_40[1]
                        ecx_40[ecx_39 + 0xff7f8dfb] = eax_15.b
                    while (eax_15.b != 0)
                else
                    char* eax_32 = sub_63d4e0(arg1)
                    int32_t esi_12 = *(eax_32 + 8)
                    sub_63d5e0(eax_32, esi_12 + 0xc, arg1, 1)
                    __builtin_strncpy(&(*arg1)[esi_12], "Promo Pack 2", 0xd)
                    eax_15.b = 0
                
                ecx_16 = eax_5
                eax_15.b = 1
            
            if ((*(ecx_16 + 0x9cc) & 8) != 0)
                if (eax_15.b != 0)
                    char* eax_34 = *arg1
                    
                    if (eax_34 == 0 || *eax_34 == 0)
                        int32_t* eax_36 = sub_64bfd0(0x13)
                        eax_36[3] += 1
                        
                        if (*eax_36 == 0)
                            sub_64be70(eax_36)
                        
                        int32_t* ecx_45 = *eax_36
                        *eax_36 = *ecx_45
                        *ecx_45 = 0xfafafafa
                        ecx_45[1] = 1
                        ecx_45[2] = 2
                        ecx_45[3] = 3
                        int16_t* const ecx_46 = &data_807478
                        *arg1 = &ecx_45[4]
                        int32_t eax_37
                        
                        do
                            eax_37.b = *ecx_46
                            ecx_46 += 1
                            *(ecx_45 - "rds" + ecx_46 - 1) = eax_37.b
                        while (eax_37.b != 0)
                    else
                        char* eax_35 = sub_63d4e0(arg1)
                        int32_t esi_14 = *(eax_35 + 8)
                        sub_63d5e0(eax_35, esi_14 + 2, arg1, 1)
                        char* ecx_43 = *arg1
                        *(ecx_43 + esi_14) = 0x202c
                        ecx_43[esi_14 + 2] = 0
                
                char* eax_38 = *arg1
                
                if (eax_38 == 0 || *eax_38 == 0)
                    int32_t* eax_41 = sub_64bfd0(0x20)
                    eax_41[3] += 1
                    
                    if (*eax_41 == 0)
                        sub_64be70(eax_41)
                    
                    int32_t* ecx_50 = *eax_41
                    *eax_41 = *ecx_50
                    *ecx_50 = 0xfafafafa
                    ecx_50[1] = 1
                    ecx_50[2] = 0xf
                    ecx_50[3] = 0x10
                    char const* const ecx_51 = "Promo Marchland"
                    *arg1 = &ecx_50[4]
                    int32_t eax_42
                    
                    do
                        eax_42.b = *ecx_51
                        ecx_51 = &ecx_51[1]
                        ecx_51[ecx_50 + 0xff7f8deb] = eax_42.b
                    while (eax_42.b != 0)
                else
                    char* eax_39 = sub_63d4e0(arg1)
                    int32_t esi_16 = *(eax_39 + 8)
                    sub_63d5e0(eax_39, esi_16 + 0xf, arg1, 1)
                    __builtin_strcpy(&(*arg1)[esi_16], "Promo Marchland")
            
            char* eax_43 = *arg1
            
            if (eax_43 == 0 || *eax_43 == 0)
                int32_t* eax_46 = sub_64bfd0(0x12)
                eax_46[3] += 1
                
                if (*eax_46 == 0)
                    sub_64be70(eax_46)
                
                int32_t* ecx_55 = *eax_46
                *eax_46 = *ecx_55
                *ecx_55 = 0xfafafafa
                ecx_55[1] = 1
                ecx_55[2] = 1
                ecx_55[3] = 2
                void* const ecx_56 = &data_80748c
                *arg1 = &ecx_55[4]
                int32_t eax_47
                
                do
                    eax_47.b = *ecx_56
                    ecx_56 += 1
                    *(ecx_55 - "%s(%d,%d)" + ecx_56 - 1) = eax_47.b
                while (eax_47.b != 0)
            else
                char* eax_44 = sub_63d4e0(arg1)
                int16_t* esi_18 = *(eax_44 + 8)
                sub_63d5e0(eax_44, esi_18 + 1, arg1, 1)
                *(esi_18 + *arg1) = 0x29
        
        arg2 = var_28
    
    i = i_1 + 1
    i_1 = i
while (i s< 0x20)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
