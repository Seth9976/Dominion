// 函数: sub_4e0ff0
// 地址: 0x4e0ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7642ba
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_294 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg2
void* var_244 = esi
int32_t* var_230 = arg3
int32_t* var_284 = arg3
int32_t var_260 = 0
char* const eax_4 = &data_801800
char* const var_238 = &data_801800
void* edi = nullptr
int32_t var_14_1 = 1
char* var_234 = nullptr

while (true)
    void* edi_2 = (edi << 4) + esi
    
    if (*(edi_2 + 0x9c8) == 0)
        break
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_238)
        int32_t esi_1 = *(eax_5 + 8)
        sub_63d5e0(eax_5, esi_1 + 2, &var_238, 1)
        char* const ecx_2 = var_238
        *(ecx_2 + esi_1) = 0x202c
        ecx_2[esi_1 + 2] = 0
        esi = var_244
    
    sub_63d960(&var_238, *(sub_4e3950(*(edi_2 + 0x9c8)) + 0x10))
    int32_t edx_1 = *(edi_2 + 0x9c8)
    char* edi_3
    
    if (edx_1 != 0x13)
        int32_t eax_33 = sub_4dc4a0(arg4, edx_1)
        edi_3 = var_234
        int32_t ecx_49 = *(esi + edi_3 * 0x10 + 0x9cc)
        
        if (ecx_49 != eax_33 && ecx_49 != 0xffffffff)
            void* const var_298_2
            
            if (ecx_49 == 0)
                var_298_2 = &data_8071e8
            else if (ecx_49 == 1)
                var_298_2 = &data_8071ec
            else
                if (ecx_49 != 2)
                    sub_63b870(eax_33, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0xeb8, 
                        "DomSetupConfigToString")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                var_298_2 = &data_8071f0
            
            sub_63d960(&var_238, var_298_2)
        
        int32_t eax_35 = &edi_3[0x9d] * 2
        int32_t ecx_54 = *(esi + (eax_35 << 3))
        
        if (ecx_54 != 0 || *(esi + (eax_35 << 3) + 4) != 0xa)
            int32_t var_298_3 = *(esi + edi_3 * 0x10 + 0x9d4)
            int32_t var_29c_1 = ecx_54
            var_14_1.b = 2
            char* ecx_55 = &data_801800
            char* const var_264
            char* eax_39 = *sub_63df30(&var_264, "(%d,%d)")
            
            if (eax_39 != 0)
                ecx_55 = eax_39
            
            sub_63d960(&var_238, ecx_55)
            var_14_1.b = 3
            
            if (data_cf65bc != 0)
                char* eax_40 = var_264
                
                if (eax_40 != 0 && *eax_40 != 0)
                    char* eax_41 = sub_63d4e0(&var_264)
                    int32_t temp3_1 = *(eax_41 + 4)
                    *(eax_41 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                        var_264 = &data_801800
            
            var_14_1.b = 1
        
        eax_4 = var_238
    else if (*(edi_2 + 0x9cc) == 0)
        edi_3 = var_234
        eax_4 = var_238
    else
        char* const eax_7 = var_238
        char* const eax_9
        char* edx_3
        
        if (eax_7 == 0 || *eax_7 == 0)
            int32_t* eax_10 = sub_64bfd0(0x12)
            eax_10[3] += 1
            
            if (*eax_10 == 0)
                sub_64be70(eax_10)
            
            int32_t* ecx_8 = *eax_10
            edx_3 = &data_807488
            *eax_10 = *ecx_8
            eax_9 = &ecx_8[4]
            *ecx_8 = 0xfafafafa
            ecx_8[1] = 1
            ecx_8[2] = 1
            ecx_8[3] = 2
            var_238 = eax_9
            
            do
                ecx_8.b = *edx_3
                edx_3[eax_9 - &data_807488] = ecx_8.b
                edx_3 = &edx_3[1]
            while (ecx_8.b != 0)
        else
            char* eax_8 = sub_63d4e0(&var_238)
            int16_t* esi_2 = *(eax_8 + 8)
            sub_63d5e0(eax_8, esi_2 + 1, &var_238, 1)
            eax_9 = var_238
            *(esi_2 + eax_9) = 0x28
        
        edi_3 = var_234
        edx_3.b = 0
        void* esi_6 = var_244
        
        if ((*(esi_6 + edi_3 * 0x10 + 0x9cc) & 1) != 0)
            if (eax_9 == 0 || *eax_9 == 0)
                int32_t* eax_13 = sub_64bfd0(0x1d)
                eax_13[3] += 1
                
                if (*eax_13 == 0)
                    sub_64be70(eax_13)
                
                int32_t* ecx_14 = *eax_13
                edx_3 = "Black Market"
                *eax_13 = *ecx_14
                eax_9 = &ecx_14[4]
                *ecx_14 = 0xfafafafa
                ecx_14[1] = 1
                ecx_14[2] = 0xc
                ecx_14[3] = 0xd
                var_238 = eax_9
                
                do
                    ecx_14.b = *edx_3
                    edx_3 = &edx_3[1]
                    edx_3[eax_9 + 0xff7f8e0b] = ecx_14.b
                while (ecx_14.b != 0)
            else
                char* eax_12 = sub_63d4e0(&var_238)
                int32_t esi_7 = *(eax_12 + 8)
                sub_63d5e0(eax_12, esi_7 + 0xc, &var_238, 1)
                eax_9 = var_238
                __builtin_strncpy(&eax_9[esi_7], "Black Market", 0xd)
            
            esi_6 = var_244
            edx_3.b = 1
        
        if ((*(esi_6 + edi_3 * 0x10 + 0x9cc) & 2) != 0)
            if (edx_3.b != 0)
                if (eax_9 == 0 || *eax_9 == 0)
                    int32_t* eax_16 = sub_64bfd0(0x13)
                    eax_16[3] += 1
                    
                    if (*eax_16 == 0)
                        sub_64be70(eax_16)
                    
                    int32_t* ecx_20 = *eax_16
                    int16_t* const edx_6 = &data_807478
                    *eax_16 = *ecx_20
                    eax_9 = &ecx_20[4]
                    *ecx_20 = 0xfafafafa
                    ecx_20[1] = 1
                    ecx_20[2] = 2
                    ecx_20[3] = 3
                    var_238 = eax_9
                    
                    do
                        ecx_20.b = *edx_6
                        edx_6 += 1
                        *(edx_6 + eax_9 - &data_807478 - 1) = ecx_20.b
                    while (ecx_20.b != 0)
                else
                    char* eax_15 = sub_63d4e0(&var_238)
                    int16_t* esi_11 = *(eax_15 + 8)
                    sub_63d5e0(eax_15, &esi_11[1], &var_238, 1)
                    eax_9 = var_238
                    *(esi_11 + eax_9) = 0x202c
                    *(esi_11 + eax_9 + 2) = 0
            
            if (eax_9 == 0 || *eax_9 == 0)
                int32_t* eax_19 = sub_64bfd0(0x1d)
                eax_19[3] += 1
                
                if (*eax_19 == 0)
                    sub_64be70(eax_19)
                
                int32_t* ecx_24 = *eax_19
                edx_3 = "Promo Pack 1"
                *eax_19 = *ecx_24
                eax_9 = &ecx_24[4]
                *ecx_24 = 0xfafafafa
                ecx_24[1] = 1
                ecx_24[2] = 0xc
                ecx_24[3] = 0xd
                var_238 = eax_9
                
                do
                    ecx_24.b = *edx_3
                    edx_3 = &edx_3[1]
                    edx_3[eax_9 + 0xff7f8dfb] = ecx_24.b
                while (ecx_24.b != 0)
            else
                char* eax_18 = sub_63d4e0(&var_238)
                int32_t esi_15 = *(eax_18 + 8)
                sub_63d5e0(eax_18, esi_15 + 0xc, &var_238, 1)
                eax_9 = var_238
                __builtin_strncpy(&eax_9[esi_15], "Promo Pack 1", 0xd)
            
            esi_6 = var_244
            edx_3.b = 1
        
        if ((*(esi_6 + edi_3 * 0x10 + 0x9cc) & 4) != 0)
            if (edx_3.b != 0)
                if (eax_9 == 0 || *eax_9 == 0)
                    int32_t* eax_22 = sub_64bfd0(0x13)
                    eax_22[3] += 1
                    
                    if (*eax_22 == 0)
                        sub_64be70(eax_22)
                    
                    int32_t* ecx_30 = *eax_22
                    int16_t* const edx_9 = &data_807478
                    *eax_22 = *ecx_30
                    eax_9 = &ecx_30[4]
                    *ecx_30 = 0xfafafafa
                    ecx_30[1] = 1
                    ecx_30[2] = 2
                    ecx_30[3] = 3
                    var_238 = eax_9
                    
                    do
                        ecx_30.b = *edx_9
                        edx_9 += 1
                        *(edx_9 + eax_9 - &data_807478 - 1) = ecx_30.b
                    while (ecx_30.b != 0)
                else
                    char* eax_21 = sub_63d4e0(&var_238)
                    int16_t* esi_19 = *(eax_21 + 8)
                    sub_63d5e0(eax_21, &esi_19[1], &var_238, 1)
                    eax_9 = var_238
                    *(esi_19 + eax_9) = 0x202c
                    *(esi_19 + eax_9 + 2) = 0
            
            if (eax_9 == 0 || *eax_9 == 0)
                int32_t* eax_25 = sub_64bfd0(0x1d)
                eax_25[3] += 1
                
                if (*eax_25 == 0)
                    sub_64be70(eax_25)
                
                int32_t* ecx_34 = *eax_25
                edx_3 = "Promo Pack 2"
                *eax_25 = *ecx_34
                eax_9 = &ecx_34[4]
                *ecx_34 = 0xfafafafa
                ecx_34[1] = 1
                ecx_34[2] = 0xc
                ecx_34[3] = 0xd
                var_238 = eax_9
                
                do
                    ecx_34.b = *edx_3
                    edx_3 = &edx_3[1]
                    edx_3[eax_9 + 0xff7f8deb] = ecx_34.b
                while (ecx_34.b != 0)
            else
                char* eax_24 = sub_63d4e0(&var_238)
                int32_t esi_23 = *(eax_24 + 8)
                sub_63d5e0(eax_24, esi_23 + 0xc, &var_238, 1)
                eax_9 = var_238
                __builtin_strncpy(&eax_9[esi_23], "Promo Pack 2", 0xd)
            
            esi_6 = var_244
            edx_3.b = 1
        
        if ((*(esi_6 + edi_3 * 0x10 + 0x9cc) & 8) != 0)
            if (edx_3.b != 0)
                sub_63d960(&var_238, &data_807478)
                eax_9 = var_238
            
            if (eax_9 == 0 || *eax_9 == 0)
                int32_t* eax_28 = sub_64bfd0(0x20)
                eax_28[3] += 1
                
                if (*eax_28 == 0)
                    sub_64be70(eax_28)
                
                int32_t* ecx_41 = *eax_28
                char* edx_12 = "Promo Marchland"
                *eax_28 = *ecx_41
                eax_9 = &ecx_41[4]
                *ecx_41 = 0xfafafafa
                ecx_41[1] = 1
                ecx_41[2] = 0xf
                ecx_41[3] = 0x10
                var_238 = eax_9
                
                do
                    ecx_41.b = *edx_12
                    edx_12 = &edx_12[1]
                    edx_12[eax_9 + 0xff7f8ddb] = ecx_41.b
                while (ecx_41.b != 0)
            else
                char* eax_27 = sub_63d4e0(&var_238)
                int32_t esi_27 = *(eax_27 + 8)
                sub_63d5e0(eax_27, esi_27 + 0xf, &var_238, 1)
                eax_9 = var_238
                __builtin_strcpy(&eax_9[esi_27], "Promo Marchland")
        
        if (eax_9 == 0 || *eax_9 == 0)
            int32_t* eax_31 = sub_64bfd0(0x12)
            eax_31[3] += 1
            
            if (*eax_31 == 0)
                sub_64be70(eax_31)
            
            int32_t* ecx_45 = *eax_31
            void* const edx_14 = &data_80748c
            *eax_31 = *ecx_45
            eax_4 = &ecx_45[4]
            *ecx_45 = 0xfafafafa
            ecx_45[1] = 1
            ecx_45[2] = 1
            ecx_45[3] = 2
            var_238 = eax_4
            
            do
                ecx_45.b = *edx_14
                edx_14 += 1
                *(eax_4 - &data_80748c + edx_14 - 1) = ecx_45.b
            while (ecx_45.b != 0)
        else
            char* eax_30 = sub_63d4e0(&var_238)
            int16_t* esi_31 = *(eax_30 + 8)
            sub_63d5e0(eax_30, esi_31 + 1, &var_238, 1)
            eax_4 = var_238
            *(esi_31 + eax_4) = 0x29
    
    edi = &edi_3[1]
    var_234 = edi
    
    if (edi s>= 0x20)
        break
    
    esi = var_244

void* edi_5 = var_244
char* var_258
sub_4df8f0(&var_258, edi_5)
char* const eax_42 = &data_801800
char* const var_22c = &data_801800
var_14_1.b = 5
int32_t ecx_60 = *(edi_5 + 0xbfc)

if (ecx_60 == 1)
    int32_t* eax_43 = sub_64bfd0(0x19)
    eax_43[3] += 1
    
    if (*eax_43 == 0)
        sub_64be70(eax_43)
    
    int32_t* ecx_62 = *eax_43
    char const* const edx_18 = "Colonies"
    *eax_43 = *ecx_62
    eax_42 = &ecx_62[4]
    *ecx_62 = 0xfafafafa
    ecx_62[1] = 1
    ecx_62[2] = 8
    ecx_62[3] = 9
    var_22c = eax_42
    
    do
        ecx_62.b = *edx_18
        edx_18 = &edx_18[1]
        edx_18[eax_42 + 0xff7f8e67] = ecx_62.b
    while (ecx_62.b != 0)
else if (ecx_60 == 2)
    int32_t* eax_45 = sub_64bfd0(0x1b)
    eax_45[3] += 1
    
    if (*eax_45 == 0)
        sub_64be70(eax_45)
    
    int32_t* ecx_64 = *eax_45
    char const* const edx_19 = "NoColonies"
    *eax_45 = *ecx_64
    eax_42 = &ecx_64[4]
    *ecx_64 = 0xfafafafa
    ecx_64[1] = 1
    ecx_64[2] = 0xa
    ecx_64[3] = 0xb
    var_22c = eax_42
    
    do
        ecx_64.b = *edx_19
        edx_19 = &edx_19[1]
        edx_19[eax_42 + 0xff7f8d77] = ecx_64.b
    while (ecx_64.b != 0)

int32_t ecx_65 = *(edi_5 + 0xc00)

if (ecx_65 != 1)
    if (ecx_65 == 2)
        if (eax_42 == 0)
        label_4e1a72:
            int32_t* eax_53 = sub_64bfd0(0x1b)
            eax_53[3] += 1
            
            if (*eax_53 == 0)
                sub_64be70(eax_53)
            
            int32_t* ecx_77 = *eax_53
            char const* const edx_25 = "NoShelters"
            *eax_53 = *ecx_77
            eax_42 = &ecx_77[4]
            *ecx_77 = 0xfafafafa
            ecx_77[1] = 1
            ecx_77[2] = 0xa
            ecx_77[3] = 0xb
            var_22c = eax_42
            
            do
                ecx_77.b = *edx_25
                edx_25 = &edx_25[1]
                edx_25[eax_42 + 0xff7f8d6b] = ecx_77.b
            while (ecx_77.b != 0)
        else
            if (*eax_42 != 0)
                char* eax_51 = sub_63d4e0(&var_22c)
                int16_t* esi_46 = *(eax_51 + 8)
                sub_63d5e0(eax_51, &esi_46[1], &var_22c, 1)
                eax_42 = var_22c
                *(esi_46 + eax_42) = 0x202c
                *(esi_46 + eax_42 + 2) = 0
            
            if (eax_42 == 0 || *eax_42 == 0)
                goto label_4e1a72
            
            char* eax_52 = sub_63d4e0(&var_22c)
            int32_t esi_47 = *(eax_52 + 8)
            sub_63d5e0(eax_52, esi_47 + 0xa, &var_22c, 1)
            eax_42 = var_22c
            __builtin_strncpy(&eax_42[esi_47], "NoShelters", 0xb)
else if (eax_42 == 0)
label_4e196b:
    int32_t* eax_49 = sub_64bfd0(0x19)
    eax_49[3] += 1
    
    if (*eax_49 == 0)
        sub_64be70(eax_49)
    
    int32_t* ecx_71 = *eax_49
    char const* const edx_22 = "Shelters"
    *eax_49 = *ecx_71
    eax_42 = &ecx_71[4]
    *ecx_71 = 0xfafafafa
    ecx_71[1] = 1
    ecx_71[2] = 8
    ecx_71[3] = 9
    var_22c = eax_42
    
    do
        ecx_71.b = *edx_22
        edx_22 = &edx_22[1]
        edx_22[eax_42 + 0xff7f8e2f] = ecx_71.b
    while (ecx_71.b != 0)
else
    if (*eax_42 != 0)
        char* eax_47 = sub_63d4e0(&var_22c)
        int16_t* esi_41 = *(eax_47 + 8)
        sub_63d5e0(eax_47, &esi_41[1], &var_22c, 1)
        eax_42 = var_22c
        *(esi_41 + eax_42) = 0x202c
        *(esi_41 + eax_42 + 2) = 0
    
    if (eax_42 == 0 || *eax_42 == 0)
        goto label_4e196b
    
    char* eax_48 = sub_63d4e0(&var_22c)
    int32_t esi_42 = *(eax_48 + 8)
    sub_63d5e0(eax_48, esi_42 + 8, &var_22c, 1)
    eax_42 = var_22c
    __builtin_strncpy(&eax_42[esi_42], "Shelters", 9)

char ecx_78 = (*(edi_5 + 0x16f4)).b

if ((ecx_78 & 1) == 0)
    if ((ecx_78 & 2) != 0)
        if (eax_42 == 0)
        label_4e1c6b:
            int32_t* eax_61 = sub_64bfd0(0x1a)
            eax_61[3] += 1
            
            if (*eax_61 == 0)
                sub_64be70(eax_61)
            
            int32_t* ecx_90 = *eax_61
            char const* const edx_31 = "NoAttacks"
            *eax_61 = *ecx_90
            eax_42 = &ecx_90[4]
            *ecx_90 = 0xfafafafa
            ecx_90[1] = 1
            ecx_90[2] = 9
            ecx_90[3] = 0xa
            var_22c = eax_42
            
            do
                ecx_90.b = *edx_31
                edx_31 = &edx_31[1]
                edx_31[eax_42 + 0xff7f8d57] = ecx_90.b
            while (ecx_90.b != 0)
        else
            if (*eax_42 != 0)
                char* eax_59 = sub_63d4e0(&var_22c)
                int16_t* esi_56 = *(eax_59 + 8)
                sub_63d5e0(eax_59, &esi_56[1], &var_22c, 1)
                eax_42 = var_22c
                *(esi_56 + eax_42) = 0x202c
                *(esi_56 + eax_42 + 2) = 0
            
            if (eax_42 == 0 || *eax_42 == 0)
                goto label_4e1c6b
            
            char* eax_60 = sub_63d4e0(&var_22c)
            int32_t esi_57 = *(eax_60 + 8)
            sub_63d5e0(eax_60, esi_57 + 9, &var_22c, 1)
            eax_42 = var_22c
            __builtin_strcpy(&eax_42[esi_57], "NoAttacks")
else if (eax_42 == 0)
label_4e1b6e:
    int32_t* eax_57 = sub_64bfd0(0x18)
    eax_57[3] += 1
    
    if (*eax_57 == 0)
        sub_64be70(eax_57)
    
    int32_t* ecx_84 = *eax_57
    char const* const edx_28 = "Attacks"
    *eax_57 = *ecx_84
    eax_42 = &ecx_84[4]
    *ecx_84 = 0xfafafafa
    ecx_84[1] = 1
    ecx_84[2] = 7
    ecx_84[3] = 8
    var_22c = eax_42
    
    do
        ecx_84.b = *edx_28
        edx_28 = &edx_28[1]
        edx_28[eax_42 + 0xff7f8d5f] = ecx_84.b
    while (ecx_84.b != 0)
else
    if (*eax_42 != 0)
        char* eax_55 = sub_63d4e0(&var_22c)
        int16_t* esi_51 = *(eax_55 + 8)
        sub_63d5e0(eax_55, &esi_51[1], &var_22c, 1)
        eax_42 = var_22c
        *(esi_51 + eax_42) = 0x202c
        *(esi_51 + eax_42 + 2) = 0
    
    if (eax_42 == 0 || *eax_42 == 0)
        goto label_4e1b6e
    
    char* eax_56 = sub_63d4e0(&var_22c)
    int32_t esi_52 = *(eax_56 + 8)
    sub_63d5e0(eax_56, esi_52 + 7, &var_22c, 1)
    eax_42 = var_22c
    __builtin_strcpy(&eax_42[esi_52], "Attacks")

if ((*(edi_5 + 0x16f4) & 4) != 0)
    if (eax_42 == 0)
    label_4e1d7b:
        int32_t* eax_65 = sub_64bfd0(0x1f)
        eax_65[3] += 1
        
        if (*eax_65 == 0)
            sub_64be70(eax_65)
        
        int32_t* ecx_96 = *eax_65
        char const* const edx_34 = "AttackReaction"
        *eax_65 = *ecx_96
        eax_42 = &ecx_96[4]
        *ecx_96 = 0xfafafafa
        ecx_96[1] = 1
        ecx_96[2] = 0xe
        ecx_96[3] = 0xf
        var_22c = eax_42
        
        do
            ecx_96.b = *edx_34
            edx_34 = &edx_34[1]
            edx_34[eax_42 + 0xff7f8d4b] = ecx_96.b
        while (ecx_96.b != 0)
    else
        if (*eax_42 != 0)
            char* eax_63 = sub_63d4e0(&var_22c)
            int16_t* esi_61 = *(eax_63 + 8)
            sub_63d5e0(eax_63, &esi_61[1], &var_22c, 1)
            eax_42 = var_22c
            *(esi_61 + eax_42) = 0x202c
            *(esi_61 + eax_42 + 2) = 0
        
        if (eax_42 == 0 || *eax_42 == 0)
            goto label_4e1d7b
        
        char* eax_64 = sub_63d4e0(&var_22c)
        int32_t esi_62 = *(eax_64 + 8)
        sub_63d5e0(eax_64, esi_62 + 0xe, &var_22c, 1)
        eax_42 = var_22c
        __builtin_strncpy(&eax_42[esi_62], "AttackReaction", 0xf)

if ((*(edi_5 + 0x16f4) & 8) != 0)
    if (eax_42 == 0)
    label_4e1e7f:
        int32_t* eax_69 = sub_64bfd0(0x1d)
        eax_69[3] += 1
        
        if (*eax_69 == 0)
            sub_64be70(eax_69)
        
        int32_t* ecx_102 = *eax_69
        char const* const edx_37 = "ExtraActions"
        *eax_69 = *ecx_102
        eax_42 = &ecx_102[4]
        *ecx_102 = 0xfafafafa
        ecx_102[1] = 1
        ecx_102[2] = 0xc
        ecx_102[3] = 0xd
        var_22c = eax_42
        
        do
            ecx_102.b = *edx_37
            edx_37 = &edx_37[1]
            edx_37[eax_42 + 0xff7f8d3b] = ecx_102.b
        while (ecx_102.b != 0)
    else
        if (*eax_42 != 0)
            char* eax_67 = sub_63d4e0(&var_22c)
            int16_t* esi_66 = *(eax_67 + 8)
            sub_63d5e0(eax_67, &esi_66[1], &var_22c, 1)
            eax_42 = var_22c
            *(esi_66 + eax_42) = 0x202c
            *(esi_66 + eax_42 + 2) = 0
        
        if (eax_42 == 0 || *eax_42 == 0)
            goto label_4e1e7f
        
        char* eax_68 = sub_63d4e0(&var_22c)
        int32_t esi_67 = *(eax_68 + 8)
        sub_63d5e0(eax_68, esi_67 + 0xc, &var_22c, 1)
        eax_42 = var_22c
        __builtin_strncpy(&eax_42[esi_67], "ExtraActions", 0xd)

if ((*(edi_5 + 0x16f4) & 0x10) != 0)
    if (eax_42 == 0)
    label_4e1f8d:
        int32_t* eax_73 = sub_64bfd0(0x1b)
        eax_73[3] += 1
        
        if (*eax_73 == 0)
            sub_64be70(eax_73)
        
        int32_t* ecx_108 = *eax_73
        char const* const edx_40 = "ExtraCards"
        *eax_73 = *ecx_108
        eax_42 = &ecx_108[4]
        *ecx_108 = 0xfafafafa
        ecx_108[1] = 1
        ecx_108[2] = 0xa
        ecx_108[3] = 0xb
        var_22c = eax_42
        
        do
            ecx_108.b = *edx_40
            edx_40 = &edx_40[1]
            edx_40[eax_42 + 0xff7f8d2b] = ecx_108.b
        while (ecx_108.b != 0)
    else
        if (*eax_42 != 0)
            char* eax_71 = sub_63d4e0(&var_22c)
            int16_t* esi_71 = *(eax_71 + 8)
            sub_63d5e0(eax_71, &esi_71[1], &var_22c, 1)
            eax_42 = var_22c
            *(esi_71 + eax_42) = 0x202c
            *(esi_71 + eax_42 + 2) = 0
        
        if (eax_42 == 0 || *eax_42 == 0)
            goto label_4e1f8d
        
        char* eax_72 = sub_63d4e0(&var_22c)
        int32_t esi_72 = *(eax_72 + 8)
        sub_63d5e0(eax_72, esi_72 + 0xa, &var_22c, 1)
        eax_42 = var_22c
        __builtin_strncpy(&eax_42[esi_72], "ExtraCards", 0xb)

if ((*(edi_5 + 0x16f4) & 0x20) != 0)
    if (eax_42 == 0)
    label_4e2089:
        int32_t* eax_77 = sub_64bfd0(0x1a)
        eax_77[3] += 1
        
        if (*eax_77 == 0)
            sub_64be70(eax_77)
        
        int32_t* ecx_114 = *eax_77
        char const* const edx_43 = "ExtraBuys"
        *eax_77 = *ecx_114
        eax_42 = &ecx_114[4]
        *ecx_114 = 0xfafafafa
        ecx_114[1] = 1
        ecx_114[2] = 9
        ecx_114[3] = 0xa
        var_22c = eax_42
        
        do
            ecx_114.b = *edx_43
            edx_43 = &edx_43[1]
            edx_43[eax_42 + 0xff7f8d1f] = ecx_114.b
        while (ecx_114.b != 0)
    else
        if (*eax_42 != 0)
            char* eax_75 = sub_63d4e0(&var_22c)
            int16_t* esi_76 = *(eax_75 + 8)
            sub_63d5e0(eax_75, &esi_76[1], &var_22c, 1)
            eax_42 = var_22c
            *(esi_76 + eax_42) = 0x202c
            *(esi_76 + eax_42 + 2) = 0
        
        if (eax_42 == 0 || *eax_42 == 0)
            goto label_4e2089
        
        char* eax_76 = sub_63d4e0(&var_22c)
        int32_t esi_77 = *(eax_76 + 8)
        sub_63d5e0(eax_76, esi_77 + 9, &var_22c, 1)
        eax_42 = var_22c
        __builtin_strcpy(&eax_42[esi_77], "ExtraBuys")

if ((*(edi_5 + 0x16f4) & 0x40) != 0)
    if (eax_42 == 0)
    label_4e2182:
        int32_t* eax_81 = sub_64bfd0(0x19)
        eax_81[3] += 1
        
        if (*eax_81 == 0)
            sub_64be70(eax_81)
        
        int32_t* ecx_121 = *eax_81
        *eax_81 = *ecx_121
        *ecx_121 = 0xfafafafa
        ecx_121[1] = 1
        ecx_121[2] = 8
        ecx_121[3] = 9
        char const* const ecx_122 = "Trashing"
        var_22c = &ecx_121[4]
        int32_t eax_82
        
        do
            eax_82.b = *ecx_122
            ecx_122 = &ecx_122[1]
            ecx_122[ecx_121 + 0xff7f8d23] = eax_82.b
        while (eax_82.b != 0)
    else
        if (*eax_42 != 0)
            char* eax_79 = sub_63d4e0(&var_22c)
            int16_t* esi_81 = *(eax_79 + 8)
            sub_63d5e0(eax_79, &esi_81[1], &var_22c, 1)
            eax_42 = var_22c
            *(esi_81 + eax_42) = 0x202c
            *(esi_81 + eax_42 + 2) = 0
        
        if (eax_42 == 0 || *eax_42 == 0)
            goto label_4e2182
        
        char* eax_80 = sub_63d4e0(&var_22c)
        int32_t esi_82 = *(eax_80 + 8)
        sub_63d5e0(eax_80, esi_82 + 8, &var_22c, 1)
        __builtin_strncpy(&var_22c[esi_82], "Trashing", 9)

int32_t var_250 = 0
int32_t var_24c = 2
sub_63d720(&var_234, "Landscapes")
var_14_1.b = 6
int32_t* var_298_5 = &var_250
sub_4dfa10(&var_234, edi_5 + 0xbc8, &var_22c, &var_234)
var_14_1.b = 7

if (data_cf65bc != 0)
    char* eax_84 = var_234
    
    if (eax_84 != 0 && *eax_84 != 0)
        char* eax_85 = sub_63d4e0(&var_234)
        int32_t temp4_1 = *(eax_85 + 4)
        *(eax_85 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_85, *(eax_85 + 0xc) + 0x10)
            var_234 = &data_801800

var_14_1.b = 5
var_250 = 0
int32_t var_24c_1 = 2
sub_63d720(&var_234, "Events")
var_14_1.b = 8
int32_t* var_298_6 = &var_250
sub_4dfa10(&var_234, edi_5 + 0xbd0, &var_22c, &var_234)
var_14_1.b = 9

if (data_cf65bc != 0)
    char* eax_87 = var_234
    
    if (eax_87 != 0 && *eax_87 != 0)
        char* eax_88 = sub_63d4e0(&var_234)
        int32_t temp5_1 = *(eax_88 + 4)
        *(eax_88 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_88, *(eax_88 + 0xc) + 0x10)
            var_234 = &data_801800

var_14_1.b = 5
var_250 = 0
int32_t var_24c_2 = 2
sub_63d720(&var_234, "Landmarks")
var_14_1.b = 0xa
int32_t* var_298_7 = &var_250
sub_4dfa10(&var_234, edi_5 + 0xbd8, &var_22c, &var_234)
var_14_1.b = 0xb

if (data_cf65bc != 0)
    char* eax_90 = var_234
    
    if (eax_90 != 0 && *eax_90 != 0)
        char* eax_91 = sub_63d4e0(&var_234)
        int32_t temp6_1 = *(eax_91 + 4)
        *(eax_91 + 4) -= 1
        
        if (temp6_1 == 1)
            sub_64c080(eax_91, *(eax_91 + 0xc) + 0x10)
            var_234 = &data_801800

var_14_1.b = 5
var_250 = 0
int32_t var_24c_3 = 2
sub_63d720(&var_234, "Projects")
var_14_1.b = 0xc
int32_t* var_298_8 = &var_250
sub_4dfa10(&var_234, edi_5 + 0xbe0, &var_22c, &var_234)
var_14_1.b = 0xd

if (data_cf65bc != 0)
    char* eax_93 = var_234
    
    if (eax_93 != 0 && *eax_93 != 0)
        char* eax_94 = sub_63d4e0(&var_234)
        int32_t temp7_1 = *(eax_94 + 4)
        *(eax_94 + 4) -= 1
        
        if (temp7_1 == 1)
            sub_64c080(eax_94, *(eax_94 + 0xc) + 0x10)
            var_234 = &data_801800

var_14_1.b = 5
var_250 = 0
int32_t var_24c_4 = 1
sub_63d720(&var_234, "Ways")
var_14_1.b = 0xe
int32_t* var_298_9 = &var_250
sub_4dfa10(&var_234, edi_5 + 0xbe8, &var_22c, &var_234)
var_14_1.b = 0xf

if (data_cf65bc != 0)
    char* eax_96 = var_234
    
    if (eax_96 != 0 && *eax_96 != 0)
        char* eax_97 = sub_63d4e0(&var_234)
        int32_t temp8_1 = *(eax_97 + 4)
        *(eax_97 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_97, *(eax_97 + 0xc) + 0x10)
            var_234 = &data_801800

var_14_1.b = 5
var_250 = 0
int32_t var_24c_5 = 2
sub_63d720(&var_234, "Traits")
var_14_1.b = 0x10
int32_t* var_298_10 = &var_250
sub_4dfa10(&var_234, edi_5 + 0xbf0, &var_22c, &var_234)
var_14_1.b = 0x11

if (data_cf65bc != 0)
    char* eax_99 = var_234
    
    if (eax_99 != 0 && *eax_99 != 0)
        char* eax_100 = sub_63d4e0(&var_234)
        int32_t temp9_1 = *(eax_100 + 4)
        *(eax_100 + 4) -= 1
        
        if (temp9_1 == 1)
            sub_64c080(eax_100, *(eax_100 + 0xc) + 0x10)
            var_234 = &data_801800

var_14_1.b = 5
sub_63d720(&var_234, "Ally")
var_14_1.b = 0x12
char* esi_84 = var_234

if (*(edi_5 + 0xbf8) != 0)
    char* const eax_101 = var_22c
    
    if (eax_101 != 0 && *eax_101 != 0)
        char* eax_102 = sub_63d4e0(&var_22c)
        int32_t edi_4 = *(eax_102 + 8)
        sub_63d5e0(eax_102, edi_4 + 2, &var_22c, 1)
        char* const ecx_150 = var_22c
        *(ecx_150 + edi_4) = 0x202c
        ecx_150[edi_4 + 2] = 0
        edi_5 = var_244
    
    char* eax_103 = &data_801800
    
    if (esi_84 != 0)
        eax_103 = esi_84
    
    sub_63d960(&var_22c, eax_103)

var_14_1.b = 0x13

if (data_cf65bc != 0 && esi_84 != 0 && *esi_84 != 0)
    char* eax_104 = sub_63d4e0(&var_234)
    int32_t temp10_1 = *(eax_104 + 4)
    *(eax_104 + 4) -= 1
    
    if (temp10_1 == 1)
        sub_64c080(eax_104, *(eax_104 + 0xc) + 0x10)
        var_234 = &data_801800

var_14_1.b = 5
sub_63d720(&var_234, "Prophecy")
var_14_1.b = 0x14
char* esi_85 = var_234

if (*(edi_5 + 0xbf9) != 0)
    char* const eax_105 = var_22c
    
    if (eax_105 != 0 && *eax_105 != 0)
        char* eax_106 = sub_63d4e0(&var_22c)
        int32_t edi_6 = *(eax_106 + 8)
        sub_63d5e0(eax_106, edi_6 + 2, &var_22c, 1)
        char* const ecx_157 = var_22c
        *(ecx_157 + edi_6) = 0x202c
        ecx_157[edi_6 + 2] = 0
        edi_5 = var_244
    
    char* eax_107 = &data_801800
    
    if (esi_85 != 0)
        eax_107 = esi_85
    
    sub_63d960(&var_22c, eax_107)

var_14_1.b = 0x15

if (data_cf65bc != 0 && esi_85 != 0 && *esi_85 != 0)
    char* eax_108 = sub_63d4e0(&var_234)
    int32_t temp11_1 = *(eax_108 + 4)
    *(eax_108 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_108, *(eax_108 + 0xc) + 0x10)
        var_234 = &data_801800

char* const eax_109 = &data_801800
var_234 = &data_801800
char* const esi_86 = nullptr
var_14_1.b = 0x16
char* const var_248 = nullptr
void* edi_7 = edi_5 + 0xc04

while (*edi_7 != 0)
    if (eax_109 != 0 && *eax_109 != 0)
        char* eax_110 = sub_63d4e0(&var_234)
        int32_t esi_87 = *(eax_110 + 8)
        sub_63d5e0(eax_110, esi_87 + 2, &var_234, 1)
        char* ecx_163 = var_234
        *(ecx_163 + esi_87) = 0x202c
        ecx_163[esi_87 + 2] = 0
        esi_86 = var_248
    
    void* eax_111
    int32_t ecx_165
    eax_111, ecx_165 = sub_571b30(*edi_7, 0x18)
    int32_t var_298_13 = 0
    char* var_25c
    sub_4e3fa0(eax_111, eax_111, &var_25c, nullptr, ecx_165)
    var_260 |= 6
    var_14_1.b = 0x17
    char* const ecx_167 = &data_801800
    char* eax_112 = var_25c
    
    if (eax_112 != 0)
        ecx_167 = eax_112
    
    sub_63d960(&var_234, ecx_167)
    var_14_1.b = 0x18
    
    if (data_cf65bc != 0)
        char* eax_113 = var_25c
        
        if (eax_113 != 0 && *eax_113 != 0)
            char* eax_114 = sub_63d4e0(&var_25c)
            int32_t temp15_1 = *(eax_114 + 4)
            *(eax_114 + 4) -= 1
            
            if (temp15_1 == 1)
                sub_64c080(eax_114, *(eax_114 + 0xc) + 0x10)
                var_25c = &data_801800
    
    esi_86 = &esi_86[1]
    var_14_1.b = 0x16
    edi_7 += 4
    var_248 = esi_86
    
    if (esi_86 s>= 0x2bc)
        break
    
    eax_109 = var_234

char* const edi_8 = &data_801800
var_248 = &data_801800
var_14_1.b = 0x19
int32_t eax_116 = *(var_244 + 0x16f8)

if (eax_116 u> 4)
    sub_63b870(eax_116, &data_801800, "Halt", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0xfa0, "DomSetupConfigToString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const i_1

switch (eax_116)
    case 1
        sub_63d5e0(eax_116, 8, &var_248, 0)
        edi_8 = var_248
        __builtin_strncpy(edi_8, "Learning", 9)
    case 2
        sub_63d5e0(eax_116, 8, &var_248, 0)
        edi_8 = var_248
        __builtin_strncpy(edi_8, "Friendly", 9)
    case 3
        sub_63d5e0(eax_116, 6, &var_248, 0)
        edi_8 = var_248
        __builtin_strncpy(edi_8, "Strict", 7)
    case 4
        sub_63d5e0(eax_116, 6, &var_248, 0)
        edi_8 = var_248
        char* const i_3 = &data_801800
        i_1 = &data_801800
        __builtin_strncpy(edi_8, "Custom", 7)
        var_14_1.b = 0x1a
        int32_t eax_118 = *(var_244 + 0x1704)
        int32_t var_29c_9
        int32_t eax_120
        
        if (eax_118 != data_8de50c)
            if (eax_118 == 0)
                int32_t** ecx_177 = sub_64bfd0(0x19)
                ecx_177[3] += 1
                
                if (*ecx_177 == 0)
                    sub_64be70(ecx_177)
                
                int32_t* esi_89 = *ecx_177
                *ecx_177 = *esi_89
                char* ecx_178 = "LogRound"
                *esi_89 = 0xfafafafa
                esi_89[1] = 1
                esi_89[2] = 8
                esi_89[3] = 9
                i_3 = &esi_89[4]
                i_1 = i_3
                int32_t* eax_124
                
                do
                    eax_124.b = *ecx_178
                    ecx_178 = &ecx_178[1]
                    ecx_178[i_3 + 0xff7f8cd3] = eax_124.b
                while (eax_124.b != 0)
                goto label_4e2a19
            
            eax_120 = eax_118 - 1
            
            if (eax_118 != 1)
                char const* const var_298_15 = "DomSetupConfigToString"
                var_29c_9 = 0xf5f
            label_4e3912:
                sub_63b870(eax_120, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", var_29c_9, 
                    "DomSetupConfigToString")
                
                if (sub_63bc30() == 0)
                    sub_63bb00()
                    noreturn
                
                breakpoint
            
            int32_t* ecx_175 = sub_64bfd0(0x18)
            ecx_175[3] += 1
            
            if (*ecx_175 == 0)
                sub_64be70(ecx_175)
            
            int32_t* esi_88 = *ecx_175
            *ecx_175 = *esi_88
            char const* const ecx_176 = "LogFull"
            *esi_88 = 0xfafafafa
            esi_88[1] = 1
            esi_88[2] = 7
            esi_88[3] = 8
            i_3 = &esi_88[4]
            i_1 = i_3
            int32_t eax_122
            
            do
                eax_122.b = *ecx_176
                ecx_176 = &ecx_176[1]
                ecx_176[i_3 + 0xff7f8cc7] = eax_122.b
            while (eax_122.b != 0)
            goto label_4e2a19
        
    label_4e2a19:
        
        if (*(var_244 + 0x1708) != data_8de510)
            if (i_3 != 0 && *i_3 != 0)
                int16_t* eax_128 = *(sub_63d4e0(&i_1) + 8)
                sub_63d5e0(eax_128, &eax_128[1], &i_1, 1)
                i_3 = i_1
                *(eax_128 + i_3) = 0x202c
                *(eax_128 + i_3 + 2) = 0
            
            int32_t eax_130 = *(var_244 + 0x1708)
            
            if (eax_130 == 0)
                if (i_3 == 0 || *i_3 == 0)
                    int32_t** ecx_195 = sub_64bfd0(0x1c)
                    ecx_195[3] += 1
                    
                    if (*ecx_195 == 0)
                        sub_64be70(ecx_195)
                    
                    int32_t* esi_92 = *ecx_195
                    *ecx_195 = *esi_92
                    char* ecx_196 = "ScoreHidden"
                    *esi_92 = 0xfafafafa
                    esi_92[1] = 1
                    esi_92[2] = 0xb
                    esi_92[3] = 0xc
                    i_3 = &esi_92[4]
                    i_1 = i_3
                    int32_t* eax_144
                    
                    do
                        eax_144.b = *ecx_196
                        ecx_196 = &ecx_196[1]
                        ecx_196[i_3 + 0xff7f8cbf] = eax_144.b
                    while (eax_144.b != 0)
                else
                    int32_t eax_142 = *(sub_63d4e0(&i_1) + 8)
                    sub_63d5e0(eax_142, eax_142 + 0xb, &i_1, 1)
                    i_3 = i_1
                    __builtin_strcpy(&i_3[eax_142], "ScoreHidden")
                
                goto label_4e2d09
            
            if (eax_130 != 1)
                eax_120 = eax_130 - 2
                
                if (eax_130 != 2)
                    char const* const var_298_16 = "DomSetupConfigToString"
                    var_29c_9 = 0xf70
                    goto label_4e3912
                
                if (i_3 == 0 || *i_3 == 0)
                    int32_t** ecx_185 = sub_64bfd0(0x1d)
                    ecx_185[3] += 1
                    
                    if (*ecx_185 == 0)
                        sub_64be70(ecx_185)
                    
                    int32_t* esi_90 = *ecx_185
                    *ecx_185 = *esi_90
                    char* ecx_186 = "ScoreTracked"
                    *esi_90 = 0xfafafafa
                    esi_90[1] = 1
                    esi_90[2] = 0xc
                    esi_90[3] = 0xd
                    i_3 = &esi_90[4]
                    i_1 = i_3
                    int32_t* eax_136
                    
                    do
                        eax_136.b = *ecx_186
                        ecx_186 = &ecx_186[1]
                        ecx_186[i_3 + 0xff7f8ca7] = eax_136.b
                    while (eax_136.b != 0)
                else
                    int32_t eax_134 = *(sub_63d4e0(&i_1) + 8)
                    sub_63d5e0(eax_134, eax_134 + 0xc, &i_1, 1)
                    i_3 = i_1
                    __builtin_strncpy(&i_3[eax_134], "ScoreTracked", 0xd)
            else if (i_3 == 0 || *i_3 == 0)
                int32_t** ecx_190 = sub_64bfd0(0x1b)
                ecx_190[3] += 1
                
                if (*ecx_190 == 0)
                    sub_64be70(ecx_190)
                
                int32_t* esi_91 = *ecx_190
                *ecx_190 = *esi_91
                char* ecx_191 = "ScoreTotal"
                *esi_91 = 0xfafafafa
                esi_91[1] = 1
                esi_91[2] = 0xa
                esi_91[3] = 0xb
                i_3 = &esi_91[4]
                i_1 = i_3
                int32_t* eax_140
                
                do
                    eax_140.b = *ecx_191
                    ecx_191 = &ecx_191[1]
                    ecx_191[i_3 + 0xff7f8cb3] = eax_140.b
                while (eax_140.b != 0)
            else
                int32_t eax_138 = *(sub_63d4e0(&i_1) + 8)
                sub_63d5e0(eax_138, eax_138 + 0xa, &i_1, 1)
                i_3 = i_1
                __builtin_strncpy(&i_3[eax_138], "ScoreTotal", 0xb)
        
    label_4e2d09:
        
        if (*(var_244 + 0x16fc) != data_8de504)
            if (i_3 != 0 && *i_3 != 0)
                int16_t* eax_148 = *(sub_63d4e0(&i_1) + 8)
                sub_63d5e0(eax_148, &eax_148[1], &i_1, 1)
                i_3 = i_1
                *(eax_148 + i_3) = 0x202c
                *(eax_148 + i_3 + 2) = 0
            
            int32_t eax_150 = *(var_244 + 0x16fc)
            
            if (eax_150 == 0)
                if (i_3 == 0 || *i_3 == 0)
                    int32_t* ecx_213 = sub_64bfd0(0x1a)
                    ecx_213[3] += 1
                    
                    if (*ecx_213 == 0)
                        sub_64be70(ecx_213)
                    
                    int32_t* esi_95 = *ecx_213
                    *ecx_213 = *esi_95
                    char const* const ecx_214 = "CardsNone"
                    *esi_95 = 0xfafafafa
                    esi_95[1] = 1
                    esi_95[2] = 9
                    esi_95[3] = 0xa
                    i_3 = &esi_95[4]
                    i_1 = i_3
                    int32_t eax_164
                    
                    do
                        eax_164.b = *ecx_214
                        ecx_214 = &ecx_214[1]
                        ecx_214[i_3 + 0xff7f8c97] = eax_164.b
                    while (eax_164.b != 0)
                else
                    int32_t eax_162 = *(sub_63d4e0(&i_1) + 8)
                    sub_63d5e0(eax_162, eax_162 + 9, &i_1, 1)
                    i_3 = i_1
                    __builtin_strcpy(&i_3[eax_162], "CardsNone")
                
                goto label_4e2ff9
            
            if (eax_150 != 1)
                eax_120 = eax_150 - 2
                
                if (eax_150 != 2)
                    char const* const var_298_17 = "DomSetupConfigToString"
                    var_29c_9 = 0xf81
                    goto label_4e3912
                
                if (i_3 == 0 || *i_3 == 0)
                    int32_t* ecx_203 = sub_64bfd0(0x1d)
                    ecx_203[3] += 1
                    
                    if (*ecx_203 == 0)
                        sub_64be70(ecx_203)
                    
                    int32_t* esi_93 = *ecx_203
                    *ecx_203 = *esi_93
                    char const* const ecx_204 = "CardsVisible"
                    *esi_93 = 0xfafafafa
                    esi_93[1] = 1
                    esi_93[2] = 0xc
                    esi_93[3] = 0xd
                    i_3 = &esi_93[4]
                    i_1 = i_3
                    int32_t eax_156
                    
                    do
                        eax_156.b = *ecx_204
                        ecx_204 = &ecx_204[1]
                        ecx_204[i_3 + 0xff7f8c7b] = eax_156.b
                    while (eax_156.b != 0)
                else
                    int32_t eax_154 = *(sub_63d4e0(&i_1) + 8)
                    sub_63d5e0(eax_154, eax_154 + 0xc, &i_1, 1)
                    i_3 = i_1
                    __builtin_strncpy(&i_3[eax_154], "CardsVisible", 0xd)
            else if (i_3 == 0 || *i_3 == 0)
                int32_t* ecx_208 = sub_64bfd0(0x1d)
                ecx_208[3] += 1
                
                if (*ecx_208 == 0)
                    sub_64be70(ecx_208)
                
                int32_t* esi_94 = *ecx_208
                *ecx_208 = *esi_94
                char const* const ecx_209 = "CardsTracked"
                *esi_94 = 0xfafafafa
                esi_94[1] = 1
                esi_94[2] = 0xc
                esi_94[3] = 0xd
                i_3 = &esi_94[4]
                i_1 = i_3
                int32_t eax_160
                
                do
                    eax_160.b = *ecx_209
                    ecx_209 = &ecx_209[1]
                    ecx_209[i_3 + 0xff7f8c8b] = eax_160.b
                while (eax_160.b != 0)
            else
                int32_t eax_158 = *(sub_63d4e0(&i_1) + 8)
                sub_63d5e0(eax_158, eax_158 + 0xc, &i_1, 1)
                i_3 = i_1
                __builtin_strncpy(&i_3[eax_158], "CardsTracked", 0xd)
        
    label_4e2ff9:
        
        if (*(var_244 + 0x1700) != data_8de508)
            if (i_3 != 0 && *i_3 != 0)
                char* eax_167 = sub_63d4e0(&i_1)
                int32_t esi_96 = *(eax_167 + 8)
                sub_63d5e0(eax_167, esi_96 + 2, &i_1, 1)
                char* const i_2 = i_1
                *(i_2 + esi_96) = 0x202c
                i_2[esi_96 + 2] = 0
            
            eax_120 = *(var_244 + 0x1700)
            
            if (eax_120 u> 3)
                char const* const var_298_33 = "DomSetupConfigToString"
                var_29c_9 = 0xf95
                goto label_4e3912
            
            char* var_298_18
            
            switch (eax_120)
                case 0
                    var_298_18 = "UndosNone"
                case 1
                    var_298_18 = "UndosNoRed"
                case 2
                    var_298_18 = "UndosVerified"
                case 3
                    var_298_18 = "UndosUnlimited"
            
            sub_63d960(&i_1, var_298_18)
            i_3 = i_1
        
        if (i_3 != 0 && *i_3 != 0)
            char* const i_4 = i_3
            var_14_1.b = 0x1b
            char* ecx_218 = &data_801800
            char* var_268
            char* eax_170 = *sub_63df30(&var_268, ":%s")
            
            if (eax_170 != 0)
                ecx_218 = eax_170
            
            sub_63d960(&var_248, ecx_218)
            var_14_1.b = 0x1c
            
            if (data_cf65bc != 0)
                char* eax_171 = var_268
                
                if (eax_171 != 0 && *eax_171 != 0)
                    char* eax_172 = sub_63d4e0(&var_268)
                    int32_t temp25_1 = *(eax_172 + 4)
                    *(eax_172 + 4) -= 1
                    
                    if (temp25_1 == 1)
                        sub_64c080(eax_172, *(eax_172 + 0xc) + 0x10)
                        var_268 = &data_801800
            
            edi_8 = var_248
        
        var_14_1.b = 0x1d
        
        if (data_cf65bc != 0 && i_3 != 0 && *i_3 != 0)
            char* eax_173 = sub_63d4e0(&i_1)
            int32_t temp22_1 = *(eax_173 + 4)
            *(eax_173 + 4) -= 1
            
            if (temp22_1 == 1)
                sub_64c080(eax_173, *(eax_173 + 0xc) + 0x10)

char* const var_24c_6 = &data_801800
var_14_1.b = 0x1e
char** esi_97 = arg3
*esi_97 = &data_801800
int32_t var_260_1 = var_260 | 1
char* const eax_176 = var_238

if (eax_176 != 0 && *eax_176 != 0)
    char* const var_298_20 = eax_176
    var_14_1.b = 0x1f
    char* ecx_224 = &data_801800
    char* const var_26c
    char* eax_178 = *sub_63df30(&var_26c, "-e %s")
    
    if (eax_178 != 0)
        ecx_224 = eax_178
    
    sub_63d960(esi_97, ecx_224)
    var_14_1.b = 0x20
    
    if (data_cf65bc != 0)
        char* eax_179 = var_26c
        
        if (eax_179 != 0 && *eax_179 != 0)
            char* eax_180 = sub_63d4e0(&var_26c)
            int32_t temp21_1 = *(eax_180 + 4)
            *(eax_180 + 4) -= 1
            
            if (temp21_1 == 1)
                sub_64c080(eax_180, *(eax_180 + 0xc) + 0x10)
                var_26c = &data_801800
    
    var_14_1.b = 0x1e

char* eax_184 = var_258

if (eax_184 != 0 && *eax_184 != 0)
    char* ecx_228 = *esi_97
    
    if (ecx_228 != 0 && *ecx_228 != 0)
        char* eax_181 = sub_63d4e0(esi_97)
        int16_t* esi_98 = *(eax_181 + 8)
        sub_63d5e0(eax_181, esi_98 + 1, arg3, 1)
        *(esi_98 + *arg3) = 0x20
        eax_184 = var_258
        esi_97 = arg3
    
    char* ecx_231 = &data_801800
    
    if (eax_184 != 0)
        ecx_231 = eax_184
    
    char* var_298_22 = ecx_231
    var_14_1.b = 0x21
    char* ecx_232 = &data_801800
    char* const var_270
    char* eax_186 = *sub_63df30(&var_270, "-k %s")
    
    if (eax_186 != 0)
        ecx_232 = eax_186
    
    sub_63d960(esi_97, ecx_232)
    var_14_1.b = 0x22
    
    if (data_cf65bc != 0)
        char* eax_187 = var_270
        
        if (eax_187 != 0 && *eax_187 != 0)
            char* eax_188 = sub_63d4e0(&var_270)
            int32_t temp24_1 = *(eax_188 + 4)
            *(eax_188 + 4) -= 1
            
            if (temp24_1 == 1)
                sub_64c080(eax_188, *(eax_188 + 0xc) + 0x10)
                var_270 = &data_801800
    
    var_14_1.b = 0x1e

char* const esi_99 = var_22c

if (esi_99 != 0 && *esi_99 != 0)
    char* eax_189 = *arg3
    
    if (eax_189 != 0 && *eax_189 != 0)
        int16_t* eax_191 = *(sub_63d4e0(arg3) + 8)
        sub_63d5e0(eax_191, eax_191 + 1, arg3, 1)
        *(eax_191 + *arg3) = 0x20
    
    char* const var_298_24 = esi_99
    var_14_1.b = 0x23
    char* ecx_239 = &data_801800
    char* const var_274
    char* eax_195 = *sub_63df30(&var_274, "-m %s")
    
    if (eax_195 != 0)
        ecx_239 = eax_195
    
    sub_63d960(arg3, ecx_239)
    var_14_1.b = 0x24
    
    if (data_cf65bc != 0)
        char* eax_196 = var_274
        
        if (eax_196 != 0 && *eax_196 != 0)
            char* eax_197 = sub_63d4e0(&var_274)
            int32_t temp23_1 = *(eax_197 + 4)
            *(eax_197 + 4) -= 1
            
            if (temp23_1 == 1)
                sub_64c080(eax_197, *(eax_197 + 0xc) + 0x10)
                var_274 = &data_801800
    
    var_14_1.b = 0x1e

char* eax_202 = var_234

if (eax_202 != 0 && *eax_202 != 0)
    char* ecx_243 = *arg3
    
    if (ecx_243 != 0 && *ecx_243 != 0)
        int16_t* eax_199 = *(sub_63d4e0(arg3) + 8)
        sub_63d5e0(eax_199, eax_199 + 1, arg3, 1)
        *(eax_199 + *arg3) = 0x20
        eax_202 = var_234
    
    char* var_298_26 = eax_202
    var_14_1.b = 0x25
    char* ecx_247 = &data_801800
    char* const var_278
    char* eax_204 = *sub_63df30(&var_278, "-b %s")
    
    if (eax_204 != 0)
        ecx_247 = eax_204
    
    sub_63d960(arg3, ecx_247)
    var_14_1.b = 0x26
    
    if (data_cf65bc != 0)
        char* eax_205 = var_278
        
        if (eax_205 != 0 && *eax_205 != 0)
            char* eax_206 = sub_63d4e0(&var_278)
            int32_t temp26_1 = *(eax_206 + 4)
            *(eax_206 + 4) -= 1
            
            if (temp26_1 == 1)
                sub_64c080(eax_206, *(eax_206 + 0xc) + 0x10)
                var_278 = &data_801800
    
    var_14_1.b = 0x1e

if (edi_8 != 0 && *edi_8 != 0)
    char* eax_207 = *arg3
    
    if (eax_207 != 0 && *eax_207 != 0)
        int16_t* eax_209 = *(sub_63d4e0(arg3) + 8)
        sub_63d5e0(eax_209, eax_209 + 1, arg3, 1)
        *(eax_209 + *arg3) = 0x20
    
    char* const var_298_28 = edi_8
    var_14_1.b = 0x27
    char* ecx_254 = &data_801800
    char* const var_27c
    char* eax_213 = *sub_63df30(&var_27c, "-r %s")
    
    if (eax_213 != 0)
        ecx_254 = eax_213
    
    sub_63d960(arg3, ecx_254)
    var_14_1.b = 0x28
    
    if (data_cf65bc != 0)
        char* eax_214 = var_27c
        
        if (eax_214 != 0 && *eax_214 != 0)
            char* eax_215 = sub_63d4e0(&var_27c)
            int32_t temp27_1 = *(eax_215 + 4)
            *(eax_215 + 4) -= 1
            
            if (temp27_1 == 1)
                sub_64c080(eax_215, *(eax_215 + 0xc) + 0x10)
                var_27c = &data_801800
    
    var_14_1.b = 0x1e

void var_228
memset(&var_228, 0, 0x200)
void* i = nullptr
i_1 = nullptr
void* ecx_259 = var_244 + 0x1c4

do
    int32_t edx_120 = i << 2
    
    if (*(ecx_259 - 4) == 1)
        *(&var_228 + edx_120) = *ecx_259
    
    void var_224
    
    if (*(ecx_259 + 0xc) == 1)
        *(&var_224 + edx_120) = *(ecx_259 + 0x10)
    void var_220
    
    if (*(ecx_259 + 0x1c) == 1)
        *(&var_220 + edx_120) = *(ecx_259 + 0x20)
    int32_t var_21c[0x7e]
    
    if (*(ecx_259 + 0x2c) == 1)
        var_21c[i] = *(ecx_259 + 0x30)
    ecx_259 += 0x40
    i = &i_1[4]
    i_1 = i
while (i s< 0x80)

char* var_254
sub_4e5370(&var_228, var_244 + 0x1710, &var_254, &var_228)
var_14_1.b = 0x2b
char* eax_222 = var_254
char* const esi_100 = var_22c

if (eax_222 != 0 && *eax_222 != 0)
    char* eax_223 = *arg3
    
    if (eax_223 != 0 && *eax_223 != 0)
        int16_t* eax_225 = *(sub_63d4e0(arg3) + 8)
        sub_63d5e0(eax_225, eax_225 + 1, arg3, 1)
        *(eax_225 + *arg3) = 0x20
    
    char* eax_228 = var_254
    char* ecx_264 = &data_801800
    
    if (eax_228 != 0)
        ecx_264 = eax_228
    
    char* var_298_31 = ecx_264
    var_14_1.b = 0x2c
    char* ecx_265 = &data_801800
    char* const var_280
    char* eax_230 = *sub_63df30(&var_280, "-x %s")
    
    if (eax_230 != 0)
        ecx_265 = eax_230
    
    sub_63d960(arg3, ecx_265)
    var_14_1.b = 0x2d
    
    if (data_cf65bc != 0)
        char* eax_231 = var_280
        
        if (eax_231 != 0 && *eax_231 != 0)
            char* eax_232 = sub_63d4e0(&var_280)
            int32_t temp33_1 = *(eax_232 + 4)
            *(eax_232 + 4) -= 1
            
            if (temp33_1 == 1)
                sub_64c080(eax_232, *(eax_232 + 0xc) + 0x10)
                var_280 = &data_801800

var_14_1.b = 0x2e

if (data_cf65bc != 0)
    char* eax_233 = var_254
    
    if (eax_233 != 0 && *eax_233 != 0)
        char* eax_234 = sub_63d4e0(&var_254)
        int32_t temp28_1 = *(eax_234 + 4)
        *(eax_234 + 4) -= 1
        
        if (temp28_1 == 1)
            sub_64c080(eax_234, *(eax_234 + 0xc) + 0x10)
            var_254 = &data_801800

var_14_1.b = 0x30

if (data_cf65bc != 0 && edi_8 != 0 && *edi_8 != 0)
    char* eax_235 = sub_63d4e0(&var_248)
    int32_t temp29_1 = *(eax_235 + 4)
    *(eax_235 + 4) -= 1
    
    if (temp29_1 == 1)
        sub_64c080(eax_235, *(eax_235 + 0xc) + 0x10)

var_14_1.b = 0x31

if (data_cf65bc != 0)
    char* eax_236 = var_234
    
    if (eax_236 != 0 && *eax_236 != 0)
        char* eax_237 = sub_63d4e0(&var_234)
        int32_t temp30_1 = *(eax_237 + 4)
        *(eax_237 + 4) -= 1
        
        if (temp30_1 == 1)
            sub_64c080(eax_237, *(eax_237 + 0xc) + 0x10)

var_14_1.b = 0x32

if (data_cf65bc != 0 && esi_100 != 0 && *esi_100 != 0)
    char* eax_238 = sub_63d4e0(&var_22c)
    int32_t temp31_1 = *(eax_238 + 4)
    *(eax_238 + 4) -= 1
    
    if (temp31_1 == 1)
        sub_64c080(eax_238, *(eax_238 + 0xc) + 0x10)

var_14_1.b = 0x33

if (data_cf65bc != 0)
    char* eax_239 = var_258
    
    if (eax_239 != 0 && *eax_239 != 0)
        char* eax_240 = sub_63d4e0(&var_258)
        int32_t temp32_1 = *(eax_240 + 4)
        *(eax_240 + 4) -= 1
        
        if (temp32_1 == 1)
            sub_64c080(eax_240, *(eax_240 + 0xc) + 0x10)
            var_258 = &data_801800

int32_t var_14_2 = 0x34

if (data_cf65bc != 0)
    char* const eax_241 = var_238
    
    if (eax_241 != 0 && *eax_241 != 0)
        char* eax_242 = sub_63d4e0(&var_238)
        int32_t temp34_1 = *(eax_242 + 4)
        *(eax_242 + 4) -= 1
        
        if (temp34_1 == 1)
            sub_64c080(eax_242, *(eax_242 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg3)
return arg3
