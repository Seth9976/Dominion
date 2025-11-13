// 函数: sub_51a250
// 地址: 0x51a250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?unlink_target@?$_SyncOriginator@I@details@Concurrency@@UAEXPAV?$ITarget@I@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
*arg1 = &data_801800
char* arg_4
int32_t eax_5 = arg_4 << 0xb
int32_t ecx = 0
void* edx_1 = arg2 + 0xc + eax_5
int32_t var_34_1 = 1
void* var_1c = edx_1
int32_t* eax_7 = eax_5 + 0x58c + arg2
int32_t var_20 = 0
int32_t* var_2c = eax_7
char* var_28
char* var_24
char* const var_14
void* ebx_2
char** edi_2

while (true)
    char* const esi_1 = &data_801800
    var_14 = &data_801800
    int32_t var_8_1 = 1
    int32_t ebx_1 = 0
    int32_t* edi_1 = eax_7
    
    while (*edi_1 != 0)
        if (edi_1[1] == *(edx_1 + (ecx << 2)))
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_9 = sub_63d4e0(&var_14)
                int32_t esi_2 = *(eax_9 + 8)
                sub_63d5e0(eax_9, esi_2 + 2, &var_14, 1)
                char* const ecx_3 = var_14
                *(ecx_3 + esi_2) = 0x202c
                ecx_3[esi_2 + 2] = 0
            
            int32_t ecx_4 = *edi_1
            char const* const eax_10
            
            if (ecx_4 != 0)
                eax_10 = *(sub_516f30(ecx_4) + 4)
            else
                eax_10 = "none"
            
            sub_63d960(&var_14, eax_10)
            
            if (*edi_1 == 0xdc6)
                char* const eax_12 = var_14
                
                if (eax_12 == 0 || *eax_12 == 0)
                    int32_t* eax_15 = sub_64bfd0(0x12)
                    eax_15[3] += 1
                    
                    if (*eax_15 == 0)
                        sub_64be70(eax_15)
                    
                    int32_t* ecx_9 = *eax_15
                    *eax_15 = *ecx_9
                    void* const eax_17 = &data_816680
                    var_14 = &ecx_9[4]
                    int32_t edx_5 = ecx_9 - "CampaignDesc"
                    *ecx_9 = 0xfafafafa
                    ecx_9[1] = 1
                    ecx_9[2] = 1
                    ecx_9[3] = 2
                    
                    do
                        ecx_9.b = *eax_17
                        eax_17 += 1
                        *(eax_17 + edx_5 - 1) = ecx_9.b
                    while (ecx_9.b != 0)
                else
                    char* eax_13 = sub_63d4e0(&var_14)
                    int16_t* esi_3 = *(eax_13 + 8)
                    sub_63d5e0(eax_13, esi_3 + 1, &var_14, 1)
                    *(esi_3 + var_14) = 0x3a
                
                sub_63d960(&var_14, *(sub_571b30(edi_1[4], 0x17) + 0x58))
            
            edx_1 = var_1c
            ecx = var_20
            esi_1 = var_14
        
        ebx_1 += 1
        edi_1 = &edi_1[5]
        
        if (ebx_1 s>= 0x4c)
            break
    
    if (esi_1 == 0 || *esi_1 == 0)
        ebx_2 = var_1c
        int32_t var_50_5 = *(sub_571b30(*(ebx_2 + (ecx << 2)), 0x17) + 0x58)
        var_8_1.b = 2
        char* ecx_18 = &data_801800
        char* eax_26 = *sub_63df30(&var_28, "%s{br}")
        edi_2 = arg1
        
        if (eax_26 != 0)
            ecx_18 = eax_26
        
        sub_63d960(edi_2, ecx_18)
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            char* eax_27 = var_28
            
            if (eax_27 != 0 && *eax_27 != 0)
                char* eax_28 = sub_63d4e0(&var_28)
                int32_t temp0_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
                    var_28 = &data_801800
    else
        ebx_2 = var_1c
        char* const var_50_3 = esi_1
        int32_t var_54_1 = *(sub_571b30(*(ebx_2 + (ecx << 2)), 0x17) + 0x58)
        var_8_1.b = 4
        char* ecx_13 = &data_801800
        char* eax_21 = *sub_63df30(&var_24, "%s (%s){br}")
        edi_2 = arg1
        
        if (eax_21 != 0)
            ecx_13 = eax_21
        
        sub_63d960(edi_2, ecx_13)
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            char* eax_22 = var_24
            
            if (eax_22 != 0 && *eax_22 != 0)
                char* eax_23 = sub_63d4e0(&var_24)
                int32_t temp2_1 = *(eax_23 + 4)
                *(eax_23 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                    var_24 = &data_801800
    
    int32_t var_8_2 = 6
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_29 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_29 + 4)
        *(eax_29 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
            var_14 = &data_801800
    
    ecx = var_20 + 1
    var_8_2.b = 0
    eax_7 = var_2c
    var_20 = ecx
    
    if (ecx s>= 0xa)
        break
    
    edx_1 = var_1c

int32_t* ecx_25 = ebx_2 + 0x28
int32_t* eax_32 = (arg_4 << 0xb) + arg2 + 0x58c
var_2c = nullptr
int32_t* var_38 = eax_32
int32_t* var_20_1 = ecx_25

while (*ecx_25 != 0)
    char* const esi_5 = &data_801800
    var_14 = &data_801800
    int32_t var_8_3 = 7
    int32_t ebx_3 = 0
    int32_t* edi_3 = eax_32
    
    while (*edi_3 != 0)
        if (edi_3[1] == *ecx_25)
            if (esi_5 != 0 && *esi_5 != 0)
                char* eax_34 = sub_63d4e0(&var_14)
                int32_t esi_6 = *(eax_34 + 8)
                sub_63d5e0(eax_34, esi_6 + 2, &var_14, 1)
                char* const ecx_28 = var_14
                *(ecx_28 + esi_6) = 0x202c
                ecx_28[esi_6 + 2] = 0
            
            int32_t ecx_29 = *edi_3
            char const* const eax_35
            
            if (ecx_29 != 0)
                eax_35 = *(sub_516f30(ecx_29) + 4)
            else
                eax_35 = "none"
            
            sub_63d960(&var_14, eax_35)
            esi_5 = var_14
            ecx_25 = var_20_1
        
        ebx_3 += 1
        edi_3 = &edi_3[5]
        
        if (ebx_3 s>= 0x4c)
            break
    
    int32_t ebx_4 = 0
    void* edi_4 = &ecx_25[1]
    
    while (*edi_4 != 0)
        if (esi_5 != 0 && *esi_5 != 0)
            char* eax_37 = sub_63d4e0(&var_14)
            int32_t esi_7 = *(eax_37 + 8)
            sub_63d5e0(eax_37, esi_7 + 2, &var_14, 1)
            char* const ecx_33 = var_14
            *(ecx_33 + esi_7) = 0x202c
            ecx_33[esi_7 + 2] = 0
        
        sub_63d960(&var_14, *(sub_571b30(*edi_4, 0x17) + 0x58))
        esi_5 = var_14
        ebx_4 += 1
        edi_4 += 4
        
        if (ebx_4 s>= 0xe)
            break
    
    if (esi_5 == 0 || *esi_5 == 0)
        int32_t var_50_11 = *(sub_571b30(*var_20_1, 0x17) + 0x58)
        var_8_3.b = 8
        char* ecx_44 = &data_801800
        char* eax_46 = *sub_63df30(&var_24, "%s{br}")
        edi_2 = arg1
        
        if (eax_46 != 0)
            ecx_44 = eax_46
        
        sub_63d960(edi_2, ecx_44)
        var_8_3.b = 9
        
        if (data_cf65bc != 0)
            char* eax_47 = var_24
            
            if (eax_47 != 0 && *eax_47 != 0)
                char* eax_48 = sub_63d4e0(&var_24)
                int32_t temp4_1 = *(eax_48 + 4)
                *(eax_48 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
                    var_24 = &data_801800
    else
        char* const var_50_9 = esi_5
        int32_t var_54_2 = *(sub_571b30(*var_20_1, 0x17) + 0x58)
        var_8_3.b = 0xa
        char* ecx_38 = &data_801800
        char* eax_41 = *sub_63df30(&var_28, "%s (%s){br}")
        edi_2 = arg1
        
        if (eax_41 != 0)
            ecx_38 = eax_41
        
        sub_63d960(edi_2, ecx_38)
        var_8_3.b = 0xb
        
        if (data_cf65bc != 0)
            char* eax_42 = var_28
            
            if (eax_42 != 0 && *eax_42 != 0)
                char* eax_43 = sub_63d4e0(&var_28)
                int32_t temp6_1 = *(eax_43 + 4)
                *(eax_43 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                    var_28 = &data_801800
    
    int32_t var_8_4 = 0xc
    
    if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
        char* eax_49 = sub_63d4e0(&var_14)
        int32_t temp5_1 = *(eax_49 + 4)
        *(eax_49 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
            var_14 = &data_801800
    
    eax_32 = var_38
    ecx_25 = &var_20_1[0xf]
    var_8_4.b = 0
    void* edx_23 = var_2c + 1
    var_20_1 = ecx_25
    var_2c = edx_23
    
    if (edx_23 s>= 4)
        break

char* eax_50 = *edi_2

if (eax_50 == 0 || *eax_50 == 0)
    int32_t* eax_52 = sub_64bfd0(0x15)
    eax_52[3] += 1
    
    if (*eax_52 == 0)
        sub_64be70(eax_52)
    
    int32_t* ecx_55 = *eax_52
    *eax_52 = *ecx_55
    *ecx_55 = 0xfafafafa
    ecx_55[1] = 1
    ecx_55[2] = 4
    ecx_55[3] = 5
    char const* const ecx_56 = "{br}"
    *edi_2 = &ecx_55[4]
    int32_t eax_53
    
    do
        eax_53.b = *ecx_56
        ecx_56 = &ecx_56[1]
        ecx_56[ecx_55 + 0xff7e997f] = eax_53.b
    while (eax_53.b != 0)
else
    char* eax_51 = sub_63d4e0(edi_2)
    int32_t esi_8 = *(eax_51 + 8)
    sub_63d5e0(eax_51, esi_8 + 4, edi_2, 1)
    __builtin_strncpy(&(*edi_2)[esi_8], "{br}", 5)

char* esi_10 = arg_4
int32_t ebx_5 = 0
void* ecx_59 = (esi_10 << 0xb) + arg2
char* const edx_29 = (esi_10 << 0xb) + arg2
void* var_38_1 = ecx_59
void* edi_6 = arg2 + (esi_10 << 0xb)
var_14 = edx_29
int32_t* esi_11 = edi_6 + 0x58c

while (*esi_11 != 0)
    int32_t eax_56 = 0
    
    while (*(var_1c + (eax_56 << 2)) != *(ecx_59 + ebx_5 + 0x590))
        eax_56 += 1
        
        if (eax_56 s>= 0xa)
            int32_t i = *(edx_29 + ebx_5 + 0x590)
            int32_t ecx_61 = 0
            void* eax_58 = var_1c + 0x28
            
            while (i == 0 || *eax_58 != i)
                ecx_61 += 1
                eax_58 += 0x3c
                
                if (ecx_61 s>= 4)
                    if (esi_11[4] != 0)
                        sub_63b870(eax_58, &data_801800, "Halt", 
                            "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x2861, 
                            "DumpMissionCards")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    int32_t eax_59 = *esi_11
                    int32_t var_8_6
                    
                    if (eax_59 != 0x17d8)
                        int32_t ecx_68 = esi_11[1]
                        
                        if (ecx_68 == 0)
                            int32_t var_50_17 = *(sub_516f30(eax_59) + 4)
                            int32_t var_8_8 = 0x11
                            char* ecx_75 = &data_801800
                            char* eax_76 = *sub_63df30(&var_2c, "%s{br}")
                            
                            if (eax_76 != 0)
                                ecx_75 = eax_76
                            
                            sub_63d960(arg1, ecx_75)
                            var_8_6 = 0x12
                            
                            if (data_cf65bc != 0)
                                int32_t* eax_77 = var_2c
                                
                                if (eax_77 != 0 && *eax_77 != 0)
                                    char* eax_78 = sub_63d4e0(&var_2c)
                                    int32_t temp8_1 = *(eax_78 + 4)
                                    *(eax_78 + 4) -= 1
                                    
                                    if (temp8_1 == 1)
                                        sub_64c080(eax_78, *(eax_78 + 0xc) + 0x10)
                                        var_2c = &data_801800
                        else
                            void* eax_67 = sub_571b30(ecx_68, 0x17)
                            int32_t ecx_69 = *esi_11
                            int32_t edi_10 = *(eax_67 + 0x58)
                            char const* const eax_68
                            
                            if (ecx_69 != 0)
                                eax_68 = *(sub_516f30(ecx_69) + 4)
                            else
                                eax_68 = "none"
                            
                            int32_t var_50_15 = edi_10
                            char const* const var_54_4 = eax_68
                            int32_t var_8_7 = 0xf
                            char* ecx_70 = &data_801800
                            char* eax_71 = *sub_63df30(&var_24, "%s (%s){br}")
                            
                            if (eax_71 != 0)
                                ecx_70 = eax_71
                            
                            sub_63d960(arg1, ecx_70)
                            var_8_6 = 0x10
                            
                            if (data_cf65bc != 0)
                                char* eax_72 = var_24
                                
                                if (eax_72 != 0 && *eax_72 != 0)
                                    char* eax_73 = sub_63d4e0(&var_24)
                                    int32_t temp10_1 = *(eax_73 + 4)
                                    *(eax_73 + 4) -= 1
                                    
                                    if (temp10_1 == 1)
                                        sub_64c080(eax_73, *(eax_73 + 0xc) + 0x10)
                                        var_24 = &data_801800
                    else
                        void* eax_60 = sub_571b30(*(edi_6 + 0x2cc), 0x17)
                        int32_t ecx_63 = *esi_11
                        int32_t edi_9 = *(eax_60 + 0x58)
                        char const* const eax_61
                        
                        if (ecx_63 != 0)
                            eax_61 = *(sub_516f30(ecx_63) + 4)
                        else
                            eax_61 = "none"
                        
                        int32_t var_50_13 = edi_9
                        char const* const var_54_3 = eax_61
                        int32_t var_8_5 = 0xd
                        char* ecx_64 = &data_801800
                        char* eax_64 = *sub_63df30(&var_28, "%s (%s){br}")
                        
                        if (eax_64 != 0)
                            ecx_64 = eax_64
                        
                        sub_63d960(arg1, ecx_64)
                        var_8_6 = 0xe
                        
                        if (data_cf65bc != 0)
                            char* eax_65 = var_28
                            
                            if (eax_65 != 0 && *eax_65 != 0)
                                char* eax_66 = sub_63d4e0(&var_28)
                                int32_t temp9_1 = *(eax_66 + 4)
                                *(eax_66 + 4) -= 1
                                
                                if (temp9_1 == 1)
                                    sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)
                                    var_28 = &data_801800
                    
                    var_8_6.b = 0
                    break
            
            edx_29 = var_14
            break
    
    ebx_5 += 0x14
    esi_11 = &esi_11[5]
    
    if (ebx_5 s>= 0x5f0)
        break
    
    ecx_59 = var_38_1

char* ecx_79 = arg_4

if (*((ecx_79 << 0xb) + arg2 + 0x540) != 0)
    int32_t i_1 = *((ecx_79 << 0xb) + arg2 + 0x544)
    int32_t* eax_82 = *(data_1597ddc + (((i_1 s>> 4 | i_1) & data_1597de0) << 2))
    char const* const eax_83
    
    if (eax_82 == 0)
    label_51ab54:
        eax_83 = "none"
    else
        while (i_1 != *eax_82)
            eax_82 = eax_82[2]
            
            if (eax_82 == 0)
                goto label_51ab54_1
        
        if (eax_82 == 0xfffffffc)
        label_51ab54_1:
            eax_83 = "none"
        else
            eax_83 = *(eax_82[1] + 4)
    
    char const* const var_50_19 = eax_83
    int32_t var_8_9 = 0x13
    char* ecx_85 = &data_801800
    char* eax_85 = *sub_63df30(&arg_4, "bonus_theme %s{br}")
    
    if (eax_85 != 0)
        ecx_85 = eax_85
    
    sub_63d960(arg1, ecx_85)
    int32_t var_8_10 = 0x14
    
    if (data_cf65bc != 0)
        char* eax_86 = arg_4
        
        if (eax_86 != 0 && *eax_86 != 0)
            char* eax_87 = sub_63d4e0(&arg_4)
            int32_t temp7_1 = *(eax_87 + 4)
            *(eax_87 + 4) -= 1
            
            if (temp7_1 == 1)
                sub_64c080(eax_87, *(eax_87 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
