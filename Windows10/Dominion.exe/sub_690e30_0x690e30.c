// 函数: sub_690e30
// 地址: 0x690e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76ed49
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_44 = arg2
int32_t var_20 = 0
void* const var_78 = &data_824db0
void* const var_74 = &data_824e98
void* const var_70 = &data_874250
void* const var_6c = &data_877fe8
void* const var_68 = &data_877fec
void* const var_64 = &data_878094
void* const var_60 = &data_877f44
void* const var_5c = &data_8780b0
void* const var_58 = &data_8780ac
void* const var_54 = &data_8780b8
void* const var_50 = &data_8780b4
int32_t var_4c = 0x8780c0
char* const var_28 = &data_801800
int32_t var_8_1 = 1
int32_t esi = 0
int32_t* result

while (true)
    if (sub_68cbb0(&var_28, (&var_78)[esi], arg2, &var_28) != 0)
        sub_63d720(&var_44, U"s")
        var_8_1.b = 3
        char* ecx_143 = *arg2
        *arg1 = ecx_143
        
        if (ecx_143 != 0 && *ecx_143 != 0)
            char* eax_123 = sub_63d4e0(arg1)
            *(eax_123 + 4) += 1
        
        int32_t* esi_11 = var_44
        int32_t* eax_124 = &data_801800
        result = arg1
        int32_t var_20_16 = 2
        
        if (esi_11 != 0)
            eax_124 = esi_11
        
        sub_63d960(result, eax_124)
        int32_t var_8_14 = 2
        int32_t var_20_17 = 1
        var_8_14.b = 4
        
        if (data_cf65bc != 0 && esi_11 != 0 && *esi_11 != 0)
            char* eax_125 = sub_63d4e0(&var_44)
            int32_t temp1_1 = *(eax_125 + 4)
            *(eax_125 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_125, *(eax_125 + 0xc) + 0x10)
        
        int32_t var_8_15 = 5
    else
        esi += 1
        
        if (esi s< 0xc)
            continue
        else
            char* const var_24 = &data_801800
            var_8_1.b = 6
            char* var_34
            sub_63d720(&var_34, U"yck")
            var_8_1.b = 7
            int32_t* var_90_2 = &var_34
            char* eax_5 = sub_68cd80(arg2, &var_24)
            char var_11_1 = eax_5.b
            var_8_1.b = 8
            
            if (data_cf65bc != 0)
                char* ecx_3 = var_34
                
                if (ecx_3 != 0 && *ecx_3 != 0)
                    eax_5 = sub_63d4e0(&var_34)
                    int32_t temp0_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                    
                    eax_5.b = var_11_1
            
            var_8_1.b = 6
            char* var_40
            
            if (eax_5.b == 0)
                char* const var_30
                sub_63d720(&var_30, U"yck")
                var_8_1.b = 0xe
                char* esi_2 = var_30
                
                if (esi_2 == 0 || *esi_2 == 0)
                    var_40 = nullptr
                else
                    var_40 = *(sub_63d4e0(&var_30) + 8)
                
                char* eax_14 = *arg2
                char* ebx_1 = &data_801800
                char* const edi = &data_801800
                
                if (eax_14 != 0)
                    edi = eax_14
                
                int32_t eax_15 = sub_63e960(edi)
                char* ecx_16 = var_40
                void* eax_16 = eax_15 - ecx_16
                sub_63e9e0(eax_16, edi, &var_34, eax_16, ecx_16)
                char* eax_17 = var_34
                int32_t var_20_3 = 8
                char* const ecx_18 = &data_801800
                char* const edx_9 = &data_801800
                
                if (esi_2 != 0)
                    ecx_18 = esi_2
                
                if (eax_17 != 0)
                    edx_9 = eax_17
                
                int32_t ecx_20
                
                while (true)
                    eax_17.b = *edx_9
                    char temp4_1 = *ecx_18
                    bool c_1 = eax_17.b u< temp4_1
                    bool z_1 = eax_17.b == temp4_1
                    char var_11_2 = eax_17.b
                    eax_17 = var_34
                    
                    if (z_1)
                        if (var_11_2 == 0)
                            ecx_20 = 0
                            break
                        
                        eax_17.b = edx_9[1]
                        char temp6_1 = ecx_18[1]
                        c_1 = eax_17.b u< temp6_1
                        bool z_2 = eax_17.b == temp6_1
                        char var_11_3 = eax_17.b
                        eax_17 = var_34
                        
                        if (z_2)
                            edx_9 = &edx_9[2]
                            ecx_18 = &ecx_18[2]
                            
                            if (var_11_3 != 0)
                                continue
                            
                            ecx_20 = 0
                            break
                    
                    ecx_20 = sbb.d(ecx_18, ecx_18, c_1) | 1
                    break
                
                if (ecx_20 == 0)
                    var_8_1.b = 0x10
                else
                    var_8_1.b = 0xf
                
                if (data_cf65bc != 0 && eax_17 != 0 && *eax_17 != 0)
                    char* eax_18 = sub_63d4e0(&var_34)
                    int32_t temp7_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                
                var_8_1.b = 0x11
                
                if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                    char* eax_19 = sub_63d4e0(&var_30)
                    int32_t temp8_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                
                var_8_1.b = 6
                sub_63d720(&var_34, &data_801800)
                var_8_1.b = 0x17
                int32_t* esi_3 = var_44
                char** var_90_5 = &var_34
                char* eax_20 = sub_68cd80(esi_3, &var_24)
                char var_11_4 = eax_20.b
                var_8_1.b = 0x18
                
                if (data_cf65bc != 0)
                    char* ecx_27 = var_34
                    
                    if (ecx_27 != 0 && *ecx_27 != 0)
                        eax_20 = sub_63d4e0(&var_34)
                        int32_t temp9_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                        
                        eax_20.b = var_11_4
                
                var_8_1.b = 6
                
                if (eax_20.b == 0)
                    char* const var_2c = &data_801800
                    var_30 = &data_801800
                    char* const var_1c = &data_801800
                    var_8_1.b = 0x20
                    char* const var_3c
                    char* const var_38
                    
                    if (sub_68cf50(&var_30, &var_2c, esi_3, &var_30, &var_1c) == 0)
                        if (sub_68d150(&var_1c, &var_24, esi_3, &var_1c) == 0)
                            sub_63d720(&var_44, "en")
                            var_8_1.b = 0x4f
                            int32_t* eax_111 = arg1
                            char* ecx_129 = *esi_3
                            *eax_111 = ecx_129
                            
                            if (ecx_129 != 0 && *ecx_129 != 0)
                                char* eax_112 = sub_63d4e0(eax_111)
                                *(eax_112 + 4) += 1
                                eax_111 = arg1
                            
                            int32_t* esi_10 = var_44
                            int32_t var_20_14 = 0x80008
                            
                            if (esi_10 != 0)
                                ebx_1 = esi_10
                            
                            sub_63d960(eax_111, ebx_1)
                            int32_t var_8_12 = 0x4e
                            int32_t var_20_15 = 9
                            var_8_12.b = 0x50
                            
                            if (data_cf65bc != 0 && esi_10 != 0 && *esi_10 != 0)
                                char* eax_113 = sub_63d4e0(&var_44)
                                int32_t temp13_1 = *(eax_113 + 4)
                                *(eax_113 + 4) -= 1
                                
                                if (temp13_1 == 1)
                                    sub_64c080(eax_113, *(eax_113 + 0xc) + 0x10)
                            
                            var_8_12.b = 0x51
                            
                            if (data_cf65bc != 0)
                                char* const eax_114 = var_1c
                                
                                if (eax_114 != 0 && *eax_114 != 0)
                                    char* eax_115 = sub_63d4e0(&var_1c)
                                    int32_t temp15_1 = *(eax_115 + 4)
                                    *(eax_115 + 4) -= 1
                                    
                                    if (temp15_1 == 1)
                                        sub_64c080(eax_115, *(eax_115 + 0xc) + 0x10)
                            
                            var_8_12.b = 0x52
                            
                            if (data_cf65bc != 0)
                                char* const eax_116 = var_30
                                
                                if (eax_116 != 0 && *eax_116 != 0)
                                    char* eax_117 = sub_63d4e0(&var_30)
                                    int32_t temp16_1 = *(eax_117 + 4)
                                    *(eax_117 + 4) -= 1
                                    
                                    if (temp16_1 == 1)
                                        sub_64c080(eax_117, *(eax_117 + 0xc) + 0x10)
                            
                            var_8_12.b = 0x53
                            
                            if (data_cf65bc != 0)
                                char* const eax_118 = var_2c
                                
                                if (eax_118 != 0 && *eax_118 != 0)
                                    char* eax_119 = sub_63d4e0(&var_2c)
                                    int32_t temp18_1 = *(eax_119 + 4)
                                    *(eax_119 + 4) -= 1
                                    
                                    if (temp18_1 == 1)
                                        sub_64c080(eax_119, *(eax_119 + 0xc) + 0x10)
                            
                            var_8_12.b = 0x54
                            
                            if (data_cf65bc != 0)
                                char* const eax_120 = var_24
                                
                                if (eax_120 != 0 && *eax_120 != 0)
                                    char* eax_121 = sub_63d4e0(&var_24)
                                    int32_t temp21_1 = *(eax_121 + 4)
                                    *(eax_121 + 4) -= 1
                                    
                                    if (temp21_1 == 1)
                                        sub_64c080(eax_121, *(eax_121 + 0xc) + 0x10)
                            
                            int32_t var_8_13 = 0x55
                        else
                            char* const ecx_101 = *esi_3
                            char* const esi_8
                            
                            if (ecx_101 != 0)
                                esi_8 = ecx_101
                            else
                                ecx_101 = &data_801800
                                esi_8 = &data_801800
                            
                            void* eax_88 = sub_63e960(ecx_101) - 2
                            sub_63e9e0(eax_88, esi_8, &var_34, 0, eax_88)
                            int32_t var_20_11 = 0x4008
                            var_8_1.b = 0x3e
                            sub_63d720(&var_44, "en")
                            var_8_1.b = 0x3f
                            var_8_1.b = 0x40
                            var_8_1.b = 0x41
                            var_8_1.b = 0x43
                            char* ecx_107 = *sub_63dde0(
                                sub_63dde0(sub_63dde0(&var_34, &var_38, &var_24), &var_3c, 
                                    &var_1c), 
                                &var_40, &var_1c)
                            int32_t* eax_92 = arg1
                            *eax_92 = ecx_107
                            
                            if (ecx_107 != 0 && *ecx_107 != 0)
                                char* eax_93 = sub_63d4e0(eax_92)
                                *(eax_93 + 4) += 1
                                eax_92 = arg1
                            
                            int32_t* esi_9 = var_44
                            int32_t var_20_12 = 0x44008
                            
                            if (esi_9 != 0)
                                ebx_1 = esi_9
                            
                            sub_63d960(eax_92, ebx_1)
                            int32_t var_8_10 = 0x42
                            int32_t var_20_13 = 0x4009
                            var_8_10.b = 0x44
                            
                            if (data_cf65bc != 0)
                                char* eax_94 = var_40
                                
                                if (eax_94 != 0 && *eax_94 != 0)
                                    char* eax_95 = sub_63d4e0(&var_40)
                                    int32_t temp17_1 = *(eax_95 + 4)
                                    *(eax_95 + 4) -= 1
                                    
                                    if (temp17_1 == 1)
                                        sub_64c080(eax_95, *(eax_95 + 0xc) + 0x10)
                                        var_40 = &data_801800
                            
                            var_8_10.b = 0x45
                            
                            if (data_cf65bc != 0)
                                char* const eax_96 = var_3c
                                
                                if (eax_96 != 0 && *eax_96 != 0)
                                    char* eax_97 = sub_63d4e0(&var_3c)
                                    int32_t temp19_1 = *(eax_97 + 4)
                                    *(eax_97 + 4) -= 1
                                    
                                    if (temp19_1 == 1)
                                        sub_64c080(eax_97, *(eax_97 + 0xc) + 0x10)
                                        var_3c = &data_801800
                            
                            var_8_10.b = 0x46
                            
                            if (data_cf65bc != 0)
                                char* const eax_98 = var_38
                                
                                if (eax_98 != 0 && *eax_98 != 0)
                                    char* eax_99 = sub_63d4e0(&var_38)
                                    int32_t temp22_1 = *(eax_99 + 4)
                                    *(eax_99 + 4) -= 1
                                    
                                    if (temp22_1 == 1)
                                        sub_64c080(eax_99, *(eax_99 + 0xc) + 0x10)
                                        var_38 = &data_801800
                            
                            var_8_10.b = 0x47
                            
                            if (data_cf65bc != 0 && esi_9 != 0 && *esi_9 != 0)
                                char* eax_100 = sub_63d4e0(&var_44)
                                int32_t temp23_1 = *(eax_100 + 4)
                                *(eax_100 + 4) -= 1
                                
                                if (temp23_1 == 1)
                                    sub_64c080(eax_100, *(eax_100 + 0xc) + 0x10)
                            
                            var_8_10.b = 0x48
                            
                            if (data_cf65bc != 0)
                                char* eax_101 = var_34
                                
                                if (eax_101 != 0 && *eax_101 != 0)
                                    char* eax_102 = sub_63d4e0(&var_34)
                                    int32_t temp26_1 = *(eax_102 + 4)
                                    *(eax_102 + 4) -= 1
                                    
                                    if (temp26_1 == 1)
                                        sub_64c080(eax_102, *(eax_102 + 0xc) + 0x10)
                                        var_34 = &data_801800
                            
                            var_8_10.b = 0x49
                            
                            if (data_cf65bc != 0)
                                char* const eax_103 = var_1c
                                
                                if (eax_103 != 0 && *eax_103 != 0)
                                    char* eax_104 = sub_63d4e0(&var_1c)
                                    int32_t temp27_1 = *(eax_104 + 4)
                                    *(eax_104 + 4) -= 1
                                    
                                    if (temp27_1 == 1)
                                        sub_64c080(eax_104, *(eax_104 + 0xc) + 0x10)
                            
                            var_8_10.b = 0x4a
                            
                            if (data_cf65bc != 0)
                                char* const eax_105 = var_30
                                
                                if (eax_105 != 0 && *eax_105 != 0)
                                    char* eax_106 = sub_63d4e0(&var_30)
                                    int32_t temp28_1 = *(eax_106 + 4)
                                    *(eax_106 + 4) -= 1
                                    
                                    if (temp28_1 == 1)
                                        sub_64c080(eax_106, *(eax_106 + 0xc) + 0x10)
                            
                            var_8_10.b = 0x4b
                            
                            if (data_cf65bc != 0)
                                char* const eax_107 = var_2c
                                
                                if (eax_107 != 0 && *eax_107 != 0)
                                    char* eax_108 = sub_63d4e0(&var_2c)
                                    int32_t temp29_1 = *(eax_108 + 4)
                                    *(eax_108 + 4) -= 1
                                    
                                    if (temp29_1 == 1)
                                        sub_64c080(eax_108, *(eax_108 + 0xc) + 0x10)
                            
                            var_8_10.b = 0x4c
                            
                            if (data_cf65bc != 0)
                                char* const eax_109 = var_24
                                
                                if (eax_109 != 0 && *eax_109 != 0)
                                    char* eax_110 = sub_63d4e0(&var_24)
                                    int32_t temp31_1 = *(eax_110 + 4)
                                    *(eax_110 + 4) -= 1
                                    
                                    if (temp31_1 == 1)
                                        sub_64c080(eax_110, *(eax_110 + 0xc) + 0x10)
                            
                            int32_t var_8_11 = 0x4d
                    else
                        char* const ecx_42 = *esi_3
                        char* const esi_5
                        
                        if (ecx_42 != 0)
                            esi_5 = ecx_42
                        else
                            ecx_42 = &data_801800
                            esi_5 = &data_801800
                        
                        void* eax_32 = sub_63e960(ecx_42) - 3
                        sub_63e9e0(eax_32, esi_5, &var_34, 0, eax_32)
                        int32_t var_20_6 = 0x48
                        var_8_1.b = 0x21
                        char* const eax_33 = &data_801800
                        char* const edx_25 = var_1c
                        void* const ecx_44 = &data_8723dc
                        
                        if (edx_25 != 0)
                            eax_33 = edx_25
                        
                        int32_t eax_35
                        
                        while (true)
                            edx_25.b = *eax_33
                            char temp10_1 = *ecx_44
                            bool c_2 = edx_25.b u< temp10_1
                            bool z_3 = edx_25.b == temp10_1
                            char var_11_5 = edx_25.b
                            edx_25 = var_1c
                            
                            if (z_3)
                                if (var_11_5 == 0)
                                    eax_35 = 0
                                    break
                                
                                edx_25.b = eax_33[1]
                                char temp14_1 = *(ecx_44 + 1)
                                c_2 = edx_25.b u< temp14_1
                                bool z_4 = edx_25.b == temp14_1
                                char var_11_6 = edx_25.b
                                edx_25 = var_1c
                                
                                if (z_4)
                                    eax_33 = &eax_33[2]
                                    ecx_44 += 2
                                    
                                    if (var_11_6 != 0)
                                        continue
                                    
                                    eax_35 = 0
                                    break
                            
                            eax_35 = sbb.d(eax_33, eax_33, c_2) | 1
                            break
                        
                        if (eax_35 == 0 && (edx_25 == 0 || edx_25 != &data_8780d0))
                            sub_63d5e0(eax_35, 1, &var_1c, 0)
                            edx_25 = var_1c
                            *edx_25 = 0x76
                        
                        void* eax_36 = &data_801800
                        void* const ecx_46 = &data_824db4
                        
                        if (edx_25 != 0)
                            eax_36 = edx_25
                        
                        int32_t eax_38
                        
                        while (true)
                            edx_25.b = *eax_36
                            char temp20_1 = *ecx_46
                            bool c_3 = edx_25.b u< temp20_1
                            bool z_5 = edx_25.b == temp20_1
                            char var_11_7 = edx_25.b
                            edx_25 = var_1c
                            
                            if (z_5)
                                if (var_11_7 == 0)
                                    eax_38 = 0
                                    break
                                
                                edx_25.b = *(eax_36 + 1)
                                char temp24_1 = *(ecx_46 + 1)
                                c_3 = edx_25.b u< temp24_1
                                bool z_6 = edx_25.b == temp24_1
                                char var_11_8 = edx_25.b
                                edx_25 = var_1c
                                
                                if (z_6)
                                    eax_36 += 2
                                    ecx_46 += 2
                                    
                                    if (var_11_8 != 0)
                                        continue
                                    
                                    eax_38 = 0
                                    break
                            
                            eax_38 = sbb.d(eax_36, eax_36, c_3) | 1
                            break
                        
                        if (eax_38 == 0 && (edx_25 == 0 || edx_25 != &data_877f60))
                            sub_63d5e0(eax_38, 1, &var_1c, 0)
                            *var_1c = 0x7a
                        
                        char* const edi_1 = var_30
                        char* const ecx_48 = &data_801800
                        char* const eax_40 = var_2c
                        char* const edx_26 = &data_801800
                        
                        if (edi_1 != 0)
                            ecx_48 = edi_1
                        
                        if (eax_40 != 0)
                            edx_26 = eax_40
                        
                        int32_t eax_42
                        
                        while (true)
                            eax_40.b = *edx_26
                            char temp30_1 = *ecx_48
                            bool c_4 = eax_40.b u< temp30_1
                            
                            if (eax_40.b == temp30_1)
                                if (eax_40.b == 0)
                                    eax_42 = 0
                                    break
                                
                                eax_40.b = edx_26[1]
                                char temp32_1 = ecx_48[1]
                                c_4 = eax_40.b u< temp32_1
                                
                                if (eax_40.b == temp32_1)
                                    edx_26 = &edx_26[2]
                                    ecx_48 = &ecx_48[2]
                                    
                                    if (eax_40.b != 0)
                                        continue
                                    
                                    eax_42 = 0
                                    break
                            
                            eax_42 = sbb.d(eax_40, eax_40, c_4) | 1
                            break
                        
                        if (eax_42 != 0)
                            sub_63d720(&var_44, "en")
                            var_8_1.b = 0x2f
                            var_8_1.b = 0x30
                            var_8_1.b = 0x31
                            var_8_1.b = 0x33
                            char* ecx_79 = *sub_63dde0(
                                sub_63dde0(sub_63dde0(&var_34, &var_40, &var_2c), &var_38, 
                                    &var_30), 
                                &var_3c, &var_1c)
                            int32_t* eax_67 = arg1
                            *eax_67 = ecx_79
                            
                            if (ecx_79 != 0 && *ecx_79 != 0)
                                char* eax_68 = sub_63d4e0(eax_67)
                                *(eax_68 + 4) += 1
                                eax_67 = arg1
                            
                            int32_t* esi_7 = var_44
                            int32_t var_20_9 = 0x2048
                            
                            if (esi_7 != 0)
                                ebx_1 = esi_7
                            
                            sub_63d960(eax_67, ebx_1)
                            int32_t var_8_8 = 0x32
                            int32_t var_20_10 = 0x49
                            var_8_8.b = 0x34
                            
                            if (data_cf65bc != 0)
                                char* const eax_69 = var_3c
                                
                                if (eax_69 != 0 && *eax_69 != 0)
                                    char* eax_70 = sub_63d4e0(&var_3c)
                                    int32_t temp33_1 = *(eax_70 + 4)
                                    *(eax_70 + 4) -= 1
                                    
                                    if (temp33_1 == 1)
                                        sub_64c080(eax_70, *(eax_70 + 0xc) + 0x10)
                                        var_3c = &data_801800
                            
                            var_8_8.b = 0x35
                            
                            if (data_cf65bc != 0)
                                char* const eax_71 = var_38
                                
                                if (eax_71 != 0 && *eax_71 != 0)
                                    char* eax_72 = sub_63d4e0(&var_38)
                                    int32_t temp35_1 = *(eax_72 + 4)
                                    *(eax_72 + 4) -= 1
                                    
                                    if (temp35_1 == 1)
                                        sub_64c080(eax_72, *(eax_72 + 0xc) + 0x10)
                                        var_38 = &data_801800
                            
                            var_8_8.b = 0x36
                            
                            if (data_cf65bc != 0)
                                char* eax_73 = var_40
                                
                                if (eax_73 != 0 && *eax_73 != 0)
                                    char* eax_74 = sub_63d4e0(&var_40)
                                    int32_t temp37_1 = *(eax_74 + 4)
                                    *(eax_74 + 4) -= 1
                                    
                                    if (temp37_1 == 1)
                                        sub_64c080(eax_74, *(eax_74 + 0xc) + 0x10)
                                        var_40 = &data_801800
                            
                            var_8_8.b = 0x37
                            
                            if (data_cf65bc != 0 && esi_7 != 0 && *esi_7 != 0)
                                char* eax_75 = sub_63d4e0(&var_44)
                                int32_t temp39_1 = *(eax_75 + 4)
                                *(eax_75 + 4) -= 1
                                
                                if (temp39_1 == 1)
                                    sub_64c080(eax_75, *(eax_75 + 0xc) + 0x10)
                            
                            var_8_8.b = 0x38
                            
                            if (data_cf65bc != 0)
                                char* eax_76 = var_34
                                
                                if (eax_76 != 0 && *eax_76 != 0)
                                    char* eax_77 = sub_63d4e0(&var_34)
                                    int32_t temp41_1 = *(eax_77 + 4)
                                    *(eax_77 + 4) -= 1
                                    
                                    if (temp41_1 == 1)
                                        sub_64c080(eax_77, *(eax_77 + 0xc) + 0x10)
                                        var_34 = &data_801800
                            
                            var_8_8.b = 0x39
                            
                            if (data_cf65bc != 0)
                                char* const eax_78 = var_1c
                                
                                if (eax_78 != 0 && *eax_78 != 0)
                                    char* eax_79 = sub_63d4e0(&var_1c)
                                    int32_t temp43_1 = *(eax_79 + 4)
                                    *(eax_79 + 4) -= 1
                                    
                                    if (temp43_1 == 1)
                                        sub_64c080(eax_79, *(eax_79 + 0xc) + 0x10)
                            
                            var_8_8.b = 0x3a
                            
                            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                                char* eax_80 = sub_63d4e0(&var_30)
                                int32_t temp45_1 = *(eax_80 + 4)
                                *(eax_80 + 4) -= 1
                                
                                if (temp45_1 == 1)
                                    sub_64c080(eax_80, *(eax_80 + 0xc) + 0x10)
                            
                            var_8_8.b = 0x3b
                            
                            if (data_cf65bc != 0)
                                char* const eax_81 = var_2c
                                
                                if (eax_81 != 0 && *eax_81 != 0)
                                    char* eax_82 = sub_63d4e0(&var_2c)
                                    int32_t temp47_1 = *(eax_82 + 4)
                                    *(eax_82 + 4) -= 1
                                    
                                    if (temp47_1 == 1)
                                        sub_64c080(eax_82, *(eax_82 + 0xc) + 0x10)
                            
                            var_8_8.b = 0x3c
                            
                            if (data_cf65bc != 0)
                                char* const eax_83 = var_24
                                
                                if (eax_83 != 0 && *eax_83 != 0)
                                    char* eax_84 = sub_63d4e0(&var_24)
                                    int32_t temp49_1 = *(eax_84 + 4)
                                    *(eax_84 + 4) -= 1
                                    
                                    if (temp49_1 == 1)
                                        sub_64c080(eax_84, *(eax_84 + 0xc) + 0x10)
                            
                            int32_t var_8_9 = 0x3d
                        else
                            sub_63d720(&var_40, "en")
                            var_8_1.b = 0x22
                            var_8_1.b = 0x23
                            var_8_1.b = 0x25
                            char* ecx_52 =
                                *sub_63dde0(sub_63dde0(&var_34, &var_3c, &var_2c), &var_38, &var_1c)
                            int32_t* eax_45 = arg1
                            *eax_45 = ecx_52
                            
                            if (ecx_52 != 0 && *ecx_52 != 0)
                                char* eax_46 = sub_63d4e0(eax_45)
                                *(eax_46 + 4) += 1
                                eax_45 = arg1
                            
                            char* esi_6 = var_40
                            int32_t var_20_7 = 0x248
                            
                            if (esi_6 != 0)
                                ebx_1 = esi_6
                            
                            sub_63d960(eax_45, ebx_1)
                            int32_t var_8_6 = 0x24
                            int32_t var_20_8 = 0x49
                            var_8_6.b = 0x26
                            
                            if (data_cf65bc != 0)
                                char* eax_47 = var_38
                                
                                if (eax_47 != 0 && *eax_47 != 0)
                                    char* eax_48 = sub_63d4e0(&var_38)
                                    int32_t temp34_1 = *(eax_48 + 4)
                                    *(eax_48 + 4) -= 1
                                    
                                    if (temp34_1 == 1)
                                        sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
                                        var_38 = &data_801800
                            
                            var_8_6.b = 0x27
                            
                            if (data_cf65bc != 0)
                                char* eax_49 = var_3c
                                
                                if (eax_49 != 0 && *eax_49 != 0)
                                    char* eax_50 = sub_63d4e0(&var_3c)
                                    int32_t temp36_1 = *(eax_50 + 4)
                                    *(eax_50 + 4) -= 1
                                    
                                    if (temp36_1 == 1)
                                        sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
                                        var_3c = &data_801800
                            
                            var_8_6.b = 0x28
                            
                            if (data_cf65bc != 0 && esi_6 != 0 && *esi_6 != 0)
                                char* eax_51 = sub_63d4e0(&var_40)
                                int32_t temp38_1 = *(eax_51 + 4)
                                *(eax_51 + 4) -= 1
                                
                                if (temp38_1 == 1)
                                    sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                            
                            var_8_6.b = 0x29
                            
                            if (data_cf65bc != 0)
                                char* eax_52 = var_34
                                
                                if (eax_52 != 0 && *eax_52 != 0)
                                    char* eax_53 = sub_63d4e0(&var_34)
                                    int32_t temp40_1 = *(eax_53 + 4)
                                    *(eax_53 + 4) -= 1
                                    
                                    if (temp40_1 == 1)
                                        sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
                                        var_34 = &data_801800
                            
                            var_8_6.b = 0x2a
                            
                            if (data_cf65bc != 0)
                                char* const eax_54 = var_1c
                                
                                if (eax_54 != 0 && *eax_54 != 0)
                                    char* eax_55 = sub_63d4e0(&var_1c)
                                    int32_t temp42_1 = *(eax_55 + 4)
                                    *(eax_55 + 4) -= 1
                                    
                                    if (temp42_1 == 1)
                                        sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
                            
                            var_8_6.b = 0x2b
                            
                            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                                char* eax_56 = sub_63d4e0(&var_30)
                                int32_t temp44_1 = *(eax_56 + 4)
                                *(eax_56 + 4) -= 1
                                
                                if (temp44_1 == 1)
                                    sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
                            
                            var_8_6.b = 0x2c
                            
                            if (data_cf65bc != 0)
                                char* const eax_57 = var_2c
                                
                                if (eax_57 != 0 && *eax_57 != 0)
                                    char* eax_58 = sub_63d4e0(&var_2c)
                                    int32_t temp46_1 = *(eax_58 + 4)
                                    *(eax_58 + 4) -= 1
                                    
                                    if (temp46_1 == 1)
                                        sub_64c080(eax_58, *(eax_58 + 0xc) + 0x10)
                            
                            var_8_6.b = 0x2d
                            
                            if (data_cf65bc != 0)
                                char* const eax_59 = var_24
                                
                                if (eax_59 != 0 && *eax_59 != 0)
                                    char* eax_60 = sub_63d4e0(&var_24)
                                    int32_t temp48_1 = *(eax_60 + 4)
                                    *(eax_60 + 4) -= 1
                                    
                                    if (temp48_1 == 1)
                                        sub_64c080(eax_60, *(eax_60 + 0xc) + 0x10)
                            
                            int32_t var_8_7 = 0x2e
                    
                    if (data_cf65bc != 0)
                        char* const eax_61 = var_28
                        
                        if (eax_61 != 0 && *eax_61 != 0)
                            char* eax_62 = sub_63d4e0(&var_28)
                            int32_t temp25_1 = *(eax_62 + 4)
                            *(eax_62 + 4) -= 1
                            
                            if (temp25_1 == 1)
                                sub_64c080(eax_62, *(eax_62 + 0xc) + 0x10)
                    
                    result = arg1
                    break
                
                sub_63d720(&var_40, "'s")
                var_8_1.b = 0x1a
                result = arg1
                char* eax_21 = *esi_3
                *result = eax_21
                
                if (eax_21 != 0 && *eax_21 != 0)
                    char* eax_22 = sub_63d4e0(result)
                    *(eax_22 + 4) += 1
                
                char* esi_4 = var_40
                int32_t var_20_4 = 0x28
                
                if (esi_4 != 0)
                    ebx_1 = esi_4
                
                sub_63d960(result, ebx_1)
                int32_t var_8_4 = 0x19
                int32_t var_20_5 = 9
                var_8_4.b = 0x1b
                
                if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                    char* eax_23 = sub_63d4e0(&var_40)
                    int32_t temp11_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                
                var_8_4.b = 0x1c
                
                if (data_cf65bc != 0)
                    char* const eax_24 = var_24
                    
                    if (eax_24 != 0 && *eax_24 != 0)
                        char* eax_25 = sub_63d4e0(&var_24)
                        int32_t temp12_1 = *(eax_25 + 4)
                        *(eax_25 + 4) -= 1
                        
                        if (temp12_1 == 1)
                            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                
                int32_t var_8_5 = 0x1d
            else
                sub_63d720(&var_40, U"s")
                var_8_1.b = 0xa
                result = arg1
                char* eax_6 = *arg2
                *result = eax_6
                
                if (eax_6 != 0 && *eax_6 != 0)
                    char* eax_7 = sub_63d4e0(result)
                    *(eax_7 + 4) += 1
                
                char* esi_1 = var_40
                char* const eax_8 = &data_801800
                int32_t var_20_1 = 4
                
                if (esi_1 != 0)
                    eax_8 = esi_1
                
                sub_63d960(result, eax_8)
                int32_t var_8_2 = 9
                int32_t var_20_2 = 1
                var_8_2.b = 0xb
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_9 = sub_63d4e0(&var_40)
                    int32_t temp3_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                
                var_8_2.b = 0xc
                
                if (data_cf65bc != 0)
                    char* const eax_10 = var_24
                    
                    if (eax_10 != 0 && *eax_10 != 0)
                        char* eax_11 = sub_63d4e0(&var_24)
                        int32_t temp5_1 = *(eax_11 + 4)
                        *(eax_11 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                
                int32_t var_8_3 = 0xd
    
    if (data_cf65bc == 0)
        break
    
    char* const eax_26 = var_28
    
    if (eax_26 != 0 && *eax_26 != 0)
        char* eax_27 = sub_63d4e0(&var_28)
        int32_t temp2_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    break

fsbase->NtTib.ExceptionList = ExceptionList
return result
