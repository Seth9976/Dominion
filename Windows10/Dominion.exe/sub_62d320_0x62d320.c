// 函数: sub_62d320
// 地址: 0x62d320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76bec2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_138 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_11c = arg3
int32_t* edi = arg4
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_13c)(void* arg1) = sub_4ab1f0
int32_t var_8_1 = 0
char** var_128 = arg3
int32_t* var_120 = edi
int32_t var_a8 = 0
int32_t var_98[0x20]
`eh vector constructor iterator'(&var_98, 8, 0x10, sub_4ab1e0)
int32_t var_8_2 = 1
int32_t eax_3 = sub_62cfd0(arg2, &var_98)
*arg3 = &data_801800
int32_t eax_4 = 0
int32_t var_a8_1 = 1
int32_t var_110 = 0

if (eax_3 s> 0)
    do
        var_94
        char* esi_1 = *(&var_94 + (eax_4 << 3))
        char* var_9c = esi_1
        
        if (esi_1 != 0 && *esi_1 != 0)
            char* eax_5 = sub_63d4e0(&var_9c)
            *(eax_5 + 4) += 1
            eax_4 = var_110
        
        char* var_a0
        
        if (var_98[eax_4 * 2] != 1)
            var_8_2.b = 0x23
            char* eax_77 = edi[0x12]
            var_a0 = eax_77
            
            if (eax_77 != 0 && *eax_77 != 0)
                char* eax_78 = sub_63d4e0(&var_a0)
                *(eax_78 + 4) += 1
            
            char* eax_79 = edi[0x14]
            int32_t var_a8_8 = 9
            char* ecx_81 = &data_801800
            
            if (eax_79 != 0)
                ecx_81 = eax_79
            
            sub_63d960(&var_a0, ecx_81)
            char* edi_2 = var_a0
            char* eax_80 = &data_801800
            char* edx_49 = &data_801800
            
            if (edi_2 != 0)
                eax_80 = edi_2
            
            if (esi_1 != 0)
                edx_49 = esi_1
            
            var_8_2.b = 0x24
            char* var_dc
            sub_63d850(&var_9c, sub_63dfa0(eax_80, edx_49, &var_dc, "//---//", eax_80))
            var_8_2.b = 0x25
            
            if (data_cf65bc != 0)
                char* eax_82 = var_dc
                
                if (eax_82 != 0 && *eax_82 != 0)
                    char* eax_83 = sub_63d4e0(&var_dc)
                    int32_t temp0_1 = *(eax_83 + 4)
                    *(eax_83 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_83, *(eax_83 + 0xc) + 0x10)
                        var_dc = &data_801800
            
            int32_t var_a8_9 = 1
            var_8_2.b = 0x26
            
            if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                char* eax_84 = sub_63d4e0(&var_a0)
                int32_t temp2_1 = *(eax_84 + 4)
                *(eax_84 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_84, *(eax_84 + 0xc) + 0x10)
            
            edi = var_120
            var_8_2.b = 0x27
            char* eax_85 = edi[0x10]
            var_a0 = eax_85
            
            if (eax_85 != 0 && *eax_85 != 0)
                char* eax_86 = sub_63d4e0(&var_a0)
                *(eax_86 + 4) += 1
            
            char* eax_87 = edi[0x13]
            int32_t var_a8_10 = 5
            char* ecx_90 = &data_801800
            
            if (eax_87 != 0)
                ecx_90 = eax_87
            
            sub_63d960(&var_a0, ecx_90)
            char* esi_3 = var_a0
            char* ecx_92 = &data_801800
            char* eax_88 = var_9c
            char* edx_54 = &data_801800
            
            if (esi_3 != 0)
                ecx_92 = esi_3
            
            if (eax_88 != 0)
                edx_54 = eax_88
            
            var_8_2.b = 0x28
            char* var_e0
            sub_63d850(&var_9c, sub_63dfa0(eax_88, edx_54, &var_e0, "////", ecx_92))
            var_8_2.b = 0x29
            
            if (data_cf65bc != 0)
                char* eax_90 = var_e0
                
                if (eax_90 != 0 && *eax_90 != 0)
                    char* eax_91 = sub_63d4e0(&var_e0)
                    int32_t temp4_1 = *(eax_91 + 4)
                    *(eax_91 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_91, *(eax_91 + 0xc) + 0x10)
                        var_e0 = &data_801800
            
            int32_t var_a8_11 = 1
            var_8_2.b = 0x2a
            
            if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                char* eax_92 = sub_63d4e0(&var_a0)
                int32_t temp5_1 = *(eax_92 + 4)
                *(eax_92 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_92, *(eax_92 + 0xc) + 0x10)
            
            var_8_2.b = 0x2b
            char* eax_93 = edi[0x12]
            var_a0 = eax_93
            
            if (eax_93 != 0 && *eax_93 != 0)
                char* eax_94 = sub_63d4e0(&var_a0)
                *(eax_94 + 4) += 1
            
            char* eax_95 = edi[0x13]
            int32_t var_a8_12 = 0x11
            char* ecx_100 = &data_801800
            
            if (eax_95 != 0)
                ecx_100 = eax_95
            
            sub_63d960(&var_a0, ecx_100)
            char* esi_4 = var_a0
            char* ecx_102 = &data_801800
            char* eax_96 = var_9c
            char* edx_59 = &data_801800
            
            if (esi_4 != 0)
                ecx_102 = esi_4
            
            if (eax_96 != 0)
                edx_59 = eax_96
            
            var_8_2.b = 0x2c
            char* var_118
            sub_63d850(&var_9c, sub_63dfa0(eax_96, edx_59, &var_118, "////", ecx_102))
            var_8_2.b = 0x2d
            
            if (data_cf65bc != 0)
                char* eax_98 = var_118
                
                if (eax_98 != 0 && *eax_98 != 0)
                    char* eax_99 = sub_63d4e0(&var_118)
                    int32_t temp9_1 = *(eax_99 + 4)
                    *(eax_99 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_99, *(eax_99 + 0xc) + 0x10)
                        var_118 = &data_801800
            
            int32_t var_a8_13 = 1
            var_8_2.b = 0x2e
            
            if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                char* eax_100 = sub_63d4e0(&var_a0)
                int32_t temp11_1 = *(eax_100 + 4)
                *(eax_100 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_100, *(eax_100 + 0xc) + 0x10)
            
            var_8_2.b = 2
            char* const ecx_109 = &data_801800
            char* eax_101 = edi[0x12]
            char* edx_64 = &data_801800
            
            if (eax_101 != 0)
                ecx_109 = eax_101
            
            char* eax_102 = var_9c
            
            if (eax_102 != 0)
                edx_64 = eax_102
            
            var_8_2.b = 0x2f
            char* var_e4
            sub_63d850(&var_9c, sub_63dfa0(eax_102, edx_64, &var_e4, &data_86d2dc, ecx_109))
            var_8_2.b = 0x30
            
            if (data_cf65bc != 0)
                char* eax_104 = var_e4
                
                if (eax_104 != 0 && *eax_104 != 0)
                    char* eax_105 = sub_63d4e0(&var_e4)
                    int32_t temp13_1 = *(eax_105 + 4)
                    *(eax_105 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_64c080(eax_105, *(eax_105 + 0xc) + 0x10)
                        var_e4 = &data_801800
            
            var_8_2.b = 2
            char* const ecx_114 = &data_801800
            char* eax_106 = edi[7]
            char* edx_67 = &data_801800
            
            if (eax_106 != 0)
                ecx_114 = eax_106
            
            char* eax_107 = var_9c
            
            if (eax_107 != 0)
                edx_67 = eax_107
            
            var_8_2.b = 0x31
            char* var_e8
            sub_63d850(&var_9c, sub_63dfa0(eax_107, edx_67, &var_e8, 0x86d2ec, ecx_114))
            var_8_2.b = 0x32
            
            if (data_cf65bc != 0)
                char* eax_109 = var_e8
                
                if (eax_109 != 0 && *eax_109 != 0)
                    char* eax_110 = sub_63d4e0(&var_e8)
                    int32_t temp15_1 = *(eax_110 + 4)
                    *(eax_110 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_110, *(eax_110 + 0xc) + 0x10)
                        var_e8 = &data_801800
            
            var_8_2.b = 2
            char* const ecx_119 = &data_801800
            char* eax_111 = edi[8]
            char* edx_70 = &data_801800
            
            if (eax_111 != 0)
                ecx_119 = eax_111
            
            char* eax_112 = var_9c
            
            if (eax_112 != 0)
                edx_70 = eax_112
            
            var_8_2.b = 0x33
            char* var_ec
            sub_63d850(&var_9c, sub_63dfa0(eax_112, edx_70, &var_ec, 0x86d2e8, ecx_119))
            var_8_2.b = 0x34
            
            if (data_cf65bc != 0)
                char* eax_114 = var_ec
                
                if (eax_114 != 0 && *eax_114 != 0)
                    char* eax_115 = sub_63d4e0(&var_ec)
                    int32_t temp17_1 = *(eax_115 + 4)
                    *(eax_115 + 4) -= 1
                    
                    if (temp17_1 == 1)
                        sub_64c080(eax_115, *(eax_115 + 0xc) + 0x10)
                        var_ec = &data_801800
            
            var_8_2.b = 2
            char* const edx_73 = &data_801800
            char* eax_116 = edi[9]
            char* const ecx_124 = &data_801800
            
            if (eax_116 != 0)
                edx_73 = eax_116
            
            char* eax_117 = edi[0xa]
            
            if (eax_117 != 0)
                ecx_124 = eax_117
            
            var_8_2.b = 0x35
            char* var_f0
            sub_63d850(&var_9c, sub_62c020(eax_117, &var_9c, &var_f0, "[ND]", ecx_124, edx_73))
            var_8_2.b = 0x36
            
            if (data_cf65bc != 0)
                char* eax_119 = var_f0
                
                if (eax_119 != 0 && *eax_119 != 0)
                    char* eax_120 = sub_63d4e0(&var_f0)
                    int32_t temp19_1 = *(eax_120 + 4)
                    *(eax_120 + 4) -= 1
                    
                    if (temp19_1 == 1)
                        sub_64c080(eax_120, *(eax_120 + 0xc) + 0x10)
                        var_f0 = &data_801800
            
            var_8_2.b = 2
            char* eax_121 = edi[3]
            char* const ecx_129 = &data_801800
            
            if (eax_121 != 0)
                ecx_129 = eax_121
            
            var_8_2.b = 0x37
            char* var_f4
            sub_63d850(&var_9c, sub_62c020(eax_121, &var_9c, &var_f4, "[!N]", ecx_129, nullptr))
            var_8_2.b = 0x38
            
            if (data_cf65bc != 0)
                char* eax_123 = var_f4
                
                if (eax_123 != 0 && *eax_123 != 0)
                    char* eax_124 = sub_63d4e0(&var_f4)
                    int32_t temp21_1 = *(eax_124 + 4)
                    *(eax_124 + 4) -= 1
                    
                    if (temp21_1 == 1)
                        sub_64c080(eax_124, *(eax_124 + 0xc) + 0x10)
                        var_f4 = &data_801800
            
            var_8_2.b = 2
            char* const edx_80 = &data_801800
            char* eax_125 = edi[1]
            char* const ecx_134 = &data_801800
            
            if (eax_125 != 0)
                edx_80 = eax_125
            
            char* eax_126 = edi[2]
            
            if (eax_126 != 0)
                ecx_134 = eax_126
            
            var_8_2.b = 0x39
            char* var_f8
            sub_63d850(&var_9c, sub_62c020(eax_126, &var_9c, &var_f8, 0x801c54, ecx_134, edx_80))
            var_8_2.b = 0x3a
            
            if (data_cf65bc != 0)
                char* eax_128 = var_f8
                
                if (eax_128 != 0 && *eax_128 != 0)
                    char* eax_129 = sub_63d4e0(&var_f8)
                    int32_t temp23_1 = *(eax_129 + 4)
                    *(eax_129 + 4) -= 1
                    
                    if (temp23_1 == 1)
                        sub_64c080(eax_129, *(eax_129 + 0xc) + 0x10)
                        var_f8 = &data_801800
            
            var_8_2.b = 2
            char* eax_130 = edi[6]
            char* const ecx_139 = &data_801800
            
            if (eax_130 != 0)
                ecx_139 = eax_130
            
            var_8_2.b = 0x3b
            char* var_fc
            sub_63d850(&var_9c, sub_62c020(eax_130, &var_9c, &var_fc, "{!N}", ecx_139, nullptr))
            var_8_2.b = 0x3c
            
            if (data_cf65bc != 0)
                char* eax_132 = var_fc
                
                if (eax_132 != 0 && *eax_132 != 0)
                    char* eax_133 = sub_63d4e0(&var_fc)
                    int32_t temp25_1 = *(eax_133 + 4)
                    *(eax_133 + 4) -= 1
                    
                    if (temp25_1 == 1)
                        sub_64c080(eax_133, *(eax_133 + 0xc) + 0x10)
                        var_fc = &data_801800
            
            var_8_2.b = 2
            char* const edx_87 = &data_801800
            char* eax_134 = edi[4]
            char* const ecx_144 = &data_801800
            
            if (eax_134 != 0)
                edx_87 = eax_134
            
            char* eax_135 = edi[5]
            
            if (eax_135 != 0)
                ecx_144 = eax_135
            
            var_8_2.b = 0x3d
            char* var_100
            sub_63d850(&var_9c, sub_62c020(eax_135, &var_9c, &var_100, 0x86d300, ecx_144, edx_87))
            var_8_2.b = 0x3e
            
            if (data_cf65bc != 0)
                char* eax_137 = var_100
                
                if (eax_137 != 0 && *eax_137 != 0)
                    char* eax_138 = sub_63d4e0(&var_100)
                    int32_t temp27_1 = *(eax_138 + 4)
                    *(eax_138 + 4) -= 1
                    
                    if (temp27_1 == 1)
                        sub_64c080(eax_138, *(eax_138 + 0xc) + 0x10)
                        var_100 = &data_801800
            
            var_8_2.b = 2
            char* const edx_91 = &data_801800
            char* eax_139 = edi[0xb]
            char* const ecx_149 = &data_801800
            
            if (eax_139 != 0)
                edx_91 = eax_139
            
            char* eax_140 = edi[0xd]
            
            if (eax_140 != 0)
                ecx_149 = eax_140
            
            var_8_2.b = 0x3f
            char* var_104
            sub_63d850(&var_9c, 
                sub_62c6e0(eax_140, &var_9c, &var_104, &data_86d2d8, ecx_149, edx_91))
            var_8_2.b = 0x40
            
            if (data_cf65bc != 0)
                char* eax_142 = var_104
                
                if (eax_142 != 0 && *eax_142 != 0)
                    char* eax_143 = sub_63d4e0(&var_104)
                    int32_t temp29_1 = *(eax_143 + 4)
                    *(eax_143 + 4) -= 1
                    
                    if (temp29_1 == 1)
                        sub_64c080(eax_143, *(eax_143 + 0xc) + 0x10)
                        var_104 = &data_801800
            
            var_8_2.b = 2
            char* const edx_95 = &data_801800
            char* eax_144 = edi[0xb]
            char* const ecx_154 = &data_801800
            
            if (eax_144 != 0)
                edx_95 = eax_144
            
            char* eax_145 = edi[0xc]
            
            if (eax_145 != 0)
                ecx_154 = eax_145
            
            var_8_2.b = 0x41
            char* var_108
            sub_63d850(&var_9c, sub_62c6e0(eax_145, &var_9c, &var_108, 0x86d30c, ecx_154, edx_95))
            var_8_2.b = 0x42
            
            if (data_cf65bc != 0)
                char* eax_147 = var_108
                
                if (eax_147 != 0 && *eax_147 != 0)
                    char* eax_148 = sub_63d4e0(&var_108)
                    int32_t temp31_1 = *(eax_148 + 4)
                    *(eax_148 + 4) -= 1
                    
                    if (temp31_1 == 1)
                        sub_64c080(eax_148, *(eax_148 + 0xc) + 0x10)
                        var_108 = &data_801800
            
            var_8_2.b = 2
            char* edx_99 = &data_801800
            char* eax_149 = edi[0xb]
            char* ecx_159 = &data_801800
            
            if (eax_149 != 0)
                edx_99 = eax_149
            
            char* eax_150 = edi[0xf]
            
            if (eax_150 != 0)
                ecx_159 = eax_150
            
            var_8_2.b = 0x43
            char* var_10c
            sub_63d850(&var_9c, sub_62c6e0(eax_150, &var_9c, &var_10c, 0x86d310, ecx_159, edx_99))
            var_8_2.b = 0x44
            
            if (data_cf65bc != 0)
                char* eax_152 = var_10c
                
                if (eax_152 != 0 && *eax_152 != 0)
                    char* eax_153 = sub_63d4e0(&var_10c)
                    int32_t temp32_1 = *(eax_153 + 4)
                    *(eax_153 + 4) -= 1
                    
                    if (temp32_1 == 1)
                        sub_64c080(eax_153, *(eax_153 + 0xc) + 0x10)
                        var_10c = &data_801800
            
            var_8_2.b = 2
            
            if (*edi == 1)
                var_8_2.b = 0x45
                char* eax_154 = edi[0xb]
                var_a0 = eax_154
                
                if (eax_154 != 0 && *eax_154 != 0)
                    char* eax_155 = sub_63d4e0(&var_a0)
                    *(eax_155 + 4) += 1
                
                char* eax_156 = var_9c
                int32_t var_a8_14 = 0x81
                char* ecx_165 = &data_801800
                
                if (eax_156 != 0)
                    ecx_165 = eax_156
                
                sub_63d960(&var_a0, ecx_165)
                sub_63d850(&var_9c, &var_a0)
                int32_t var_a8_15 = 1
                var_8_2.b = 0x46
                
                if (data_cf65bc != 0)
                    char* eax_157 = var_a0
                    
                    if (eax_157 != 0 && *eax_157 != 0)
                        char* eax_158 = sub_63d4e0(&var_a0)
                        int32_t temp33_1 = *(eax_158 + 4)
                        *(eax_158 + 4) -= 1
                        
                        if (temp33_1 == 1)
                            sub_64c080(eax_158, *(eax_158 + 0xc) + 0x10)
                
                var_8_2.b = 2
            
            if (*edi == 3)
                var_8_2.b = 0x47
                char* eax_159 = edi[0xb]
                var_a0 = eax_159
                
                if (eax_159 != 0 && *eax_159 != 0)
                    char* eax_160 = sub_63d4e0(&var_a0)
                    *(eax_160 + 4) += 1
                
                char* eax_161 = var_9c
                int32_t var_a8_16 = 0x101
                char* ecx_171 = &data_801800
                
                if (eax_161 != 0)
                    ecx_171 = eax_161
                
                sub_63d960(&var_a0, ecx_171)
                sub_63d850(&var_9c, &var_a0)
                int32_t var_a8_17 = 1
                var_8_2.b = 0x48
                
                if (data_cf65bc != 0)
                    char* eax_162 = var_a0
                    
                    if (eax_162 != 0 && *eax_162 != 0)
                        char* eax_163 = sub_63d4e0(&var_a0)
                        int32_t temp34_1 = *(eax_163 + 4)
                        *(eax_163 + 4) -= 1
                        
                        if (temp34_1 == 1)
                            sub_64c080(eax_163, *(eax_163 + 0xc) + 0x10)
                
                var_8_2.b = 2
            
            if (*edi == 2)
                var_8_2.b = 0x49
                char* eax_164 = edi[0xb]
                var_a0 = eax_164
                
                if (eax_164 != 0 && *eax_164 != 0)
                    char* eax_165 = sub_63d4e0(&var_a0)
                    *(eax_165 + 4) += 1
                
                char* eax_166 = var_9c
                int32_t var_a8_18 = 0x201
                char* ecx_177 = &data_801800
                
                if (eax_166 != 0)
                    ecx_177 = eax_166
                
                sub_63d960(&var_a0, ecx_177)
                sub_63d850(&var_9c, &var_a0)
                int32_t var_a8_19 = 1
                var_8_2.b = 0x4a
                
                if (data_cf65bc != 0)
                    char* eax_167 = var_a0
                    
                    if (eax_167 != 0 && *eax_167 != 0)
                        char* eax_168 = sub_63d4e0(&var_a0)
                        int32_t temp35_1 = *(eax_168 + 4)
                        *(eax_168 + 4) -= 1
                        
                        if (temp35_1 == 1)
                            sub_64c080(eax_168, *(eax_168 + 0xc) + 0x10)
                
                var_8_2.b = 2
        else
            var_8_2.b = 3
            char* eax_6 = edi[0x10]
            var_a0 = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_63d4e0(&var_a0)
                *(eax_7 + 4) += 1
            
            char* eax_8 = edi[0x14]
            int32_t var_a8_2 = 3
            char* const ecx_4 = &data_801800
            
            if (eax_8 != 0)
                ecx_4 = eax_8
            
            sub_63d960(&var_a0, ecx_4)
            char* edi_1 = var_a0
            char* const eax_9 = &data_801800
            char* edx_1 = &data_801800
            
            if (edi_1 != 0)
                eax_9 = edi_1
            
            if (esi_1 != 0)
                edx_1 = esi_1
            
            var_8_2.b = 4
            char* var_114
            sub_63d850(&var_9c, sub_63dfa0(eax_9, edx_1, &var_114, "//---//", eax_9))
            var_8_2.b = 5
            
            if (data_cf65bc != 0)
                char* eax_11 = var_114
                
                if (eax_11 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_63d4e0(&var_114)
                    int32_t temp1_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                        var_114 = &data_801800
            
            int32_t var_a8_3 = 1
            var_8_2.b = 6
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_13 = sub_63d4e0(&var_a0)
                int32_t temp3_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            
            edi = var_120
            char* esi_2
            
            if (*edi != 5)
                var_8_2.b = 0xb
                char* eax_21 = edi[0x10]
                var_a0 = eax_21
                
                if (eax_21 != 0 && *eax_21 != 0)
                    char* eax_22 = sub_63d4e0(&var_a0)
                    *(eax_22 + 4) += 1
                
                char* eax_23 = edi[0x13]
                int32_t var_a8_6 = 0x41
                char* ecx_21 = &data_801800
                
                if (eax_23 != 0)
                    ecx_21 = eax_23
                
                sub_63d960(&var_a0, ecx_21)
                esi_2 = var_a0
                char* ecx_23 = &data_801800
                char* eax_24 = var_9c
                char* edx_9 = &data_801800
                
                if (esi_2 != 0)
                    ecx_23 = esi_2
                
                if (eax_24 != 0)
                    edx_9 = eax_24
                
                var_8_2.b = 0xc
                char* var_b0
                sub_63d850(&var_9c, sub_63dfa0(eax_24, edx_9, &var_b0, "////", ecx_23))
                var_8_2.b = 0xd
                
                if (data_cf65bc != 0)
                    char* eax_26 = var_b0
                    
                    if (eax_26 != 0 && *eax_26 != 0)
                        char* eax_27 = sub_63d4e0(&var_b0)
                        int32_t temp6_1 = *(eax_27 + 4)
                        *(eax_27 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                            var_b0 = &data_801800
                
                int32_t var_a8_7 = 1
                var_8_2.b = 0xe
            else
                var_8_2.b = 7
                char* eax_14 = edi[0x10]
                var_a0 = eax_14
                
                if (eax_14 != 0 && *eax_14 != 0)
                    char* eax_15 = sub_63d4e0(&var_a0)
                    *(eax_15 + 4) += 1
                
                char* eax_16 = edi[0x11]
                int32_t var_a8_4 = 0x21
                char* const ecx_13 = &data_801800
                
                if (eax_16 != 0)
                    ecx_13 = eax_16
                
                sub_63d960(&var_a0, ecx_13)
                esi_2 = var_a0
                char* const ecx_15 = &data_801800
                char* eax_17 = var_9c
                char* edx_6 = &data_801800
                
                if (esi_2 != 0)
                    ecx_15 = esi_2
                
                if (eax_17 != 0)
                    edx_6 = eax_17
                
                var_8_2.b = 8
                char* var_ac
                sub_63d850(&var_9c, sub_63dfa0(eax_17, edx_6, &var_ac, "////", ecx_15))
                var_8_2.b = 9
                
                if (data_cf65bc != 0)
                    char* eax_19 = var_ac
                    
                    if (eax_19 != 0 && *eax_19 != 0)
                        char* eax_20 = sub_63d4e0(&var_ac)
                        int32_t temp7_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                            var_ac = &data_801800
                
                int32_t var_a8_5 = 1
                var_8_2.b = 0xa
            
            if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                char* eax_28 = sub_63d4e0(&var_a0)
                int32_t temp8_1 = *(eax_28 + 4)
                *(eax_28 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
            
            var_8_2.b = 2
            char* const ecx_30 = &data_801800
            char* eax_29 = edi[0x10]
            char* edx_14 = &data_801800
            
            if (eax_29 != 0)
                ecx_30 = eax_29
            
            char* eax_30 = var_9c
            
            if (eax_30 != 0)
                edx_14 = eax_30
            
            var_8_2.b = 0xf
            char* var_b4
            sub_63d850(&var_9c, sub_63dfa0(eax_30, edx_14, &var_b4, &data_86d2dc, ecx_30))
            var_8_2.b = 0x10
            
            if (data_cf65bc != 0)
                char* eax_32 = var_b4
                
                if (eax_32 != 0 && *eax_32 != 0)
                    char* eax_33 = sub_63d4e0(&var_b4)
                    int32_t temp10_1 = *(eax_33 + 4)
                    *(eax_33 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                        var_b4 = &data_801800
            
            var_8_2.b = 2
            char* const ecx_35 = &data_801800
            char* eax_34 = edi[7]
            char* edx_17 = &data_801800
            
            if (eax_34 != 0)
                ecx_35 = eax_34
            
            char* eax_35 = var_9c
            
            if (eax_35 != 0)
                edx_17 = eax_35
            
            var_8_2.b = 0x11
            char* var_b8
            sub_63d850(&var_9c, sub_63dfa0(eax_35, edx_17, &var_b8, 0x86d2ec, ecx_35))
            var_8_2.b = 0x12
            
            if (data_cf65bc != 0)
                char* eax_37 = var_b8
                
                if (eax_37 != 0 && *eax_37 != 0)
                    char* eax_38 = sub_63d4e0(&var_b8)
                    int32_t temp12_1 = *(eax_38 + 4)
                    *(eax_38 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                        var_b8 = &data_801800
            
            var_8_2.b = 2
            char* const ecx_40 = &data_801800
            char* eax_39 = edi[8]
            char* edx_20 = &data_801800
            
            if (eax_39 != 0)
                ecx_40 = eax_39
            
            char* eax_40 = var_9c
            
            if (eax_40 != 0)
                edx_20 = eax_40
            
            var_8_2.b = 0x13
            char* var_bc
            sub_63d850(&var_9c, sub_63dfa0(eax_40, edx_20, &var_bc, 0x86d2e8, ecx_40))
            var_8_2.b = 0x14
            
            if (data_cf65bc != 0)
                char* eax_42 = var_bc
                
                if (eax_42 != 0 && *eax_42 != 0)
                    char* eax_43 = sub_63d4e0(&var_bc)
                    int32_t temp14_1 = *(eax_43 + 4)
                    *(eax_43 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
                        var_bc = &data_801800
            
            var_8_2.b = 2
            char* const edx_23 = &data_801800
            char* eax_44 = edi[9]
            char* const ecx_45 = &data_801800
            
            if (eax_44 != 0)
                edx_23 = eax_44
            
            char* eax_45 = edi[0xa]
            
            if (eax_45 != 0)
                ecx_45 = eax_45
            
            var_8_2.b = 0x15
            char* var_c0
            sub_63d850(&var_9c, sub_62c020(eax_45, &var_9c, &var_c0, "[ND]", ecx_45, edx_23))
            var_8_2.b = 0x16
            
            if (data_cf65bc != 0)
                char* eax_47 = var_c0
                
                if (eax_47 != 0 && *eax_47 != 0)
                    char* eax_48 = sub_63d4e0(&var_c0)
                    int32_t temp16_1 = *(eax_48 + 4)
                    *(eax_48 + 4) -= 1
                    
                    if (temp16_1 == 1)
                        sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
                        var_c0 = &data_801800
            
            var_8_2.b = 2
            char* eax_49 = edi[3]
            char* const ecx_50 = &data_801800
            
            if (eax_49 != 0)
                ecx_50 = eax_49
            
            var_8_2.b = 0x17
            char* var_c4
            sub_63d850(&var_9c, sub_62c020(eax_49, &var_9c, &var_c4, "[!N]", ecx_50, nullptr))
            var_8_2.b = 0x18
            
            if (data_cf65bc != 0)
                char* eax_51 = var_c4
                
                if (eax_51 != 0 && *eax_51 != 0)
                    char* eax_52 = sub_63d4e0(&var_c4)
                    int32_t temp18_1 = *(eax_52 + 4)
                    *(eax_52 + 4) -= 1
                    
                    if (temp18_1 == 1)
                        sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
                        var_c4 = &data_801800
            
            var_8_2.b = 2
            char* const edx_30 = &data_801800
            char* eax_53 = edi[1]
            char* const ecx_55 = &data_801800
            
            if (eax_53 != 0)
                edx_30 = eax_53
            
            char* eax_54 = edi[2]
            
            if (eax_54 != 0)
                ecx_55 = eax_54
            
            var_8_2.b = 0x19
            char* var_c8
            sub_63d850(&var_9c, sub_62c020(eax_54, &var_9c, &var_c8, 0x801c54, ecx_55, edx_30))
            var_8_2.b = 0x1a
            
            if (data_cf65bc != 0)
                char* eax_56 = var_c8
                
                if (eax_56 != 0 && *eax_56 != 0)
                    char* eax_57 = sub_63d4e0(&var_c8)
                    int32_t temp20_1 = *(eax_57 + 4)
                    *(eax_57 + 4) -= 1
                    
                    if (temp20_1 == 1)
                        sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
                        var_c8 = &data_801800
            
            var_8_2.b = 2
            char* eax_58 = edi[6]
            char* const ecx_60 = &data_801800
            
            if (eax_58 != 0)
                ecx_60 = eax_58
            
            var_8_2.b = 0x1b
            char* var_cc
            sub_63d850(&var_9c, sub_62c020(eax_58, &var_9c, &var_cc, "{!N}", ecx_60, nullptr))
            var_8_2.b = 0x1c
            
            if (data_cf65bc != 0)
                char* eax_60 = var_cc
                
                if (eax_60 != 0 && *eax_60 != 0)
                    char* eax_61 = sub_63d4e0(&var_cc)
                    int32_t temp22_1 = *(eax_61 + 4)
                    *(eax_61 + 4) -= 1
                    
                    if (temp22_1 == 1)
                        sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
                        var_cc = &data_801800
            
            var_8_2.b = 2
            char* const edx_37 = &data_801800
            char* eax_62 = edi[4]
            char* const ecx_65 = &data_801800
            
            if (eax_62 != 0)
                edx_37 = eax_62
            
            char* eax_63 = edi[5]
            
            if (eax_63 != 0)
                ecx_65 = eax_63
            
            var_8_2.b = 0x1d
            char* var_d0
            sub_63d850(&var_9c, sub_62c020(eax_63, &var_9c, &var_d0, 0x86d300, ecx_65, edx_37))
            var_8_2.b = 0x1e
            
            if (data_cf65bc != 0)
                char* eax_65 = var_d0
                
                if (eax_65 != 0 && *eax_65 != 0)
                    char* eax_66 = sub_63d4e0(&var_d0)
                    int32_t temp24_1 = *(eax_66 + 4)
                    *(eax_66 + 4) -= 1
                    
                    if (temp24_1 == 1)
                        sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)
                        var_d0 = &data_801800
            
            var_8_2.b = 2
            char* const edx_41 = &data_801800
            char* eax_67 = edi[0xb]
            char* const ecx_70 = &data_801800
            
            if (eax_67 != 0)
                edx_41 = eax_67
            
            char* eax_68 = edi[0xe]
            
            if (eax_68 != 0)
                ecx_70 = eax_68
            
            var_8_2.b = 0x1f
            char* var_d4
            sub_63d850(&var_9c, sub_62c6e0(eax_68, &var_9c, &var_d4, &data_86d2d8, ecx_70, edx_41))
            var_8_2.b = 0x20
            
            if (data_cf65bc != 0)
                char* eax_70 = var_d4
                
                if (eax_70 != 0 && *eax_70 != 0)
                    char* eax_71 = sub_63d4e0(&var_d4)
                    int32_t temp26_1 = *(eax_71 + 4)
                    *(eax_71 + 4) -= 1
                    
                    if (temp26_1 == 1)
                        sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
                        var_d4 = &data_801800
            
            var_8_2.b = 2
            char* const edx_45 = &data_801800
            char* eax_72 = edi[0xb]
            char* const ecx_75 = &data_801800
            
            if (eax_72 != 0)
                edx_45 = eax_72
            
            char* eax_73 = edi[0xf]
            
            if (eax_73 != 0)
                ecx_75 = eax_73
            
            var_8_2.b = 0x21
            char* var_d8
            sub_63d850(&var_9c, sub_62c6e0(eax_73, &var_9c, &var_d8, 0x86d310, ecx_75, edx_45))
            var_8_2.b = 0x22
            
            if (data_cf65bc != 0)
                char* eax_75 = var_d8
                
                if (eax_75 != 0 && *eax_75 != 0)
                    char* eax_76 = sub_63d4e0(&var_d8)
                    int32_t temp28_1 = *(eax_76 + 4)
                    *(eax_76 + 4) -= 1
                    
                    if (temp28_1 == 1)
                        sub_64c080(eax_76, *(eax_76 + 0xc) + 0x10)
                        var_d8 = &data_801800
            
            var_8_2.b = 2
        char* esi_5 = var_9c
        char* eax_169 = &data_801800
        
        if (esi_5 != 0)
            eax_169 = esi_5
        
        sub_63d960(arg3, eax_169)
        var_8_2.b = 0x4b
        
        if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
            char* eax_170 = sub_63d4e0(&var_9c)
            int32_t temp30_1 = *(eax_170 + 4)
            *(eax_170 + 4) -= 1
            
            if (temp30_1 == 1)
                sub_64c080(eax_170, *(eax_170 + 0xc) + 0x10)
        
        eax_4 = var_110 + 1
        var_8_2.b = 1
        var_110 = eax_4
    while (eax_4 s< eax_3)

var_8_2.b = 0
`eh vector vbase constructor iterator'(&var_98, 8, 0x10, sub_4ab1f0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg3)
return arg3
