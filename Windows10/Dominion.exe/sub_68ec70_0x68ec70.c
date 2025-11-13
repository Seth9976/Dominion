// 函数: sub_68ec70
// 地址: 0x68ec70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76e716
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_24 = arg3
int32_t var_18 = 0
char* const var_14 = &data_801800
int32_t var_8_1 = 1
char* eax_3 = *arg2

if (eax_3 != 0 && *eax_3 != 0)
    eax_3 = sub_63d4e0(arg2)
    
    if (*(eax_3 + 8) s> 0)
        char* var_20
        bool cond:9_1
        
        if (sub_68cbb0(&var_14, "nis", arg2, &var_14) != 0)
        label_68f3eb:
            sub_63d720(&var_20, U"es")
            var_8_1.b = 3
            char* eax_77 = *arg2
            *arg3 = eax_77
            
            if (eax_77 != 0 && *eax_77 != 0)
                char* eax_78 = sub_63d4e0(arg3)
                *(eax_78 + 4) += 1
            
            char* esi_9 = var_20
            char* eax_79 = &data_801800
            int32_t var_18_19 = 2
            
            if (esi_9 != 0)
                eax_79 = esi_9
            
            sub_63d960(arg3, eax_79)
            int32_t var_8_20 = 2
            int32_t var_18_20 = 1
            var_8_20.b = 4
            
            if (data_cf65bc != 0 && esi_9 != 0 && *esi_9 != 0)
                char* eax_80 = sub_63d4e0(&var_20)
                int32_t temp0_1 = *(eax_80 + 4)
                *(eax_80 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_80, *(eax_80 + 0xc) + 0x10)
            
            int32_t var_8_21 = 5
        label_68f46d:
            
            if (data_cf65bc != 0)
                char* const eax_81 = var_14
                
                if (eax_81 != 0)
                    cond:9_1 = *eax_81 == 0
                label_68f480:
                    
                    if (not(cond:9_1))
                        char* eax_82 = sub_63d4e0(&var_14)
                        int32_t temp1_1 = *(eax_82 + 4)
                        *(eax_82 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_82, *(eax_82 + 0xc) + 0x10)
        else
            if (sub_68cbb0(&var_14, "ling", arg2, &var_14) != 0)
                goto label_68f3eb
            
            if (sub_68cbb0(&var_14, "ich", arg2, &var_14) != 0)
                goto label_68f3eb
            
            if (sub_68cbb0(&var_14, "ig", arg2, &var_14) != 0)
                goto label_68f3eb
            
            if (sub_68cbb0(&var_14, "tum", arg2, &var_14) != 0)
                sub_63d720(&var_20, "er")
                var_8_1.b = 6
                var_8_1.b = 8
                char* var_1c
                char* eax_15 = *sub_68e9e0(&var_1c, arg2)
                *arg3 = eax_15
                
                if (eax_15 != 0 && *eax_15 != 0)
                    char* eax_16 = sub_63d4e0(arg3)
                    *(eax_16 + 4) += 1
                
                char* esi_1 = var_20
                char* const eax_17 = &data_801800
                int32_t var_18_1 = 4
                
                if (esi_1 != 0)
                    eax_17 = esi_1
                
                sub_63d960(arg3, eax_17)
                int32_t var_8_2 = 7
                int32_t var_18_2 = 1
                var_8_2.b = 9
                
                if (data_cf65bc != 0)
                    char* eax_18 = var_1c
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_63d4e0(&var_1c)
                        int32_t temp2_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                            var_1c = &data_801800
                
                var_8_2.b = 0xa
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_20 = sub_63d4e0(&var_20)
                    int32_t temp3_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                
                int32_t var_8_3 = 0xb
                goto label_68f46d
            
            if (sub_68cbb0(&var_14, "en", arg2, &var_14) != 0)
            label_68f3b9:
                char* eax_75 = *arg2
                *arg3 = eax_75
                
                if (eax_75 != 0 && *eax_75 != 0)
                    char* eax_76 = sub_63d4e0(arg3)
                    *(eax_76 + 4) += 1
                
                int32_t var_18_18 = 1
                int32_t var_8_19 = 0xc
                goto label_68f46d
            
            if (sub_68cbb0(&var_14, "chen", arg2, &var_14) != 0)
                goto label_68f3b9
            
            if (sub_68cbb0(&var_14, "lein", arg2, &var_14) != 0)
                goto label_68f3b9
            
            if (arg4 == 2)
                char eax_29 = sub_68cbb0(&var_14, "el", arg2, &var_14)
                char eax_31
                
                if (eax_29 == 0)
                    eax_31 = sub_68cbb0(&var_14, "er", arg2, &var_14)
                
                if (eax_29 == 0 && eax_31 == 0)
                    goto label_68f127
                
                char* eax_32 = *arg2
                *arg3 = eax_32
                
                if (eax_32 != 0 && *eax_32 != 0)
                    char* eax_33 = sub_63d4e0(arg3)
                    *(eax_33 + 4) += 1
                
                int32_t var_18_3 = 1
                int32_t var_8_4 = 0xd
                goto label_68f46d
            
            if (arg4 != 3)
            label_68f127:
                char* const edi_2 = *arg2
                int32_t eax_53
                
                if (edi_2 == 0)
                    edi_2 = &data_801800
                    eax_53 = 0
                else if (*edi_2 != 0)
                    eax_53 = *(sub_63d4e0(arg2) + 8)
                else
                    eax_53 = 0
                
                int32_t eax_56 = sx.d(edi_2[eax_53 - 1]) - 0x61
                
                if (eax_56 u> 0x18)
                label_68f289:
                    
                    if (arg4 == 2 || arg4 == 4)
                        sub_63d720(&var_20, U"es")
                        var_8_1.b = 0x23
                        char* eax_71 = *arg2
                        *arg3 = eax_71
                        
                        if (eax_71 != 0 && *eax_71 != 0)
                            char* eax_72 = sub_63d4e0(arg3)
                            *(eax_72 + 4) += 1
                        
                        char* esi_8 = var_20
                        char* eax_73 = &data_801800
                        int32_t var_18_16 = 0x10
                        
                        if (esi_8 != 0)
                            eax_73 = esi_8
                        
                        sub_63d960(arg3, eax_73)
                        int32_t var_8_17 = 0x22
                        int32_t var_18_17 = 1
                        var_8_17.b = 0x24
                        
                        if (data_cf65bc != 0 && esi_8 != 0 && *esi_8 != 0)
                            char* eax_74 = sub_63d4e0(&var_20)
                            int32_t temp6_1 = *(eax_74 + 4)
                            *(eax_74 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_64c080(eax_74, *(eax_74 + 0xc) + 0x10)
                        
                        int32_t var_8_18 = 0x25
                    else
                        sub_63d720(&var_20, "en")
                        var_8_1.b = 0x27
                        char* eax_67 = *arg2
                        *arg3 = eax_67
                        
                        if (eax_67 != 0 && *eax_67 != 0)
                            char* eax_68 = sub_63d4e0(arg3)
                            *(eax_68 + 4) += 1
                        
                        char* esi_7 = var_20
                        char* eax_69 = &data_801800
                        int32_t var_18_14 = 0x40
                        
                        if (esi_7 != 0)
                            eax_69 = esi_7
                        
                        sub_63d960(arg3, eax_69)
                        int32_t var_8_15 = 0x26
                        int32_t var_18_15 = 1
                        var_8_15.b = 0x28
                        
                        if (data_cf65bc != 0 && esi_7 != 0 && *esi_7 != 0)
                            char* eax_70 = sub_63d4e0(&var_20)
                            int32_t temp10_1 = *(eax_70 + 4)
                            *(eax_70 + 4) -= 1
                            
                            if (temp10_1 == 1)
                                sub_64c080(eax_70, *(eax_70 + 0xc) + 0x10)
                        
                        int32_t var_8_16 = 0x29
                else
                    switch (eax_56)
                        case 0, 8, 0xe, 0x14, 0x18
                            sub_63d720(&var_20, U"s")
                            var_8_1.b = 0x1f
                            char* eax_62 = *arg2
                            *arg3 = eax_62
                            
                            if (eax_62 != 0 && *eax_62 != 0)
                                char* eax_63 = sub_63d4e0(arg3)
                                *(eax_63 + 4) += 1
                            
                            char* esi_6 = var_20
                            char* const eax_64 = &data_801800
                            int32_t var_18_12 = 0x20
                            
                            if (esi_6 != 0)
                                eax_64 = esi_6
                            
                            sub_63d960(arg3, eax_64)
                            int32_t var_8_13 = 0x1e
                            int32_t var_18_13 = 1
                            var_8_13.b = 0x20
                            
                            if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                                char* eax_65 = sub_63d4e0(&var_20)
                                int32_t temp8_1 = *(eax_65 + 4)
                                *(eax_65 + 4) -= 1
                                
                                if (temp8_1 == 1)
                                    sub_64c080(eax_65, *(eax_65 + 0xc) + 0x10)
                            
                            int32_t var_8_14 = 0x21
                        case 1, 2, 3, 5, 6, 7, 9, 0xa, 0xb, 0xc, 0xd, 0xf, 0x10, 0x11, 0x12, 0x13, 
                                0x15, 0x16, 0x17
                            goto label_68f289
                        case 4
                            sub_63d720(&var_20, &(*U"{[p\rnm")[4])
                            var_8_1.b = 0x1b
                            char* eax_58 = *arg2
                            *arg3 = eax_58
                            
                            if (eax_58 != 0 && *eax_58 != 0)
                                char* eax_59 = sub_63d4e0(arg3)
                                *(eax_59 + 4) += 1
                            
                            char* esi_5 = var_20
                            char* eax_60 = &data_801800
                            int32_t var_18_10 = 0x100
                            
                            if (esi_5 != 0)
                                eax_60 = esi_5
                            
                            sub_63d960(arg3, eax_60)
                            int32_t var_8_11 = 0x1a
                            int32_t var_18_11 = 1
                            var_8_11.b = 0x1c
                            
                            if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
                                char* eax_61 = sub_63d4e0(&var_20)
                                int32_t temp7_1 = *(eax_61 + 4)
                                *(eax_61 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
                            
                            int32_t var_8_12 = 0x1d
                
                goto label_68f46d
            
            char eax_35 = sub_68cbb0(&var_14, "el", arg2, &var_14)
            char eax_37
            
            if (eax_35 == 0)
                eax_37 = sub_68cbb0(&var_14, "er", arg2, &var_14)
            
            if (eax_35 == 0 && eax_37 == 0)
                if (sub_68cbb0(&var_14, "in", arg2, &var_14) != 0)
                    sub_63d720(&var_20, "nen")
                    var_8_1.b = 0x13
                    char* eax_40 = *arg2
                    *arg3 = eax_40
                    
                    if (eax_40 != 0 && *eax_40 != 0)
                        char* eax_41 = sub_63d4e0(arg3)
                        *(eax_41 + 4) += 1
                    
                    char* esi_2 = var_20
                    char* eax_42 = &data_801800
                    int32_t var_18_4 = 0x80
                    
                    if (esi_2 != 0)
                        eax_42 = esi_2
                    
                    sub_63d960(arg3, eax_42)
                    int32_t var_8_5 = 0x12
                    int32_t var_18_5 = 1
                    var_8_5.b = 0x14
                    
                    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                        char* eax_43 = sub_63d4e0(&var_20)
                        int32_t temp5_1 = *(eax_43 + 4)
                        *(eax_43 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                    
                    int32_t var_8_6 = 0x15
                    goto label_68f46d
                
                if (sub_68cbb0(&var_14, "sal", arg2, &var_14) == 0)
                    goto label_68f127
                
                sub_63d720(&var_20, U"es")
                var_8_1.b = 0x17
                char* eax_46 = *arg2
                *arg3 = eax_46
                
                if (eax_46 != 0 && *eax_46 != 0)
                    char* eax_47 = sub_63d4e0(arg3)
                    *(eax_47 + 4) += 1
                
                char* esi_3 = var_20
                char* eax_48 = &data_801800
                int32_t var_18_6 = 0x200
                
                if (esi_3 != 0)
                    eax_48 = esi_3
                
                sub_63d960(arg3, eax_48)
                int32_t var_8_7 = 0x16
                int32_t var_18_7 = 1
                var_8_7.b = 0x18
                
                if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                    char* eax_49 = sub_63d4e0(&var_20)
                    int32_t temp9_1 = *(eax_49 + 4)
                    *(eax_49 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                
                int32_t var_8_8 = 0x19
                goto label_68f46d
            
            sub_63d720(&var_20, "en")
            var_8_1.b = 0xf
            char* esi_4 = var_14
            *arg3 = esi_4
            
            if (esi_4 != 0 && *esi_4 != 0)
                char* eax_50 = sub_63d4e0(arg3)
                *(eax_50 + 4) += 1
            
            char* edi_1 = var_20
            char* eax_51 = &data_801800
            int32_t var_18_8 = 8
            
            if (edi_1 != 0)
                eax_51 = edi_1
            
            sub_63d960(arg3, eax_51)
            int32_t var_8_9 = 0xe
            int32_t var_18_9 = 1
            var_8_9.b = 0x10
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_52 = sub_63d4e0(&var_20)
                int32_t temp4_1 = *(eax_52 + 4)
                *(eax_52 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
            
            int32_t var_8_10 = 0x11
            
            if (data_cf65bc != 0 && esi_4 != 0)
                cond:9_1 = *esi_4 == 0
                goto label_68f480
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3

sub_63b870(eax_3, &data_801800, "name.Length() > 0", "C:\x\ax2017\Engine\Localization.cpp", 0x4f9, 
    "DefaultPlural_de")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
