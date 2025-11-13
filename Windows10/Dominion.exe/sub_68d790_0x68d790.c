// 函数: sub_68d790
// 地址: 0x68d790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e2e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20 = arg1
int32_t var_14 = 0
char* const edi = *arg2
int32_t eax_3

if (edi == 0)
    edi = &data_801800
    eax_3 = 0
else if (*edi != 0)
    eax_3 = *(sub_63d4e0(arg2) + 8)
else
    eax_3 = 0

char* var_1c
char* const var_18
int32_t* ecx_9
char* esi_3
char* const edi_2

switch (sx.d(edi[eax_3 - 1]) - 0x66)
    case 0
        char* eax_27 = *arg2
        char* edi_3 = &data_801800
        
        if (eax_27 != 0 && *eax_27 != 0 && *(sub_63d4e0(arg2) + 8) s>= 2)
            char* eax_29 = *arg2
            int32_t edx_3
            
            if (eax_29 == 0 || *eax_29 == 0)
                edx_3 = 0
            else
                edx_3 = *(sub_63d4e0(arg2) + 8)
            
            char* eax_31 = *arg2
            char* const ecx_20 = &data_801800
            
            if (eax_31 != 0)
                ecx_20 = eax_31
            
            if (ecx_20[edx_3 - 2] == 0x66)
                sub_63d720(&var_1c, U"s")
                int32_t var_8_6 = 0xa
                char* eax_32 = *arg2
                *arg1 = eax_32
                
                if (eax_32 != 0 && *eax_32 != 0)
                    char* eax_33 = sub_63d4e0(arg1)
                    *(eax_33 + 4) += 1
                
                esi_3 = var_1c
                int32_t var_14_5 = 0x80
                
                if (esi_3 != 0)
                    edi_3 = esi_3
                
                sub_63d960(arg1, edi_3)
                int32_t var_14_6 = 1
                int32_t var_8_7 = 0xb
                goto label_68dd1e
        
        var_18 = &data_801800
        int32_t var_8_8 = 0xc
        char* eax_34 = *arg2
        int32_t edx_4
        
        if (eax_34 == 0 || *eax_34 == 0)
            edx_4 = 0
        else
            edx_4 = *(sub_63d4e0(arg2) + 8)
        
        char* eax_36 = *arg2
        char* const ecx_25 = &data_801800
        
        if (eax_36 != 0)
            ecx_25 = eax_36
        
        sub_63db30(&var_18, ecx_25, edx_4 - 1)
        sub_63d720(&var_1c, "ves")
        var_8_8.b = 0xe
        edi_2 = var_18
        *arg1 = edi_2
        
        if (edi_2 != 0 && *edi_2 != 0)
            char* eax_38 = sub_63d4e0(arg1)
            *(eax_38 + 4) += 1
        
        char* esi_4 = var_1c
        char* eax_39 = &data_801800
        int32_t var_14_7 = 0x20
        
        if (esi_4 != 0)
            eax_39 = esi_4
        
        sub_63d960(arg1, eax_39)
        int32_t var_8_9 = 0xd
        int32_t var_14_8 = 1
        var_8_9.b = 0xf
        
        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
            char* eax_40 = sub_63d4e0(&var_1c)
            int32_t temp2_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
        
        int32_t var_8_10 = 0x10
        goto label_68d9d6
    case 2
        char* eax_41 = *arg2
        
        if (eax_41 == 0 || *eax_41 == 0)
        label_68dc20:
            sub_63d720(&var_1c, U"s")
            int32_t var_8_13 = 0x15
            char* eax_48 = *arg2
            *arg1 = eax_48
            
            if (eax_48 != 0 && *eax_48 != 0)
                char* eax_49 = sub_63d4e0(arg1)
                *(eax_49 + 4) += 1
            
            esi_3 = var_1c
            char* eax_50 = &data_801800
            int32_t var_14_11 = 0x100
            
            if (esi_3 != 0)
                eax_50 = esi_3
            
            sub_63d960(arg1, eax_50)
            int32_t var_14_12 = 1
            int32_t var_8_14 = 0x16
        else
            if (*(sub_63d4e0(arg2) + 8) s< 2)
                goto label_68dc20
            
            char* const edi_4 = *arg2
            int32_t eax_43
            
            if (edi_4 == 0)
                edi_4 = &data_801800
                eax_43 = 0
            else if (*edi_4 != 0)
                eax_43 = *(sub_63d4e0(arg2) + 8)
            else
                eax_43 = 0
            
            eax_43.b = edi_4[eax_43 - 2]
            
            if (eax_43.b != 0x63 && eax_43.b != 0x73)
                goto label_68dc20
            
            sub_63d720(&var_1c, "es")
            int32_t var_8_11 = 0x12
            char* eax_45 = *arg2
            *arg1 = eax_45
            
            if (eax_45 != 0 && *eax_45 != 0)
                char* eax_46 = sub_63d4e0(arg1)
                *(eax_46 + 4) += 1
            
            esi_3 = var_1c
            char* eax_47 = &data_801800
            int32_t var_14_9 = 8
            
            if (esi_3 != 0)
                eax_47 = esi_3
            
            sub_63d960(arg1, eax_47)
            int32_t var_14_10 = 1
            int32_t var_8_12 = 0x13
    case 0xd
        char* eax_8 = *arg2
        *arg1 = eax_8
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(arg1)
            *(eax_9 + 4) += 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 0x12
        sub_63d720(&var_1c, "es")
        int32_t var_8_15 = 0x18
        char* eax_51 = *arg2
        *arg1 = eax_51
        
        if (eax_51 != 0 && *eax_51 != 0)
            char* eax_52 = sub_63d4e0(arg1)
            *(eax_52 + 4) += 1
        
        esi_3 = var_1c
        char* const eax_53 = &data_801800
        int32_t var_14_13 = 4
        
        if (esi_3 != 0)
            eax_53 = esi_3
        
        sub_63d960(arg1, eax_53)
        int32_t var_14_14 = 1
        int32_t var_8_16 = 0x19
    case 0x13
        char* eax_11 = *arg2
        
        if (eax_11 != 0 && *eax_11 != 0 && *(sub_63d4e0(arg2) + 8) s>= 2)
            char* const edi_1 = *arg2
            int32_t eax_13
            
            if (edi_1 == 0)
                edi_1 = &data_801800
                eax_13 = 0
            else if (*edi_1 != 0)
                eax_13 = *(sub_63d4e0(arg2) + 8)
            else
                eax_13 = 0
            
            if (strchr("aeiou", edi_1[eax_13 - 2]) != 0)
                sub_63d720(&var_18, U"s")
                int32_t var_8_1 = 2
                char* eax_17 = *arg2
                *arg1 = eax_17
                
                if (eax_17 != 0 && *eax_17 != 0)
                    char* eax_18 = sub_63d4e0(arg1)
                    *(eax_18 + 4) += 1
                
                char* const esi_1 = var_18
                char* const eax_19 = &data_801800
                int32_t var_14_1 = 0x40
                
                if (esi_1 != 0)
                    eax_19 = esi_1
                
                sub_63d960(arg1, eax_19)
                int32_t var_14_2 = 1
                int32_t var_8_2 = 3
                
                if (data_cf65bc == 0 || esi_1 == 0 || *esi_1 == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return arg1
                
                ecx_9 = &var_18
                goto label_68dd33
        
        var_18 = &data_801800
        int32_t var_8_3 = 4
        char* eax_20 = *arg2
        int32_t edx
        
        if (eax_20 == 0 || *eax_20 == 0)
            edx = 0
        else
            edx = *(sub_63d4e0(arg2) + 8)
        
        char* eax_22 = *arg2
        char* ecx_11 = &data_801800
        
        if (eax_22 != 0)
            ecx_11 = eax_22
        
        sub_63db30(&var_18, ecx_11, edx - 1)
        sub_63d720(&var_1c, "ies")
        var_8_3.b = 6
        edi_2 = var_18
        *arg1 = edi_2
        
        if (edi_2 != 0 && *edi_2 != 0)
            char* eax_24 = sub_63d4e0(arg1)
            *(eax_24 + 4) += 1
        
        char* esi_2 = var_1c
        char* eax_25 = &data_801800
        int32_t var_14_3 = 0x10
        
        if (esi_2 != 0)
            eax_25 = esi_2
        
        sub_63d960(arg1, eax_25)
        int32_t var_8_4 = 5
        int32_t var_14_4 = 1
        var_8_4.b = 7
        
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_26 = sub_63d4e0(&var_1c)
            int32_t temp1_1 = *(eax_26 + 4)
            *(eax_26 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
        
        int32_t var_8_5 = 8
    label_68d9d6:
        
        if (data_cf65bc == 0 || edi_2 == 0 || *edi_2 == 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        ecx_9 = &var_18
        goto label_68dd33
    default
        sub_63d720(&var_1c, U"s")
        int32_t var_8_17 = 0x1b
        char* eax_54 = *arg2
        *arg1 = eax_54
        
        if (eax_54 != 0 && *eax_54 != 0)
            char* eax_55 = sub_63d4e0(arg1)
            *(eax_55 + 4) += 1
        
        esi_3 = var_1c
        char* eax_56 = &data_801800
        int32_t var_14_15 = 2
        
        if (esi_3 != 0)
            eax_56 = esi_3
        
        sub_63d960(arg1, eax_56)
        int32_t var_14_16 = 1
        int32_t var_8_18 = 0x1c

label_68dd1e:

if (data_cf65bc == 0 || esi_3 == 0 || *esi_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

ecx_9 = &var_1c
label_68dd33:
char* eax_57 = sub_63d4e0(ecx_9)
int32_t temp0_1 = *(eax_57 + 4)
*(eax_57 + 4) -= 1

if (temp0_1 == 1)
    sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
