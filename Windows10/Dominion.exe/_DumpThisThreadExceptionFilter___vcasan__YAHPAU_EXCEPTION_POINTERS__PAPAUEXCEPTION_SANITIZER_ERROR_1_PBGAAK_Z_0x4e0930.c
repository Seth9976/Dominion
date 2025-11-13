// 函数: ?DumpThisThreadExceptionFilter@__vcasan@@YAHPAU_EXCEPTION_POINTERS@@PAPAUEXCEPTION_SANITIZER_ERROR@1@PBGAAK@Z
// 地址: 0x4e0930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?wait@?$ordered_message_processor@I@Concurrency@@UAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_2c = arg1
int32_t var_28 = 0
int16_t* var_14
sub_4df8f0(&var_14, arg2)
int32_t var_8_1 = 1

if (*(arg2 + 0xbfc) == 1)
    char* eax_3 = var_14
    
    if (eax_3 == 0 || *eax_3 == 0)
        int32_t** eax_5 = sub_64bfd0(0x13)
        eax_5[3] += 1
        
        if (*eax_5 == 0)
            sub_64be70(eax_5)
        
        int32_t* ecx_5 = *eax_5
        *eax_5 = *ecx_5
        *ecx_5 = 0xfafafafa
        ecx_5[1] = 1
        ecx_5[2] = 2
        ecx_5[3] = 3
        char* ecx_6 = &data_807478
        var_14 = &ecx_5[4]
        int32_t* eax_6
        
        do
            eax_6.b = *ecx_6
            ecx_6 = &ecx_6[1]
            ecx_6[ecx_5 + 0xff7f8b97] = eax_6.b
        while (eax_6.b != 0)
    else
        char* eax_4 = sub_63d4e0(&var_14)
        int32_t esi_1 = *(eax_4 + 8)
        sub_63d5e0(eax_4, esi_1 + 2, &var_14, 1)
        int16_t* ecx_3 = var_14
        *(ecx_3 + esi_1) = 0x202c
        *(ecx_3 + esi_1 + 2) = 0
    
    int16_t* eax_7 = var_14
    
    if (eax_7 == 0 || *eax_7 == 0)
        int32_t** eax_9 = sub_64bfd0(0x19)
        eax_9[3] += 1
        
        if (*eax_9 == 0)
            sub_64be70(eax_9)
        
        int32_t* ecx_11 = *eax_9
        *eax_9 = *ecx_11
        *ecx_11 = 0xfafafafa
        ecx_11[1] = 1
        ecx_11[2] = 8
        ecx_11[3] = 9
        char* ecx_12 = "colonies"
        var_14 = &ecx_11[4]
        int32_t* eax_10
        
        do
            eax_10.b = *ecx_12
            ecx_12 = &ecx_12[1]
            ecx_12[ecx_11 + 0xff7f8e8f] = eax_10.b
        while (eax_10.b != 0)
    else
        char* eax_8 = sub_63d4e0(&var_14)
        int32_t esi_3 = *(eax_8 + 8)
        sub_63d5e0(eax_8, esi_3 + 8, &var_14, 1)
        __builtin_strncpy(var_14 + esi_3, "colonies", 9)
    
    if (*(arg2 + 0xbfc) == 1)
        int16_t* eax_11 = var_14
        
        if (eax_11 == 0 || *eax_11 == 0)
            int32_t** eax_13 = sub_64bfd0(0x13)
            eax_13[3] += 1
            
            if (*eax_13 == 0)
                sub_64be70(eax_13)
            
            int32_t* ecx_17 = *eax_13
            *eax_13 = *ecx_17
            *ecx_17 = 0xfafafafa
            ecx_17[1] = 1
            ecx_17[2] = 2
            ecx_17[3] = 3
            char* ecx_18 = &data_807478
            var_14 = &ecx_17[4]
            int32_t* eax_14
            
            do
                eax_14.b = *ecx_18
                ecx_18 = &ecx_18[1]
                ecx_18[ecx_17 + 0xff7f8b97] = eax_14.b
            while (eax_14.b != 0)
        else
            char* eax_12 = sub_63d4e0(&var_14)
            int32_t esi_5 = *(eax_12 + 8)
            sub_63d5e0(eax_12, esi_5 + 2, &var_14, 1)
            int16_t* ecx_15 = var_14
            *(ecx_15 + esi_5) = 0x202c
            *(ecx_15 + esi_5 + 2) = 0
        
        int16_t* eax_15 = var_14
        
        if (eax_15 == 0 || *eax_15 == 0)
            int32_t** eax_17 = sub_64bfd0(0x19)
            eax_17[3] += 1
            
            if (*eax_17 == 0)
                sub_64be70(eax_17)
            
            int32_t* ecx_23 = *eax_17
            *eax_17 = *ecx_23
            *ecx_23 = 0xfafafafa
            ecx_23[1] = 1
            ecx_23[2] = 8
            ecx_23[3] = 9
            char* ecx_24 = "shelters"
            var_14 = &ecx_23[4]
            int32_t* eax_18
            
            do
                eax_18.b = *ecx_24
                ecx_24 = &ecx_24[1]
                ecx_24[ecx_23 + 0xff7f8e83] = eax_18.b
            while (eax_18.b != 0)
        else
            char* eax_16 = sub_63d4e0(&var_14)
            int32_t esi_7 = *(eax_16 + 8)
            sub_63d5e0(eax_16, esi_7 + 8, &var_14, 1)
            __builtin_strncpy(var_14 + esi_7, "shelters", 9)

char* var_20
sub_4dfe00(&var_20, arg2)
var_8_1.b = 2
char* var_1c
sub_4e01e0(&var_1c, arg2)
var_8_1.b = 3
char* ecx_27 = var_20
char* eax_19 = var_1c

if ((ecx_27 == 0 || *ecx_27 == 0) && (eax_19 == 0 || *eax_19 == 0))
    char* ecx_57 = var_14
    *arg1 = ecx_57
    
    if (ecx_57 != 0 && *ecx_57 != 0)
        char* eax_39 = sub_63d4e0(arg1)
        *(eax_39 + 4) += 1
        eax_19 = var_1c
    
    int32_t var_28_2 = 1
    var_8_1.b = 4
    
    if (data_cf65bc != 0 && eax_19 != 0 && *eax_19 != 0)
        char* eax_40 = sub_63d4e0(&var_1c)
        int32_t temp0_1 = *(eax_40 + 4)
        *(eax_40 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
            var_1c = &data_801800
    
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        char* ecx_61 = var_20
        
        if (ecx_61 != 0 && *ecx_61 != 0)
            char* eax_41 = sub_63d4e0(&var_20)
            int32_t temp1_1 = *(eax_41 + 4)
            *(eax_41 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                var_20 = &data_801800
    
    int32_t var_8_3 = 6
else
    char* const esi_9 = &data_801800
    char* const var_18 = &data_801800
    var_8_1.b = 7
    char* const edi_1 = &data_801800
    int16_t* ecx_28 = var_14
    char* var_24
    
    if (ecx_28 != 0 && *ecx_28 != 0)
        int16_t* var_48_1 = ecx_28
        var_8_1.b = 8
        char* ecx_29 = &data_801800
        char* eax_21 = *sub_63df30(&var_24, "-k %s")
        
        if (eax_21 != 0)
            ecx_29 = eax_21
        
        sub_63d960(&var_18, ecx_29)
        var_8_1.b = 9
        
        if (data_cf65bc != 0)
            char* eax_22 = var_24
            
            if (eax_22 != 0 && *eax_22 != 0)
                char* eax_23 = sub_63d4e0(&var_24)
                int32_t temp2_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
        
        var_8_1.b = 7
        eax_19 = var_1c
        esi_9 = var_18
    
    if (eax_19 != 0 && *eax_19 != 0)
        if (esi_9 != 0 && *esi_9 != 0)
            char* eax_24 = sub_63d4e0(&var_18)
            int32_t esi_10 = *(eax_24 + 8)
            sub_63d5e0(eax_24, esi_10 + 2, &var_18, 1)
            char* const ecx_35 = var_18
            *(ecx_35 + esi_10) = 0x202c
            ecx_35[esi_10 + 2] = 0
            eax_19 = var_1c
        
        char* const ecx_36 = &data_801800
        
        if (eax_19 != 0)
            ecx_36 = eax_19
        
        char* const var_48_3 = ecx_36
        var_8_1.b = 0xa
        char* ecx_37 = &data_801800
        char* eax_26 = *sub_63df30(&var_24, "-e %s")
        
        if (eax_26 != 0)
            ecx_37 = eax_26
        
        sub_63d960(&var_18, ecx_37)
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0)
            char* eax_27 = var_24
            
            if (eax_27 != 0 && *eax_27 != 0)
                char* eax_28 = sub_63d4e0(&var_24)
                int32_t temp7_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
        
        var_8_1.b = 7
        eax_19 = var_1c
        esi_9 = var_18
    
    char* ecx_41 = var_20
    
    if (ecx_41 != 0 && *ecx_41 != 0)
        if (esi_9 != 0 && *esi_9 != 0)
            char* eax_29 = sub_63d4e0(&var_18)
            int32_t esi_11 = *(eax_29 + 8)
            sub_63d5e0(eax_29, esi_11 + 2, &var_18, 1)
            char* const ecx_44 = var_18
            *(ecx_44 + esi_11) = 0x202c
            ecx_44[esi_11 + 2] = 0
        
        char* ecx_45 = var_20
        char* eax_30 = &data_801800
        
        if (ecx_45 != 0)
            eax_30 = ecx_45
        
        char* var_48_5 = eax_30
        var_8_1.b = 0xc
        char* eax_32 = *sub_63df30(&var_24, "-m %s")
        
        if (eax_32 != 0)
            edi_1 = eax_32
        
        sub_63d960(&var_18, edi_1)
        var_8_1.b = 0xd
        
        if (data_cf65bc != 0)
            char* eax_33 = var_24
            
            if (eax_33 != 0 && *eax_33 != 0)
                char* eax_34 = sub_63d4e0(&var_24)
                int32_t temp8_1 = *(eax_34 + 4)
                *(eax_34 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
        
        var_8_1.b = 7
        eax_19 = var_1c
        esi_9 = var_18
    
    *arg1 = esi_9
    
    if (esi_9 != 0 && *esi_9 != 0)
        char* eax_35 = sub_63d4e0(arg1)
        *(eax_35 + 4) += 1
        eax_19 = var_1c
    
    int32_t var_28_1 = 1
    var_8_1.b = 0xe
    
    if (data_cf65bc != 0 && esi_9 != 0 && *esi_9 != 0)
        char* eax_36 = sub_63d4e0(&var_18)
        int32_t temp4_1 = *(eax_36 + 4)
        *(eax_36 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
        
        eax_19 = var_1c
    
    var_8_1.b = 0xf
    
    if (data_cf65bc != 0 && eax_19 != 0 && *eax_19 != 0)
        char* eax_37 = sub_63d4e0(&var_1c)
        int32_t temp5_1 = *(eax_37 + 4)
        *(eax_37 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
            var_1c = &data_801800
    
    var_8_1.b = 0x10
    
    if (data_cf65bc != 0)
        char* ecx_54 = var_20
        
        if (ecx_54 != 0 && *ecx_54 != 0)
            char* eax_38 = sub_63d4e0(&var_20)
            int32_t temp6_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp6_1 == 1)
                sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                var_20 = &data_801800
    
    int32_t var_8_2 = 0x11

if (data_cf65bc != 0)
    int16_t* ecx_64 = var_14
    
    if (ecx_64 != 0 && *ecx_64 != 0)
        char* eax_42 = sub_63d4e0(&var_14)
        int32_t temp3_1 = *(eax_42 + 4)
        *(eax_42 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
