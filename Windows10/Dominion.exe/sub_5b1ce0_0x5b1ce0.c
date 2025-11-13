// 函数: sub_5b1ce0
// 地址: 0x5b1ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7691bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx
int16_t* edx
ecx, edx = __chkstk(0x1548)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* esi = edx
int16_t* var_74 = esi
int32_t edi = 0
void* eax_10 = ecx * 0x40cd0
int32_t var_88 = 0
void var_44
char** eax_12
int32_t edx_1
eax_12, edx_1 = sub_5bbeb0(&var_44, "card_embed/embeddings")
void* eax_13 = sub_5b0f90(eax_12, edx_1, eax_10 + 0x1597e78, var_44)
char** eax_14
int32_t edx_2
eax_14, edx_2 = sub_5bbeb0(&var_44, "card_pre/kernel")
int32_t* eax_15 = sub_5b0f90(eax_14, edx_2, eax_10 + 0x1597e78)
int32_t* eax_16 = sub_4acc50(eax_15)
int32_t i = 0
int32_t i_45 = 0

if (0 s< *esi)
    void* edx_3 = eax_10 + 0x1597e78
    
    do
        void* eax_17 = i * 0x68
        *(edx_3 + (i << 2) + 0x40024) = 0xffffffff
        void* eax_19 = eax_17 + 0x18 + esi
        
        if (*eax_19 != 0)
            *(edx_3 + (i << 2) + 0x40024) = edi
            sub_5b1880(eax_10 + 0x1597e78, eax_19)
            int32_t eax_22 = *eax_19
            int32_t* eax_23 = sub_5bc0a0(eax_10 + 0x15d7e90)
            int32_t eax_24 = sub_4acc50(eax_23)
            int32_t eax_25 = sub_4acc50(eax_23)
            int32_t var_30_1 = eax_24
            void var_1164
            sub_5bc1c0(&var_1164, sub_5bc1e0(eax_23) + ((eax_25 * eax_22) << 2), 1)
            int32_t* var_1158_1 = eax_23
            int32_t var_1154_1 = eax_22
            int32_t var_1150_1 = 0
            int32_t var_114c_1 = sub_4acc50(eax_23)
            int32_t* eax_31 = sub_5bc0a0(eax_10 + 0x15d7e7c)
            int32_t eax_32 = sub_4acc50(eax_31)
            int32_t eax_33 = sub_4acc50(eax_31)
            int32_t var_30_2 = eax_32
            void var_1180
            sub_5bc1c0(&var_1180, sub_5bc1e0(eax_31) + ((eax_33 * var_88) << 2), 1)
            int32_t* var_1174_1 = eax_31
            int32_t var_1170_1 = var_88
            int32_t var_116c_1 = 0
            int32_t var_1168_1 = sub_4acc50(eax_31)
            sub_5bc0f0(&var_1180, &var_1164)
            int32_t eax_38 = sub_4acc50(eax_13)
            int32_t eax_42 = sx.d(*(eax_17 + var_74 + 0x32)) - 1 + eax_38
            int32_t* eax_43 = sub_5bc0a0(eax_15)
            int32_t var_30_4 = sub_4acc50(eax_43)
            void var_119c
            sub_5bc1c0(&var_119c, sub_5bc1e0(eax_43) + eax_42 * 4, 1)
            int32_t* var_1190_1 = eax_43
            int32_t var_118c_1 = eax_42
            int32_t var_1188_1 = 0
            int32_t var_1184_1 = 1
            int32_t* eax_49 = sub_5bc0a0(eax_10 + 0x15d7e7c)
            int32_t eax_50 = sub_4acc50(eax_49)
            int32_t eax_51 = sub_4acc50(eax_49)
            int32_t var_30_5 = eax_50
            void var_d3c
            sub_5bc1c0(&var_d3c, sub_5bc1e0(eax_49) + ((eax_51 * var_88) << 2), 1)
            int32_t* var_d30_1 = eax_49
            int32_t var_d2c_1 = var_88
            int32_t var_d28_1 = 0
            int32_t var_d24_1 = sub_4acc50(eax_49)
            int32_t* eax_56 = sub_5bc0a0(&var_119c)
            int32_t* eax_57 = sub_5bc0a0(&var_d3c)
            int32_t var_14_1 = 0
            int32_t var_8a0 = sub_5bc1e0(eax_56)
            int32_t var_89c_1 = sub_5bbe40(eax_56[3])
            eax_56[3]
            int32_t var_14_2 = 2
            int32_t var_894 = sub_5bc1e0(eax_57)
            eax_57[3]
            int32_t var_88c_1 = sub_4acc50(eax_57[3])
            var_14_2.b = 3
            int32_t var_3b4_1 = sub_5bc0a0(eax_57)
            int32_t* var_3c0 = &var_894
            int32_t* var_3bc_1 = &var_8a0
            void var_11f
            void* var_3b8_1 = &var_11f
            int32_t eax_63 = sub_5c1af0(&var_3c0)
            int32_t esi_10 = 0
            
            if (eax_63 s> 0)
                do
                    int32_t eax_65 = *var_3c0
                    *(eax_65 + (esi_10 << 2)) =
                        *(eax_65 + (esi_10 << 2)) f+ *(*var_3bc_1 + ((var_3bc_1[1] * esi_10) << 2))
                    esi_10 += 1
                while (esi_10 s< eax_63)
            
            int32_t var_14_3 = 0xffffffff
            int32_t edi_14 = *(eax_10 + 0x15d8b38)
            int32_t eax_68 = *(eax_17 + var_74 + 0x28)
            int32_t esi_19
            int32_t var_60_1
            
            if (edi_14 s>= 0xc)
                var_60_1 = eax_38 + 0x3e
                
                if (edi_14 s< 0xe)
                    goto label_5b214a
                
                int32_t* eax_91 = sub_5bc0a0(eax_15)
                int32_t* var_58_7 = eax_91
                int32_t var_a4_4 = 1
                int32_t var_30_8 = sub_4acc50(eax_91)
                int32_t esi_22 = eax_38 + eax_68 + 0x3e
                void var_11d4
                sub_5bc1c0(&var_11d4, sub_5bc1e0(eax_91) + ((esi_22 * var_a4_4) << 2), 1)
                int32_t var_11c4_1 = esi_22
                int32_t* var_11c8_1 = eax_91
                int32_t var_11c0_1 = 0
                int32_t var_11bc_1 = 1
                int32_t* eax_96 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_97 = sub_4acc50(eax_96)
                int32_t eax_98 = sub_4acc50(eax_96)
                int32_t var_30_9 = eax_97
                void var_d74
                sub_5bc1c0(&var_d74, sub_5bc1e0(eax_96) + ((eax_98 * var_88) << 2), 1)
                int32_t* var_d68_1 = eax_96
                int32_t var_d64_1 = var_88
                int32_t var_d60_1 = 0
                int32_t var_d5c_1 = sub_4acc50(eax_96)
                int32_t* eax_103 = sub_5bc0a0(&var_11d4)
                int32_t* eax_104 = sub_5bc0a0(&var_d74)
                int32_t var_14_7 = 8
                int32_t var_8d0 = sub_5bc1e0(eax_103)
                int32_t var_8cc_1 = sub_5bbe40(eax_103[3])
                eax_103[3]
                int32_t var_14_8 = 0xa
                int32_t var_8c4 = sub_5bc1e0(eax_104)
                eax_104[3]
                int32_t var_8bc_1 = sub_4acc50(eax_104[3])
                var_14_8.b = 0xb
                int32_t var_394_1 = sub_5bc0a0(eax_104)
                int32_t* var_3a0 = &var_8c4
                int32_t* var_39c_1 = &var_8d0
                void var_122
                void* var_398_1 = &var_122
                int32_t eax_110 = sub_5c1af0(&var_3a0)
                int32_t edi_26 = 0
                int32_t var_a4_5 = eax_110
                int32_t esi_26 = eax_38 + 0x3e
                
                if (eax_110 s> 0)
                    do
                        int32_t eax_113 = *var_3a0
                        *(eax_113 + (edi_26 << 2)) = *(eax_113 + (edi_26 << 2)) f+
                            *(*var_39c_1 + ((var_39c_1[1] * edi_26) << 2))
                        edi_26 += 1
                    while (edi_26 s< eax_110)
                    
                    esi_26 = eax_38 + 0x3e
                
                int32_t var_14_9 = 0xffffffff
                esi_19 = esi_26 + 0x1d
            else
                var_60_1 = eax_38 + 0x35
            label_5b214a:
                
                if (eax_68 s< 0x15)
                    int32_t* eax_69 = sub_5bc0a0(eax_15)
                    int32_t var_30_6 = sub_4acc50(eax_69)
                    int32_t esi_13 = eax_68 + var_60_1
                    void var_11b8
                    sub_5bc1c0(&var_11b8, sub_5bc1e0(eax_69) + esi_13 * 4, 1)
                    int32_t* var_11ac_1 = eax_69
                    int32_t var_11a8_1 = esi_13
                    int32_t var_11a4_1 = 0
                    int32_t var_11a0_1 = 1
                    int32_t* eax_74 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_75 = sub_4acc50(eax_74)
                    int32_t eax_76 = sub_4acc50(eax_74)
                    int32_t var_30_7 = eax_75
                    void var_d58
                    sub_5bc1c0(&var_d58, sub_5bc1e0(eax_74) + ((eax_76 * var_88) << 2), 1)
                    int32_t* var_d4c_1 = eax_74
                    int32_t var_d48_1 = var_88
                    int32_t var_d44_1 = 0
                    int32_t var_d40_1 = sub_4acc50(eax_74)
                    int32_t* eax_81 = sub_5bc0a0(&var_11b8)
                    int32_t* eax_82 = sub_5bc0a0(&var_d58)
                    int32_t var_14_4 = 4
                    int32_t var_8b8 = sub_5bc1e0(eax_81)
                    int32_t var_8b4_1 = sub_5bbe40(eax_81[3])
                    eax_81[3]
                    int32_t var_14_5 = 6
                    int32_t var_8ac = sub_5bc1e0(eax_82)
                    eax_82[3]
                    int32_t var_8a4_1 = sub_4acc50(eax_82[3])
                    var_14_5.b = 7
                    int32_t var_3a4_1 = sub_5bc0a0(eax_82)
                    int32_t* var_3b0 = &var_8ac
                    int32_t* var_3ac_1 = &var_8b8
                    void var_121
                    void* var_3a8_1 = &var_121
                    int32_t eax_88 = sub_5c1af0(&var_3b0)
                    int32_t esi_17 = 0
                    
                    if (eax_88 s> 0)
                        do
                            int32_t eax_90 = *var_3b0
                            *(eax_90 + (esi_17 << 2)) =
                                *(*var_3ac_1 + ((var_3ac_1[1] * esi_17) << 2)) f+
                                *(eax_90 + (esi_17 << 2))
                            esi_17 += 1
                        while (esi_17 s< eax_88)
                    
                    int32_t var_14_6 = 0xffffffff
                
                esi_19 = var_60_1 + 0x16
            int32_t var_60_3 = esi_19
            
            if (*(eax_10 + 0x15d8b38) s>= 0xd)
                int16_t* eax_115 = var_74
                void* ecx_108 = eax_17
                
                if (*(ecx_108 + eax_115 + 0x34) != 0)
                    int32_t* eax_116 = sub_5bc0a0(eax_15)
                    int32_t var_30_10 = sub_4acc50(eax_116)
                    void var_11f0
                    sub_5bc1c0(&var_11f0, sub_5bc1e0(eax_116) + var_60_3 * 4, 1)
                    int32_t* var_11e4_1 = eax_116
                    int32_t var_11e0_1 = var_60_3
                    int32_t var_11dc_1 = 0
                    int32_t var_11d8_1 = 1
                    int32_t* eax_121 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_122 = sub_4acc50(eax_121)
                    int32_t eax_123 = sub_4acc50(eax_121)
                    int32_t var_30_11 = eax_122
                    void var_d90
                    sub_5bc1c0(&var_d90, sub_5bc1e0(eax_121) + ((eax_123 * var_88) << 2), 1)
                    int32_t* var_d84_1 = eax_121
                    int32_t var_d80_1 = var_88
                    int32_t var_d7c_1 = 0
                    int32_t var_d78_1 = sub_4acc50(eax_121)
                    int32_t* eax_128 = sub_5bc0a0(&var_11f0)
                    int32_t* eax_129 = sub_5bc0a0(&var_d90)
                    int32_t var_14_10 = 0xc
                    int32_t var_8e8 = sub_5bc1e0(eax_128)
                    int32_t var_8e4_1 = sub_5bbe40(eax_128[3])
                    eax_128[3]
                    int32_t var_14_11 = 0xe
                    int32_t var_8dc = sub_5bc1e0(eax_129)
                    eax_129[3]
                    int32_t var_8d4_1 = sub_4acc50(eax_129[3])
                    var_14_11.b = 0xf
                    int32_t var_384_1 = sub_5bc0a0(eax_129)
                    int32_t* var_390 = &var_8dc
                    int32_t* var_38c_1 = &var_8e8
                    void var_123
                    void* var_388_1 = &var_123
                    int32_t eax_135 = sub_5c1af0(&var_390)
                    int32_t esi_33 = 0
                    
                    if (eax_135 s> 0)
                        do
                            int32_t eax_137 = *var_390
                            *(eax_137 + (esi_33 << 2)) = *(eax_137 + (esi_33 << 2)) f+
                                *(*var_38c_1 + ((var_38c_1[1] * esi_33) << 2))
                            esi_33 += 1
                        while (esi_33 s< eax_135)
                    
                    int32_t var_14_12 = 0xffffffff
                    eax_115 = var_74
                    esi_19 = var_60_3
                    ecx_108 = eax_17
                
                int32_t esi_40 = esi_19 + 1
                
                if (*(ecx_108 + eax_115 + 0x35) != 0)
                    int32_t* eax_138 = sub_5bc0a0(eax_15)
                    int32_t var_30_12 = sub_4acc50(eax_138)
                    void var_120c
                    sub_5bc1c0(&var_120c, sub_5bc1e0(eax_138) + esi_40 * 4, 1)
                    int32_t* var_1200_1 = eax_138
                    int32_t var_11fc_1 = esi_40
                    int32_t var_11f8_1 = 0
                    int32_t var_11f4_1 = 1
                    int32_t* eax_143 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_144 = sub_4acc50(eax_143)
                    int32_t eax_145 = sub_4acc50(eax_143)
                    int32_t var_30_13 = eax_144
                    void var_dac
                    sub_5bc1c0(&var_dac, sub_5bc1e0(eax_143) + ((eax_145 * var_88) << 2), 1)
                    int32_t* var_da0_1 = eax_143
                    int32_t var_d9c_1 = var_88
                    int32_t var_d98_1 = 0
                    int32_t var_d94_1 = sub_4acc50(eax_143)
                    int32_t* eax_150 = sub_5bc0a0(&var_120c)
                    int32_t* eax_151 = sub_5bc0a0(&var_dac)
                    int32_t var_14_13 = 0x10
                    int32_t var_900 = sub_5bc1e0(eax_150)
                    int32_t var_8fc_1 = sub_5bbe40(eax_150[3])
                    eax_150[3]
                    int32_t var_14_14 = 0x12
                    int32_t var_8f4 = sub_5bc1e0(eax_151)
                    eax_151[3]
                    int32_t var_8ec_1 = sub_4acc50(eax_151[3])
                    var_14_14.b = 0x13
                    int32_t var_374_1 = sub_5bc0a0(eax_151)
                    int32_t* var_380 = &var_8f4
                    int32_t* var_37c_1 = &var_900
                    void var_124
                    void* var_378_1 = &var_124
                    int32_t eax_157 = sub_5c1af0(&var_380)
                    int32_t esi_39 = 0
                    
                    if (eax_157 s> 0)
                        do
                            int32_t eax_159 = *var_380
                            *(eax_159 + (esi_39 << 2)) =
                                *(*var_37c_1 + ((var_37c_1[1] * esi_39) << 2)) f+
                                *(eax_159 + (esi_39 << 2))
                            esi_39 += 1
                        while (esi_39 s< eax_157)
                    
                    int32_t var_14_15 = 0xffffffff
                    eax_115 = var_74
                    ecx_108 = eax_17
                
                int32_t esi_47 = esi_40 + 1
                
                if (*(ecx_108 + eax_115 + 0x36) != 0)
                    int32_t* eax_160 = sub_5bc0a0(eax_15)
                    int32_t var_30_14 = sub_4acc50(eax_160)
                    void var_1228
                    sub_5bc1c0(&var_1228, sub_5bc1e0(eax_160) + esi_47 * 4, 1)
                    int32_t* var_121c_1 = eax_160
                    int32_t var_1218_1 = esi_47
                    int32_t var_1214_1 = 0
                    int32_t var_1210_1 = 1
                    int32_t* eax_165 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_166 = sub_4acc50(eax_165)
                    int32_t eax_167 = sub_4acc50(eax_165)
                    int32_t var_30_15 = eax_166
                    void var_dc8
                    sub_5bc1c0(&var_dc8, sub_5bc1e0(eax_165) + ((eax_167 * var_88) << 2), 1)
                    int32_t* var_dbc_1 = eax_165
                    int32_t var_db8_1 = var_88
                    int32_t var_db4_1 = 0
                    int32_t var_db0_1 = sub_4acc50(eax_165)
                    int32_t* eax_172 = sub_5bc0a0(&var_1228)
                    int32_t* eax_173 = sub_5bc0a0(&var_dc8)
                    int32_t var_14_16 = 0x14
                    int32_t var_918 = sub_5bc1e0(eax_172)
                    int32_t var_914_1 = sub_5bbe40(eax_172[3])
                    eax_172[3]
                    int32_t var_14_17 = 0x16
                    int32_t var_90c = sub_5bc1e0(eax_173)
                    eax_173[3]
                    int32_t var_904_1 = sub_4acc50(eax_173[3])
                    var_14_17.b = 0x17
                    int32_t var_364_1 = sub_5bc0a0(eax_173)
                    int32_t* var_370 = &var_90c
                    int32_t* var_36c_1 = &var_918
                    void var_125
                    void* var_368_1 = &var_125
                    int32_t eax_179 = sub_5c1af0(&var_370)
                    int32_t esi_46 = 0
                    
                    if (eax_179 s> 0)
                        do
                            int32_t eax_181 = *var_370
                            *(eax_181 + (esi_46 << 2)) = *(eax_181 + (esi_46 << 2)) f+
                                *(*var_36c_1 + ((var_36c_1[1] * esi_46) << 2))
                            esi_46 += 1
                        while (esi_46 s< eax_179)
                    
                    int32_t var_14_18 = 0xffffffff
                
                esi_19 = esi_47 + 1
                var_60_3 = esi_19
            
            int32_t edx_18 = esi_19
            void* eax_183 = var_74 + eax_17 + 0x2c
            int32_t var_64_2 = edx_18
            int32_t j_16 = 6
            void* var_80_1 = eax_183
            int32_t j_22 = 6
            int32_t j
            
            do
                if (*eax_183 != 0)
                    int32_t* eax_184 = sub_5bc0a0(eax_15)
                    int32_t var_30_16 = sub_4acc50(eax_184)
                    void var_1244
                    sub_5bc1c0(&var_1244, sub_5bc1e0(eax_184) + var_64_2 * 4, 1)
                    int32_t* var_1238_1 = eax_184
                    int32_t var_1234_1 = var_64_2
                    int32_t var_1230_1 = 0
                    int32_t var_122c_1 = 1
                    int32_t* eax_189 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_190 = sub_4acc50(eax_189)
                    int32_t eax_191 = sub_4acc50(eax_189)
                    int32_t var_30_17 = eax_190
                    void var_de4
                    sub_5bc1c0(&var_de4, sub_5bc1e0(eax_189) + ((eax_191 * var_88) << 2), 1)
                    int32_t* var_dd8_1 = eax_189
                    int32_t var_dd4_1 = var_88
                    int32_t var_dd0_1 = 0
                    int32_t var_dcc_1 = sub_4acc50(eax_189)
                    int32_t* eax_196 = sub_5bc0a0(&var_1244)
                    int32_t* eax_197 = sub_5bc0a0(&var_de4)
                    int32_t var_14_19 = 0x18
                    int32_t var_930 = sub_5bc1e0(eax_196)
                    int32_t var_92c_1 = sub_5bbe40(eax_196[3])
                    eax_196[3]
                    int32_t var_14_20 = 0x1a
                    int32_t var_924 = sub_5bc1e0(eax_197)
                    eax_197[3]
                    int32_t var_91c_1 = sub_4acc50(eax_197[3])
                    var_14_20.b = 0x1b
                    int32_t var_354_1 = sub_5bc0a0(eax_197)
                    int32_t* var_360 = &var_924
                    int32_t* var_35c_1 = &var_930
                    void var_126
                    void* var_358_1 = &var_126
                    int32_t eax_203 = sub_5c1af0(&var_360)
                    int32_t esi_53 = 0
                    
                    if (eax_203 s> 0)
                        do
                            int32_t eax_205 = *var_360
                            *(eax_205 + (esi_53 << 2)) = *(eax_205 + (esi_53 << 2)) f+
                                *(*var_35c_1 + ((var_35c_1[1] * esi_53) << 2))
                            esi_53 += 1
                        while (esi_53 s< eax_203)
                    
                    int32_t var_14_21 = 0xffffffff
                    eax_183 = var_80_1
                    edx_18 = var_64_2
                    j_16 = j_22
                
                eax_183 += 1
                edx_18 += 1
                j = j_16
                j_16 -= 1
                var_80_1 = eax_183
                var_64_2 = edx_18
                j_22 = j_16
            while (j != 1)
            int32_t edi_54 = 0
            int32_t var_80_2 = 0
            int32_t var_64_3 = var_60_3 + 6
            int16_t* ecx_249
            void* esi_54
            
            while (true)
                ecx_249 = var_74
                esi_54 = eax_17
                
                if (sx.d(*(esi_54 + ecx_249 + 0x5c)) s<= edi_54)
                    break
                
                int32_t* eax_207 = sub_5bc0a0(eax_15)
                int32_t var_30_18 = sub_4acc50(eax_207)
                void var_ff8
                sub_5bc1c0(&var_ff8, sub_5bc1e0(eax_207) + var_64_3 * 4, 1)
                int32_t* var_fec_1 = eax_207
                int32_t var_fe8_1 = var_64_3
                int32_t var_fe4_1 = 0
                int32_t var_fe0_1 = 1
                int32_t* eax_212 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_213 = sub_4acc50(eax_212)
                int32_t eax_214 = sub_4acc50(eax_212)
                int32_t var_30_19 = eax_213
                void var_e00
                sub_5bc1c0(&var_e00, sub_5bc1e0(eax_212) + ((eax_214 * var_88) << 2), 1)
                int32_t* var_df4_1 = eax_212
                int32_t var_df0_1 = var_88
                int32_t var_dec_1 = 0
                int32_t var_de8_1 = sub_4acc50(eax_212)
                int32_t* eax_219 = sub_5bc0a0(&var_ff8)
                int32_t* eax_220 = sub_5bc0a0(&var_e00)
                int32_t var_14_22 = 0x1c
                int32_t var_948 = sub_5bc1e0(eax_219)
                int32_t var_944_1 = sub_5bbe40(eax_219[3])
                eax_219[3]
                int32_t var_14_23 = 0x1e
                int32_t var_93c = sub_5bc1e0(eax_220)
                eax_220[3]
                int32_t var_934_1 = sub_4acc50(eax_220[3])
                var_14_23.b = 0x1f
                int32_t var_474_1 = sub_5bc0a0(eax_220)
                int32_t* var_480 = &var_93c
                int32_t* var_47c_1 = &var_948
                void var_127
                void* var_478_1 = &var_127
                int32_t eax_226 = sub_5c1af0(&var_480)
                int32_t esi_60 = 0
                
                if (eax_226 s> 0)
                    do
                        int32_t eax_228 = *var_480
                        *(eax_228 + (esi_60 << 2)) = *(eax_228 + (esi_60 << 2)) f+
                            *(*var_47c_1 + ((var_47c_1[1] * esi_60) << 2))
                        esi_60 += 1
                    while (esi_60 s< eax_226)
                
                int32_t var_14_24 = 0xffffffff
                var_64_3 += 1
                edi_54 = var_80_2 + 1
                var_80_2 = edi_54
                
                if (edi_54 s>= 5)
                    ecx_249 = var_74
                    esi_54 = eax_17
                    break
            
            int32_t j_1 = 0
            int32_t j_11 = 0
            int32_t var_64_4 = var_60_3 + 0xb
            
            while (sx.d(*(esi_54 + ecx_249 + 0x60)) s> j_1)
                int32_t* eax_230 = sub_5bc0a0(eax_15)
                int32_t var_30_20 = sub_4acc50(eax_230)
                void var_127c
                sub_5bc1c0(&var_127c, sub_5bc1e0(eax_230) + var_64_4 * 4, 1)
                int32_t* var_1270_1 = eax_230
                int32_t var_126c_1 = var_64_4
                int32_t var_1268_1 = 0
                int32_t var_1264_1 = 1
                int32_t* eax_235 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_236 = sub_4acc50(eax_235)
                int32_t eax_237 = sub_4acc50(eax_235)
                int32_t var_30_21 = eax_236
                void var_e1c
                sub_5bc1c0(&var_e1c, sub_5bc1e0(eax_235) + ((eax_237 * var_88) << 2), 1)
                int32_t* var_e10_1 = eax_235
                int32_t var_e0c_1 = var_88
                int32_t var_e08_1 = 0
                int32_t var_e04_1 = sub_4acc50(eax_235)
                int32_t* eax_242 = sub_5bc0a0(&var_127c)
                int32_t* eax_243 = sub_5bc0a0(&var_e1c)
                int32_t var_14_25 = 0x20
                int32_t var_960 = sub_5bc1e0(eax_242)
                int32_t var_95c_1 = sub_5bbe40(eax_242[3])
                eax_242[3]
                int32_t var_14_26 = 0x22
                int32_t var_954 = sub_5bc1e0(eax_243)
                eax_243[3]
                int32_t var_94c_1 = sub_4acc50(eax_243[3])
                var_14_26.b = 0x23
                int32_t var_464_1 = sub_5bc0a0(eax_243)
                int32_t* var_470 = &var_954
                int32_t* var_46c_1 = &var_960
                void var_128
                void* var_468_1 = &var_128
                int32_t eax_249 = sub_5c1af0(&var_470)
                int32_t esi_66 = 0
                
                if (eax_249 s> 0)
                    do
                        int32_t eax_251 = *var_470
                        *(eax_251 + (esi_66 << 2)) = *(eax_251 + (esi_66 << 2)) f+
                            *(*var_46c_1 + ((var_46c_1[1] * esi_66) << 2))
                        esi_66 += 1
                    while (esi_66 s< eax_249)
                
                int32_t var_14_27 = 0xffffffff
                var_64_4 += 1
                j_1 = j_11 + 1
                ecx_249 = var_74
                esi_54 = eax_17
                j_11 = j_1
                
                if (j_1 s>= 6)
                    break
            
            int32_t j_2 = 0
            int32_t j_12 = 0
            int32_t var_64_5 = var_60_3 + 0x11
            
            while (sx.d(*(esi_54 + ecx_249 + 0x62)) s> j_2)
                int32_t* eax_253 = sub_5bc0a0(eax_15)
                int32_t var_30_22 = sub_4acc50(eax_253)
                void var_1298
                sub_5bc1c0(&var_1298, sub_5bc1e0(eax_253) + var_64_5 * 4, 1)
                int32_t* var_128c_1 = eax_253
                int32_t var_1288_1 = var_64_5
                int32_t var_1284_1 = 0
                int32_t var_1280_1 = 1
                int32_t* eax_258 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_259 = sub_4acc50(eax_258)
                int32_t eax_260 = sub_4acc50(eax_258)
                int32_t var_30_23 = eax_259
                void var_e38
                sub_5bc1c0(&var_e38, sub_5bc1e0(eax_258) + ((eax_260 * var_88) << 2), 1)
                int32_t* var_e2c_1 = eax_258
                int32_t var_e28_1 = var_88
                int32_t var_e24_1 = 0
                int32_t var_e20_1 = sub_4acc50(eax_258)
                int32_t* eax_265 = sub_5bc0a0(&var_1298)
                int32_t* eax_266 = sub_5bc0a0(&var_e38)
                int32_t var_14_28 = 0x24
                int32_t var_978 = sub_5bc1e0(eax_265)
                int32_t var_974_1 = sub_5bbe40(eax_265[3])
                eax_265[3]
                int32_t var_14_29 = 0x26
                int32_t var_96c = sub_5bc1e0(eax_266)
                eax_266[3]
                int32_t var_964_1 = sub_4acc50(eax_266[3])
                var_14_29.b = 0x27
                int32_t var_454_1 = sub_5bc0a0(eax_266)
                int32_t* var_460 = &var_96c
                int32_t* var_45c_1 = &var_978
                void var_129
                void* var_458_1 = &var_129
                int32_t eax_272 = sub_5c1af0(&var_460)
                int32_t esi_72 = 0
                
                if (eax_272 s> 0)
                    do
                        int32_t eax_274 = *var_460
                        *(eax_274 + (esi_72 << 2)) = *(eax_274 + (esi_72 << 2)) f+
                            *(*var_45c_1 + ((var_45c_1[1] * esi_72) << 2))
                        esi_72 += 1
                    while (esi_72 s< eax_272)
                
                int32_t var_14_30 = 0xffffffff
                var_64_5 += 1
                j_2 = j_12 + 1
                ecx_249 = var_74
                esi_54 = eax_17
                j_12 = j_2
                
                if (j_2 s>= 5)
                    break
            
            int32_t j_3 = 0
            int32_t j_13 = 0
            int32_t var_64_6 = var_60_3 + 0x16
            
            while (sx.d(*(esi_54 + ecx_249 + 0x64)) s> j_3)
                int32_t* eax_278 = sub_5bc0a0(eax_15)
                int32_t var_30_24 = sub_4acc50(eax_278)
                void var_12b4
                sub_5bc1c0(&var_12b4, sub_5bc1e0(eax_278) + var_64_6 * 4, 1)
                int32_t* var_12a8_1 = eax_278
                int32_t var_12a4_1 = var_64_6
                int32_t var_12a0_1 = 0
                int32_t var_129c_1 = 1
                int32_t* eax_283 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_284 = sub_4acc50(eax_283)
                int32_t eax_285 = sub_4acc50(eax_283)
                int32_t var_30_25 = eax_284
                void var_e54
                sub_5bc1c0(&var_e54, sub_5bc1e0(eax_283) + ((eax_285 * var_88) << 2), 1)
                int32_t* var_e48_1 = eax_283
                int32_t var_e44_1 = var_88
                int32_t var_e40_1 = 0
                int32_t var_e3c_1 = sub_4acc50(eax_283)
                int32_t* eax_290 = sub_5bc0a0(&var_12b4)
                int32_t* eax_291 = sub_5bc0a0(&var_e54)
                int32_t var_14_31 = 0x28
                int32_t var_990 = sub_5bc1e0(eax_290)
                int32_t var_98c_1 = sub_5bbe40(eax_290[3])
                eax_290[3]
                int32_t var_14_32 = 0x2a
                int32_t var_984 = sub_5bc1e0(eax_291)
                eax_291[3]
                int32_t var_97c_1 = sub_4acc50(eax_291[3])
                var_14_32.b = 0x2b
                int32_t var_444_1 = sub_5bc0a0(eax_291)
                int32_t* var_450 = &var_984
                int32_t* var_44c_1 = &var_990
                void var_12a
                void* var_448_1 = &var_12a
                int32_t eax_297 = sub_5c1af0(&var_450)
                int32_t esi_78 = 0
                
                if (eax_297 s> 0)
                    do
                        int32_t eax_299 = *var_450
                        *(eax_299 + (esi_78 << 2)) = *(eax_299 + (esi_78 << 2)) f+
                            *(*var_44c_1 + ((var_44c_1[1] * esi_78) << 2))
                        esi_78 += 1
                    while (esi_78 s< eax_297)
                
                int32_t var_14_33 = 0xffffffff
                var_64_6 += 1
                j_3 = j_13 + 1
                ecx_249 = var_74
                esi_54 = eax_17
                j_13 = j_3
                
                if (j_3 s>= 9)
                    break
            
            int32_t edx_32 = var_60_3 + 0x1f
            int32_t var_60_10 = edx_32
            
            if (*(eax_10 + 0x15d8b38) s>= 0xc)
                int32_t j_4 = 0
                int32_t var_64_7 = edx_32
                int32_t j_14 = 0
                
                while (sx.d(*(esi_54 + ecx_249 + 0x66)) s> j_4)
                    int32_t* eax_302 = sub_5bc0a0(eax_15)
                    int32_t var_30_26 = sub_4acc50(eax_302)
                    void var_12d0
                    sub_5bc1c0(&var_12d0, sub_5bc1e0(eax_302) + var_64_7 * 4, 1)
                    int32_t* var_12c4_1 = eax_302
                    int32_t var_12c0_1 = var_64_7
                    int32_t var_12bc_1 = 0
                    int32_t var_12b8_1 = 1
                    int32_t* eax_307 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_308 = sub_4acc50(eax_307)
                    int32_t eax_309 = sub_4acc50(eax_307)
                    int32_t var_30_27 = eax_308
                    void var_e70
                    sub_5bc1c0(&var_e70, sub_5bc1e0(eax_307) + ((eax_309 * var_88) << 2), 1)
                    int32_t* var_e64_1 = eax_307
                    int32_t var_e60_1 = var_88
                    int32_t var_e5c_1 = 0
                    int32_t var_e58_1 = sub_4acc50(eax_307)
                    int32_t* eax_314 = sub_5bc0a0(&var_12d0)
                    int32_t* eax_315 = sub_5bc0a0(&var_e70)
                    int32_t var_14_34 = 0x2c
                    int32_t var_684 = sub_5bc1e0(eax_314)
                    int32_t var_680_1 = sub_5bbe40(eax_314[3])
                    eax_314[3]
                    int32_t var_14_35 = 0x2e
                    int32_t var_99c = sub_5bc1e0(eax_315)
                    eax_315[3]
                    int32_t var_994_1 = sub_4acc50(eax_315[3])
                    var_14_35.b = 0x2f
                    int32_t var_484_1 = sub_5bc0a0(eax_315)
                    int32_t* var_490 = &var_99c
                    int32_t* var_48c_1 = &var_684
                    void var_141
                    void* var_488_1 = &var_141
                    int32_t eax_321 = sub_5c1af0(&var_490)
                    int32_t esi_84 = 0
                    
                    if (eax_321 s> 0)
                        do
                            int32_t eax_323 = *var_490
                            *(eax_323 + (esi_84 << 2)) = *(eax_323 + (esi_84 << 2)) f+
                                *(*var_48c_1 + ((var_48c_1[1] * esi_84) << 2))
                            esi_84 += 1
                        while (esi_84 s< eax_321)
                    
                    int32_t var_14_36 = 0xffffffff
                    var_64_7 += 1
                    j_4 = j_14 + 1
                    ecx_249 = var_74
                    esi_54 = eax_17
                    j_14 = j_4
                    
                    if (j_4 s>= 0xf)
                        break
                
                edx_32 = var_60_10 + 0xf
                var_60_10 = edx_32
            
            int32_t j_5 = 0
            int32_t var_64_8 = edx_32
            int32_t j_15 = 0
            
            while (sx.d(*(esi_54 + ecx_249 + 0x68)) s> j_5)
                int32_t* eax_325 = sub_5bc0a0(eax_15)
                int32_t var_30_28 = sub_4acc50(eax_325)
                void var_12ec
                sub_5bc1c0(&var_12ec, sub_5bc1e0(eax_325) + var_64_8 * 4, 1)
                int32_t* var_12e0_1 = eax_325
                int32_t var_12dc_1 = var_64_8
                int32_t var_12d8_1 = 0
                int32_t var_12d4_1 = 1
                int32_t* eax_330 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_331 = sub_4acc50(eax_330)
                int32_t eax_332 = sub_4acc50(eax_330)
                int32_t var_30_29 = eax_331
                void var_c84
                sub_5bc1c0(&var_c84, sub_5bc1e0(eax_330) + ((eax_332 * var_88) << 2), 1)
                int32_t* var_c78_1 = eax_330
                int32_t var_c74_1 = var_88
                int32_t var_c70_1 = 0
                int32_t var_c6c_1 = sub_4acc50(eax_330)
                int32_t* eax_337 = sub_5bc0a0(&var_12ec)
                int32_t* eax_338 = sub_5bc0a0(&var_c84)
                int32_t var_14_37 = 0x30
                int32_t var_69c = sub_5bc1e0(eax_337)
                int32_t var_698_1 = sub_5bbe40(eax_337[3])
                eax_337[3]
                int32_t var_14_38 = 0x32
                int32_t var_690 = sub_5bc1e0(eax_338)
                eax_338[3]
                int32_t var_688_1 = sub_4acc50(eax_338[3])
                var_14_38.b = 0x33
                int32_t var_494_1 = sub_5bc0a0(eax_338)
                int32_t* var_4a0 = &var_690
                int32_t* var_49c_1 = &var_69c
                void var_142
                void* var_498_1 = &var_142
                int32_t eax_344 = sub_5c1af0(&var_4a0)
                int32_t esi_90 = 0
                
                if (eax_344 s> 0)
                    do
                        int32_t eax_346 = *var_4a0
                        *(eax_346 + (esi_90 << 2)) = *(eax_346 + (esi_90 << 2)) f+
                            *(*var_49c_1 + ((var_49c_1[1] * esi_90) << 2))
                        esi_90 += 1
                    while (esi_90 s< eax_344)
                
                int32_t var_14_39 = 0xffffffff
                var_64_8 += 1
                j_5 = j_15 + 1
                ecx_249 = var_74
                esi_54 = eax_17
                j_15 = j_5
                
                if (j_5 s>= 8)
                    break
            
            int32_t edx_37 = var_60_10 + 8
            
            if (*(esi_54 + ecx_249 + 0x5e) != 0)
                int32_t* eax_347 = sub_5bc0a0(eax_15)
                int32_t var_30_30 = sub_4acc50(eax_347)
                void var_1068
                sub_5bc1c0(&var_1068, sub_5bc1e0(eax_347) + edx_37 * 4, 1)
                int32_t* var_105c_1 = eax_347
                int32_t var_1058_1 = edx_37
                int32_t var_1054_1 = 0
                int32_t var_1050_1 = 1
                int32_t* eax_352 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_353 = sub_4acc50(eax_352)
                int32_t eax_354 = sub_4acc50(eax_352)
                int32_t var_30_31 = eax_353
                void var_ea8
                sub_5bc1c0(&var_ea8, sub_5bc1e0(eax_352) + ((eax_354 * var_88) << 2), 1)
                int32_t* var_e9c_1 = eax_352
                int32_t var_e98_1 = var_88
                int32_t var_e94_1 = 0
                int32_t var_e90_1 = sub_4acc50(eax_352)
                int32_t* eax_359 = sub_5bc0a0(&var_1068)
                int32_t* eax_360 = sub_5bc0a0(&var_ea8)
                int32_t var_14_40 = 0x34
                int32_t var_6b4 = sub_5bc1e0(eax_359)
                int32_t var_6b0_1 = sub_5bbe40(eax_359[3])
                eax_359[3]
                int32_t var_14_41 = 0x36
                int32_t var_6a8 = sub_5bc1e0(eax_360)
                eax_360[3]
                int32_t var_6a0_1 = sub_4acc50(eax_360[3])
                var_14_41.b = 0x37
                int32_t var_4a4_1 = sub_5bc0a0(eax_360)
                int32_t* var_4b0 = &var_6a8
                int32_t* var_4ac_1 = &var_6b4
                void var_11e
                void* var_4a8_1 = &var_11e
                int32_t eax_366 = sub_5c1af0(&var_4b0)
                int32_t esi_96 = 0
                
                if (eax_366 s> 0)
                    do
                        int32_t eax_368 = *var_4b0
                        *(eax_368 + (esi_96 << 2)) =
                            *(*var_4ac_1 + ((var_4ac_1[1] * esi_96) << 2)) f+
                            *(eax_368 + (esi_96 << 2))
                        esi_96 += 1
                    while (esi_96 s< eax_366)
                
                int32_t var_14_42 = 0xffffffff
                ecx_249 = var_74
                esi_54 = eax_17
            
            int32_t edx_40 = edx_37 + 1
            
            if (*(esi_54 + ecx_249 + 0x37) != 0)
                int32_t* eax_369 = sub_5bc0a0(eax_15)
                int32_t var_30_32 = sub_4acc50(eax_369)
                void var_1324
                sub_5bc1c0(&var_1324, sub_5bc1e0(eax_369) + edx_40 * 4, 1)
                int32_t* var_1318_1 = eax_369
                int32_t var_1314_1 = edx_40
                int32_t var_1310_1 = 0
                int32_t var_130c_1 = 1
                int32_t* eax_374 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_375 = sub_4acc50(eax_374)
                int32_t eax_376 = sub_4acc50(eax_374)
                int32_t var_30_33 = eax_375
                void var_ec4
                sub_5bc1c0(&var_ec4, sub_5bc1e0(eax_374) + ((eax_376 * var_88) << 2), 1)
                int32_t* var_eb8_1 = eax_374
                int32_t var_eb4_1 = var_88
                int32_t var_eb0_1 = 0
                int32_t var_eac_1 = sub_4acc50(eax_374)
                int32_t* eax_381 = sub_5bc0a0(&var_1324)
                int32_t* eax_382 = sub_5bc0a0(&var_ec4)
                int32_t var_14_43 = 0x38
                int32_t var_6cc = sub_5bc1e0(eax_381)
                int32_t var_6c8_1 = sub_5bbe40(eax_381[3])
                eax_381[3]
                int32_t var_14_44 = 0x3a
                int32_t var_6c0 = sub_5bc1e0(eax_382)
                eax_382[3]
                int32_t var_6b8_1 = sub_4acc50(eax_382[3])
                var_14_44.b = 0x3b
                int32_t var_4b4_1 = sub_5bc0a0(eax_382)
                int32_t* var_4c0 = &var_6c0
                int32_t* var_4bc_1 = &var_6cc
                void var_143
                void* var_4b8_1 = &var_143
                int32_t eax_388 = sub_5c1af0(&var_4c0)
                int32_t esi_102 = 0
                
                if (eax_388 s> 0)
                    do
                        int32_t eax_390 = *var_4c0
                        *(eax_390 + (esi_102 << 2)) = *(eax_390 + (esi_102 << 2)) f+
                            *(*var_4bc_1 + ((var_4bc_1[1] * esi_102) << 2))
                        esi_102 += 1
                    while (esi_102 s< eax_388)
                
                int32_t var_14_45 = 0xffffffff
                ecx_249 = var_74
                esi_54 = eax_17
            
            int32_t edx_42 = edx_40 + 1
            
            if (*(esi_54 + ecx_249 + 0x38) != 0)
                int32_t* eax_391 = sub_5bc0a0(eax_15)
                int32_t var_30_34 = sub_4acc50(eax_391)
                void var_1340
                sub_5bc1c0(&var_1340, sub_5bc1e0(eax_391) + edx_42 * 4, 1)
                int32_t* var_1334_1 = eax_391
                int32_t var_1330_1 = edx_42
                int32_t var_132c_1 = 0
                int32_t var_1328_1 = 1
                int32_t* eax_396 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_397 = sub_4acc50(eax_396)
                int32_t eax_398 = sub_4acc50(eax_396)
                int32_t var_30_35 = eax_397
                void var_ee0
                sub_5bc1c0(&var_ee0, sub_5bc1e0(eax_396) + ((eax_398 * var_88) << 2), 1)
                int32_t* var_ed4_1 = eax_396
                int32_t var_ed0_1 = var_88
                int32_t var_ecc_1 = 0
                int32_t var_ec8_1 = sub_4acc50(eax_396)
                int32_t* eax_403 = sub_5bc0a0(&var_1340)
                int32_t* eax_404 = sub_5bc0a0(&var_ee0)
                int32_t var_14_46 = 0x3c
                int32_t var_6e4 = sub_5bc1e0(eax_403)
                int32_t var_6e0_1 = sub_5bbe40(eax_403[3])
                eax_403[3]
                int32_t var_14_47 = 0x3e
                int32_t var_6d8 = sub_5bc1e0(eax_404)
                eax_404[3]
                int32_t var_6d0_1 = sub_4acc50(eax_404[3])
                var_14_47.b = 0x3f
                int32_t var_4c4_1 = sub_5bc0a0(eax_404)
                int32_t* var_4d0 = &var_6d8
                int32_t* var_4cc_1 = &var_6e4
                void var_144
                void* var_4c8_1 = &var_144
                int32_t eax_410 = sub_5c1af0(&var_4d0)
                int32_t esi_108 = 0
                
                if (eax_410 s> 0)
                    do
                        int32_t eax_412 = *var_4d0
                        *(eax_412 + (esi_108 << 2)) =
                            *(*var_4cc_1 + ((var_4cc_1[1] * esi_108) << 2)) f+
                            *(eax_412 + (esi_108 << 2))
                        esi_108 += 1
                    while (esi_108 s< eax_410)
                
                int32_t var_14_48 = 0xffffffff
                ecx_249 = var_74
                esi_54 = eax_17
            
            int32_t edx_44 = edx_42 + 1
            
            if (*(esi_54 + ecx_249 + 0x39) != 0)
                int32_t* eax_413 = sub_5bc0a0(eax_15)
                int32_t var_30_36 = sub_4acc50(eax_413)
                void var_135c
                sub_5bc1c0(&var_135c, sub_5bc1e0(eax_413) + edx_44 * 4, 1)
                int32_t* var_1350_1 = eax_413
                int32_t var_134c_1 = edx_44
                int32_t var_1348_1 = 0
                int32_t var_1344_1 = 1
                int32_t* eax_418 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_419 = sub_4acc50(eax_418)
                int32_t eax_420 = sub_4acc50(eax_418)
                int32_t var_30_37 = eax_419
                void var_efc
                sub_5bc1c0(&var_efc, sub_5bc1e0(eax_418) + ((eax_420 * var_88) << 2), 1)
                int32_t* var_ef0_1 = eax_418
                int32_t var_eec_1 = var_88
                int32_t var_ee8_1 = 0
                int32_t var_ee4_1 = sub_4acc50(eax_418)
                int32_t* eax_425 = sub_5bc0a0(&var_135c)
                int32_t* eax_426 = sub_5bc0a0(&var_efc)
                int32_t var_14_49 = 0x40
                int32_t var_6fc = sub_5bc1e0(eax_425)
                int32_t var_6f8_1 = sub_5bbe40(eax_425[3])
                eax_425[3]
                int32_t var_14_50 = 0x42
                int32_t var_6f0 = sub_5bc1e0(eax_426)
                eax_426[3]
                int32_t var_6e8_1 = sub_4acc50(eax_426[3])
                var_14_50.b = 0x43
                int32_t var_4d4_1 = sub_5bc0a0(eax_426)
                int32_t* var_4e0 = &var_6f0
                int32_t* var_4dc_1 = &var_6fc
                void var_145
                void* var_4d8_1 = &var_145
                int32_t eax_432 = sub_5c1af0(&var_4e0)
                int32_t esi_114 = 0
                
                if (eax_432 s> 0)
                    do
                        int32_t eax_434 = *var_4e0
                        *(eax_434 + (esi_114 << 2)) = *(eax_434 + (esi_114 << 2)) f+
                            *(*var_4dc_1 + ((var_4dc_1[1] * esi_114) << 2))
                        esi_114 += 1
                    while (esi_114 s< eax_432)
                
                int32_t var_14_51 = 0xffffffff
                ecx_249 = var_74
                esi_54 = eax_17
            
            int32_t edx_45 = edx_44 + 1
            int32_t var_60_15 = edx_45
            int32_t edi_127 = *(eax_10 + 0x15d8b38)
            
            if (edi_127 s>= 0xd)
                if (*(esi_54 + ecx_249 + 0x3a) != 0)
                    int32_t* eax_436 = sub_5bc0a0(eax_15)
                    int32_t var_30_38 = sub_4acc50(eax_436)
                    void var_1378
                    sub_5bc1c0(&var_1378, sub_5bc1e0(eax_436) + var_60_15 * 4, 1)
                    int32_t* var_136c_1 = eax_436
                    int32_t var_1368_1 = var_60_15
                    int32_t var_1364_1 = 0
                    int32_t var_1360_1 = 1
                    int32_t* eax_441 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_442 = sub_4acc50(eax_441)
                    int32_t eax_443 = sub_4acc50(eax_441)
                    int32_t var_30_39 = eax_442
                    void var_f18
                    sub_5bc1c0(&var_f18, sub_5bc1e0(eax_441) + ((eax_443 * var_88) << 2), 1)
                    int32_t* var_f0c_1 = eax_441
                    int32_t var_f08_1 = var_88
                    int32_t var_f04_1 = 0
                    int32_t var_f00_1 = sub_4acc50(eax_441)
                    int32_t* eax_448 = sub_5bc0a0(&var_1378)
                    int32_t* eax_449 = sub_5bc0a0(&var_f18)
                    int32_t var_14_52 = 0x44
                    int32_t var_714 = sub_5bc1e0(eax_448)
                    int32_t var_710_1 = sub_5bbe40(eax_448[3])
                    eax_448[3]
                    int32_t var_14_53 = 0x46
                    int32_t var_708 = sub_5bc1e0(eax_449)
                    eax_449[3]
                    int32_t var_700_1 = sub_4acc50(eax_449[3])
                    var_14_53.b = 0x47
                    int32_t var_4e4_1 = sub_5bc0a0(eax_449)
                    int32_t* var_4f0 = &var_708
                    int32_t* var_4ec_1 = &var_714
                    void var_146
                    void* var_4e8_1 = &var_146
                    int32_t eax_455 = sub_5c1af0(&var_4f0)
                    int32_t esi_120 = 0
                    
                    if (eax_455 s> 0)
                        do
                            int32_t eax_457 = *var_4f0
                            *(eax_457 + (esi_120 << 2)) =
                                *(*var_4ec_1 + ((var_4ec_1[1] * esi_120) << 2)) f+
                                *(eax_457 + (esi_120 << 2))
                            esi_120 += 1
                        while (esi_120 s< eax_455)
                    
                    int32_t var_14_54 = 0xffffffff
                    ecx_249 = var_74
                    edx_45 = var_60_15
                    esi_54 = eax_17
                    edi_127 = *(eax_10 + 0x15d8b38)
                
                edx_45 += 1
                var_60_15 = edx_45
            
            if (edi_127 s>= 0xf)
                int32_t var_64_9 = edx_45
                void* eax_460 = ecx_249 + 0x3b + esi_54
                int32_t j_17 = 6
                void* var_80_3 = eax_460
                int32_t j_23 = 6
                int32_t j_6
                
                do
                    if (*eax_460 != 0)
                        int32_t* eax_461 = sub_5bc0a0(eax_15)
                        int32_t var_30_40 = sub_4acc50(eax_461)
                        void var_1394
                        sub_5bc1c0(&var_1394, sub_5bc1e0(eax_461) + var_64_9 * 4, 1)
                        int32_t* var_1388_1 = eax_461
                        int32_t var_1384_1 = var_64_9
                        int32_t var_1380_1 = 0
                        int32_t var_137c_1 = 1
                        int32_t* eax_466 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                        int32_t eax_467 = sub_4acc50(eax_466)
                        int32_t eax_468 = sub_4acc50(eax_466)
                        int32_t var_30_41 = eax_467
                        void var_f34
                        sub_5bc1c0(&var_f34, sub_5bc1e0(eax_466) + ((eax_468 * var_88) << 2), 1)
                        int32_t* var_f28_1 = eax_466
                        int32_t var_f24_1 = var_88
                        int32_t var_f20_1 = 0
                        int32_t var_f1c_1 = sub_4acc50(eax_466)
                        int32_t* eax_473 = sub_5bc0a0(&var_1394)
                        int32_t* eax_474 = sub_5bc0a0(&var_f34)
                        int32_t var_14_55 = 0x48
                        int32_t var_72c = sub_5bc1e0(eax_473)
                        int32_t var_728_1 = sub_5bbe40(eax_473[3])
                        eax_473[3]
                        int32_t var_14_56 = 0x4a
                        int32_t var_720 = sub_5bc1e0(eax_474)
                        eax_474[3]
                        int32_t var_718_1 = sub_4acc50(eax_474[3])
                        var_14_56.b = 0x4b
                        int32_t var_4f4_1 = sub_5bc0a0(eax_474)
                        int32_t* var_500 = &var_720
                        int32_t* var_4fc_1 = &var_72c
                        void var_147
                        void* var_4f8_1 = &var_147
                        int32_t eax_480 = sub_5c1af0(&var_500)
                        int32_t esi_126 = 0
                        
                        if (eax_480 s> 0)
                            do
                                int32_t eax_482 = *var_500
                                *(eax_482 + (esi_126 << 2)) = *(eax_482 + (esi_126 << 2)) f+
                                    *(*var_4fc_1 + ((var_4fc_1[1] * esi_126) << 2))
                                esi_126 += 1
                            while (esi_126 s< eax_480)
                        
                        int32_t var_14_57 = 0xffffffff
                        eax_460 = var_80_3
                        edx_45 = var_64_9
                        j_17 = j_23
                    
                    eax_460 += 1
                    edx_45 += 1
                    j_6 = j_17
                    j_17 -= 1
                    var_80_3 = eax_460
                    var_64_9 = edx_45
                    j_23 = j_17
                while (j_6 != 1)
                int32_t edx_48 = var_60_15 + 6
                void* eax_486 = var_74 + eax_17 + 0x41
                int32_t var_64_10 = edx_48
                int32_t j_18 = 6
                void* var_80_4 = eax_486
                int32_t j_24 = 6
                int32_t j_7
                
                do
                    if (*eax_486 != 0)
                        int32_t* eax_487 = sub_5bc0a0(eax_15)
                        int32_t var_30_42 = sub_4acc50(eax_487)
                        void var_13b0
                        sub_5bc1c0(&var_13b0, sub_5bc1e0(eax_487) + var_64_10 * 4, 1)
                        int32_t* var_13a4_1 = eax_487
                        int32_t var_13a0_1 = var_64_10
                        int32_t var_139c_1 = 0
                        int32_t var_1398_1 = 1
                        int32_t* eax_492 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                        int32_t eax_493 = sub_4acc50(eax_492)
                        int32_t eax_494 = sub_4acc50(eax_492)
                        int32_t var_30_43 = eax_493
                        void var_f50
                        sub_5bc1c0(&var_f50, sub_5bc1e0(eax_492) + ((eax_494 * var_88) << 2), 1)
                        int32_t* var_f44_1 = eax_492
                        int32_t var_f40_1 = var_88
                        int32_t var_f3c_1 = 0
                        int32_t var_f38_1 = sub_4acc50(eax_492)
                        int32_t* eax_499 = sub_5bc0a0(&var_13b0)
                        int32_t* eax_500 = sub_5bc0a0(&var_f50)
                        int32_t var_14_58 = 0x4c
                        int32_t var_744 = sub_5bc1e0(eax_499)
                        int32_t var_740_1 = sub_5bbe40(eax_499[3])
                        eax_499[3]
                        int32_t var_14_59 = 0x4e
                        int32_t var_738 = sub_5bc1e0(eax_500)
                        eax_500[3]
                        int32_t var_730_1 = sub_4acc50(eax_500[3])
                        var_14_59.b = 0x4f
                        int32_t var_504_1 = sub_5bc0a0(eax_500)
                        int32_t* var_510 = &var_738
                        int32_t* var_50c_1 = &var_744
                        void var_148
                        void* var_508_1 = &var_148
                        int32_t eax_506 = sub_5c1af0(&var_510)
                        int32_t esi_132 = 0
                        
                        if (eax_506 s> 0)
                            do
                                int32_t eax_508 = *var_510
                                *(eax_508 + (esi_132 << 2)) = *(eax_508 + (esi_132 << 2)) f+
                                    *(*var_50c_1 + ((var_50c_1[1] * esi_132) << 2))
                                esi_132 += 1
                            while (esi_132 s< eax_506)
                        
                        int32_t var_14_60 = 0xffffffff
                        eax_486 = var_80_4
                        edx_48 = var_64_10
                        j_18 = j_24
                    
                    eax_486 += 1
                    edx_48 += 1
                    j_7 = j_18
                    j_18 -= 1
                    var_80_4 = eax_486
                    var_64_10 = edx_48
                    j_24 = j_18
                while (j_7 != 1)
                edx_45 = var_60_15 + 0xc
                var_60_15 = edx_45
                edi_127 = *(eax_10 + 0x15d8b38)
            
            int32_t eax_511 = var_74 + eax_17 + 0x47
            int32_t var_80_5 = eax_511
            int32_t ecx_586
            ecx_586.b = edi_127 s>= 0xe
            void* j_19 = (ecx_586 << 1) + 0x12
            void* j_26 = j_19
            int32_t esi_133
            void* j_8
            
            do
                esi_133 = edx_45
                
                if (*eax_511 != 0)
                    int32_t* eax_512 = sub_5bc0a0(eax_15)
                    int32_t var_30_44 = sub_4acc50(eax_512)
                    void var_13cc
                    sub_5bc1c0(&var_13cc, sub_5bc1e0(eax_512) + var_60_15 * 4, 1)
                    int32_t* var_13c0_1 = eax_512
                    int32_t var_13bc_1 = var_60_15
                    int32_t var_13b8_1 = 0
                    int32_t var_13b4_1 = 1
                    int32_t* eax_517 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_518 = sub_4acc50(eax_517)
                    int32_t eax_519 = sub_4acc50(eax_517)
                    int32_t var_30_45 = eax_518
                    void var_f6c
                    sub_5bc1c0(&var_f6c, sub_5bc1e0(eax_517) + ((eax_519 * var_88) << 2), 1)
                    int32_t* var_f60_1 = eax_517
                    int32_t var_f5c_1 = var_88
                    int32_t var_f58_1 = 0
                    int32_t var_f54_1 = sub_4acc50(eax_517)
                    int32_t* eax_524 = sub_5bc0a0(&var_13cc)
                    int32_t* eax_525 = sub_5bc0a0(&var_f6c)
                    int32_t var_14_61 = 0x50
                    int32_t var_75c = sub_5bc1e0(eax_524)
                    int32_t var_758_1 = sub_5bbe40(eax_524[3])
                    eax_524[3]
                    int32_t var_14_62 = 0x52
                    int32_t var_750 = sub_5bc1e0(eax_525)
                    eax_525[3]
                    int32_t var_748_1 = sub_4acc50(eax_525[3])
                    var_14_62.b = 0x53
                    int32_t var_3c4_1 = sub_5bc0a0(eax_525)
                    int32_t* var_3d0 = &var_750
                    int32_t* var_3cc_1 = &var_75c
                    void var_14a
                    void* var_3c8_1 = &var_14a
                    int32_t eax_531 = sub_5c1af0(&var_3d0)
                    int32_t esi_139 = 0
                    
                    if (eax_531 s> 0)
                        do
                            int32_t eax_533 = *var_3d0
                            *(eax_533 + (esi_139 << 2)) =
                                *(*var_3cc_1 + ((var_3cc_1[1] * esi_139) << 2)) f+
                                *(eax_533 + (esi_139 << 2))
                            esi_139 += 1
                        while (esi_139 s< eax_531)
                    
                    int32_t var_14_63 = 0xffffffff
                    edx_45 = var_60_15
                    eax_511 = var_80_5
                    j_19 = j_26
                
                edx_45 += 1
                eax_511 += 1
                j_8 = j_19
                j_19 -= 1
                var_60_15 = edx_45
                var_80_5 = eax_511
                j_26 = j_19
            while (j_8 != 1)
            int16_t* edi_154 = var_74
            void* eax_535 = eax_17
            
            if (*(eax_10 + 0x15d8b38) s> 0xe)
                edx_45 = esi_133
            
            int32_t edx_53 = edx_45 + 1
            
            if (*(eax_535 + edi_154 + 0x6a) != 0)
                int32_t* eax_536 = sub_5bc0a0(eax_15)
                int32_t var_30_46 = sub_4acc50(eax_536)
                void var_13e8
                sub_5bc1c0(&var_13e8, sub_5bc1e0(eax_536) + edx_53 * 4, 1)
                int32_t* var_13dc_1 = eax_536
                int32_t var_13d8_1 = edx_53
                int32_t var_13d4_1 = 0
                int32_t var_13d0_1 = 1
                int32_t* eax_541 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_542 = sub_4acc50(eax_541)
                int32_t eax_543 = sub_4acc50(eax_541)
                int32_t var_30_47 = eax_542
                void var_f88
                sub_5bc1c0(&var_f88, sub_5bc1e0(eax_541) + ((eax_543 * var_88) << 2), 1)
                int32_t* var_f7c_1 = eax_541
                int32_t var_f78_1 = var_88
                int32_t var_f74_1 = 0
                int32_t var_f70_1 = sub_4acc50(eax_541)
                int32_t* eax_548 = sub_5bc0a0(&var_13e8)
                int32_t* eax_549 = sub_5bc0a0(&var_f88)
                int32_t var_14_64 = 0x54
                int32_t var_774 = sub_5bc1e0(eax_548)
                int32_t var_770_1 = sub_5bbe40(eax_548[3])
                eax_548[3]
                int32_t var_14_65 = 0x56
                int32_t var_768 = sub_5bc1e0(eax_549)
                eax_549[3]
                int32_t var_760_1 = sub_4acc50(eax_549[3])
                var_14_65.b = 0x57
                int32_t var_434_1 = sub_5bc0a0(eax_549)
                int32_t* var_440 = &var_768
                int32_t* var_43c_1 = &var_774
                void var_14b
                void* var_438_1 = &var_14b
                int32_t eax_555 = sub_5c1af0(&var_440)
                int32_t esi_145 = 0
                
                if (eax_555 s> 0)
                    do
                        int32_t eax_557 = *var_440
                        *(eax_557 + (esi_145 << 2)) = *(eax_557 + (esi_145 << 2)) f+
                            *(*var_43c_1 + ((var_43c_1[1] * esi_145) << 2))
                        esi_145 += 1
                    while (esi_145 s< eax_555)
                
                int32_t var_14_66 = 0xffffffff
                edi_154 = var_74
                eax_535 = eax_17
            
            int32_t ecx_643 = edx_53 + 1
            
            if (*(eax_535 + edi_154 + 0x6b) != 0)
                int32_t* eax_558 = sub_5bc0a0(eax_15)
                int32_t var_30_48 = sub_4acc50(eax_558)
                void var_fa4
                sub_5bc1c0(&var_fa4, sub_5bc1e0(eax_558) + ecx_643 * 4, 1)
                int32_t* var_f98_1 = eax_558
                int32_t var_f94_1 = ecx_643
                int32_t var_f90_1 = 0
                int32_t var_f8c_1 = 1
                int32_t* eax_563 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_564 = sub_4acc50(eax_563)
                int32_t eax_565 = sub_4acc50(eax_563)
                int32_t var_30_49 = eax_564
                void var_afc
                sub_5bc1c0(&var_afc, sub_5bc1e0(eax_563) + ((eax_565 * var_88) << 2), 1)
                int32_t* var_af0_1 = eax_563
                int32_t var_aec_1 = var_88
                int32_t var_ae8_1 = 0
                int32_t var_ae4_1 = sub_4acc50(eax_563)
                int32_t* eax_570 = sub_5bc0a0(&var_fa4)
                int32_t* eax_571 = sub_5bc0a0(&var_afc)
                int32_t var_14_67 = 0x58
                int32_t var_78c = sub_5bc1e0(eax_570)
                int32_t var_788_1 = sub_5bbe40(eax_570[3])
                eax_570[3]
                int32_t var_14_68 = 0x5a
                int32_t var_780 = sub_5bc1e0(eax_571)
                eax_571[3]
                int32_t var_778_1 = sub_4acc50(eax_571[3])
                var_14_68.b = 0x5b
                int32_t var_3d4_1 = sub_5bc0a0(eax_571)
                int32_t* var_3e0 = &var_780
                int32_t* var_3dc_1 = &var_78c
                void var_14c
                void* var_3d8_1 = &var_14c
                int32_t eax_577 = sub_5c1af0(&var_3e0)
                int32_t esi_151 = 0
                
                if (eax_577 s> 0)
                    do
                        int32_t eax_579 = *var_3e0
                        *(eax_579 + (esi_151 << 2)) =
                            *(*var_3dc_1 + ((var_3dc_1[1] * esi_151) << 2)) f+
                            *(eax_579 + (esi_151 << 2))
                        esi_151 += 1
                    while (esi_151 s< eax_577)
                
                int32_t var_14_69 = 0xffffffff
                edi_154 = var_74
                eax_535 = eax_17
            
            int32_t ecx_698 = ecx_643 + 1
            
            if (*(eax_535 + edi_154 + 0x6c) != 0)
                int32_t* eax_580 = sub_5bc0a0(eax_15)
                int32_t var_30_50 = sub_4acc50(eax_580)
                void var_fc0
                sub_5bc1c0(&var_fc0, sub_5bc1e0(eax_580) + ecx_698 * 4, 1)
                int32_t* var_fb4_1 = eax_580
                int32_t var_fb0_1 = ecx_698
                int32_t var_fac_1 = 0
                int32_t var_fa8_1 = 1
                int32_t* eax_585 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_586 = sub_4acc50(eax_585)
                int32_t eax_587 = sub_4acc50(eax_585)
                int32_t var_30_51 = eax_586
                void var_b18
                sub_5bc1c0(&var_b18, sub_5bc1e0(eax_585) + ((eax_587 * var_88) << 2), 1)
                int32_t* var_b0c_1 = eax_585
                int32_t var_b08_1 = var_88
                int32_t var_b04_1 = 0
                int32_t var_b00_1 = sub_4acc50(eax_585)
                int32_t* eax_592 = sub_5bc0a0(&var_fc0)
                int32_t* eax_593 = sub_5bc0a0(&var_b18)
                int32_t var_14_70 = 0x5c
                int32_t var_7a4 = sub_5bc1e0(eax_592)
                int32_t var_7a0_1 = sub_5bbe40(eax_592[3])
                eax_592[3]
                int32_t var_14_71 = 0x5e
                int32_t var_798 = sub_5bc1e0(eax_593)
                eax_593[3]
                int32_t var_790_1 = sub_4acc50(eax_593[3])
                var_14_71.b = 0x5f
                int32_t var_3e4_1 = sub_5bc0a0(eax_593)
                int32_t* var_3f0 = &var_798
                int32_t* var_3ec_1 = &var_7a4
                void var_14d
                void* var_3e8_1 = &var_14d
                int32_t eax_599 = sub_5c1af0(&var_3f0)
                int32_t esi_157 = 0
                
                if (eax_599 s> 0)
                    do
                        int32_t eax_601 = *var_3f0
                        *(eax_601 + (esi_157 << 2)) = *(eax_601 + (esi_157 << 2)) f+
                            *(*var_3ec_1 + ((var_3ec_1[1] * esi_157) << 2))
                        esi_157 += 1
                    while (esi_157 s< eax_599)
                
                int32_t var_14_72 = 0xffffffff
                edi_154 = var_74
                eax_535 = eax_17
            
            int32_t ecx_726 = ecx_698 + 1
            
            if (*(eax_535 + edi_154 + 0x6d) != 0)
                int32_t* eax_602 = sub_5bc0a0(eax_15)
                int32_t var_30_52 = sub_4acc50(eax_602)
                void var_fdc
                sub_5bc1c0(&var_fdc, sub_5bc1e0(eax_602) + ecx_726 * 4, 1)
                int32_t* var_fd0_1 = eax_602
                int32_t var_fcc_1 = ecx_726
                int32_t var_fc8_1 = 0
                int32_t var_fc4_1 = 1
                int32_t* eax_607 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                int32_t eax_608 = sub_4acc50(eax_607)
                int32_t eax_609 = sub_4acc50(eax_607)
                int32_t var_30_53 = eax_608
                void var_b34
                sub_5bc1c0(&var_b34, sub_5bc1e0(eax_607) + ((eax_609 * var_88) << 2), 1)
                int32_t* var_b28_1 = eax_607
                int32_t var_b24_1 = var_88
                int32_t var_b20_1 = 0
                int32_t var_b1c_1 = sub_4acc50(eax_607)
                int32_t* eax_614 = sub_5bc0a0(&var_fdc)
                int32_t* eax_615 = sub_5bc0a0(&var_b34)
                int32_t var_14_73 = 0x60
                int32_t var_7bc = sub_5bc1e0(eax_614)
                int32_t var_7b8_1 = sub_5bbe40(eax_614[3])
                eax_614[3]
                int32_t var_14_74 = 0x62
                int32_t var_7b0 = sub_5bc1e0(eax_615)
                eax_615[3]
                int32_t var_7a8_1 = sub_4acc50(eax_615[3])
                var_14_74.b = 0x63
                int32_t var_3f4_1 = sub_5bc0a0(eax_615)
                int32_t* var_400 = &var_7b0
                int32_t* var_3fc_1 = &var_7bc
                void var_14e
                void* var_3f8_1 = &var_14e
                int32_t eax_621 = sub_5c1af0(&var_400)
                int32_t esi_163 = 0
                
                if (eax_621 s> 0)
                    do
                        int32_t eax_623 = *var_400
                        *(eax_623 + (esi_163 << 2)) = *(eax_623 + (esi_163 << 2)) f+
                            *(*var_3fc_1 + ((var_3fc_1[1] * esi_163) << 2))
                        esi_163 += 1
                    while (esi_163 s< eax_621)
                
                int32_t var_14_75 = 0xffffffff
                edi_154 = var_74
                eax_535 = eax_17
            
            int32_t ecx_727 = ecx_726 + 1
            int32_t j_27 = 6
            int32_t j_21 = 6
            void* eax_624 = eax_535 + &edi_154[0x37]
            int32_t var_60_21 = ecx_727
            int32_t edi_183 = var_88
            int32_t edx_57 = ecx_727 << 2
            int32_t var_84_2 = ecx_727
            int32_t var_80_6 = edx_57
            void* var_58_53 = eax_624
            int32_t j_9
            
            do
                if (*eax_624 != 0)
                    int32_t var_30_54 = eax_15[2]
                    int32_t var_b50
                    sub_5bc1c0(&var_b50, *eax_15 + edx_57, 1)
                    int32_t var_b40_1 = var_84_2
                    int32_t var_b3c_1 = 0
                    int32_t var_b38_1 = 1
                    int32_t esi_165 = *(eax_10 + 0x15d7e84)
                    int32_t var_14_76 = 0x66
                    int32_t eax_628 = sub_4acc50(eax_10 + 0x15d7e7c) * edi_183
                    int32_t var_14_77 = 0xffffffff
                    int32_t var_30_55 = esi_165
                    int32_t var_9b8
                    sub_5bc1c0(&var_9b8, *(eax_10 + 0x15d7e7c) + (eax_628 << 2), 1)
                    int32_t var_9a8_1 = edi_183
                    int32_t var_9a4_1 = 0
                    int32_t var_14_78 = 0x67
                    int32_t var_9a0_1 = sub_4acc50(eax_10 + 0x15d7e7c)
                    int32_t var_a80 = var_b50
                    int32_t var_14_79 = 0x68
                    int32_t var_a7c_1 = sub_5bbe40(eax_15)
                    int32_t var_a74 = var_9b8
                    int32_t var_14_80 = 0x6b
                    int32_t var_14_81 = 0xffffffff
                    int32_t var_a6c_1 = sub_4acc50(eax_10 + 0x15d7e7c)
                    int32_t* var_410 = &var_a74
                    int32_t* var_40c_1 = &var_a80
                    void var_14f
                    void* var_408_1 = &var_14f
                    int32_t* var_404_1 = &var_9b8
                    int32_t eax_636 = sub_5c1af0(&var_410)
                    int32_t esi_166 = 0
                    int32_t var_a4_7 = eax_636
                    
                    if (eax_636 s> 0)
                        do
                            int32_t eax_638 = *var_410
                            *(eax_638 + (esi_166 << 2)) =
                                *(*var_40c_1 + ((var_40c_1[1] * esi_166) << 2)) f+
                                *(eax_638 + (esi_166 << 2))
                            esi_166 += 1
                        while (esi_166 s< eax_636)
                        
                        edi_183 = var_88
                    
                    j_21 = j_27
                    edx_57 = var_80_6
                    ecx_727 = var_84_2
                    eax_624 = var_58_53
                
                edx_57 += 4
                eax_624 += 1
                ecx_727 += 1
                var_80_6 = edx_57
                j_9 = j_21
                j_21 -= 1
                var_58_53 = eax_624
                var_84_2 = ecx_727
                j_27 = j_21
            while (j_9 != 1)
            int32_t j_20 = 6
            int32_t j_25 = 6
            int32_t ecx_741 = var_60_21 + 6
            int32_t var_58_54 = ecx_741
            void* eax_643 = eax_17 + 0x74 + var_74
            void* var_64_11 = eax_643
            int32_t j_10
            
            do
                if (*eax_643 != 0)
                    int32_t* eax_644 = sub_5bc0a0(eax_15)
                    int32_t var_30_56 = sub_4acc50(eax_644)
                    void var_1260
                    sub_5bc1c0(&var_1260, sub_5bc1e0(eax_644) + var_58_54 * 4, 1)
                    int32_t* var_1254_1 = eax_644
                    int32_t var_1250_1 = var_58_54
                    int32_t var_124c_1 = 0
                    int32_t var_1248_1 = 1
                    int32_t* eax_649 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_650 = sub_4acc50(eax_649)
                    int32_t eax_651 = sub_4acc50(eax_649)
                    int32_t var_30_57 = eax_650
                    void var_b6c
                    sub_5bc1c0(&var_b6c, sub_5bc1e0(eax_649) + ((eax_651 * var_88) << 2), 1)
                    int32_t* var_b60_1 = eax_649
                    int32_t var_b5c_1 = var_88
                    int32_t var_b58_1 = 0
                    int32_t var_b54_1 = sub_4acc50(eax_649)
                    int32_t* eax_656 = sub_5bc0a0(&var_1260)
                    int32_t* eax_657 = sub_5bc0a0(&var_b6c)
                    int32_t var_14_82 = 0x6c
                    int32_t var_7d4 = sub_5bc1e0(eax_656)
                    int32_t var_7d0_1 = sub_5bbe40(eax_656[3])
                    eax_656[3]
                    int32_t var_14_83 = 0x6e
                    int32_t var_7c8 = sub_5bc1e0(eax_657)
                    eax_657[3]
                    int32_t var_7c0_1 = sub_4acc50(eax_657[3])
                    var_14_83.b = 0x6f
                    int32_t var_414_1 = sub_5bc0a0(eax_657)
                    int32_t* var_420 = &var_7c8
                    int32_t* var_41c_1 = &var_7d4
                    void var_150
                    void* var_418_1 = &var_150
                    int32_t eax_663 = sub_5c1af0(&var_420)
                    int32_t esi_172 = 0
                    
                    if (eax_663 s> 0)
                        do
                            int32_t eax_665 = *var_420
                            *(eax_665 + (esi_172 << 2)) =
                                *(*var_41c_1 + ((var_41c_1[1] * esi_172) << 2)) f+
                                *(eax_665 + (esi_172 << 2))
                            esi_172 += 1
                        while (esi_172 s< eax_663)
                    
                    int32_t var_14_84 = 0xffffffff
                    eax_643 = var_64_11
                    ecx_741 = var_58_54
                    j_20 = j_25
                
                eax_643 += 1
                ecx_741 += 1
                j_10 = j_20
                j_20 -= 1
                var_64_11 = eax_643
                var_58_54 = ecx_741
                j_25 = j_20
            while (j_10 != 1)
            
            if (var_60_21 + 0xc != eax_15[1])
                sub_63b870(eax_15, &data_801800, "n == card_dense.rows()", 
                    "C:\x\ax2017\Jams\Dominion\code\NeuralEigen.cpp", 0x3d2, "ComputeNet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            esi = var_74
            edi = var_88 + 1
            i = i_45
            edx_3 = eax_10 + 0x1597e78
            var_88 = edi
        
        i += 1
        i_45 = i
    while (i s< sx.d(*esi))

char** eax_668
int32_t edx_62
eax_668, edx_62 = sub_5bbeb0(&var_44, "player_pre/kernel")
void* eax_669 = sub_5b0f90(eax_668, edx_62, eax_10 + 0x1597e78)
int32_t eax_670 = sub_5bbe40(eax_669)
int32_t var_25c = 0
int32_t var_a4_8 = 0
void var_1550
sub_5c0370(&var_1550, arg5, eax_670, &var_25c)
int32_t eax_671 = sub_5bc0a0(&var_1550)
int32_t var_94
PDBStream::PDBStream(&var_94)
int32_t var_14_85 = 0x70
void* eax_672 = sub_5bc0a0(eax_671)
int32_t edi_193 = *(eax_672 + 4)
int32_t ecx_777 = *(eax_672 + 8)

if (edi_193 != 0 && ecx_777 != 0 && edi_193 s> divs.dp.d(0x7fffffff, ecx_777))
    sub_5b0890()
    noreturn

int32_t edi_194 = *(eax_672 + 8)
int32_t esi_177 = *(eax_672 + 4)

if (esi_177 != 0 && edi_194 != 0 && esi_177 s> divs.dp.d(0x7fffffff, edi_194))
    sub_5b0890()
    noreturn

sub_5bffd0(&var_94, esi_177 * edi_194, esi_177, edi_194)
void* eax_677 = sub_5bc0a0(eax_671)
int32_t* eax_678 = sub_5bc0a0(&var_94)
int32_t edi_195 = *(eax_677 + 4)
int32_t esi_180 = *(eax_677 + 8)
int32_t eax_679 = sub_5bbe40(eax_678)
int32_t eax_680

if (eax_679 == edi_195)
    eax_680 = sub_4acc50(eax_678)

int32_t* edi_196

if (eax_679 == edi_195 && eax_680 == esi_180)
    edi_196 = eax_678
else
    if (edi_195 != 0 && esi_180 != 0 && edi_195 s> divs.dp.d(0x7fffffff, esi_180))
        sub_5b0890()
        noreturn
    
    edi_196 = eax_678
    sub_5bffd0(edi_196, esi_180 * edi_195, edi_195, esi_180)

int32_t var_260 = *sub_5c3cb0(eax_677)
int32_t eax_684 = sub_5bc1f0(edi_196)
int32_t* eax_685 = sub_5bc1e0(edi_196)
sub_5c3cd0(eax_685, eax_684, eax_685, &var_260)
int32_t var_14_86 = 0x71
int32_t var_60_23 = 0
int32_t var_34_63
char const* const var_30_80
int32_t eax_1064
char* ecx_1128

if (arg5 s<= 0)
label_5b7376:
    int32_t* eax_1065 = sub_5bc0a0(eax_13)
    int32_t eax_1066 = sub_5bc1e0(eax_1065)
    sub_5bbe40(eax_1065)
    void var_1014
    <lambda_61710bb2f65fa5c843243e2ef45f5091>::<lambda_61710bb2f65fa5c843243e2ef45f5091>(&var_1014, 
        eax_1066 + 4, 4, eax_16)
    int32_t* var_1008_1 = eax_1065
    int32_t var_1004_1 = 1
    int32_t var_1000_1 = 0
    int32_t var_ffc_1 = sub_5bbe40(eax_1065)
    int32_t eax_1070 = sub_4acc50(eax_10 + 0x15d7e7c)
    int32_t* eax_1071 = sub_5bc0a0(eax_10 + 0x15d7e7c)
    void var_b88
    <lambda_61710bb2f65fa5c843243e2ef45f5091>::<lambda_61710bb2f65fa5c843243e2ef45f5091>(&var_b88, 
        sub_5bc1e0(eax_1071) + ((sub_4acc50(eax_1071) * var_88) << 2), 4, eax_1070)
    int32_t var_b78_1 = var_88
    int32_t* var_b7c_1 = eax_1071
    int32_t var_b74_1 = 0
    int32_t var_b70_1 = sub_4acc50(eax_1071)
    int32_t* eax_1077 = sub_5bc0a0(&var_1014)
    int32_t* eax_1078 = sub_5bc0a0(&var_b88)
    var_14_86.b = 0xb5
    int32_t var_7ec = sub_5bc1e0(eax_1077)
    eax_1077[3]
    int32_t var_7e4_1 = sub_5bbe40(eax_1077[3])
    var_14_86.b = 0xb6
    int32_t eax_1081 = sub_5bbe40(eax_1077)
    int32_t eax_1082 = sub_4acc50(eax_1077)
    int32_t eax_1083 = sub_5bbe40(eax_1078)
    int32_t eax_1084
    
    if (eax_1083 == eax_1081)
        eax_1084 = sub_4acc50(eax_1078)
    
    if (eax_1083 != eax_1081 || eax_1084 != eax_1082)
        int32_t var_30_76 = eax_1082
        int32_t var_34_60 = eax_1081
    
    var_14_86.b = 0xb7
    int32_t var_7e0 = sub_5bc1e0(eax_1078)
    eax_1078[3]
    int32_t var_7d8_1 = sub_4acc50(eax_1078[3])
    var_14_86.b = 0xb8
    int32_t var_23c_1 = sub_5bc0a0(eax_1078)
    int32_t* var_248 = &var_7e0
    int32_t esi_289 = 0
    int32_t var_84_6 = 0
    int32_t* var_244_1 = &var_7ec
    void var_120
    void* var_240_1 = &var_120
    
    if (sub_5c1ae0(&var_248) s> 0)
        int32_t eax_1094
        
        do
            int32_t var_64_22 = 0
            
            if (sub_5c1af0(&var_248) s> 0)
                int32_t eax_1093
                int32_t esi_294
                
                do
                    int32_t* eax_1091 = var_248
                    esi_294 = var_64_22 + 1
                    *(*eax_1091 + ((eax_1091[2] * var_84_6 + var_64_22) << 2)) =
                        *(*var_244_1 + ((var_244_1[2] * var_64_22 + var_84_6) << 2))
                    var_64_22 = esi_294
                    eax_1093 = sub_5c1af0(&var_248)
                while (esi_294 s< eax_1093)
                esi_289 = var_84_6
            
            esi_289 += 1
            var_84_6 = esi_289
            eax_1094 = sub_5c1ae0(&var_248)
        while (esi_289 s< eax_1094)
    
    var_14_86.b = 0x71
    int32_t var_88_1 = var_88 + 4
    sub_5bbeb0(&var_44, "player_pre")
    void var_1448
    int32_t* eax_1096 = sub_5bcb60(&var_94, eax_10 + 0x1597e78, &var_1448, &var_94, 0)
    var_14_86.b = 0xb9
    int32_t eax_1098 = sub_4acc50(eax_10 + 0x15d7e7c)
    int32_t* eax_1099 = sub_5bc0a0(eax_10 + 0x15d7e7c)
    void var_ba4
    <lambda_61710bb2f65fa5c843243e2ef45f5091>::<lambda_61710bb2f65fa5c843243e2ef45f5091>(&var_ba4, 
        sub_5bc1e0(eax_1099) + ((sub_4acc50(eax_1099) * var_88_1) << 2), arg5, eax_1098)
    int32_t var_b94_1 = var_88_1
    int32_t* var_b98_1 = eax_1099
    int32_t var_b90_1 = 0
    int32_t var_b8c_1 = sub_4acc50(eax_1099)
    int32_t* eax_1105 = sub_5bc0a0(eax_1096)
    int32_t* eax_1106 = sub_5bc0a0(&var_ba4)
    var_14_86.b = 0xba
    int32_t eax_1107 = sub_5bbe40(eax_1105)
    int32_t var_338 = sub_5bc1e0(eax_1105)
    int32_t var_334_1 = eax_1107
    var_14_86.b = 0xbb
    int32_t eax_1109 = sub_5bbe40(eax_1105)
    int32_t eax_1110 = sub_4acc50(eax_1105)
    int32_t eax_1111 = sub_5bbe40(eax_1106)
    int32_t eax_1112
    
    if (eax_1111 == eax_1109)
        eax_1112 = sub_4acc50(eax_1106)
    
    if (eax_1111 != eax_1109 || eax_1112 != eax_1110)
        int32_t var_30_78 = eax_1110
        int32_t var_34_62 = eax_1109
    
    var_14_86.b = 0xbc
    int32_t var_7f8 = sub_5bc1e0(eax_1106)
    eax_1106[3]
    int32_t var_7f0_1 = sub_4acc50(eax_1106[3])
    var_14_86.b = 0xbd
    int32_t var_1d4_1 = sub_5bc0a0(eax_1106)
    int32_t* var_1e0 = &var_7f8
    int32_t esi_301 = 0
    int32_t var_84_7 = 0
    int32_t* var_1dc_1 = &var_338
    void var_151
    void* var_1d8_1 = &var_151
    
    if (sub_5c1ae0(&var_1e0) s> 0)
        int32_t eax_1122
        
        do
            int32_t var_64_23 = 0
            
            if (sub_5c1af0(&var_1e0) s> 0)
                int32_t eax_1121
                int32_t esi_306
                
                do
                    int32_t* eax_1119 = var_1e0
                    esi_306 = var_64_23 + 1
                    *(*eax_1119 + ((eax_1119[2] * var_84_7 + var_64_23) << 2)) =
                        *(*var_1dc_1 + ((var_1dc_1[1] * var_64_23 + var_84_7) << 2))
                    var_64_23 = esi_306
                    eax_1121 = sub_5c1af0(&var_1e0)
                while (esi_306 s< eax_1121)
                esi_301 = var_84_7
            
            esi_301 += 1
            var_84_7 = esi_301
            eax_1122 = sub_5c1ae0(&var_1e0)
        while (esi_301 s< eax_1122)
    
    var_14_86.b = 0xb9
    var_14_86.b = 0x71
    sub_5b0e50(&var_1448)
    int32_t i_74 = arg5
    
    if (i_74 s> 0)
        int32_t i_72 = i_74
        int32_t ecx_1108 = var_88_1
        void* edx_131 = eax_10 + 0x15d8b1c
        int32_t i_1
        
        do
            int32_t eax_1123 = ecx_1108
            edx_131 += 4
            ecx_1108 += 1
            *(edx_131 - 4) = eax_1123
            i_1 = i_72
            i_72 -= 1
        while (i_1 != 1)
        var_88_1 = ecx_1108
    
    char** eax_1124
    int32_t edx_132
    eax_1124, edx_132 = sub_5bbeb0(&var_44, "game_pre/kernel")
    int32_t eax_1126 = sub_5bbe40(sub_5b0f90(eax_1124, edx_132, eax_10 + 0x1597e78))
    void var_c8
    TI_OFF::TI_OFF(&var_c8)
    var_14_86.b = 0xbe
    sub_5bff80(&var_c8, eax_1126)
    var_14_86.b = 0xbf
    int32_t ecx_1115 = 0
    int32_t var_68_15
    
    for (int32_t i_2 = 2; i_2 s<= 6; )
        int32_t edi_288 = ecx_1115
        int32_t eax_1127
        eax_1127.b = i_74 == i_2
        var_68_15 = ecx_1115 + 1
        var_14_86.b = 0xc0
        int32_t eax_1129 = sub_5bc1e0(sub_5bc0a0(&var_c8))
        var_14_86.b = 0xbf
        int32_t var_264_1 = eax_1129
        i_2 += 1
        ecx_1115 = var_68_15
        *(eax_1129 + (edi_288 << 2)) = _mm_cvtepi32_ps(zx.o(eax_1127))
        i_74 = arg5
    
    int32_t i_3 = 0
    int32_t i_38 = 0
    
    if (*(eax_10 + 0x15d8b38) s< 0xf)
        do
            int32_t edi_292 = var_68_15
            int32_t ecx_1129
            ecx_1129.b = sx.d(var_74[1]) s> i_3
            var_68_15 += 1
            var_14_86.b = 0xc4
            int32_t eax_1154 = sub_5bc1e0(sub_5bc0a0(&var_c8))
            var_14_86.b = 0xbf
            int32_t var_288_1 = eax_1154
            i_3 = i_38 + 1
            i_38 = i_3
            *(eax_1154 + (edi_292 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1129))
        while (i_3 s< 2)
        
        int32_t i_4 = 0
        int32_t i_41 = 0
        
        do
            int32_t edi_293 = var_68_15
            int32_t ecx_1132
            ecx_1132.b = sx.d(var_74[3]) s> i_4
            var_68_15 += 1
            var_14_86.b = 0xc5
            int32_t eax_1160 = sub_5bc1e0(sub_5bc0a0(&var_c8))
            var_14_86.b = 0xbf
            int32_t var_350_1 = eax_1160
            i_4 = i_41 + 1
            i_41 = i_4
            *(eax_1160 + (edi_293 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1132))
        while (i_4 s< 0xc)
    else
        do
            int32_t edi_289 = var_68_15
            int32_t ecx_1119
            ecx_1119.b = sx.d(var_74[1]) s> i_3
            var_68_15 += 1
            var_14_86.b = 0xc1
            int32_t eax_1136 = sub_5bc1e0(sub_5bc0a0(&var_c8))
            var_14_86.b = 0xbf
            int32_t var_268_1 = eax_1136
            i_3 = i_38 + 1
            i_38 = i_3
            *(eax_1136 + (edi_289 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1119))
        while (i_3 s< 3)
        
        int32_t i_5 = 0
        int32_t i_39 = 0
        
        do
            int32_t edi_290 = var_68_15
            int32_t ecx_1122
            ecx_1122.b = sx.d(var_74[2]) s> i_5
            var_68_15 += 1
            var_14_86.b = 0xc2
            int32_t eax_1142 = sub_5bc1e0(sub_5bc0a0(&var_c8))
            var_14_86.b = 0xbf
            int32_t var_26c_1 = eax_1142
            i_5 = i_39 + 1
            i_39 = i_5
            *(eax_1142 + (edi_290 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1122))
        while (i_5 s< 0xc)
        
        int32_t i_6 = 0
        int32_t i_40 = 0
        
        do
            int32_t edi_291 = var_68_15
            int32_t ecx_1125
            ecx_1125.b = sx.d(var_74[3]) s> i_6
            var_68_15 += 1
            var_14_86.b = 0xc3
            int32_t eax_1148 = sub_5bc1e0(sub_5bc0a0(&var_c8))
            var_14_86.b = 0xbf
            int32_t var_284_1 = eax_1148
            i_6 = i_40 + 1
            i_40 = i_6
            *(eax_1148 + (edi_291 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1125))
        while (i_6 s< 0x1e)
    
    int32_t i_7 = 0
    int32_t i_42 = 0
    
    do
        int32_t edi_294 = var_68_15
        int32_t ecx_1135
        ecx_1135.b = sx.d(var_74[6]) s> i_7
        var_68_15 += 1
        var_14_86.b = 0xc6
        int32_t eax_1166 = sub_5bc1e0(sub_5bc0a0(&var_c8))
        var_14_86.b = 0xbf
        int32_t var_270_1 = eax_1166
        i_7 = i_42 + 1
        i_42 = i_7
        *(eax_1166 + (edi_294 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1135))
    while (i_7 s< 0xa)
    
    if (*(eax_10 + 0x15d8b38) s>= 0xe)
        int32_t i_8 = 0
        int32_t i_43 = 0
        
        do
            int32_t edi_295 = var_68_15
            int32_t ecx_1138
            ecx_1138.b = sx.d(var_74[7]) s> i_8
            var_68_15 += 1
            var_14_86.b = 0xc7
            int32_t eax_1173 = sub_5bc1e0(sub_5bc0a0(&var_c8))
            var_14_86.b = 0xbf
            int32_t var_278_1 = eax_1173
            i_8 = i_43 + 1
            i_43 = i_8
            *(eax_1173 + (edi_295 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1138))
        while (i_8 s< 0x28)
    
    int32_t i_9 = 0
    int32_t i_44 = 0
    
    do
        int32_t edi_296 = var_68_15
        int32_t ecx_1141
        ecx_1141.b = sx.d(var_74[5]) s> i_9
        var_68_15 += 1
        var_14_86.b = 0xc8
        int32_t eax_1179 = sub_5bc1e0(sub_5bc0a0(&var_c8))
        var_14_86.b = 0xbf
        int32_t var_32c_1 = eax_1179
        i_9 = i_44 + 1
        i_44 = i_9
        *(eax_1179 + (edi_296 << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1141))
    while (i_9 s< 0x14)
    
    eax_1064 = sub_5bbe40(&var_c8)
    
    if (var_68_15 == eax_1064)
        char* var_48_6 = "game_pre"
        *(eax_10 + 0x15d8b34) = var_88_1
        sub_5bbeb0(&var_44, var_48_6)
        void var_a0c
        int32_t* eax_1182 = sub_5bc6a0(&var_c8, eax_10 + 0x1597e78, &var_a0c, &var_c8, 0)
        var_14_86.b = 0xc9
        int32_t* eax_1183 = sub_5bc0a0(eax_10 + 0x15d7e7c)
        int32_t eax_1184 = sub_4acc50(eax_1183)
        int32_t eax_1185 = sub_4acc50(eax_1183)
        int32_t var_30_81 = eax_1184
        void var_bc0
        sub_5bc1c0(&var_bc0, sub_5bc1e0(eax_1183) + ((eax_1185 * var_88_1) << 2), 1)
        int32_t* var_bb4_1 = eax_1183
        int32_t var_bb0_1 = var_88_1
        int32_t var_bac_1 = 0
        int32_t var_ba8_1 = sub_4acc50(eax_1183)
        int32_t* eax_1190 = sub_5bc0a0(eax_1182)
        int128_t* eax_1191 = sub_5bc0a0(&var_bc0)
        int128_t var_554 = *eax_1191
        int64_t var_544_1 = eax_1191[1].q
        int32_t var_53c_1 = *(eax_1191 + 0x18)
        var_14_86.b = 0xca
        int32_t var_18c = sub_5bc1e0(eax_1190)
        var_14_86.b = 0xcb
        int32_t eax_1194 = sub_5bbe40(eax_1190)
        
        if (sub_4acc50(&var_554) != eax_1194)
            int32_t var_30_82 = eax_1194
            int32_t var_34_65 = 1
        
        int32_t var_51c
        int32_t* var_a60_1 = &var_51c
        var_14_86.b = 0xcd
        var_51c = sub_5bc1e0(&var_554)
        int32_t var_514_1 = sub_4acc50(var_554:0xc.d)
        var_14_86.b = 0xce
        int32_t var_1c4_1 = sub_5bc0a0(&var_554)
        int32_t* var_1d0 = &var_51c
        int32_t* var_1cc_1 = &var_18c
        void var_152
        void* var_1c8_1 = &var_152
        int32_t eax_1199 = sub_5c1af0(&var_1d0)
        int32_t esi_322 = sub_5c2e20(sub_5c3cc0(&var_1d0), eax_1199)
        int32_t eax_1204
        int32_t edx_144
        edx_144:eax_1204 = sx.q(eax_1199 - esi_322)
        int32_t eax_1206 = (eax_1204 + (edx_144 & 3)) s>> 2
        int32_t edi_302 = esi_322 + (eax_1206 << 2)
        int32_t eax_1207 = sub_5c5320(eax_1206, 0, &var_1d0, esi_322)
        
        while (esi_322 s< edi_302)
            int32_t ecx_1167 = esi_322 << 2
            esi_322 += 4
            eax_1207 = *var_1d0
            *(ecx_1167 + eax_1207) = *(*var_1cc_1 + ecx_1167)
        
        sub_5c5320(eax_1207, edi_302, &var_1d0, eax_1199)
        var_14_86.b = 0xc9
        var_14_86.b = 0xbf
        sub_5b0e50(&var_a0c)
        int32_t i_10 = 0
        
        if (*(eax_10 + 0x15d8b3c) s> 0)
            do
                void var_54
                int32_t* eax_1212 = sub_5b0870(&var_54)
                var_14_86.b = 0xcf
                void var_3c
                sub_5bce00(eax_1212, "card_encode", &var_3c, eax_1212)
                var_14_86.b = 0xd1
                sub_5bbe60(&var_54)
                void* ecx_1174 = &var_44
                int128_t* var_48_8 = &var_3c
                
                if (*(eax_10 + 0x15d8b44) == 0)
                    sub_5bd840(sub_5bbfb0(ecx_1174, var_48_8), eax_10 + 0x15d7e7c, 
                        eax_10 + 0x1597e78, var_88_1 + 1, i_10.w, var_88_1 + 1)
                else
                    sub_5bcef0(sub_5bbfb0(ecx_1174, var_48_8), eax_10 + 0x15d7e7c, 
                        eax_10 + 0x1597e78, var_88_1 + 1, i_10.w, var_88_1 + 1)
                
                var_14_86.b = 0xbf
                sub_5bbe60(&var_3c)
                i_10 += 1
            while (i_10 s< *(eax_10 + 0x15d8b3c))
        
        char** eax_1217
        int32_t edx_150
        eax_1217, edx_150 = sub_5bbeb0(&var_44, "value_dense/kernel")
        int32_t eax_1219 = sub_5bbe40(sub_5b0f90(eax_1217, edx_150, eax_10 + 0x1597e78))
        int32_t var_b8
        TI_OFF::TI_OFF(&var_b8)
        var_14_86.b = 0xd2
        sub_5bff80(&var_b8, eax_1219)
        var_14_86.b = 0xd3
        int32_t var_15c
        TI_OFF::TI_OFF(&var_15c)
        var_14_86.b = 0xd4
        sub_5bff80(&var_15c, arg5)
        var_14_86.b = 0xd5
        void* var_d0
        TI_OFF::TI_OFF(&var_d0)
        var_14_86.b = 0xd6
        int32_t var_ac
        TI_OFF::TI_OFF(&var_ac)
        var_14_86.b = 0xd7
        float* var_c0
        TI_OFF::TI_OFF(&var_c0)
        var_14_86.b = 0xd8
        sub_5bff80(&var_c0, arg5)
        var_14_86.b = 0xd9
        int32_t eax_1220 = *(eax_10 + 0x15d8b34)
        int32_t* eax_1221 = sub_5bc0a0(eax_10 + 0x15d7e7c)
        int32_t eax_1222 = sub_4acc50(eax_1221)
        int32_t eax_1223 = sub_4acc50(eax_1221)
        int32_t var_30_89 = eax_1222
        void var_1030
        sub_5bc1c0(&var_1030, sub_5bc1e0(eax_1221) + ((eax_1223 * eax_1220) << 2), 1)
        int32_t* var_1024_1 = eax_1221
        int32_t var_1020_1 = eax_1220
        int32_t var_101c_1 = 0
        int32_t var_1018_1 = sub_4acc50(eax_1221)
        int32_t* eax_1228 = sub_5bc0a0(&var_b8)
        int32_t eax_1229 = sub_5bc1e0(eax_1228)
        sub_5bbe40(eax_1228)
        int32_t* var_30_90 = eax_16
        void var_104c
        sub_5bc1c0(&var_104c, eax_1229, 1)
        int32_t* var_1040_1 = eax_1228
        int32_t var_1038_1 = 0
        int32_t var_1034_1 = sub_5bbe40(eax_1228)
        int32_t* eax_1231 = sub_5bc0a0(&var_1030)
        int32_t* eax_1232 = sub_5bc0a0(&var_104c)
        var_14_86.b = 0xda
        int32_t var_810 = sub_5bc1e0(eax_1231)
        eax_1231[3]
        int32_t var_808_1 = sub_4acc50(eax_1231[3])
        var_14_86.b = 0xdb
        int32_t var_6c_8 = 1
        int32_t eax_1235 = sub_4acc50(eax_1231)
        int32_t var_34_68
        int32_t var_30_91
        
        if (1 != var_6c_8)
            var_30_91 = eax_1235
            var_34_68 = var_6c_8
        else if (sub_4acc50(eax_1232) != eax_1235)
            var_30_91 = eax_1235
            var_34_68 = var_6c_8
        var_14_86.b = 0xdc
        int32_t var_804 = sub_5bc1e0(eax_1232)
        eax_1232[3]
        int32_t var_7fc_1 = sub_5bbe40(eax_1232[3])
        var_14_86.b = 0xdd
        int32_t var_1b4_1 = sub_5bc0a0(eax_1232)
        int32_t* var_1c0 = &var_804
        int32_t* var_1bc_1 = &var_810
        void var_153
        void* var_1b8_1 = &var_153
        int32_t eax_1240 = sub_5c1af0(&var_1c0)
        int32_t esi_332 = sub_5c2e20(sub_5c3cc0(&var_1c0), eax_1240)
        int32_t eax_1245
        int32_t edx_152
        edx_152:eax_1245 = sx.q(eax_1240 - esi_332)
        int32_t eax_1247 = (eax_1245 + (edx_152 & 3)) s>> 2
        int32_t edi_309 = esi_332 + (eax_1247 << 2)
        int128_t* eax_1248 = sub_5c5270(eax_1247, 0, &var_1c0, esi_332)
        
        while (esi_332 s< edi_309)
            int32_t ecx_1227 = esi_332 << 2
            esi_332 += 4
            eax_1248 = *var_1c0
            *(eax_1248 + ecx_1227) = *(*var_1bc_1 + ecx_1227)
        
        sub_5c5270(eax_1248, edi_309, &var_1c0, eax_1240)
        var_14_86.b = 0xd9
        void* esi_333 = eax_10
        void* var_68_16 = eax_16
        
        if (*(esi_333 + 0x15d8b38) s< 0xc)
            int32_t i_73 = arg5
            
            if (i_73 s> 0)
                void* eax_1456 = esi_333 + 0x15d8b1c
                int32_t i_71 = i_73
                void* var_5c_36 = eax_1456
                int32_t i_11
                
                do
                    int32_t eax_1457 = *eax_1456
                    int32_t* eax_1458 = sub_5bc0a0(esi_333 + 0x15d7e7c)
                    int32_t eax_1459 = sub_4acc50(eax_1458)
                    int32_t eax_1460 = sub_4acc50(eax_1458)
                    int32_t var_30_133 = eax_1459
                    void var_10f4
                    sub_5bc1c0(&var_10f4, sub_5bc1e0(eax_1458) + ((eax_1457 * eax_1460) << 2), 1)
                    int32_t* var_10e8_1 = eax_1458
                    int32_t var_10e4_1 = eax_1457
                    int32_t var_10e0_1 = 0
                    int32_t var_10dc_1 = sub_4acc50(eax_1458)
                    int32_t* eax_1465 = sub_5bc0a0(&var_b8)
                    int32_t eax_1466 = sub_5bc1e0(eax_1465)
                    sub_5bbe40(eax_1465)
                    int32_t* var_30_134 = eax_16
                    void var_1110
                    sub_5bc1c0(&var_1110, eax_1466 + var_68_16 * 4, 1)
                    int32_t* var_1104_1 = eax_1465
                    void* var_10fc_1 = var_68_16
                    int32_t var_10f8_1 = sub_5bbe40(eax_1465)
                    int32_t* eax_1471 = sub_5bc0a0(&var_10f4)
                    int32_t* eax_1472 = sub_5bc0a0(&var_1110)
                    int32_t var_14_94 = 0x123
                    int32_t var_858 = sub_5bc1e0(eax_1471)
                    eax_1471[3]
                    int32_t var_850_1 = sub_4acc50(eax_1471[3])
                    int32_t var_14_95 = 0x124
                    int32_t var_6c_16 = 1
                    int32_t eax_1475 = sub_4acc50(eax_1471)
                    int32_t var_34_89
                    int32_t var_30_135
                    
                    if (1 != var_6c_16)
                        var_30_135 = eax_1475
                        var_34_89 = var_6c_16
                    else if (sub_4acc50(eax_1472) != eax_1475)
                        var_30_135 = eax_1475
                        var_34_89 = var_6c_16
                    var_14_95.b = 0x25
                    int32_t var_84c = sub_5bc1e0(eax_1472)
                    eax_1472[3]
                    int32_t var_844_1 = sub_5bbe40(eax_1472[3])
                    var_14_95.b = 0x26
                    int32_t var_224_1 = sub_5bc0a0(eax_1472)
                    int32_t* var_230 = &var_84c
                    int32_t* var_22c_1 = &var_858
                    void var_114
                    void* var_228_1 = &var_114
                    int32_t eax_1480 = sub_5c1af0(&var_230)
                    int32_t eax_1482 = sub_5c2e20(sub_5c3cc0(&var_230), eax_1480)
                    int32_t esi_385 = eax_1482
                    int32_t ecx_1480 = eax_1480 - esi_385
                    
                    if (ecx_1480 s< 0)
                        ecx_1480 += 3
                    
                    int32_t edi_349 = esi_385 + (ecx_1480 s>> 2 << 2)
                    int32_t eax_1483 = sub_5c5270(eax_1482, 0, &var_230, esi_385)
                    
                    while (esi_385 s< edi_349)
                        int32_t ecx_1483 = esi_385 << 2
                        esi_385 += 4
                        eax_1483 = *var_230
                        *(ecx_1483 + eax_1483) = *(*var_22c_1 + ecx_1483)
                    
                    sub_5c5270(eax_1483, edi_349, &var_230, eax_1480)
                    int32_t var_14_96 = 0xd9
                    var_68_16 += eax_16
                    esi_333 = eax_10
                    eax_1456 = var_5c_36 + 4
                    i_11 = i_71
                    i_71 -= 1
                    var_5c_36 = eax_1456
                while (i_11 != 1)
                i_73 = arg5
            
            int32_t* eax_1489 = sub_5bc0a0(&var_b8)
            int32_t eax_1490 = sub_5bc1e0(eax_1489)
            sub_5bbe40(eax_1489)
            int32_t var_30_138 = (6 - i_73) * eax_16
            void var_c14
            sub_5bc1c0(&var_c14, eax_1490 + var_68_16 * 4, 1)
            int32_t* var_c08_1 = eax_1489
            void* var_c00_1 = var_68_16
            int32_t var_bfc_1 = sub_5bbe40(eax_1489)
            int32_t* eax_1495 = sub_4acc50(&var_c14)
            int32_t var_304 = 0
            int32_t* var_30_139 = &var_304
            void var_14c0
            sub_5c0390(&var_14c0, 1, eax_1495)
            int32_t eax_1496 = sub_5bc0a0(&var_c14)
            void* eax_1497 = sub_5bc0a0(&var_14c0)
            int32_t* eax_1498 = sub_5bc0a0(eax_1496)
            void var_620
            sub_5c1ac0(&var_620, eax_1497)
            int32_t var_14_97 = 0x127
            int32_t esi_389 = *(eax_1497 + 4)
            
            if (sub_4acc50(eax_1498) != esi_389)
                int32_t var_30_141 = esi_389
                int32_t var_34_92 = 1
            
            var_14_97.b = 0x28
            int32_t var_864 = sub_5bc1e0(eax_1498)
            eax_1498[3]
            int32_t var_85c_1 = sub_5bbe40(eax_1498[3])
            var_14_97.b = 0x29
            int32_t var_214_1 = sub_5bc0a0(eax_1498)
            int32_t* var_220 = &var_864
            void* var_21c_1 = &var_620
            void var_115
            void* var_218_1 = &var_115
            int32_t eax_1503 = sub_5c1af0(&var_220)
            int32_t i_12 = sub_5c2e20(sub_5c3cc0(&var_220), eax_1503)
            int32_t eax_1508
            int32_t edx_216
            edx_216:eax_1508 = sx.q(eax_1503 - i_12)
            int32_t eax_1510 = (eax_1508 + (edx_216 & 3)) s>> 2
            int32_t edi_356 = i_12 + (eax_1510 << 2)
            int32_t eax_1511 = sub_5c8250(eax_1510, 0, &var_220, i_12)
            
            for (; i_12 s< edi_356; i_12 += 4)
                float xmm0_321[0x4] = *var_21c_1
                int32_t* eax_1513 = var_220
                float xmm0_322[0x4] = _mm_shuffle_ps(xmm0_321, xmm0_321, 0)
                eax_1511 = *eax_1513
                *(eax_1511 + (i_12 << 2)) = xmm0_322
            
            sub_5c8250(eax_1511, edi_356, &var_220, eax_1503)
            int32_t var_14_98 = 0xd9
            sub_5bbeb0(&var_44, "value_dense")
            int32_t var_14_99 = 0x12a
            void var_9f4
            int32_t* eax_1516 =
                sub_5bc0a0(sub_5bc6a0(&var_b8, eax_10 + 0x1597e78, &var_9f4, &var_b8, 0))
            int32_t* var_d8 = sub_5bc0a0(&var_d0)
            var_14_99.b = 0x2b
            int32_t var_168 = sub_5bc1e0(eax_1516)
            var_14_99.b = 0x2c
            int32_t eax_1519 = sub_5bbe40(eax_1516)
            
            if (sub_5bbe40(var_d8) != eax_1519)
                int32_t* edi_358 = var_d8
                
                if (eax_1519 != 0 && divs.dp.d(0x7fffffff, eax_1519) s< 1)
                    sub_5b0890()
                    noreturn
                
                if (eax_1519 != edi_358[1])
                    sub_5be6c0(*edi_358)
                    
                    if (eax_1519 s<= 0)
                        *edi_358 = 0
                    else
                        *edi_358 = sub_5c0320(eax_1519)
                
                edi_358[1] = eax_1519
            
            int32_t var_134
            int32_t* var_a28_1 = &var_134
            var_14_99.b = 0x2e
            var_134 = sub_5bc1e0(var_d8)
            var_14_99.b = 0x2f
            int32_t var_2bc_1 = sub_5bc0a0(&var_d8)
            int32_t* var_2c8 = &var_134
            int32_t* var_2c4_1 = &var_168
            void var_116
            void* var_2c0_1 = &var_116
            int32_t eax_1526 = sub_5c5440(&var_2c8)
            int32_t esi_392 = 0
            int128_t* eax_1527
            int32_t edx_223
            edx_223:eax_1527 = sx.q(eax_1526)
            void* edx_226 = ((edx_223 & 3) + eax_1527) & 0xfffffffc
            
            if (edx_226 s> 0)
                do
                    int32_t ecx_1524 = esi_392 << 2
                    esi_392 += 4
                    eax_1527 = *var_2c8
                    *(eax_1527 + ecx_1524) = *(*var_2c4_1 + ecx_1524)
                while (esi_392 s< edx_226)
            
            sub_5c6500(eax_1527, edx_226, &var_2c8, eax_1526)
            var_14_99.b = 0x2a
            int32_t var_14_100 = 0xd9
            sub_5b0e50(&var_9f4)
            void var_9ec
            sub_5bc0b0(&var_ac, sub_5bc0a0(sub_5be520(&var_9ec, &var_d0)))
            sub_5b0e50(&var_9ec)
            sub_5bbeb0(&var_44, "value_final")
            int32_t var_14_101 = 0x130
            void var_9e4
            int32_t* eax_1535 =
                sub_5bc0a0(sub_5bc6a0(&var_ac, eax_10 + 0x1597e78, &var_9e4, &var_ac, 0))
            int32_t* var_e4 = sub_5bc0a0(&var_c0)
            var_14_101.b = 0x31
            int32_t var_16c = sub_5bc1e0(eax_1535)
            var_14_101.b = 0x32
            int32_t eax_1538 = sub_5bbe40(eax_1535)
            
            if (sub_5bbe40(var_e4) != eax_1538)
                int32_t* edi_361 = var_e4
                
                if (eax_1538 != 0 && divs.dp.d(0x7fffffff, eax_1538) s< 1)
                    sub_5b0890()
                    noreturn
                
                if (eax_1538 != edi_361[1])
                    sub_5be6c0(*edi_361)
                    
                    if (eax_1538 s<= 0)
                        *edi_361 = 0
                    else
                        *edi_361 = sub_5c0320(eax_1538)
                
                edi_361[1] = eax_1538
            
            int32_t var_138
            int32_t* var_a20_1 = &var_138
            var_14_101.b = 0x34
            var_138 = sub_5bc1e0(var_e4)
            var_14_101.b = 0x35
            int32_t var_2ac_1 = sub_5bc0a0(&var_e4)
            int32_t* var_2b8 = &var_138
            int32_t* var_2b4_1 = &var_16c
            void var_117
            void* var_2b0_1 = &var_117
            int32_t eax_1545 = sub_5c5440(&var_2b8)
            int32_t esi_395 = 0
            int128_t* eax_1546
            int32_t edx_232
            edx_232:eax_1546 = sx.q(eax_1545)
            void* edx_235 = ((edx_232 & 3) + eax_1546) & 0xfffffffc
            
            if (edx_235 s> 0)
                do
                    int32_t ecx_1545 = esi_395 << 2
                    esi_395 += 4
                    eax_1546 = *var_2b8
                    *(eax_1546 + ecx_1545) = *(*var_2b4_1 + ecx_1545)
                while (esi_395 s< edx_235)
            
            sub_5c6500(eax_1546, edx_235, &var_2b8, eax_1545)
            var_14_101.b = 0x30
            int32_t var_14_102 = 0xd9
            sub_5b0e50(&var_9e4)
            sub_5bbeb0(&var_44, "score_mean")
            void var_9dc
            sub_5bc0b0(&var_15c, 
                sub_5bc0a0(sub_5bc6a0(&var_ac, eax_10 + 0x1597e78, &var_9dc, &var_ac, 0)))
            sub_5b0e50(&var_9dc)
        else
            char** eax_1253
            int32_t edx_155
            eax_1253, edx_155 = sub_5bbeb0(&var_44, "value_final/kernel")
            int32_t* eax_1254 = sub_5b0f90(eax_1253, edx_155, esi_333 + 0x1597e78)
            char** eax_1255
            int32_t edx_156
            eax_1255, edx_156 = sub_5bbeb0(&var_44, "score_mean/kernel")
            int32_t* eax_1256 = sub_5b0f90(eax_1255, edx_156, esi_333 + 0x1597e78)
            int32_t edi_310 = 0
            int32_t var_64_24 = 0
            
            if (arg5 s> 0)
                while (true)
                    int32_t eax_1257 = *(eax_10 + 0x1597e78 + (edi_310 << 2) + 0x40ca4)
                    int32_t* eax_1258 = sub_5bc0a0(esi_333 + 0x15d7e7c)
                    int32_t eax_1259 = sub_4acc50(eax_1258)
                    int32_t eax_1260 = sub_4acc50(eax_1258)
                    int32_t var_30_94 = eax_1259
                    void var_1084
                    sub_5bc1c0(&var_1084, sub_5bc1e0(eax_1258) + ((eax_1260 * eax_1257) << 2), 1)
                    int32_t* var_1078_1 = eax_1258
                    int32_t var_1074_1 = eax_1257
                    int32_t var_1070_1 = 0
                    int32_t var_106c_1 = sub_4acc50(eax_1258)
                    int32_t* eax_1265 = sub_5bc0a0(&var_b8)
                    int32_t eax_1266 = sub_5bc1e0(eax_1265)
                    sub_5bbe40(eax_1265)
                    int32_t* var_30_95 = eax_16
                    void var_10a0
                    sub_5bc1c0(&var_10a0, eax_1266 + eax_16 * 4, 1)
                    int32_t* var_1094_1 = eax_1265
                    int32_t* var_108c_1 = eax_16
                    int32_t var_1088_1 = sub_5bbe40(eax_1265)
                    int32_t* eax_1271 = sub_5bc0a0(&var_1084)
                    int32_t* eax_1272 = sub_5bc0a0(&var_10a0)
                    var_14_86.b = 0xde
                    int32_t var_828 = sub_5bc1e0(eax_1271)
                    eax_1271[3]
                    int32_t var_820_1 = sub_4acc50(eax_1271[3])
                    var_14_86.b = 0xdf
                    int32_t var_6c_10 = 1
                    int32_t eax_1275 = sub_4acc50(eax_1271)
                    int32_t var_34_71
                    int32_t var_30_96
                    
                    if (1 != var_6c_10)
                        var_30_96 = eax_1275
                        var_34_71 = var_6c_10
                    else if (sub_4acc50(eax_1272) != eax_1275)
                        var_30_96 = eax_1275
                        var_34_71 = var_6c_10
                    var_14_86.b = 0xe0
                    int32_t var_81c = sub_5bc1e0(eax_1272)
                    eax_1272[3]
                    int32_t var_814_1 = sub_5bbe40(eax_1272[3])
                    var_14_86.b = 0xe1
                    int32_t var_1a4_1 = sub_5bc0a0(eax_1272)
                    int32_t* var_1b0 = &var_81c
                    int32_t* var_1ac_1 = &var_828
                    void var_154
                    void* var_1a8_1 = &var_154
                    int32_t eax_1280 = sub_5c1af0(&var_1b0)
                    int32_t eax_1282 = sub_5c2e20(sub_5c3cc0(&var_1b0), eax_1280)
                    int32_t esi_339 = eax_1282
                    int32_t ecx_1266 = eax_1280 - esi_339
                    
                    if (ecx_1266 s< 0)
                        ecx_1266 += 3
                    
                    int32_t edi_317 = esi_339 + (ecx_1266 s>> 2 << 2)
                    int128_t* eax_1283 = sub_5c5270(eax_1282, 0, &var_1b0, esi_339)
                    
                    while (esi_339 s< edi_317)
                        int32_t ecx_1269 = esi_339 << 2
                        esi_339 += 4
                        eax_1283 = *var_1b0
                        *(eax_1283 + ecx_1269) = *(*var_1ac_1 + ecx_1269)
                    
                    sub_5c5270(eax_1283, edi_317, &var_1b0, eax_1280)
                    var_14_86.b = 0xd9
                    int32_t var_104
                    TI_OFF::TI_OFF(&var_104)
                    var_14_86.b = 0xe2
                    int32_t var_10c
                    TI_OFF::TI_OFF(&var_10c)
                    var_14_86.b = 0xe3
                    int32_t var_328
                    int32_t* var_30_99 = &var_328
                    var_328 = 0
                    void var_1454
                    sub_5c0390(&var_1454, 1, eax_16)
                    void* eax_1287 = sub_5bc0a0(&var_1454)
                    int32_t* eax_1288 = sub_5bc0a0(&var_104)
                    int32_t esi_341 = *(eax_1287 + 4)
                    
                    if (sub_5bbe40(eax_1288) != esi_341)
                        if (esi_341 != 0 && divs.dp.d(0x7fffffff, esi_341) s< 1)
                            sub_5b0890()
                            noreturn
                        
                        if (esi_341 != eax_1288[1])
                            sub_5be6c0(*eax_1288)
                            
                            if (esi_341 s<= 0)
                                *eax_1288 = 0
                            else
                                *eax_1288 = sub_5c0320(esi_341)
                        
                        eax_1288[1] = esi_341
                    
                    int32_t var_324 = *sub_51fbc0(eax_1287)
                    int32_t eax_1294 = sub_5bbe40(eax_1288)
                    int32_t* eax_1295 = sub_5bc1e0(eax_1288)
                    sub_5c3cd0(eax_1295, eax_1294, eax_1295, &var_324)
                    int32_t var_320 = 0
                    int32_t* var_30_101 = &var_320
                    void var_1460
                    sub_5c0390(&var_1460, 1, eax_16)
                    void* eax_1296 = sub_5bc0a0(&var_1460)
                    int32_t* eax_1297 = sub_5bc0a0(&var_10c)
                    int32_t esi_344 = *(eax_1296 + 4)
                    
                    if (sub_5bbe40(eax_1297) != esi_344)
                        if (esi_344 != 0 && divs.dp.d(0x7fffffff, esi_344) s< 1)
                            sub_5b0890()
                            noreturn
                        
                        if (esi_344 != eax_1297[1])
                            sub_5be6c0(*eax_1297)
                            
                            if (esi_344 s<= 0)
                                *eax_1297 = 0
                            else
                                *eax_1297 = sub_5c0320(esi_344)
                        
                        eax_1297[1] = esi_344
                    
                    int32_t var_31c = *sub_51fbc0(eax_1296)
                    int32_t eax_1303 = sub_5bbe40(eax_1297)
                    int32_t* eax_1304 = sub_5bc1e0(eax_1297)
                    sub_5c3cd0(eax_1304, eax_1303, eax_1304, &var_31c)
                    int32_t eax_1305 = 0
                    int32_t edx_167 = var_64_24
                    void* ecx_1299 = eax_10 + 0x15d8b1c
                    int32_t esi_346 = arg5
                    int32_t var_80_19 = 0
                    void* var_58_95 = ecx_1299
                    
                    do
                        if (edx_167 != eax_1305)
                            int32_t eax_1306 = *ecx_1299
                            int32_t* eax_1307 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                            int32_t eax_1308 = sub_4acc50(eax_1307)
                            int32_t eax_1309 = sub_4acc50(eax_1307)
                            int32_t var_30_103 = eax_1308
                            void var_10bc
                            sub_5bc1c0(&var_10bc, 
                                sub_5bc1e0(eax_1307) + ((eax_1309 * eax_1306) << 2), 1)
                            int32_t* var_10b0_1 = eax_1307
                            int32_t var_10ac_1 = eax_1306
                            int32_t var_10a8_1 = 0
                            int32_t var_10a4_1 = sub_4acc50(eax_1307)
                            int32_t* eax_1314 = sub_5bc0a0(&var_10bc)
                            int32_t* eax_1315 = sub_5bc0a0(&var_104)
                            var_14_86.b = 0xe4
                            int32_t var_834 = sub_5bc1e0(eax_1314)
                            eax_1314[3]
                            int32_t var_82c_1 = sub_4acc50(eax_1314[3])
                            var_14_86.b = 0xe6
                            int32_t var_178 = sub_5bc1e0(eax_1315)
                            var_14_86.b = 0xe7
                            int32_t var_2ec_1 = sub_5bc0a0(eax_1315)
                            int32_t* var_2f8 = &var_178
                            int32_t* var_2f4_1 = &var_834
                            void var_10d
                            void* var_2f0_1 = &var_10d
                            int32_t eax_1320 = sub_5c1ae0(&var_2f8)
                            int32_t esi_350 = 0
                            int128_t* eax_1321
                            int32_t edx_168
                            edx_168:eax_1321 = sx.q(eax_1320)
                            void* edx_171 = ((edx_168 & 3) + eax_1321) & 0xfffffffc
                            
                            if (edx_171 s> 0)
                                do
                                    int32_t ecx_1315 = esi_350 << 2
                                    esi_350 += 4
                                    eax_1321 = *var_2f8
                                    *(eax_1321 + ecx_1315) =
                                        _mm_add_ps(*(eax_1321 + ecx_1315), *(*var_2f4_1 + ecx_1315))
                                while (esi_350 s< edx_171)
                            
                            sub_5c3100(eax_1321, edx_171, &var_2f8, eax_1320)
                            var_14_86.b = 0xe3
                            int32_t var_180 = sub_5bc0a0(&var_10c)
                            int32_t eax_1327 = *var_58_95
                            int32_t* eax_1328 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                            int32_t eax_1329 = sub_4acc50(eax_1328)
                            int32_t eax_1330 = sub_4acc50(eax_1328)
                            int32_t var_30_105 = eax_1329
                            void var_10d8
                            sub_5bc1c0(&var_10d8, 
                                sub_5bc1e0(eax_1328) + ((eax_1327 * eax_1330) << 2), 1)
                            int32_t* var_10cc_1 = eax_1328
                            int32_t var_10c8_1 = eax_1327
                            int32_t var_10c4_1 = 0
                            int32_t var_10c0_1 = sub_4acc50(eax_1328)
                            int128_t* eax_1335 = sub_5bc0a0(&var_10d8)
                            int128_t var_143c = *eax_1335
                            int64_t var_142c_1 = eax_1335[1].q
                            int32_t var_1424_1 = *(eax_1335 + 0x18)
                            int128_t* eax_1337 = sub_5bc0a0(&var_143c)
                            int32_t var_14f0_1 = *sub_5bc0a0(&var_180)
                            int128_t var_14ec_1 = *eax_1337
                            int64_t var_14dc_1 = eax_1337[1].q
                            int32_t var_14d4_1 = *(eax_1337 + 0x18)
                            void var_14f4
                            void* eax_1340 = sub_5bc0a0(&var_14f4)
                            int32_t* eax_1341 = sub_5bc0a0(&var_10c)
                            var_14_86.b = 0xe8
                            void var_34c
                            void* var_a4c_1 = &var_34c
                            int32_t var_348
                            int32_t* var_a48_1 = &var_348
                            void* var_7c_23 = eax_1340 + 4
                            int32_t* var_a44_1 = &var_348
                            var_14_86.b = 0xea
                            var_348 = sub_5bc1e0(sub_5bc1e0(eax_1340 + 4))
                            var_14_86.b = 0xeb
                            int32_t var_344
                            int32_t* var_a40_1 = &var_344
                            int32_t* eax_1345 = sub_5bc0a0(eax_1340 + 8)
                            int32_t* var_a3c_1 = &var_344
                            var_14_86.b = 0xed
                            var_344 = sub_5bc1e0(eax_1345)
                            eax_1345[3]
                            int32_t var_33c_1 = sub_4acc50(eax_1345[3])
                            var_14_86.b = 0xee
                            int32_t var_5c_34 = 1
                            int32_t eax_1348 = sub_4acc50(eax_1340 + 8)
                            
                            if (sub_5bbe40(eax_1341) != eax_1348)
                                if (var_5c_34 != 0 && eax_1348 != 0
                                        && var_5c_34 s> divs.dp.d(0x7fffffff, eax_1348))
                                    sub_5b0890()
                                    noreturn
                                
                                int32_t edi_330 = eax_1348 * var_5c_34
                                
                                if (edi_330 != eax_1341[1])
                                    sub_5be6c0(*eax_1341)
                                    
                                    if (edi_330 s<= 0)
                                        *eax_1341 = 0
                                    else
                                        *eax_1341 = sub_5c0320(edi_330)
                                
                                eax_1341[1] = eax_1348
                            
                            var_14_86.b = 0xef
                            int32_t var_184 = sub_5bc1e0(eax_1341)
                            var_14_86.b = 0xf0
                            int32_t var_2dc_1 = sub_5bc0a0(eax_1341)
                            int32_t* var_2e8 = &var_184
                            void* var_2e4_1 = &var_34c
                            void var_10e
                            void* var_2e0_1 = &var_10e
                            int32_t* eax_1356 = sub_5c1ae0(&var_2e8)
                            int32_t edi_331 = 0
                            int32_t eax_1357
                            int32_t edx_175
                            edx_175:eax_1357 = sx.q(eax_1356)
                            void* eax_1359 = (eax_1357 + (edx_175 & 3)) & 0xfffffffc
                            void* var_7c_25 = eax_1359
                            
                            if (eax_1359 s> 0)
                                int32_t edx_177 = 0
                                int32_t var_6c_14 = 0
                                
                                do
                                    int32_t esi_358 = edi_331 << 2
                                    int128_t var_1510 = *(*(var_2e4_1 + 8) + edx_177)
                                    float var_1520[0x4] = *(*(var_2e4_1 + 4) + esi_358)
                                    edi_331 += 4
                                    edx_177 = var_6c_14 + 0x10
                                    var_6c_14 = edx_177
                                    *(*var_2e8 + esi_358) = sub_5c49b0(&var_1520, &var_1510)
                                    eax_1359 = var_7c_25
                                while (edi_331 s< eax_1359)
                            
                            sub_5c6490(eax_1359, eax_1359, &var_2e8, eax_1356)
                            var_14_86.b = 0xe3
                            eax_1305 = var_80_19
                            ecx_1299 = var_58_95
                            edx_167 = var_64_24
                            esi_346 = arg5
                        
                        eax_1305 += 1
                        ecx_1299 += 4
                        var_80_19 = eax_1305
                        var_58_95 = ecx_1299
                    while (eax_1305 s< esi_346)
                    
                    if (esi_346 s> 2)
                        int32_t* eax_1364 = sub_5bbe40(&var_104)
                        int32_t var_318
                        int32_t* var_30_107 = &var_318
                        int32_t var_38_72 = 1
                        var_318 = _mm_cvtepi32_ps(zx.o(esi_346 - 1))
                        void var_146c
                        sub_5c0390(&var_146c, var_38_72, eax_1364)
                        int32_t* eax_1365 = sub_5bc0a0(&var_104)
                        void var_610
                        sub_5c1ac0(&var_610, &var_146c)
                        var_14_86.b = 0xf2
                        int32_t var_188 = sub_5bc1e0(eax_1365)
                        var_14_86.b = 0xf3
                        int32_t var_2cc_1 = sub_5bc0a0(eax_1365)
                        int32_t* var_2d8 = &var_188
                        void* var_2d4_1 = &var_610
                        void var_10f
                        void* var_2d0_1 = &var_10f
                        int32_t eax_1368 = sub_5c1ae0(&var_2d8)
                        int32_t ecx_1363 = 0
                        int32_t eax_1369
                        int32_t edx_181
                        edx_181:eax_1369 = sx.q(eax_1368)
                        int32_t edx_184 = ((edx_181 & 3) + eax_1369) & 0xfffffffc
                        
                        if (edx_184 s> 0)
                            do
                                float xmm1_2[0x4] = *var_2d4_1
                                int32_t* eax_1371 = var_2d8
                                float xmm1_3[0x4] = _mm_shuffle_ps(xmm1_2, xmm1_2, 0)
                                eax_1369 = *eax_1371
                                *(eax_1369 + (ecx_1363 << 2)) =
                                    _mm_div_ps(*(eax_1369 + (ecx_1363 << 2)), xmm1_3)
                                ecx_1363 += 4
                            while (ecx_1363 s< edx_184)
                        
                        sub_5c2e40(eax_1369, edx_184, &var_2d8, eax_1368)
                        var_14_86.b = 0xe3
                    
                    int32_t esi_362 = var_b8
                    var_14_86.b = 0xf4
                    sub_5bbe40(&var_b8)
                    int32_t* var_30_110 = eax_16
                    var_14_86.b = 0xe3
                    int32_t edi_333 = eax_16 * 2
                    int32_t var_e8c
                    sub_5bc1c0(&var_e8c, esi_362 + (edi_333 << 2), 1)
                    int32_t var_e78_1 = edi_333
                    int32_t* var_e80_1 = &var_b8
                    var_14_86.b = 0xf5
                    int32_t var_e74_1 = sub_5bbe40(&var_b8)
                    int32_t var_314 = var_104
                    int32_t var_a8c = var_e8c
                    var_14_86.b = 0xf9
                    int32_t var_a84_1 = sub_5bbe40(var_e80_1)
                    var_14_86.b = 0xfa
                    int32_t* var_1a0 = &var_a8c
                    int32_t* var_19c_1 = &var_314
                    void var_110
                    void* var_198_1 = &var_110
                    int32_t* var_194_1 = &var_e8c
                    int32_t eax_1378 = sub_5c1af0(&var_1a0)
                    int32_t eax_1379 = sub_5c2e20(*var_194_1, eax_1378)
                    int32_t esi_363 = eax_1379
                    int32_t ecx_1375 = eax_1378 - esi_363
                    
                    if (ecx_1375 s< 0)
                        ecx_1375 += 3
                    
                    int32_t edi_335 = esi_363 + (ecx_1375 s>> 2 << 2)
                    int128_t* eax_1380 = sub_5c5320(eax_1379, 0, &var_1a0, esi_363)
                    
                    while (esi_363 s< edi_335)
                        int32_t ecx_1378 = esi_363 << 2
                        esi_363 += 4
                        eax_1380 = *var_1a0
                        *(eax_1380 + ecx_1378) = *(*var_19c_1 + ecx_1378)
                    
                    sub_5c5320(eax_1380, edi_335, &var_1a0, eax_1378)
                    int32_t esi_364 = var_b8
                    var_14_86.b = 0xfb
                    sub_5bbe40(&var_b8)
                    int32_t* var_30_113 = eax_16
                    var_14_86.b = 0xe3
                    void* edi_336 = eax_16 * 3
                    int32_t var_9d4
                    sub_5bc1c0(&var_9d4, esi_364 + (edi_336 << 2), 1)
                    void* var_9c0_1 = edi_336
                    int32_t* var_9c8_1 = &var_b8
                    var_14_86.b = 0xfc
                    int32_t var_9bc_1 = sub_5bbe40(&var_b8)
                    int32_t var_190 = var_10c
                    int32_t var_840 = var_9d4
                    int32_t var_14_87 = 0x100
                    int32_t var_838_1 = sub_5bbe40(var_9c8_1)
                    int32_t var_14_88 = 0x101
                    int32_t* var_258 = &var_840
                    int32_t* var_254_1 = &var_190
                    void var_111
                    void* var_250_1 = &var_111
                    int32_t* var_24c_1 = &var_9d4
                    int32_t eax_1390 = sub_5c1af0(&var_258)
                    int32_t eax_1392 = sub_5c2e20(sub_5c3cc0(&var_258), eax_1390)
                    int32_t esi_365 = eax_1392
                    int32_t ecx_1389 = eax_1390 - esi_365
                    
                    if (ecx_1389 s< 0)
                        ecx_1389 += 3
                    
                    int32_t edi_338 = esi_365 + (ecx_1389 s>> 2 << 2)
                    int32_t eax_1393 = sub_5c5320(eax_1392, 0, &var_258, esi_365)
                    
                    while (esi_365 s< edi_338)
                        int32_t ecx_1392 = esi_365 << 2
                        esi_365 += 4
                        eax_1393 = *var_258
                        *(ecx_1392 + eax_1393) = *(*var_254_1 + ecx_1392)
                    
                    sub_5c5320(eax_1393, edi_338, &var_258, eax_1390)
                    int32_t var_14_89 = 0xfe
                    var_14_89.b = 0xe3
                    sub_5bbeb0(&var_44, "value_dense")
                    void var_a04
                    int32_t* eax_1398 =
                        sub_5bc6a0(&var_b8, eax_10 + 0x1597e78, &var_a04, &var_b8, 0)
                    int32_t var_14_90 = 0x102
                    int32_t* var_130 = &var_d0
                    int32_t var_27c = *eax_1398
                    var_14_90.b = 4
                    int32_t esi_366 = eax_1398[1]
                    int32_t var_cc
                    
                    if (var_cc != esi_366)
                        if (esi_366 != 0 && divs.dp.d(0x7fffffff, esi_366) s< 1)
                            struct std::exception::std::bad_alloc::VTable* exceptionObject_5
                            sub_5c8e10(&exceptionObject_5)
                            _CxxThrowException(&exceptionObject_5, &data_8c059c)
                            noreturn
                        
                        if (esi_366 != var_cc)
                            void* eax_1401 = var_d0
                            
                            if (eax_1401 != 0)
                                free(*(eax_1401 - 4))
                            
                            if (esi_366 s<= 0)
                                var_d0 = nullptr
                            else
                                var_d0 = sub_5c0320(esi_366)
                        
                        var_cc = esi_366
                    
                    int32_t var_310 = *var_130
                    var_14_90.b = 6
                    int32_t* var_430 = &var_310
                    int32_t* var_42c_1 = &var_27c
                    void var_112
                    void* var_428_1 = &var_112
                    int32_t** var_424_1 = &var_130
                    int32_t eax_1405 = sub_5c1b00(&var_130)
                    int32_t esi_367 = 0
                    int128_t* eax_1406
                    int32_t edx_192
                    edx_192:eax_1406 = sx.q(eax_1405)
                    void* edx_195 = ((edx_192 & 3) + eax_1406) & 0xfffffffc
                    
                    if (edx_195 s> 0)
                        do
                            int32_t ecx_1401 = esi_367 << 2
                            esi_367 += 4
                            eax_1406 = *var_430
                            *(eax_1406 + ecx_1401) = *(*var_42c_1 + ecx_1401)
                        while (esi_367 s< edx_195)
                    
                    sub_5c6500(eax_1406, edx_195, &var_430, eax_1405)
                    int32_t var_14_91 = 0xe3
                    sub_5b0e50(&var_a04)
                    void var_9fc
                    sub_5bc0b0(&var_ac, sub_5be520(&var_9fc, &var_d0))
                    sub_5b0e50(&var_9fc)
                    int32_t var_fc_1 = 0
                    int32_t* edi_340 = eax_1254
                    int32_t var_14_92 = 0x107
                    void* var_f8
                    int32_t* var_a34_1 = &var_f8
                    void* eax_1411 = nullptr
                    int32_t* esi_368 = edi_340[2]
                    var_f8 = nullptr
                    int32_t var_f4_1 = 0
                    var_14_92.b = 8
                    
                    if (esi_368 != 0)
                        if (divs.dp.d(0x7fffffff, esi_368) s< 1)
                            struct std::exception::std::bad_alloc::VTable* exceptionObject_4
                            sub_5c8e10(&exceptionObject_4)
                            _CxxThrowException(&exceptionObject_4, &data_8c059c)
                            noreturn
                        
                        if (esi_368 s<= 0)
                            eax_1411 = nullptr
                        else
                            eax_1411 = sub_5c0320(esi_368)
                        
                        var_f8 = eax_1411
                    
                    var_14_92.b = 9
                    int32_t var_280
                    int32_t* var_30_119 = &var_280
                    int32_t var_38_75 = 1
                    var_280 = 0
                    void var_a98
                    sub_5c0390(&var_a98, var_38_75, esi_368)
                    int32_t* edx_199 = esi_368
                    int32_t* var_a94
                    void* eax_1417
                    
                    if (edx_199 == var_a94)
                        eax_1417 = var_f8
                    else
                        if (var_a94 != 0 && divs.dp.d(0x7fffffff, var_a94) s< 1)
                            struct std::exception::std::bad_alloc::VTable* exceptionObject_3
                            sub_5c8e10(&exceptionObject_3)
                            _CxxThrowException(&exceptionObject_3, &data_8c059c)
                            noreturn
                        
                        void* eax_1416 = var_f8
                        
                        if (eax_1416 != 0)
                            free(*(eax_1416 - 4))
                        
                        if (var_a94 s<= 0)
                            edi_340 = eax_1254
                            eax_1417 = nullptr
                            var_f8 = nullptr
                            edx_199 = var_a94
                            int32_t* var_f4_4 = var_a94
                        else
                            eax_1417 = sub_5c0320(var_a94)
                            edi_340 = eax_1254
                            edx_199 = var_a94
                            var_f8 = eax_1417
                            int32_t* var_f4_3 = var_a94
                    
                    int32_t var_274
                    int32_t* var_30_121 = &var_274
                    int32_t var_a90
                    var_274 = var_a90
                    sub_5c3cd0(eax_1417, edx_199, eax_1417, var_30_121)
                    float var_160 = 1f
                    int32_t var_a8
                    
                    if (edi_340[2] != 1)
                        sub_5c03d0(&var_f8, edi_340, &var_ac, &var_f8, &var_160)
                    else
                        var_14_92.b = 0xb
                        sub_5bbe40(&var_ac)
                        int32_t var_30_122 = var_a8
                        var_14_92.b = 9
                        int32_t var_570
                        sub_5bc1c0(&var_570, var_ac, 1)
                        int32_t var_55c_1 = 0
                        int32_t* var_564_1 = &var_ac
                        var_14_92.b = 0xc
                        int32_t eax_1418 = sub_5bbe40(&var_ac)
                        int32_t esi_371 = edi_340[1]
                        var_14_92.b = 0xd
                        sub_5bbe40(edi_340)
                        int32_t var_30_123 = 1
                        var_14_92.b = 9
                        int128_t var_bdc
                        sub_5c03b0(&var_bdc, *edi_340, esi_371)
                        int32_t* var_bd0_1 = edi_340
                        int32_t var_bcc_1 = 0
                        int32_t var_bc8_1 = 0
                        var_14_92.b = 0xe
                        int32_t eax_1419 = sub_5bbe40(edi_340)
                        int32_t ecx_1417 = var_570
                        int128_t xmm0_307 = var_bdc
                        int32_t var_56c
                        int32_t var_d18_1 = var_56c
                        int32_t var_560
                        int32_t var_d0c_1 = var_560
                        int32_t var_d08_1 = var_55c_1
                        int32_t var_bc4_1 = eax_1419
                        int32_t var_568
                        int32_t var_d14_1 = var_568
                        int32_t var_d04_1 = eax_1418
                        int64_t var_cf0_1 = var_bcc_1.q
                        int32_t var_ce8_1 = eax_1419
                        void var_d20
                        float xmm0_309
                        
                        if (sub_5c3ca0(&var_d20) != 0)
                            int32_t var_1400_1 = ecx_1417
                            var_14_92.b = 0x10
                            int32_t var_13f8_1 = sub_5bbe40(var_564_1)
                            int32_t var_13f4_1 = xmm0_307.d
                            var_14_92.b = 0x12
                            int32_t var_13ec_1 = sub_5bbe40(xmm0_307:0xc.d)
                            var_14_92.b = 0x13
                            void var_1404
                            void var_113
                            xmm0_309 = sub_5c5e90(&var_d20, &var_113, &var_1404, &var_d20)
                        else
                            xmm0_309 = (zx.o(0)).d
                        
                        void* eax_1429 = var_f8
                        *eax_1429 = var_160 * xmm0_309 f+ *eax_1429
                    
                    int32_t xmm0_310 = *eax_1411
                    sub_5b0e50(&var_f8)
                    int32_t edi_342 = var_64_24
                    var_c0[edi_342] = xmm0_310
                    int32_t var_f0_1 = 0
                    int32_t var_14_93 = 0x115
                    void* var_ec
                    int32_t* var_a30_1 = &var_ec
                    void* eax_1433 = nullptr
                    int32_t* esi_374 = eax_1256[2]
                    var_ec = nullptr
                    int32_t var_e8_1 = 0
                    var_14_93.b = 0x16
                    
                    if (esi_374 != 0)
                        if (divs.dp.d(0x7fffffff, esi_374) s< 1)
                            struct std::exception::std::bad_alloc::VTable* exceptionObject_2
                            sub_5c8e10(&exceptionObject_2)
                            _CxxThrowException(&exceptionObject_2, &data_8c059c)
                            noreturn
                        
                        if (esi_374 s<= 0)
                            eax_1433 = nullptr
                        else
                            eax_1433 = sub_5c0320(esi_374)
                        
                        var_ec = eax_1433
                    
                    var_14_93.b = 0x17
                    int32_t var_2fc
                    int32_t* var_30_126 = &var_2fc
                    int32_t var_38_78 = 1
                    var_2fc = 0
                    void var_aa4
                    sub_5c0390(&var_aa4, var_38_78, esi_374)
                    int32_t* edx_207 = esi_374
                    int32_t* var_aa0
                    void* eax_1439
                    
                    if (edx_207 == var_aa0)
                        eax_1439 = var_ec
                    else
                        if (var_aa0 != 0 && divs.dp.d(0x7fffffff, var_aa0) s< 1)
                            struct std::exception::std::bad_alloc::VTable* exceptionObject_1
                            sub_5c8e10(&exceptionObject_1)
                            _CxxThrowException(&exceptionObject_1, &data_8c059c)
                            noreturn
                        
                        void* eax_1438 = var_ec
                        
                        if (eax_1438 != 0)
                            free(*(eax_1438 - 4))
                        
                        if (var_aa0 s<= 0)
                            edi_342 = var_64_24
                            eax_1439 = nullptr
                            var_ec = nullptr
                            edx_207 = var_aa0
                            int32_t* var_e8_4 = var_aa0
                        else
                            eax_1439 = sub_5c0320(var_aa0)
                            edi_342 = var_64_24
                            edx_207 = var_aa0
                            var_ec = eax_1439
                            int32_t* var_e8_3 = var_aa0
                    
                    int32_t var_300
                    int32_t* var_30_128 = &var_300
                    int32_t var_a9c
                    var_300 = var_a9c
                    sub_5c3cd0(eax_1439, edx_207, eax_1439, var_30_128)
                    float var_164 = 1f
                    
                    if (eax_1256[2] != 1)
                        sub_5c03d0(eax_1256, eax_1256, &var_ac, &var_ec, &var_164)
                    else
                        var_14_93.b = 0x19
                        sub_5bbe40(&var_ac)
                        int32_t var_30_129 = var_a8
                        var_14_93.b = 0x17
                        int32_t var_538
                        sub_5bc1c0(&var_538, var_ac, 1)
                        int32_t var_524_1 = 0
                        int32_t* var_52c_1 = &var_ac
                        var_14_93.b = 0x1a
                        int32_t eax_1441 = sub_5bbe40(&var_ac)
                        int32_t esi_377 = eax_1256[1]
                        var_14_93.b = 0x1b
                        sub_5bbe40(eax_1256)
                        int32_t var_30_130 = 1
                        var_14_93.b = 0x17
                        int128_t var_bf8
                        sub_5c03b0(&var_bf8, *eax_1256, esi_377)
                        int32_t* var_bec_1 = eax_1256
                        int32_t var_be8_1 = 0
                        int32_t var_be4_1 = 0
                        var_14_93.b = 0x1c
                        int32_t eax_1443 = sub_5bbe40(eax_1256)
                        int32_t ecx_1436 = var_538
                        int128_t xmm0_313 = var_bf8
                        int32_t var_534
                        int32_t var_cd8_1 = var_534
                        int32_t var_528
                        int32_t var_ccc_1 = var_528
                        int32_t var_cc8_1 = var_524_1
                        int32_t var_be0_1 = eax_1443
                        int32_t var_530
                        int32_t var_cd4_1 = var_530
                        int32_t var_cc4_1 = eax_1441
                        int64_t var_cb0_1 = var_be8_1.q
                        int32_t var_ca8_1 = eax_1443
                        void var_ce0
                        float xmm0_315
                        
                        if (sub_5c3ca0(&var_ce0) != 0)
                            int32_t var_141c_1 = ecx_1436
                            var_14_93.b = 0x1e
                            int32_t var_1414_1 = sub_5bbe40(var_52c_1)
                            int32_t var_1410_1 = xmm0_313.d
                            var_14_93.b = 0x20
                            int32_t var_1408_1 = sub_5bbe40(xmm0_313:0xc.d)
                            var_14_93.b = 0x21
                            void var_1420
                            void var_149
                            xmm0_315 = sub_5c5e90(&var_ce0, &var_149, &var_1420, &var_ce0)
                        else
                            xmm0_315 = (zx.o(0)).d
                        
                        void* eax_1453 = var_ec
                        *eax_1453 = xmm0_315 * var_164 f+ *eax_1453
                    
                    var_14_86 = 0xe3
                    int32_t xmm0_318 = *eax_1433
                    sub_5b0e50(&var_ec)
                    *(var_15c + (edi_342 << 2)) = xmm0_318
                    sub_5b0e50(&var_10c)
                    var_14_86.b = 0xd9
                    sub_5b0e50(&var_104)
                    edi_310 = edi_342 + 1
                    var_64_24 = edi_310
                    
                    if (edi_310 s>= arg5)
                        break
                    
                    esi_333 = eax_10
        
        int32_t var_170 = sub_5bc0a0(&var_c0)
        void var_155c
        void* eax_1555 = sub_5bc0a0(sub_5bbe30(&var_170, &var_155c))
        int32_t* eax_1556 = sub_5bc0a0(&var_c0)
        int32_t var_14_103 = 0x136
        int32_t var_234
        int32_t* var_a18_1 = &var_234
        int32_t* var_a14_1 = &var_234
        var_14_103.b = 0x38
        var_234 = sub_5bc1e0(sub_5bc1e0(eax_1555 + 4))
        int32_t var_14_104 = 0x139
        int32_t var_58_96 = 1
        int32_t eax_1559 = sub_5c1b00(eax_1555 + 4)
        int32_t ecx_1563 = var_58_96
        
        if (1 != ecx_1563)
            goto label_5ba1e3
        
        if (sub_5bbe40(eax_1556) != eax_1559)
            ecx_1563 = var_58_96
        label_5ba1e3:
            
            if (ecx_1563 != 0 && eax_1559 != 0 && ecx_1563 s> divs.dp.d(0x7fffffff, eax_1559))
                sub_5b0890()
                noreturn
            
            int32_t esi_400 = eax_1559 * ecx_1563
            
            if (esi_400 != eax_1556[1])
                sub_5be6c0(*eax_1556)
                
                if (esi_400 s<= 0)
                    *eax_1556 = 0
                else
                    *eax_1556 = sub_5c0320(esi_400)
            
            eax_1556[1] = eax_1559
        
        var_14_104.b = 0x3a
        int32_t var_174 = sub_5bc1e0(eax_1556)
        var_14_104.b = 0x3b
        int32_t var_29c_1 = sub_5bc0a0(eax_1556)
        int32_t* var_2a8 = &var_174
        void var_238
        void* var_2a4_1 = &var_238
        void var_118
        void* var_2a0_1 = &var_118
        void* eax_1567 = sub_5c1ae0(&var_2a8)
        int32_t edi_364 = 0
        int32_t eax_1568
        int32_t edx_240
        edx_240:eax_1568 = sx.q(eax_1567)
        void* eax_1570 = (eax_1568 + (edx_240 & 3)) & 0xfffffffc
        void* var_7c_34 = eax_1570
        
        if (eax_1570 s> 0)
            do
                int32_t esi_401 = edi_364 << 2
                float var_1530[0x4]
                float (* var_30_149)[0x4] = &var_1530
                var_1530 = *(*(var_2a4_1 + 4) + esi_401)
                int128_t var_1540
                sub_5c8620(&var_1540, var_30_149)
                edi_364 += 4
                *(*var_2a8 + esi_401) = var_1540
                eax_1570 = var_7c_34
            while (edi_364 s< eax_1570)
        
        sub_5c6600(eax_1570, eax_1570, &var_2a8, eax_1567)
        int32_t var_14_105 = 0xd9
        int32_t* eax_1574 = sub_5bc0a0(&var_c0)
        int32_t eax_1575 = sub_5bc1e0(eax_1574)
        sub_5bbe40(eax_1574)
        int32_t var_30_151 = arg5
        void var_112c
        sub_5bc1c0(&var_112c, eax_1575, 1)
        int32_t* var_1120_1 = eax_1574
        int32_t var_1118_1 = 0
        int32_t var_1114_1 = sub_5bbe40(eax_1574)
        
        if (sub_4acc50(&var_112c) != 0)
            int32_t eax_1578 = sub_5bc0a0(&var_112c)
            int32_t* eax_1579 = sub_5bc0a0(eax_1578)
            int32_t var_14_106 = 0x13c
            int32_t var_870 = sub_5bc1e0(eax_1579)
            eax_1579[3]
            int32_t var_868_1 = sub_5bbe40(eax_1579[3])
            int32_t var_14_107 = 0x13d
            int32_t* eax_1582 = sub_5bc0a0(eax_1578)
            void var_119
            var_a4_8 = sub_5c0030(eax_1582, &var_119, &var_870, eax_1582)
            int32_t var_14_108 = 0xd9
        
        int32_t* eax_1583 = sub_5bbe40(&var_c0)
        int32_t var_308
        int32_t* var_30_153 = &var_308
        int32_t var_38_86 = 1
        var_308 = var_a4_8
        void var_14cc
        sub_5c0390(&var_14cc, var_38_86, eax_1583)
        int32_t* eax_1584 = sub_5bc0a0(&var_c0)
        void var_628
        sub_5c1ac0(&var_628, &var_14cc)
        int32_t var_14_109 = 0x13f
        int32_t var_17c = sub_5bc1e0(eax_1584)
        var_14_109.b = 0x40
        int32_t var_28c_1 = sub_5bc0a0(eax_1584)
        int32_t* var_298 = &var_17c
        void* var_294_1 = &var_628
        void var_11a
        void* var_290_1 = &var_11a
        int32_t eax_1587 = sub_5c1ae0(&var_298)
        int32_t ecx_1594 = 0
        int32_t eax_1588
        int32_t edx_244
        edx_244:eax_1588 = sx.q(eax_1587)
        int32_t edx_247 = ((edx_244 & 3) + eax_1588) & 0xfffffffc
        
        if (edx_247 s> 0)
            do
                float xmm1_7[0x4] = *var_294_1
                int32_t* eax_1590 = var_298
                float xmm1_8[0x4] = _mm_shuffle_ps(xmm1_7, xmm1_7, 0)
                eax_1588 = *eax_1590
                *(eax_1588 + (ecx_1594 << 2)) = _mm_div_ps(*(eax_1588 + (ecx_1594 << 2)), xmm1_8)
                ecx_1594 += 4
            while (ecx_1594 s< edx_247)
        
        sub_5c2e40(eax_1588, edx_247, &var_298, eax_1587)
        int32_t var_14_110 = 0xd9
        int32_t esi_407 = 0
        
        if (arg5 s<= 0)
        label_5ba5d0:
            int32_t var_30c
            int32_t* var_30_157 = &var_30c
            int32_t* eax_1596 = *(eax_10 + 0x15d7e8c)
            int32_t var_38_87 = 1
            var_30c = 0
            void var_ab0
            sub_5c0390(&var_ab0, var_38_87, eax_1596)
            int32_t var_aac
            
            if (*(eax_10 + 0x15d7e8c) != var_aac)
                if (var_aac != 0 && divs.dp.d(0x7fffffff, var_aac) s< 1)
                    struct std::exception::std::bad_alloc::VTable* exceptionObject
                    sub_5c8e10(&exceptionObject)
                    _CxxThrowException(&exceptionObject, &data_8c059c)
                    noreturn
                
                void* eax_1599 = *(eax_10 + 0x15d7e88)
                
                if (eax_1599 != 0)
                    free(*(eax_1599 - 4))
                
                void* eax_1601
                
                if (var_aac s<= 0)
                    eax_1601 = nullptr
                else
                    eax_1601 = sub_5c0320(var_aac)
                
                *(eax_10 + 0x15d7e88) = eax_1601
                *(eax_10 + 0x15d7e8c) = var_aac
            
            int32_t var_aa8
            int32_t var_330 = var_aa8
            sub_5c3cd0(&var_330, *(eax_10 + 0x15d7e8c), *(eax_10 + 0x15d7e88), &var_330)
            *(*(eax_10 + 0x15d7e88) + (arg7 << 2)) = 0x3f800000
            int32_t edi_369 = *(eax_10 + 0x15d8b34)
            int32_t esi_409 = *(eax_10 + 0x15d7e84)
            int32_t var_14_111 = 0x146
            int32_t var_14_112 = 0xd9
            int32_t ecx_1607 = edi_369 * sub_4acc50(eax_10 + 0x15d7e7c)
            int32_t var_30_160 = esi_409
            int32_t var_c30
            sub_5bc1c0(&var_c30, *(eax_10 + 0x15d7e7c) + (ecx_1607 << 2), 1)
            int32_t var_c20 = edi_369
            int32_t var_c1c = 0
            int32_t var_14_113 = 0x147
            int32_t var_c18 = sub_4acc50(eax_10 + 0x15d7e7c)
            int32_t esi_411 = *(eax_10 + 0x15d7e88)
            int32_t var_14_114 = 0x148
            sub_5bbe40(eax_10 + 0x15d7e88)
            int32_t* var_30_161 = eax_16
            int32_t var_14_115 = 0xd9
            int32_t var_c4c
            sub_5bc1c0(&var_c4c, esi_411 + 0xf4, 1)
            int32_t var_c38 = 0x3d
            int32_t var_14_116 = 0x149
            int32_t var_c34 = sub_5bbe40(eax_10 + 0x15d7e88)
            int32_t var_ac8 = var_c30
            int32_t var_14_117 = 0x14b
            int32_t var_ac0 = sub_4acc50(eax_10 + 0x15d7e7c)
            int32_t var_14_118 = 0x14c
            int32_t var_abc = var_c4c
            var_14_118.b = 0x4e
            int32_t var_ab4 = sub_5bbe40(eax_10 + 0x15d7e88)
            var_14_118.b = 0x4f
            int32_t* var_210 = &var_abc
            int32_t* var_20c = &var_ac8
            void var_11b
            void* var_208 = &var_11b
            int32_t* var_204 = &var_c4c
            int32_t esi_412 = sub_5c1af0(&var_210)
            int32_t edi_371 = sub_5c2e20(*var_204, esi_412)
            int32_t eax_1620
            int32_t edx_253
            edx_253:eax_1620 = sx.q(esi_412 - edi_371)
            int32_t eax_1623 = edi_371 + ((eax_1620 + (edx_253 & 3)) s>> 2 << 2)
            int32_t eax_1624 = sub_5c5270(eax_1623, 0, &var_210, edi_371)
            
            while (edi_371 s< eax_1623)
                int32_t esi_413 = edi_371 << 2
                edi_371 += 4
                eax_1624 = *var_210
                *(esi_413 + eax_1624) = *(*var_20c + esi_413)
            
            sub_5c5270(eax_1624, eax_1623, &var_210, esi_412)
            int32_t esi_414 = *(eax_10 + 0x15d7e84)
            int32_t edi_373 = *(eax_10 + 0x1597e78 + (arg6 << 2) + 0x40ca4)
            int32_t var_14_119 = 0x150
            int32_t var_14_120 = 0xd9
            int32_t ecx_1624 = edi_373 * sub_4acc50(eax_10 + 0x15d7e7c)
            int32_t var_30_164 = esi_414
            int32_t var_c68
            sub_5bc1c0(&var_c68, *(eax_10 + 0x15d7e7c) + (ecx_1624 << 2), 1)
            int32_t var_c58 = edi_373
            int32_t var_c54 = 0
            int32_t var_14_121 = 0x151
            int32_t var_c50 = sub_4acc50(eax_10 + 0x15d7e7c)
            int32_t esi_416 = *(eax_10 + 0x15d7e88)
            int32_t var_14_122 = 0x152
            sub_5bbe40(eax_10 + 0x15d7e88)
            int32_t* var_30_165 = eax_16
            int32_t var_14_123 = 0xd9
            int32_t var_ca0
            sub_5bc1c0(&var_ca0, esi_416 + ((eax_16 + 0x3d) << 2), 1)
            void* var_c8c = eax_16 + 0x3d
            int32_t var_14_124 = 0x153
            int32_t var_c88 = sub_5bbe40(eax_10 + 0x15d7e88)
            int32_t var_ae0 = var_c68
            int32_t var_14_125 = 0x155
            int32_t var_ad8 = sub_4acc50(eax_10 + 0x15d7e7c)
            int32_t var_14_126 = 0x156
            int32_t var_ad4 = var_ca0
            var_14_126.b = 0x58
            int32_t var_acc = sub_5bbe40(eax_10 + 0x15d7e88)
            var_14_126.b = 0x59
            int32_t* var_200 = &var_ad4
            int32_t* var_1fc = &var_ae0
            void var_11c
            void* var_1f8 = &var_11c
            int32_t* var_1f4 = &var_ca0
            int32_t esi_417 = sub_5c1af0(&var_200)
            int32_t edi_375 = sub_5c2e20(*var_1f4, esi_417)
            int32_t eax_1647
            int32_t edx_257
            edx_257:eax_1647 = sx.q(esi_417 - edi_375)
            int32_t eax_1650 = edi_375 + ((eax_1647 + (edx_257 & 3)) s>> 2 << 2)
            int128_t* eax_1651 = sub_5c5270(eax_1650, 0, &var_200, edi_375)
            
            while (edi_375 s< eax_1650)
                int32_t esi_418 = edi_375 << 2
                edi_375 += 4
                eax_1651 = *var_200
                *(eax_1651 + esi_418) = *(*var_1fc + esi_418)
            
            sub_5c5270(eax_1651, eax_1650, &var_200, esi_417)
            void* var_98_2 = eax_16 * 2 + 0x3d
            int32_t var_14_127 = 0xd9
            
            if (*(eax_10 + 0x15d8b38) s>= 0xc)
                int32_t eax_1655 = *(eax_10 + (arg8 << 2) + 0x15d7e9c)
                
                if (eax_1655 s>= 0)
                    int32_t* eax_1656 = sub_5bc0a0(eax_10 + 0x15d7e7c)
                    int32_t eax_1657 = sub_4acc50(eax_1656)
                    int32_t eax_1658 = sub_4acc50(eax_1656)
                    int32_t var_30_168 = eax_1657
                    void var_1308
                    sub_5bc1c0(&var_1308, sub_5bc1e0(eax_1656) + ((eax_1655 * eax_1658) << 2), 1)
                    int32_t* var_12fc_1 = eax_1656
                    int32_t var_12f8_1 = eax_1655
                    int32_t var_12f4_1 = 0
                    int32_t var_12f0_1 = sub_4acc50(eax_1656)
                    int32_t* eax_1664 = sub_5bc0a0(eax_10 + 0x15d7e88)
                    int32_t eax_1665 = sub_5bc1e0(eax_1664)
                    sub_5bbe40(eax_1664)
                    int32_t* var_30_169 = eax_16
                    void var_1148
                    sub_5bc1c0(&var_1148, eax_1665 + var_98_2 * 4, 1)
                    int32_t* var_113c_1 = eax_1664
                    void* var_1134_1 = var_98_2
                    int32_t var_1130_1 = sub_5bbe40(eax_1664)
                    int32_t* eax_1670 = sub_5bc0a0(&var_1308)
                    int32_t* eax_1671 = sub_5bc0a0(&var_1148)
                    int32_t var_14_128 = 0x15a
                    int32_t var_888 = sub_5bc1e0(eax_1670)
                    eax_1670[3]
                    int32_t var_880_1 = sub_4acc50(eax_1670[3])
                    int32_t var_14_129 = 0x15b
                    int32_t var_b0_2 = 1
                    int32_t eax_1674 = sub_4acc50(eax_1670)
                    int32_t var_34_103
                    int32_t var_30_170
                    
                    if (1 != var_b0_2)
                        var_30_170 = eax_1674
                        var_34_103 = var_b0_2
                    else if (sub_4acc50(eax_1671) != eax_1674)
                        var_30_170 = eax_1674
                        var_34_103 = var_b0_2
                    var_14_129.b = 0x5c
                    int32_t var_87c = sub_5bc1e0(eax_1671)
                    eax_1671[3]
                    int32_t var_874_1 = sub_5bbe40(eax_1671[3])
                    var_14_129.b = 0x5d
                    int32_t var_1e4_1 = sub_5bc0a0(eax_1671)
                    int32_t* var_1f0 = &var_87c
                    int32_t* var_1ec_1 = &var_888
                    void var_11d
                    void* var_1e8_1 = &var_11d
                    int32_t esi_424 = sub_5c1af0(&var_1f0)
                    int32_t edi_380 = sub_5c2e20(sub_5c3cc0(&var_1f0), esi_424)
                    int32_t eax_1684
                    int32_t edx_262
                    edx_262:eax_1684 = sx.q(esi_424 - edi_380)
                    int32_t eax_1687 = edi_380 + ((eax_1684 + (edx_262 & 3)) s>> 2 << 2)
                    int128_t* eax_1688 = sub_5c5270(eax_1687, 0, &var_1f0, edi_380)
                    
                    while (edi_380 s< eax_1687)
                        int32_t esi_425 = edi_380 << 2
                        edi_380 += 4
                        eax_1688 = *var_1f0
                        *(eax_1688 + esi_425) = *(*var_1ec_1 + esi_425)
                    
                    sub_5c5270(eax_1688, eax_1687, &var_1f0, esi_424)
                    int32_t var_14_130 = 0xd9
            
            sub_5b0e50(&var_c0)
            sub_5b0e50(&var_ac)
            sub_5b0e50(&var_d0)
            sub_5b0e50(&var_15c)
            sub_5b0e50(&var_b8)
            sub_5b0e50(&var_c8)
            uint32_t result = sub_5b0e50(&var_94)
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        int32_t edx_248 = arg3
        int32_t* ecx_1598 = arg2 - edx_248
        int32_t* var_13c_1 = arg4 - edx_248
        int32_t* var_140_1 = ecx_1598
        
        while (true)
            float* edi_367 = edx_248 + (esi_407 << 2)
            int32_t* var_30_156 = ecx_1598
            int32_t xmm0_331 = var_c0[esi_407]
            int32_t var_7c_35 = xmm0_331
            unimplemented  {fld st0, dword [ebp-0x6c]}
            float _X_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            *(ecx_1598 + edi_367) = xmm0_331
            eax_1064 = _fdclass(_X_1)
            
            if (eax_1064.w == 2)
                var_30_80 = "ComputeNet"
                var_34_63 = 0x5b3
                ecx_1128 = "!isnan(winProb[i])"
                break
            
            ecx_1598 = var_140_1
            edx_248 = arg3
            *edi_367 = *(var_15c + (esi_407 << 2)) * 50f
            float* eax_1593 = var_c0
            float xmm0_334 = eax_1593[esi_407]
            esi_407 += 1
            *(var_13c_1 + edi_367) = xmm0_334 - *eax_1593
            
            if (esi_407 s>= arg5)
                goto label_5ba5d0
    else
        var_30_80 = "ComputeNet"
        var_34_63 = 0x551
        ecx_1128 = "n == gameInput.size()"
else
    while (true)
        int32_t var_68_2 = 1
        int32_t* eax_686 = sub_5bc0a0(&var_94)
        var_14_86.b = 0x72
        int32_t eax_687 = sub_5bbe40(eax_686)
        int32_t eax_688 = sub_5bc1e0(eax_686)
        int32_t var_664_1 = eax_687
        int32_t var_668_1 = eax_688
        var_14_86.b = 0x71
        int32_t i_46 = 0
        *(eax_688 + (var_60_23 << 2)) = 0x3f800000
        int32_t i_13
        
        do
            int32_t var_58_56 = var_68_2
            var_68_2 += 1
            int32_t* eax_690 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x73
            int32_t eax_691 = sub_5bbe40(eax_690)
            int32_t* eax_692 = sub_5bc1e0(eax_690)
            int32_t var_66c_1 = eax_691
            int32_t* var_670_1 = eax_692
            var_14_86.b = 0x71
            int32_t eax_697
            eax_697.b = var_60_23 == i_46
            i_13 = i_46 + 1
            i_46 = i_13
            eax_692[var_58_56 * eax_691 + var_60_23] = _mm_cvtepi32_ps(zx.o(eax_697))
        while (i_13 s< 6)
        int32_t i_14 = 0
        int32_t ecx_800 = var_60_23 * 0x11
        int32_t i_47 = 0
        int32_t var_78_1 = ecx_800
        
        do
            int32_t var_58_58 = var_68_2
            int32_t ecx_801
            ecx_801.b = sx.d(var_74[ecx_800 * 2 + 0xa28c]) s> i_14
            var_68_2 += 1
            int32_t* eax_703 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x74
            int32_t eax_704 = sub_5bbe40(eax_703)
            int32_t eax_705 = sub_5bc1e0(eax_703)
            int32_t var_574_1 = eax_704
            int32_t var_578_1 = eax_705
            var_14_86.b = 0x71
            i_14 = i_47 + 1
            i_47 = i_14
            *(((var_58_58 * eax_704 + var_60_23) << 2) + eax_705) = _mm_cvtepi32_ps(zx.o(ecx_801))
            ecx_800 = var_78_1
        while (i_14 s< 0xa)
        
        int32_t var_84_3 = var_68_2 + 1
        int32_t eax_713 = sx.d(var_74[ecx_800 * 2 + 0xa28c])
        int32_t esi_189
        int32_t edi_204
        float xmm0_65
        int16_t top
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_68 = _mm_cvtepi32_ps(zx.o(eax_713 - 5)) / 5f
            int32_t* eax_718 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x76
            int32_t eax_719 = sub_5bbe40(eax_718)
            int32_t var_584_1 = eax_719
            esi_189 = sub_5bc1e0(eax_718)
            int32_t var_588_1 = esi_189
            var_14_86.b = 0x71
            edi_204 = eax_719 * var_68_2 + var_60_23
            xmm0_65 = xmm0_68
        else
            top += 1
            float xmm0_64 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_713)) / 5f, eax_2) - 1f
            int32_t* eax_714 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x75
            int32_t eax_715 = sub_5bbe40(eax_714)
            int32_t var_57c_1 = eax_715
            esi_189 = sub_5bc1e0(eax_714)
            int32_t var_580_1 = esi_189
            var_14_86.b = 0x71
            edi_204 = eax_715 * var_68_2 + var_60_23
            xmm0_65 = xmm0_64
        
        int32_t i_15 = 0
        *(esi_189 + (edi_204 << 2)) = xmm0_65
        int32_t i_48 = 0
        
        do
            int32_t edi_207 = var_84_3
            int32_t ecx_814
            ecx_814.b = sx.d(var_74[var_78_1 * 2 + 0xa28d]) s> i_15
            var_84_3 += 1
            int32_t* eax_725 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x77
            int32_t eax_726 = sub_5bbe40(eax_725)
            int32_t* eax_727 = sub_5bc1e0(eax_725)
            var_14_86.b = 0x71
            int32_t var_58c_1 = eax_726
            int32_t* var_590_1 = eax_727
            i_15 = i_48 + 1
            i_48 = i_15
            eax_727[eax_726 * edi_207 + var_60_23] = _mm_cvtepi32_ps(zx.o(ecx_814))
        while (i_15 s< 0xa)
        
        int32_t var_64_12 = var_84_3 + 1
        int32_t eax_735 = sx.d(var_74[var_78_1 * 2 + 0xa28d])
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_79 = _mm_cvtepi32_ps(zx.o(eax_735 - 5)) / 5f
            int32_t* eax_740 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x79
            int32_t eax_741 = sub_5bbe40(eax_740)
            int32_t eax_742 = sub_5bc1e0(eax_740)
            int32_t var_65c_1 = eax_741
            int32_t var_660_1 = eax_742
            var_14_86.b = 0x71
            *(eax_742 + ((eax_741 * var_84_3 + var_60_23) << 2)) = xmm0_79
        else
            top += 1
            float xmm0_75 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_735)) / 5f, eax_2) - 1f
            int32_t* eax_736 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x78
            int32_t eax_737 = sub_5bbe40(eax_736)
            int32_t eax_738 = sub_5bc1e0(eax_736)
            int32_t var_594_1 = eax_737
            int32_t var_598_1 = eax_738
            var_14_86.b = 0x71
            *(eax_738 + ((eax_737 * var_84_3 + var_60_23) << 2)) = xmm0_75
        
        int32_t i_16 = 0
        int32_t i_49 = 0
        
        do
            int32_t var_58_62 = var_64_12
            int32_t ecx_828
            ecx_828.b = sx.d(var_74[var_78_1 * 2 + 0xa28e]) s> i_16
            var_64_12 += 1
            int32_t* eax_747 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x7a
            int32_t eax_748 = sub_5bbe40(eax_747)
            int32_t eax_749 = sub_5bc1e0(eax_747)
            int32_t var_654_1 = eax_748
            int32_t var_658_1 = eax_749
            var_14_86.b = 0x71
            i_16 = i_49 + 1
            i_49 = i_16
            *(((var_58_62 * eax_748 + var_60_23) << 2) + eax_749) = _mm_cvtepi32_ps(zx.o(ecx_828))
        while (i_16 s< 0x1e)
        
        int32_t var_68_3 = var_64_12 + 1
        int32_t eax_757 = sx.d(var_74[var_78_1 * 2 + 0xa28e])
        int32_t esi_200
        int32_t edi_217
        float xmm0_88
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_91 = _mm_cvtepi32_ps(zx.o(eax_757 - 0xa)) / 10f
            int32_t* eax_762 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x7c
            int32_t eax_763 = sub_5bbe40(eax_762)
            int32_t var_5bc_1 = eax_763
            esi_200 = sub_5bc1e0(eax_762)
            int32_t var_5c0_1 = esi_200
            var_14_86.b = 0x71
            edi_217 = eax_763 * var_64_12 + var_60_23
            xmm0_88 = xmm0_91
        else
            top += 1
            float xmm0_87 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_757)) / 5f, eax_2) - 1f
            int32_t* eax_758 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x7b
            int32_t eax_759 = sub_5bbe40(eax_758)
            int32_t var_64c_1 = eax_759
            esi_200 = sub_5bc1e0(eax_758)
            int32_t var_650_1 = esi_200
            var_14_86.b = 0x71
            edi_217 = eax_759 * var_64_12 + var_60_23
            xmm0_88 = xmm0_87
        
        *(esi_200 + (edi_217 << 2)) = xmm0_88
        
        if (*(eax_10 + 0x15d8b38) s>= 0xc)
            int32_t edx_73 = var_68_3
            int32_t i_17 = 0
            int32_t i_50 = 0
            int32_t edx_74
            
            do
                int32_t ecx_842
                ecx_842.b = sx.d(var_74[var_78_1 * 2 + 0xa28f]) s> i_17
                edx_74 = edx_73 + 1
                int32_t* eax_768 = sub_5bc0a0(&var_94)
                var_14_86.b = 0x7d
                int32_t eax_769 = sub_5bbe40(eax_768)
                int32_t eax_770 = sub_5bc1e0(eax_768)
                int32_t var_5b4_1 = eax_769
                int32_t var_5b8_1 = eax_770
                var_14_86.b = 0x71
                int32_t eax_774 = (edx_73 * eax_769 + var_60_23) << 2
                edx_73 = edx_74
                *(eax_774 + eax_770) = _mm_cvtepi32_ps(zx.o(ecx_842))
                i_17 = i_50 + 1
                i_50 = i_17
            while (i_17 s< 5)
            
            top += 1
            float xmm0_98 =
                sub_5c8df0(_mm_cvtepi32_ps(zx.o(sx.d(var_74[var_78_1 * 2 + 0xa28f]))) * 0.5f, eax_2)
                - 1f
            var_68_3 = edx_74 + 1
            int32_t* eax_777 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x7e
            int32_t eax_778 = sub_5bbe40(eax_777)
            int32_t eax_779 = sub_5bc1e0(eax_777)
            int32_t var_674_1 = eax_778
            int32_t var_678_1 = eax_779
            var_14_86.b = 0x71
            *(((edx_74 * eax_778 + var_60_23) << 2) + eax_779) = xmm0_98
        
        int32_t i_18 = 0
        int32_t i_51 = 0
        int32_t ecx_855 = (var_60_23 + 0x4c8) * 0x11
        int32_t var_80_13 = ecx_855
        
        do
            int32_t edi_222 = var_68_3
            int32_t ecx_856
            ecx_856.b = sx.d(var_74[ecx_855 * 2]) s> i_18
            var_68_3 += 1
            int32_t* eax_791 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x7f
            int32_t eax_792 = sub_5bbe40(eax_791)
            int32_t* eax_793 = sub_5bc1e0(eax_791)
            var_14_86.b = 0x71
            int32_t var_5ac_1 = eax_792
            int32_t* var_5b0_1 = eax_793
            i_18 = i_51 + 1
            i_51 = i_18
            eax_793[eax_792 * edi_222 + var_60_23] = _mm_cvtepi32_ps(zx.o(ecx_856))
            ecx_855 = var_80_13
        while (i_18 s< 0xa)
        
        int32_t var_64_14 = var_68_3 + 1
        int32_t eax_801 = sx.d(var_74[ecx_855 * 2])
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_110 = _mm_cvtepi32_ps(zx.o(eax_801 - 5)) / 5f
            int32_t* eax_811 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x81
            int32_t eax_812 = sub_5bbe40(eax_811)
            int32_t eax_813 = sub_5bc1e0(eax_811)
            int32_t var_62c_1 = eax_812
            int32_t var_630_1 = eax_813
            var_14_86.b = 0x71
            *(eax_813 + ((eax_812 * var_68_3 + var_60_23) << 2)) = xmm0_110
        else
            top += 1
            float xmm0_106 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_801)) / 5f, eax_2) - 1f
            int32_t* eax_802 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x80
            int32_t eax_803 = sub_5bbe40(eax_802)
            float* eax_804 = sub_5bc1e0(eax_802)
            int32_t var_634_1 = eax_803
            float* var_638_1 = eax_804
            var_14_86.b = 0x71
            eax_804[var_68_3 * eax_803 + var_60_23] = xmm0_106
        
        int32_t i_19 = 0
        int32_t i_52 = 0
        
        do
            int32_t var_58_70 = var_64_14
            int32_t ecx_869
            ecx_869.b = sx.d(var_74[var_78_1 * 2 + 0xa291]) s> i_19
            var_64_14 += 1
            int32_t* eax_818 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x82
            int32_t eax_819 = sub_5bbe40(eax_818)
            int32_t eax_820 = sub_5bc1e0(eax_818)
            int32_t var_614_1 = eax_819
            int32_t var_618_1 = eax_820
            var_14_86.b = 0x71
            i_19 = i_52 + 1
            i_52 = i_19
            *(((var_58_70 * eax_819 + var_60_23) << 2) + eax_820) = _mm_cvtepi32_ps(zx.o(ecx_869))
        while (i_19 s< 0xa)
        
        int32_t var_68_6 = var_64_14 + 1
        int32_t eax_828 = sx.d(var_74[var_78_1 * 2 + 0xa291])
        int32_t esi_216
        int32_t edi_230
        float xmm0_119
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_122 = _mm_cvtepi32_ps(zx.o(eax_828 - 5)) / 5f
            int32_t* eax_833 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x84
            int32_t eax_834 = sub_5bbe40(eax_833)
            int32_t var_644_1 = eax_834
            esi_216 = sub_5bc1e0(eax_833)
            int32_t var_648_1 = esi_216
            var_14_86.b = 0x71
            edi_230 = eax_834 * var_64_14 + var_60_23
            xmm0_119 = xmm0_122
        else
            top += 1
            float xmm0_118 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_828)) / 5f, eax_2) - 1f
            int32_t* eax_829 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x83
            int32_t eax_830 = sub_5bbe40(eax_829)
            int32_t var_63c_1 = eax_830
            esi_216 = sub_5bc1e0(eax_829)
            int32_t var_640_1 = esi_216
            var_14_86.b = 0x71
            edi_230 = eax_830 * var_64_14 + var_60_23
            xmm0_119 = xmm0_118
        
        int32_t i_20 = 0
        *(esi_216 + (edi_230 << 2)) = xmm0_119
        int32_t i_53 = 0
        
        do
            int32_t var_58_72 = var_68_6
            int32_t ecx_883
            ecx_883.b = sx.d(var_74[var_78_1 * 2 + 0xa298]) s> i_20
            var_68_6 += 1
            int32_t* eax_840 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x85
            int32_t eax_841 = sub_5bbe40(eax_840)
            int32_t eax_842 = sub_5bc1e0(eax_840)
            int32_t var_59c_1 = eax_841
            int32_t var_5a0_1 = eax_842
            var_14_86.b = 0x71
            i_20 = i_53 + 1
            i_53 = i_20
            *(((var_58_72 * eax_841 + var_60_23) << 2) + eax_842) = _mm_cvtepi32_ps(zx.o(ecx_883))
        while (i_20 s< 0x32)
        
        int32_t eax_848 = sx.d(var_74[var_78_1 * 2 + 0xa298])
        
        if (*(eax_10 + 0x15d8b38) s< 0xb)
            if (eax_848 s> 0x32)
                eax_848 = 0x32
            
            int32_t* eax_852 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x87
            int32_t eax_853 = sub_5bbe40(eax_852)
            int32_t eax_854 = sub_5bc1e0(eax_852)
            int32_t var_5c4_1 = eax_853
            int32_t var_5c8_1 = eax_854
            var_14_86.b = 0x71
            *(eax_854 + ((eax_853 * var_68_6 + var_60_23) << 2)) =
                _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_848)) - 25.0) / 25.0)
        else
            int32_t _X
            _X.q = _mm_cvtepi32_pd(zx.q(eax_848)) / 10.0
            asinh(_X)
            unimplemented  {fld1 }
            unimplemented  {fsubp st1, st0}
            unimplemented  {fsubp st1, st0}
            float var_5c_13 = fconvert.s(unimplemented  {fstp dword [ebp-0x4c], st0})
            unimplemented  {fstp dword [ebp-0x4c], st0}
            top += 1
            int32_t* eax_849 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x86
            int32_t eax_850 = sub_5bbe40(eax_849)
            int32_t eax_851 = sub_5bc1e0(eax_849)
            int32_t var_5a4_1 = eax_850
            int32_t var_5a8_1 = eax_851
            var_14_86.b = 0x71
            *(eax_851 + ((eax_850 * var_68_6 + var_60_23) << 2)) = var_5c_13
        
        int32_t i_21 = 0
        int32_t i_54 = 0
        int32_t edx_79 = var_68_6 + 1
        int32_t edx_80
        
        do
            int32_t ecx_897
            ecx_897.b = sx.d(var_74[var_78_1 * 2 + 0xa292]) s> i_21
            edx_80 = edx_79 + 1
            int32_t* eax_857 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x88
            int32_t eax_858 = sub_5bbe40(eax_857)
            int32_t* eax_859 = sub_5bc1e0(eax_857)
            int32_t var_5cc_1 = eax_858
            int32_t* var_5d0_1 = eax_859
            var_14_86.b = 0x71
            edx_79 = edx_80
            eax_859[edx_79 * eax_858 + var_60_23] = _mm_cvtepi32_ps(zx.o(ecx_897))
            i_21 = i_54 + 1
            i_54 = i_21
        while (i_21 s< 0x14)
        
        int32_t var_64_15 = edx_79 + 1
        int32_t eax_867 = sx.d(var_74[var_78_1 * 2 + 0xa292])
        int32_t esi_228
        int32_t edi_243
        float xmm0_141
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_144 = _mm_cvtepi32_ps(zx.o(eax_867 - 0xa)) / 10f
            int32_t* eax_872 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x8a
            int32_t eax_873 = sub_5bbe40(eax_872)
            int32_t var_5dc_1 = eax_873
            esi_228 = sub_5bc1e0(eax_872)
            int32_t var_5e0_1 = esi_228
            edi_243 = eax_873 * edx_80 + var_60_23
            xmm0_141 = xmm0_144
        else
            top += 1
            float xmm0_140 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_867)) / 5f, eax_2) - 1f
            int32_t* eax_868 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x89
            int32_t eax_869 = sub_5bbe40(eax_868)
            int32_t var_5d4_1 = eax_869
            esi_228 = sub_5bc1e0(eax_868)
            int32_t var_5d8_1 = esi_228
            edi_243 = eax_869 * edx_80 + var_60_23
            xmm0_141 = xmm0_140
        
        int32_t i_22 = 0
        *(esi_228 + (edi_243 << 2)) = xmm0_141
        int32_t i_55 = 0
        
        do
            int32_t esi_230 = var_64_15
            int32_t ecx_910
            ecx_910.b = sx.d(var_74[var_78_1 * 2 + 0xa294]) s> i_22
            var_64_15 += 1
            var_14_86.b = 0x8b
            int32_t esi_231 = esi_230 * sub_5bbe40(&var_94)
            i_22 = i_55 + 1
            var_14_86.b = 0x71
            i_55 = i_22
            *(var_94 + ((esi_231 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_910))
        while (i_22 s< 0xa)
        
        int32_t eax_881 = sx.d(var_74[var_78_1 * 2 + 0xa294])
        int32_t var_58_77 = var_64_15 + 1
        int32_t esi_236
        int32_t edi_249
        float xmm0_152
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_155 = _mm_cvtepi32_ps(zx.o(eax_881 - 5)) / 5f
            int32_t* eax_886 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x8d
            int32_t eax_887 = sub_5bbe40(eax_886)
            int32_t var_5ec_1 = eax_887
            esi_236 = sub_5bc1e0(eax_886)
            int32_t var_5f0_1 = esi_236
            edi_249 = eax_887 * var_64_15 + var_60_23
            xmm0_152 = xmm0_155
        else
            top += 1
            float xmm0_151 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_881)) / 5f, eax_2) - 1f
            int32_t* eax_882 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x8c
            int32_t eax_883 = sub_5bbe40(eax_882)
            int32_t var_5e4_1 = eax_883
            esi_236 = sub_5bc1e0(eax_882)
            int32_t var_5e8_1 = esi_236
            edi_249 = eax_883 * var_64_15 + var_60_23
            xmm0_152 = xmm0_151
        
        int32_t i_23 = 0
        *(esi_236 + (edi_249 << 2)) = xmm0_152
        int32_t i_56 = 0
        
        do
            int32_t esi_238 = var_58_77
            int32_t ecx_920
            ecx_920.b = sx.d(var_74[var_78_1 * 2 + 0xa295]) s> i_23
            var_58_77 += 1
            var_14_86.b = 0x8e
            int32_t eax_893 = sub_5bbe40(&var_94)
            i_23 = i_56 + 1
            i_56 = i_23
            *(var_94 + ((esi_238 * eax_893 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_920))
        while (i_23 s< 0xa)
        
        int32_t var_64_16 = var_58_77 + 1
        int32_t eax_896 = sx.d(var_74[var_78_1 * 2 + 0xa295])
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_166 = _mm_cvtepi32_ps(zx.o(eax_896 - 5)) / 5f
            var_14_86.b = 0x90
            int32_t eax_901 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_901 * var_58_77 + var_60_23) << 2)) = xmm0_166
        else
            void* var_30_62 = eax_10
            asinhf(_mm_cvtepi32_ps(zx.o(eax_896)) / 5f)
            float var_5c_19 = fconvert.s(unimplemented  {fstp dword [ebp-0x4c], st0})
            unimplemented  {fstp dword [ebp-0x4c], st0}
            top += 1
            var_14_86.b = 0x8f
            int32_t eax_897 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_897 * var_58_77 + var_60_23) << 2)) = var_5c_19 - 1f
        
        int32_t i_24 = 0
        int32_t i_57 = 0
        
        do
            int32_t esi_242 = var_64_16
            int32_t ecx_928
            ecx_928.b = sx.d(var_74[var_78_1 * 2 + 0xa293]) s> i_24
            var_64_16 += 1
            var_14_86.b = 0x91
            int32_t eax_908 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_908 * esi_242 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_928))
            i_24 = i_57 + 1
            i_57 = i_24
        while (i_24 s< 0x28)
        
        int32_t var_84_4 = var_64_16 + 1
        int32_t eax_912 = sx.d(var_74[var_78_1 * 2 + 0xa293])
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_178 = _mm_cvtepi32_ps(zx.o(eax_912 - 0x14)) / 20f
            var_14_86.b = 0x93
            int32_t eax_918 = sub_5bbe40(&var_94) * var_64_16
            *(var_94 + ((eax_918 + var_60_23) << 2)) = xmm0_178
        else
            void* var_30_64 = eax_10
            asinhf(_mm_cvtepi32_ps(zx.o(eax_912)) / 5f)
            float var_58_79 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
            unimplemented  {fstp dword [ebp-0x48], st0}
            top += 1
            var_14_86.b = 0x92
            int32_t eax_914 = sub_5bbe40(&var_94) * var_64_16
            *(var_94 + ((eax_914 + var_60_23) << 2)) = var_58_79 - 1f
        
        int32_t i_25 = 0
        int32_t i_58 = 0
        
        do
            int32_t esi_244 = var_84_4
            int32_t ecx_936
            ecx_936.b = sx.d(var_74[var_78_1 * 2 + 0xa299]) s> i_25
            var_84_4 += 1
            var_14_86.b = 0x94
            int32_t edx_88 = sub_5bbe40(&var_94) * esi_244
            var_14_86.b = 0x71
            *(var_94 + ((edx_88 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_936))
            i_25 = i_58 + 1
            i_58 = i_25
        while (i_25 s< 0xf)
        
        int32_t var_64_17 = var_84_4 + 1
        int32_t eax_928 = sx.d(var_74[var_78_1 * 2 + 0xa299])
        int32_t esi_246
        int32_t edi_255
        float xmm0_187
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_190 = _mm_cvtepi32_ps(zx.o(eax_928 - 5)) / 5f
            int32_t* eax_933 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x96
            int32_t eax_934 = sub_5bbe40(eax_933)
            int32_t var_5fc_1 = eax_934
            esi_246 = sub_5bc1e0(eax_933)
            int32_t var_600_1 = esi_246
            edi_255 = eax_934 * var_84_4 + var_60_23
            xmm0_187 = xmm0_190
        else
            top += 1
            float xmm0_186 = sub_5c8df0(_mm_cvtepi32_ps(zx.o(eax_928)) / 5f, eax_2) - 1f
            int32_t* eax_929 = sub_5bc0a0(&var_94)
            var_14_86.b = 0x95
            int32_t eax_930 = sub_5bbe40(eax_929)
            int32_t var_5f4_1 = eax_930
            esi_246 = sub_5bc1e0(eax_929)
            int32_t var_5f8_1 = esi_246
            edi_255 = eax_930 * var_84_4 + var_60_23
            xmm0_187 = xmm0_186
        
        int32_t i_26 = 0
        *(esi_246 + (edi_255 << 2)) = xmm0_187
        int32_t i_59 = 0
        
        do
            int32_t esi_248 = var_64_17
            int32_t ecx_947
            ecx_947.b = sx.d(var_74[var_78_1 * 2 + 0xa29a]) s> i_26
            var_64_17 += 1
            var_14_86.b = 0x97
            int32_t eax_940 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_940 * esi_248 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_947))
            i_26 = i_59 + 1
            i_59 = i_26
        while (i_26 s< 5)
        
        int32_t eax_942 = sx.d(var_74[var_78_1 * 2 + 0xa29a])
        int32_t eax_943
        float xmm0_198
        
        if (*(eax_10 + 0x15d8b38) s< 0xc)
            float xmm0_201 = _mm_cvtepi32_ps(zx.o(eax_942 - 5)) / 5f
            var_14_86.b = 0x99
            eax_943 = sub_5bbe40(&var_94)
            xmm0_198 = xmm0_201
        else
            void* var_30_66 = eax_10
            asinhf(_mm_cvtepi32_ps(zx.o(eax_942)) / 5f)
            float var_80_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x70], st0})
            unimplemented  {fstp dword [ebp-0x70], st0}
            top += 1
            var_14_86.b = 0x98
            eax_943 = sub_5bbe40(&var_94)
            xmm0_198 = var_80_18 - 1f
        
        *(var_94 + ((eax_943 * var_64_17 + var_60_23) << 2)) = xmm0_198
        int32_t xmm0_202 = *(var_74 + (var_78_1 << 2) + 0x1453c)
        var_14_86.b = 0x9a
        int32_t eax_948 = sub_5bbe40(&var_94)
        *(var_94 + ((eax_948 * (var_64_17 + 1) + var_60_23) << 2)) = xmm0_202
        int32_t xmm0_204 = *(var_74 + (var_78_1 << 2) + 0x14540)
        int32_t edi_260 = var_64_17 + 3
        var_14_86.b = 0x9b
        int32_t eax_952 = sub_5bbe40(&var_94)
        *(var_94 + ((eax_952 * (var_64_17 + 2) + var_60_23) << 2)) = xmm0_204
        
        if (*(eax_10 + 0x15d8b38) s>= 0xc)
            int32_t i_27 = 0
            int32_t i_60 = 0
            
            do
                int32_t esi_251 = edi_260
                int32_t ecx_961
                ecx_961.b = sx.d(var_74[var_78_1 * 2 + 0xa29b]) s> i_27
                edi_260 += 1
                var_14_86.b = 0x9c
                int32_t eax_958 = sub_5bbe40(&var_94)
                *(var_94 + ((eax_958 * esi_251 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_961))
                i_27 = i_60 + 1
                i_60 = i_27
            while (i_27 s< 0x14)
            
            int32_t var_30_68 = var_78_1
            asinhf(_mm_cvtepi32_ps(zx.o(sx.d(var_74[var_78_1 * 2 + 0xa29b]))) / 5f)
            float var_64_18 = fconvert.s(unimplemented  {fstp dword [ebp-0x54], st0})
            unimplemented  {fstp dword [ebp-0x54], st0}
            int32_t edi_261 = edi_260 + 1
            var_14_86.b = 0x9d
            int32_t eax_961 = sub_5bbe40(&var_94)
            int32_t i_28 = 0
            int32_t i_61 = 0
            *(var_94 + ((eax_961 * edi_260 + var_60_23) << 2)) = var_64_18 - 1f
            
            do
                int32_t esi_253 = edi_261
                int32_t ecx_968
                ecx_968.b = sx.d(var_74[var_78_1 * 2 + 0xa29c]) s> i_28
                edi_261 += 1
                var_14_86.b = 0x9e
                int32_t eax_966 = sub_5bbe40(&var_94)
                *(var_94 + ((eax_966 * esi_253 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_968))
                i_28 = i_61 + 1
                i_61 = i_28
            while (i_28 s< 0x14)
            
            int32_t var_30_70 = var_78_1
            asinhf(_mm_cvtepi32_ps(zx.o(sx.d(var_74[var_78_1 * 2 + 0xa29c]))) / 5f)
            float var_84_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x74], st0})
            unimplemented  {fstp dword [ebp-0x74], st0}
            top += 2
            edi_260 = edi_261 + 1
            var_14_86.b = 0x9f
            int32_t eax_969 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_969 * edi_261 + var_60_23) << 2)) = var_84_5 - 1f
        
        int32_t i_29 = 0
        int32_t i_62 = 0
        
        do
            int32_t esi_255 = edi_260
            int32_t ecx_975
            ecx_975.b = sx.d(var_74[var_78_1 * 2 + 0xa2a2]) s> i_29
            edi_260 += 1
            var_14_86.b = 0xa0
            int32_t eax_974 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_974 * esi_255 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_975))
            i_29 = i_62 + 1
            i_62 = i_29
        while (i_29 s< 8)
        
        int32_t i_30 = 0
        int32_t i_63 = 0
        
        do
            int32_t esi_256 = edi_260
            int32_t ecx_979
            ecx_979.b = sx.d(var_74[var_78_1 * 2 + 0xa2a3]) s> i_30
            edi_260 += 1
            var_14_86.b = 0xa1
            int32_t eax_977 = sub_5bbe40(&var_94)
            i_30 = i_63 + 1
            i_63 = i_30
            *(var_94 + ((esi_256 * eax_977 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_979))
        while (i_30 s< 8)
        
        int32_t i_31 = 0
        int32_t i_64 = 0
        
        do
            int32_t esi_259 = edi_260
            int32_t ecx_983
            ecx_983.b = sx.d(var_74[var_78_1 * 2 + 0xa2a4]) s> i_31
            edi_260 += 1
            var_14_86.b = 0xa2
            int32_t eax_980 = sub_5bbe40(&var_94)
            i_31 = i_64 + 1
            i_64 = i_31
            *(var_94 + ((esi_259 * eax_980 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_983))
        while (i_31 s< 4)
        
        int32_t i_32 = 0
        int32_t i_65 = 0
        
        do
            int32_t esi_262 = edi_260
            int32_t ecx_987
            ecx_987.b = sx.d(var_74[var_78_1 * 2 + 0xa2a5]) s> i_32
            edi_260 += 1
            var_14_86.b = 0xa3
            int32_t eax_983 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_983 * esi_262 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_987))
            i_32 = i_65 + 1
            i_65 = i_32
        while (i_32 s< 4)
        
        int32_t i_33 = 0
        int32_t i_66 = 0
        
        do
            int32_t esi_263 = edi_260
            int32_t ecx_991
            ecx_991.b = sx.d(var_74[var_78_1 * 2 + 0xa2a6]) s> i_33
            edi_260 += 1
            var_14_86.b = 0xa4
            int32_t eax_986 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_986 * esi_263 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_991))
            i_33 = i_66 + 1
            i_66 = i_33
        while (i_33 s< 4)
        
        int32_t i_34 = 0
        int32_t i_67 = 0
        
        do
            int32_t esi_264 = edi_260
            int32_t ecx_995
            ecx_995.b = sx.d(var_74[var_78_1 * 2 + 0xa2a7]) s> i_34
            edi_260 += 1
            var_14_86.b = 0xa5
            int32_t eax_989 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_989 * esi_264 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_995))
            i_34 = i_67 + 1
            i_67 = i_34
        while (i_34 s< 4)
        
        if (*(eax_10 + 0x15d8b38) - 0xc u<= 2)
            int32_t i_68 = 4
            int32_t i_35
            
            do
                int32_t esi_265 = edi_260
                edi_260 += 1
                var_14_86.b = 0xa6
                int32_t eax_993 = sub_5bbe40(&var_94)
                i_35 = i_68
                i_68 -= 1
                *(var_94 + ((eax_993 * esi_265 + var_60_23) << 2)) = 0
            while (i_35 != 1)
        
        int32_t i_36 = 0
        int32_t i_69 = 0
        
        do
            int32_t esi_266 = edi_260
            int32_t ecx_1001
            ecx_1001.b = sx.d(var_74[var_78_1 * 2 + 0xa2aa]) s> i_36
            edi_260 += 1
            var_14_86.b = 0xa7
            int32_t eax_998 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_998 * esi_266 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1001))
            i_36 = i_69 + 1
            i_69 = i_36
        while (i_36 s< 4)
        
        int32_t var_68_9 = edi_260 + 1
        uint32_t esi_267 = zx.d(var_74[var_78_1 * 2 + 0xa2a8].b)
        var_14_86.b = 0xa8
        int32_t eax_1000 = sub_5bbe40(&var_94)
        *(var_94 + ((eax_1000 * edi_260 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_267))
        uint32_t esi_268 = zx.d(*(&var_74[var_78_1 * 2] + 0x14551))
        var_14_86.b = 0xa9
        int32_t eax_1006 = sub_5bbe40(&var_94)
        *(var_94 + ((eax_1006 * var_68_9 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_268))
        uint32_t esi_269 = zx.d(var_74[var_78_1 * 2 + 0xa2a9].b)
        int32_t var_68_11 = var_68_9 + 2
        var_14_86.b = 0xaa
        int32_t eax_1013 = sub_5bbe40(&var_94) * (var_68_9 + 1)
        var_14_86.b = 0x71
        *(var_94 + ((eax_1013 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_269))
        
        if (*(eax_10 + 0x15d8b38) - 0xc u<= 2)
            int32_t var_5c_30 = var_68_11
            var_68_11 += 1
            int32_t* eax_1020 = sub_5bc0a0(&var_94)
            var_14_86.b = 0xab
            int32_t eax_1021 = sub_5bbe40(eax_1020)
            int32_t eax_1022 = sub_5bc1e0(eax_1020)
            int32_t var_604_1 = eax_1021
            int32_t var_608_1 = eax_1022
            *(eax_1022 + ((eax_1021 * var_5c_30 + var_60_23) << 2)) = 0
        
        if (*(eax_10 + 0x15d8b38) s>= 0xc)
            uint32_t esi_272 = zx.d(var_74[var_78_1 * 2 + 0xa2ab].b)
            var_14_86.b = 0xac
            int32_t eax_1027 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_1027 * var_68_11 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_272))
            uint32_t esi_273 = zx.d(*(&var_74[var_78_1 * 2] + 0x14557))
            int32_t eax_1032 = var_68_11 + 2
            var_14_86.b = 0xad
            int32_t eax_1033 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_1033 * (var_68_11 + 1) + var_60_23) << 2)) =
                _mm_cvtepi32_ps(zx.o(esi_273))
            uint32_t esi_274 = zx.d(var_74[var_78_1 * 2 + 0xa2ac].b)
            var_68_11 = eax_1032 + 1
            var_14_86.b = 0xae
            int32_t eax_1039 = sub_5bbe40(&var_94)
            *(var_94 + ((eax_1039 * eax_1032 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_274))
        
        int32_t edi_270 = var_68_11
        int32_t i_37 = 0
        int32_t i_70 = 0
        
        do
            int32_t esi_275 = edi_270
            int32_t ecx_1026
            ecx_1026.b = sx.d(var_74[var_78_1 * 2 + 0xa2ad]) s> i_37
            edi_270 += 1
            var_14_86.b = 0xaf
            int32_t eax_1044 = sub_5bbe40(&var_94)
            i_37 = i_70 + 1
            i_70 = i_37
            *(var_94 + ((esi_275 * eax_1044 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(ecx_1026))
        while (i_37 s< 0x28)
        
        int32_t eax_1046 = sx.d(var_74[var_78_1 * 2 + 0xa2ad])
        int32_t eax_1047
        float xmm0_255
        
        if (*(eax_10 + 0x15d8b38) s< 0xb)
            if (eax_1046 s> 0x32)
                eax_1046 = 0x32
            
            var_14_86.b = 0xb1
            eax_1047 = sub_5bbe40(&var_94)
            xmm0_255 = (_mm_cvtepi32_ps(zx.o(eax_1046)) - 20f) / 20f
        else
            void* var_30_72 = eax_10
            asinhf(_mm_cvtepi32_ps(zx.o(eax_1046)) / 10f)
            float var_68_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x58], st0})
            unimplemented  {fstp dword [ebp-0x58], st0}
            top += 1
            var_14_86.b = 0xb0
            eax_1047 = sub_5bbe40(&var_94)
            xmm0_255 = var_68_14 - 1f
        
        *(var_94 + ((eax_1047 * edi_270 + var_60_23) << 2)) = xmm0_255
        uint32_t esi_279 = zx.d(var_74[var_78_1 * 2 + 0xa296].b)
        var_14_86.b = 0xb2
        int32_t edi_272 = (edi_270 + 1) * sub_5bbe40(&var_94)
        *(var_94 + ((edi_272 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_279))
        uint32_t esi_280 = zx.d(*(&var_74[var_78_1 * 2] + 0x1452d))
        var_14_86.b = 0xb3
        int32_t edi_275 = (edi_270 + 2) * sub_5bbe40(&var_94)
        *(var_94 + ((edi_275 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_280))
        uint32_t esi_281 = zx.d(var_74[var_78_1 * 2 + 0xa297].b)
        var_14_86.b = 0xb4
        int32_t edi_278 = (edi_270 + 3) * sub_5bbe40(&var_94)
        var_14_86.b = 0x71
        *(var_94 + ((edi_278 + var_60_23) << 2)) = _mm_cvtepi32_ps(zx.o(esi_281))
        eax_1064 = edi_270 + 4
        
        if (eax_1064 != *(eax_669 + 4))
            var_30_80 = "ComputeNet"
            var_34_63 = 0x506
            ecx_1128 = "n == player_dense.rows()"
            break
        
        int32_t ecx_1039 = var_60_23 + 1
        var_60_23 = ecx_1039
        
        if (ecx_1039 s>= arg5)
            goto label_5b7376

sub_63b870(eax_1064, &data_801800, ecx_1128, "C:\x\ax2017\Jams\Dominion\code\NeuralEigen.cpp", 
    var_34_63, var_30_80)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
