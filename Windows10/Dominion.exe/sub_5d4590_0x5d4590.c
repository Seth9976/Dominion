// 函数: sub_5d4590
// 地址: 0x5d4590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int128_t* eax_178
uint32_t esi_1
int128_t xmm0_3

if (data_8db5c4 != 0x27)
    if (data_8db5d4 != 0x27)
    label_5d7355:
        eax_178 = arg4
        *eax_178 = data_bf21e8
        xmm0_3 = data_bf21f8
    label_5d7369:
        eax_178[1] = xmm0_3
        CookieCheckFunction(eax_178)
        return eax_178
    
    esi_1 = data_8db5d8
else
    esi_1 = data_8db5c8

if (esi_1 == 0)
    goto label_5d7355

if (arg2 != 0)
    *arg2 = 0

uint32_t eax_3 = *arg3 - 6
char const* const var_184_3
int32_t var_180_1
char const* const var_17c_2
char* ecx_13

if (eax_3 u> 0x1f)
label_5d7377:
    var_17c_2 = "CalcUITransform_Int"
    var_180_1 = 0x274b
    ecx_13 = "Halt"
    var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
    eax_3 = zx.d(lookup_table_5d73fc[eax_3])
    void* var_17c_7
    uint32_t var_b4_1
    int32_t var_b4_5
    int128_t var_2c
    uint32_t eax_10
    void* eax_74
    int32_t eax_271
    uint32_t eax_321
    int32_t ecx_9
    int32_t ecx_48
    int32_t ecx_199
    int32_t edx_1
    int32_t edx_13
    int32_t edi_4
    int32_t edi_11
    int32_t edi_17
    void* edi_19
    int128_t xmm0
    int128_t xmm0_5
    int128_t xmm1_1
    int128_t xmm1_4
    bool cond:23_1
    bool cond:33_1
    bool cond:34_1
    
    switch (eax_3)
        case 0
            void* ecx_64 = arg3[1]
            edi_19 = ecx_64 - 7
            
            if (edi_19 u<= 0xb)
                if (sub_5d20c0() s> 8)
                    switch (edi_19)
                        case nullptr
                            edi_19 = 1
                        case 1
                            edi_19 = 2
                        case 2
                            edi_19 = 4
                        case 3
                            edi_19 = 5
                        case 4
                            edi_19 = 7
                        case 5
                            edi_19 = 8
                        case 6
                            edi_19 = 0xa
                        case 7
                            edi_19 = 0xb
                        case 8
                            edi_19 = nullptr
                        case 9
                            edi_19 = 3
                        case 0xa
                            edi_19 = 6
                        case 0xb
                            edi_19 = 9
                
                if (arg3[0xf] != "tbl_centerStandard" || arg3[0xe] != esi_1 || arg3[0x10] != edi_19
                    || arg3[0x11] != 0)
                label_5d5248:
                    int32_t eax_112 = sub_67be20(edi_19)
                    arg3[0x16] = eax_112
                    
                    if (eax_112 == 0)
                        goto label_5d4681
                    
                    arg3[0xf] = "tbl_centerStandard"
                    goto label_5d4f2a
                
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d5248
                
                edx_13 = data_c23bac
                uint32_t eax_109 = zx.d(ecx_9.w)
                
                if (eax_109 u>= edx_13)
                    goto label_5d5248
                
                void* eax_111 = eax_109 * 0x18d0 + data_c23ba8
                
                if (*(eax_111 + 0x18c8) != ecx_9 || eax_111 == 0)
                    goto label_5d5248
                
                goto label_5d4f48
            
            if (ecx_64 - 0x13 u<= 0xe)
                int32_t ecx_66 = 0xa
                void* eax_114 = &data_b821cc
                
                while (*eax_114 != 0)
                    eax_114 += 0x10
                    ecx_66 += 1
                    
                    if (eax_114 s> 0xb8220c)
                        break
                
                void* eax_115 = &data_b8221c
                int32_t ecx_67 = 0
                
                while (*eax_115 != 0)
                    eax_115 += 0x10
                    ecx_67 += 1
                    
                    if (eax_115 s> 0xb8225c)
                        break
                
                int32_t edi_20 = 0
                void* eax_116 = &data_b8227c
                
                while (*(eax_116 - 0x10) != 0)
                    if (*eax_116 == 0)
                        edi_20 += 1
                        break
                    
                    if (*(eax_116 + 0x10) == 0)
                        edi_20 += 2
                        break
                    
                    eax_116 += 0x30
                    edi_20 += 3
                    
                    if (eax_116 s> 0xb8247c)
                        break
                
                bool cond:29_1 = sub_4aec30() != 0
                eax_3 = data_cc8dc0
                var_b4_1.b = cond:29_1
                
                if (eax_3 != 0)
                    char var_c0
                    
                    if (*(eax_3 + 0x38) == 0)
                        var_c0 = 0
                    else
                        eax_3 = sub_5cb070()
                        var_c0 = 1
                        
                        if (eax_3 != 0)
                            var_c0 = 0
                    
                    int32_t eax_118 = sub_5d2120(eax_3, ecx_67, ecx_66, edi_20, var_b4_1.b, var_c0)
                    edi_19 = ecx_64 - 0x13
                    
                    if (edi_19 s>= 5 && sub_5d3300(eax_118) == 1)
                        edi_19 += 1
                    
                    if (edi_19 s>= 6 && sub_5d3300(eax_118) == 4)
                        edi_19 += 1
                    
                    if (arg3[0xf] == "tbl_center" && arg3[0xe] == esi_1 && arg3[0x10] == edi_19
                            && arg3[0x11] == 0)
                        ecx_9 = arg3[0x16]
                        
                        if (ecx_9 != 0)
                            edx_13 = data_c23bac
                            uint32_t eax_121 = zx.d(ecx_9.w)
                            
                            if (eax_121 u< edx_13)
                                void* eax_123 = eax_121 * 0x18d0 + data_c23ba8
                                
                                if (*(eax_123 + 0x18c8) == ecx_9 && eax_123 != 0)
                                    goto label_5d4f48
                    
                    int32_t eax_124 = sub_67be20(edi_19)
                    arg3[0x16] = eax_124
                    
                    if (eax_124 == 0)
                        goto label_5d4681
                    
                    arg3[0xf] = "tbl_center"
                    goto label_5d4f2a
                
                var_17c_2 = "GetLocalSettings"
                var_180_1 = 0x5fb
                var_184_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                ecx_13 = "gGameSettings.localSettings"
            else
                void* var_c4_1
                
                if (ecx_64 - 0x22 u<= 4)
                    int32_t ecx_72 = 0xa
                    void* eax_126 = &data_b821cc
                    
                    while (*eax_126 != 0)
                        eax_126 += 0x10
                        ecx_72 += 1
                        
                        if (eax_126 s> 0xb8220c)
                            break
                    
                    void* eax_127 = &data_b8221c
                    int32_t ecx_73 = 0
                    
                    while (*eax_127 != 0)
                        eax_127 += 0x10
                        ecx_73 += 1
                        
                        if (eax_127 s> 0xb8225c)
                            break
                    
                    int32_t edi_22 = 0
                    void* eax_128 = &data_b8227c
                    
                    while (*(eax_128 - 0x10) != 0)
                        if (*eax_128 == 0)
                            edi_22 += 1
                            break
                        
                        if (*(eax_128 + 0x10) == 0)
                            edi_22 += 2
                            break
                        
                        eax_128 += 0x30
                        edi_22 += 3
                        
                        if (eax_128 s> 0xb8247c)
                            break
                    
                    bool cond:35_1 = sub_4aec30() != 0
                    eax_3 = data_cc8dc0
                    var_c4_1.b = cond:35_1
                    
                    if (eax_3 != 0)
                        char var_bc
                        
                        if (*(eax_3 + 0x38) == 0)
                            var_bc = 0
                        else
                            eax_3 = sub_5cb070()
                            var_bc = 1
                            
                            if (eax_3 != 0)
                                var_bc = 0
                        
                        if (sub_5d2120(eax_3, ecx_73, ecx_72, edi_22, var_c4_1.b, var_bc) - 0x45
                                u> 3)
                            edi_19 = ecx_64 - 0x22
                        else
                            edi_19 = ecx_64 - 0x22
                            
                            if (edi_19 s>= 2)
                                edi_19 += 1
                        
                        if (arg3[0xf] == "tbl_landscape" && arg3[0xe] == esi_1
                                && arg3[0x10] == edi_19 && arg3[0x11] == 0)
                            ecx_9 = arg3[0x16]
                            
                            if (ecx_9 != 0)
                                edx_13 = data_c23bac
                                uint32_t eax_132 = zx.d(ecx_9.w)
                                
                                if (eax_132 u< edx_13)
                                    void* eax_134 = eax_132 * 0x18d0 + data_c23ba8
                                    
                                    if (*(eax_134 + 0x18c8) == ecx_9 && eax_134 != 0)
                                        goto label_5d4f48
                        
                        int32_t eax_135 = sub_67be20(edi_19)
                        arg3[0x16] = eax_135
                        
                        if (eax_135 == 0)
                            goto label_5d4681
                        
                        arg3[0xf] = "tbl_landscape"
                        goto label_5d4f2a
                    
                    var_17c_2 = "GetLocalSettings"
                    var_180_1 = 0x5fb
                    var_184_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_13 = "gGameSettings.localSettings"
                else if (ecx_64 - 0x27 u<= 0x20)
                    int32_t ecx_76 = 0xa
                    void* eax_137 = &data_b821cc
                    
                    while (*eax_137 != 0)
                        eax_137 += 0x10
                        ecx_76 += 1
                        
                        if (eax_137 s> 0xb8220c)
                            break
                    
                    void* eax_138 = &data_b8221c
                    int32_t ecx_77 = 0
                    
                    while (*eax_138 != 0)
                        eax_138 += 0x10
                        ecx_77 += 1
                        
                        if (eax_138 s> 0xb8225c)
                            break
                    
                    int32_t edi_23 = 0
                    void* eax_139 = &data_b8227c
                    
                    while (*(eax_139 - 0x10) != 0)
                        if (*eax_139 == 0)
                            edi_23 += 1
                            break
                        
                        if (*(eax_139 + 0x10) == 0)
                            edi_23 += 2
                            break
                        
                        eax_139 += 0x30
                        edi_23 += 3
                        
                        if (eax_139 s> 0xb8247c)
                            break
                    
                    bool cond:38_1 = sub_4aec30() != 0
                    eax_3 = data_cc8dc0
                    var_c4_1.b = cond:38_1
                    
                    if (eax_3 != 0)
                        if (*(eax_3 + 0x38) == 0)
                            var_b4_1.b = 0
                        else
                            eax_3 = sub_5cb070()
                            var_b4_1.b = 1
                            
                            if (eax_3 != 0)
                                var_b4_1.b = 0
                        
                        int32_t eax_142
                        void* edx_27
                        eax_142, edx_27 = sub_5d29b0(
                            sub_5d2120(eax_3, ecx_77, ecx_76, edi_23, var_c4_1.b, var_b4_1.b), 
                            ecx_64 - 0x27)
                        edi_19 = edx_27
                        
                        if (eax_142 == 0)
                        label_5d5800:
                            
                            if (arg3[0xf] == "tbl_centerExtra" && arg3[0xe] == esi_1
                                    && arg3[0x10] == edi_19 && arg3[0x11] == 0)
                                ecx_9 = arg3[0x16]
                                
                                if (ecx_9 != 0)
                                    edx_13 = data_c23bac
                                    uint32_t eax_153 = zx.d(ecx_9.w)
                                    
                                    if (eax_153 u< edx_13)
                                        void* eax_155 = eax_153 * 0x18d0 + data_c23ba8
                                        
                                        if (*(eax_155 + 0x18c8) == ecx_9 && eax_155 != 0)
                                            goto label_5d4f48
                            
                            int32_t eax_156 = sub_67be20(edi_19)
                            arg3[0x16] = eax_156
                            
                            if (eax_156 == 0)
                                goto label_5d4681
                            
                            arg3[0xf] = "tbl_centerExtra"
                            goto label_5d4f2a
                        
                        if (eax_142 == 1)
                        label_5d5790:
                            
                            if (arg3[0xf] == "tbl_centerExtraBottom" && arg3[0xe] == esi_1
                                    && arg3[0x10] == edi_19 && arg3[0x11] == 0)
                                ecx_9 = arg3[0x16]
                                
                                if (ecx_9 != 0)
                                    edx_13 = data_c23bac
                                    uint32_t eax_149 = zx.d(ecx_9.w)
                                    
                                    if (eax_149 u< edx_13)
                                        void* eax_151 = eax_149 * 0x18d0 + data_c23ba8
                                        
                                        if (*(eax_151 + 0x18c8) == ecx_9 && eax_151 != 0)
                                            goto label_5d4f48
                            
                            int32_t eax_152 = sub_67be20(edi_19)
                            arg3[0x16] = eax_152
                            
                            if (eax_152 == 0)
                                goto label_5d4681
                            
                            arg3[0xf] = "tbl_centerExtraBottom"
                            goto label_5d4f2a
                        
                        eax_3 = eax_142 - 2
                        
                        if (eax_142 == 2)
                        label_5d5720:
                            
                            if (arg3[0xf] == "tbl_centerOther" && arg3[0xe] == esi_1
                                    && arg3[0x10] == edi_19 && arg3[0x11] == 0)
                                ecx_9 = arg3[0x16]
                                
                                if (ecx_9 != 0)
                                    edx_13 = data_c23bac
                                    uint32_t eax_145 = zx.d(ecx_9.w)
                                    
                                    if (eax_145 u< edx_13)
                                        void* eax_147 = eax_145 * 0x18d0 + data_c23ba8
                                        
                                        if (*(eax_147 + 0x18c8) == ecx_9 && eax_147 != 0)
                                            goto label_5d4f48
                            
                            int32_t eax_148 = sub_67be20(edi_19)
                            arg3[0x16] = eax_148
                            
                            if (eax_148 == 0)
                                goto label_5d4681
                            
                            arg3[0xf] = "tbl_centerOther"
                            goto label_5d4f2a
                        
                        var_17c_2 = "CalcUITransform_Int"
                        var_180_1 = 0x2871
                        ecx_13 = "Halt"
                        var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    else
                        var_17c_2 = "GetLocalSettings"
                        var_180_1 = 0x5fb
                        var_184_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                        ecx_13 = "gGameSettings.localSettings"
                else if (ecx_64 s> 0x3e9)
                    eax_3 = ecx_64 - 0x3ea
                    
                    if (eax_3 u> 0x88)
                    label_5d632a:
                        var_17c_2 = "CalcUITransform_Int"
                        var_180_1 = 0x29c7
                        ecx_13 = "Halt"
                        var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    else
                        eax_3 = zx.d(lookup_table_5d749c[eax_3])
                        int128_t* eax_193
                        uint32_t ecx_103
                        
                        switch (eax_3)
                            case 0
                                void var_108
                                eax_193 = &var_108
                                ecx_103 = esi_1
                            label_5d5c5b:
                                int128_t* eax_194 = sub_5d1640(eax_193, arg3, ecx_103, eax_193)
                                xmm0_5 = *eax_194
                                xmm1_4 = eax_194[1]
                                goto label_5d5c6d
                            case 1
                                int32_t edi_32 = data_b604e0
                                int32_t eax_209 = edi_32
                                
                                if (edi_32 == 0xffffffff)
                                    eax_209 = 0
                                
                                int32_t ecx_116 = arg3[2]
                                
                                if (ecx_116 != eax_209)
                                    if (edi_32 == 0xffffffff)
                                        edi_32 = 0
                                    
                                    void* ecx_121 = ecx_116 - edi_32
                                    void* edi_34 = ecx_121 + sub_4b95e0()
                                    
                                    if (ecx_116 - edi_32 s>= 0)
                                        edi_34 = ecx_121
                                    
                                    if (arg3[0xf] == "tbl_opponents" && arg3[0xe] == esi_1
                                            && arg3[0x10] == edi_34 - 1 && arg3[0x11] == "tbl_deck"
                                            && arg3[0x12] == 0 && arg3[0x13] == 0)
                                        goto label_5d46f3
                                    
                                    int32_t eax_219 = sub_67be20(edi_34 - 1)
                                    
                                    if (eax_219 == 0)
                                        goto label_5d467a
                                    
                                    int32_t eax_220 = sub_67bd70(eax_219, "tbl_deck")
                                    
                                    if (eax_220 != 0)
                                        eax_220 = sub_64c870(sub_64e7a0(eax_220), nullptr)
                                    
                                    arg3[0x16] = eax_220
                                    
                                    if (eax_220 == 0)
                                        goto label_5d4681
                                    
                                    arg3[0xe] = esi_1
                                    arg3[0xf] = "tbl_opponents"
                                    arg3[0x10] = edi_34 - 1
                                    arg3[0x11] = "tbl_deck"
                                    goto label_5d46e5
                                
                                int32_t edx_40
                                int32_t edi_33
                                
                                if (arg3[0xf] != "tbl_player_deck" || arg3[0xe] != esi_1
                                    || arg3[0x10] != 0 || arg3[0x11] != 0)
                                label_5d5e7d:
                                    int32_t eax_213 = sub_67bd70(esi_1, "tbl_player_deck")
                                    
                                    if (eax_213 == 0)
                                        goto label_5d467a
                                    
                                    int32_t eax_215 = sub_64c870(sub_64e7a0(eax_213), nullptr)
                                    arg3[0x16] = eax_215
                                    
                                    if (eax_215 == 0)
                                        goto label_5d4681
                                    
                                    arg3[0xf] = "tbl_player_deck"
                                    arg3[0xe] = esi_1
                                    arg3[0x10] = 0
                                    arg3[0x11] = 0
                                    ecx_9 = arg3[0x16]
                                    
                                    if (ecx_9 == 0)
                                        goto label_5d4681
                                    
                                    edx_40 = data_c23bac
                                    edi_33 = data_c23ba8
                                else
                                    ecx_9 = arg3[0x16]
                                    
                                    if (ecx_9 == 0)
                                        goto label_5d5e7d
                                    
                                    edx_40 = data_c23bac
                                    uint32_t eax_210 = zx.d(ecx_9.w)
                                    
                                    if (eax_210 u>= edx_40)
                                        goto label_5d5e7d
                                    
                                    edi_33 = data_c23ba8
                                    void* eax_212 = eax_210 * 0x18d0 + edi_33
                                    
                                    if (*(eax_212 + 0x18c8) != ecx_9 || eax_212 == 0)
                                        goto label_5d5e7d
                                
                                uint32_t eax_216 = zx.d(ecx_9.w)
                                
                                if (eax_216 u>= edx_40)
                                    goto label_5d4681
                                
                                cond:34_1 = *(eax_216 * 0x18d0 + edi_33 + 0x18c8) != ecx_9
                                goto label_5d471b
                            case 2
                                int32_t edi_28 = data_b604e0
                                int32_t eax_196 = edi_28
                                
                                if (edi_28 == 0xffffffff)
                                    eax_196 = 0
                                
                                int32_t ecx_106 = arg3[2]
                                
                                if (ecx_106 != eax_196)
                                    if (edi_28 == 0xffffffff)
                                        edi_28 = 0
                                    
                                    void* ecx_111 = ecx_106 - edi_28
                                    void* edi_30 = ecx_111 + sub_4b95e0()
                                    
                                    if (ecx_106 - edi_28 s>= 0)
                                        edi_30 = ecx_111
                                    
                                    if (arg3[0xf] == "tbl_opponents" && arg3[0xe] == esi_1
                                            && arg3[0x10] == edi_30 - 1
                                            && arg3[0x11] == "tbl_discard" && arg3[0x12] == 0
                                            && arg3[0x13] == 0)
                                        goto label_5d46f3
                                    
                                    int32_t eax_206 = sub_67be20(edi_30 - 1)
                                    
                                    if (eax_206 == 0)
                                        goto label_5d467a
                                    
                                    int32_t eax_207 = sub_67bd70(eax_206, "tbl_discard")
                                    
                                    if (eax_207 != 0)
                                        eax_207 = sub_64c870(sub_64e7a0(eax_207), nullptr)
                                    
                                    arg3[0x16] = eax_207
                                    
                                    if (eax_207 == 0)
                                        goto label_5d4681
                                    
                                    arg3[0xe] = esi_1
                                    arg3[0xf] = "tbl_opponents"
                                    arg3[0x10] = edi_30 - 1
                                    arg3[0x11] = "tbl_discard"
                                    goto label_5d46e5
                                
                                int32_t edx_38
                                int32_t edi_29
                                
                                if (arg3[0xf] != "tbl_player_discard" || arg3[0xe] != esi_1
                                    || arg3[0x10] != 0 || arg3[0x11] != 0)
                                label_5d5cf5:
                                    int32_t eax_200 = sub_67bd70(esi_1, "tbl_player_discard")
                                    
                                    if (eax_200 == 0)
                                        goto label_5d467a
                                    
                                    int32_t eax_202 = sub_64c870(sub_64e7a0(eax_200), nullptr)
                                    arg3[0x16] = eax_202
                                    
                                    if (eax_202 == 0)
                                        goto label_5d4681
                                    
                                    arg3[0xf] = "tbl_player_discard"
                                    arg3[0xe] = esi_1
                                    arg3[0x10] = 0
                                    arg3[0x11] = 0
                                    ecx_9 = arg3[0x16]
                                    
                                    if (ecx_9 == 0)
                                        goto label_5d4681
                                    
                                    edx_38 = data_c23bac
                                    edi_29 = data_c23ba8
                                else
                                    ecx_9 = arg3[0x16]
                                    
                                    if (ecx_9 == 0)
                                        goto label_5d5cf5
                                    
                                    edx_38 = data_c23bac
                                    uint32_t eax_197 = zx.d(ecx_9.w)
                                    
                                    if (eax_197 u>= edx_38)
                                        goto label_5d5cf5
                                    
                                    edi_29 = data_c23ba8
                                    void* eax_199 = eax_197 * 0x18d0 + edi_29
                                    
                                    if (*(eax_199 + 0x18c8) != ecx_9 || eax_199 == 0)
                                        goto label_5d5cf5
                                
                                uint32_t eax_203 = zx.d(ecx_9.w)
                                
                                if (eax_203 u>= edx_38)
                                    goto label_5d4681
                                
                                cond:34_1 = *(eax_203 * 0x18d0 + edi_29 + 0x18c8) != ecx_9
                                goto label_5d471b
                            case 3
                                int32_t eax_244 = data_b604e0
                                
                                if (eax_244 == 0xffffffff)
                                    eax_244 = 0
                                
                                ecx_103 = esi_1
                                
                                if (arg3[2] != eax_244)
                                    void var_128
                                    eax_193 = &var_128
                                    goto label_5d5c5b
                                
                                eax_3 = sub_64e7a0(sub_66b2b0(eax_244, "tbl_player_receiving", 
                                    ecx_103, 0xffffffff))
                                int32_t ecx_151 = *(eax_3 + 0x189c)
                                
                                if (ecx_151 s>= 0)
                                    if (ecx_151 == 0)
                                        int128_t xmm1_6 = data_bf21f8
                                        *arg4 = data_bf21e8
                                        arg4[1] = xmm1_6
                                        CookieCheckFunction(arg4)
                                        return arg4
                                    
                                    uint32_t eax_248 = sub_64e7a0(sub_64c870(eax_3, nullptr))
                                    int128_t xmm1_7 = *(eax_248 + 0x1630)
                                    *arg4 = *(eax_248 + 0x1620)
                                    arg4[1] = xmm1_7
                                    CookieCheckFunction(arg4)
                                    return arg4
                                
                                var_17c_2 = "UI2::countChildren"
                                var_180_1 = 0xba8
                                var_184_3 = "C:\x\ax2017\Engine\UI2.cpp"
                                ecx_13 = "numChildren >= 0"
                            case 4
                                void* eax_222 = sub_5cc410(eax_3, arg3[2], ecx_64, arg3[4], arg3[5])
                                
                                if (eax_222 == 0)
                                    goto label_5d7355
                                
                                if (*(eax_222 + 0x2c) != 3 || *(eax_222 + 0x5c) != 0x3ee)
                                    int32_t ecx_143 = *(eax_222 + 0x1ba0)
                                    
                                    if (ecx_143 == 0)
                                        eax_178 = arg4
                                        *eax_178 = *(eax_222 + 0x1c04)
                                        xmm0_3 = *(eax_222 + 0x1c14)
                                        goto label_5d7369
                                    
                                    eax_3 = sub_64e7a0(sub_66b2b0(eax_222, "tbl_card", ecx_143, 
                                        0xffffffff))
                                    int32_t ecx_145 = *(eax_3 + 0x189c)
                                    
                                    if (ecx_145 s>= 0)
                                        int128_t xmm0_6
                                        int128_t xmm1_5
                                        
                                        if (ecx_145 != 0)
                                            uint32_t eax_241 =
                                                sub_64e7a0(sub_64c870(eax_3, nullptr))
                                            xmm0_6 = *(eax_241 + 0x1620)
                                            xmm1_5 = *(eax_241 + 0x1630)
                                        else
                                            xmm0_6 = data_bf21e8
                                            xmm1_5 = data_bf21f8
                                        
                                        *(eax_222 + 0x1c04) = xmm0_6
                                        *(eax_222 + 0x1c14) = xmm1_5
                                        *arg4 = xmm0_6
                                        arg4[1] = xmm1_5
                                        CookieCheckFunction(arg4)
                                        return arg4
                                    
                                    var_17c_2 = "UI2::countChildren"
                                    var_180_1 = 0xba8
                                    var_184_3 = "C:\x\ax2017\Engine\UI2.cpp"
                                    ecx_13 = "numChildren >= 0"
                                else
                                    int32_t ecx_126 = *(eax_222 + 0x64)
                                    eax_3 = *(eax_222 + 0x60) | ecx_126
                                    
                                    if (eax_3 != 0)
                                        if (ecx_126 == 0)
                                            goto label_5d7355
                                        
                                        eax_3 = sub_5de8b0(ecx_126)
                                        
                                        if (eax_3 != 0)
                                            int32_t ecx_127 = *(eax_3 + 0x1ba0)
                                            
                                            if (ecx_127 != 0)
                                            label_5d6047:
                                                int32_t eax_224 =
                                                    sub_67bd70(ecx_127, "tbl_assocPile")
                                                
                                                if (eax_224 == 0)
                                                    goto label_5d4681
                                                
                                                int32_t eax_226 =
                                                    sub_64c870(sub_64e7a0(eax_224), nullptr)
                                                
                                                if (eax_226 == 0)
                                                    goto label_5d4681
                                                
                                                int32_t eax_227 = sub_67bd70(eax_226, "tbl_card")
                                                
                                                if (eax_227 != 0)
                                                    ecx_9 = sub_64c870(sub_64e7a0(eax_227), nullptr)
                                                else
                                                    ecx_9 = 0
                                                
                                                goto label_5d46f6
                                            
                                            int32_t ecx_128 = *(eax_222 + 0x68)
                                            
                                            if (ecx_128 == 0)
                                            label_5d609a:
                                                int32_t eax_230 = arg3[2]
                                                void* eax_231 = sub_5cd010(eax_230)
                                                int32_t edi_37 = data_b604e0
                                                int32_t ecx_135 = edi_37
                                                
                                                if (edi_37 == 0xffffffff)
                                                    ecx_135 = 0
                                                
                                                if (eax_230 != ecx_135)
                                                    if (edi_37 == 0xffffffff)
                                                        edi_37 = 0
                                                    
                                                    void* ecx_137 = eax_230 - edi_37
                                                    void* eax_233 = ecx_137 + sub_4b95e0()
                                                    
                                                    if (eax_230 - edi_37 s>= 0)
                                                        eax_233 = ecx_137
                                                    
                                                    int32_t* var_17c_31 = &arg3[0xe]
                                                    char const* const var_180_9 = "tbl_card"
                                                    void* var_184_8 = eax_231
                                                    ecx_9 = sub_5ca800(&arg3[0xe], esi_1, 
                                                        &arg3[0xe], eax_233 - 1, &arg3[0xe])
                                                    goto label_5d46f6
                                                
                                                if (arg3[0xf] == "tbl_player_pods"
                                                        && arg3[0xe] == esi_1
                                                        && arg3[0x10] == eax_231
                                                        && arg3[0x11] == "tbl_card"
                                                        && arg3[0x12] == 0 && arg3[0x13] == 0)
                                                    goto label_5d46f3
                                                
                                                int32_t eax_236 = sub_67be20(eax_231)
                                                
                                                if (eax_236 == 0)
                                                    arg3[0x16] = eax_236
                                                    ecx_9 = 0
                                                    goto label_5d46f6
                                                
                                                int32_t eax_237 = sub_67bd70(eax_236, "tbl_card")
                                                
                                                if (eax_237 != 0)
                                                    eax_237 =
                                                        sub_64c870(sub_64e7a0(eax_237), nullptr)
                                                
                                                arg3[0x16] = eax_237
                                                
                                                if (eax_237 == 0)
                                                    ecx_9 = 0
                                                    goto label_5d46f6
                                                
                                                arg3[0xe] = esi_1
                                                arg3[0xf] = "tbl_player_pods"
                                                arg3[0x10] = eax_231
                                                arg3[0x11] = "tbl_card"
                                                goto label_5d46e5
                                            
                                            eax_3 = sub_5de8b0(ecx_128)
                                            
                                            if (eax_3 != 0)
                                                ecx_127 = *(eax_3 + 0x1ba0)
                                                
                                                if (ecx_127 == 0)
                                                    goto label_5d609a
                                                
                                                goto label_5d6047
                                            
                                            var_17c_2 = "LookupCard"
                                            var_180_1 = 0x3d96
                                            ecx_13 = &data_871964
                                            var_184_3 =
                                                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                        else
                                            var_17c_2 = "LookupCard"
                                            var_180_1 = 0x3d96
                                            ecx_13 = &data_871964
                                            var_184_3 =
                                                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                                    else
                                        var_17c_2 = "IsBreadcrumbPod"
                                        var_180_1 = 0x1b1a
                                        ecx_13 = "gfx.pile.contextId != DOMCONTEXT_NONE"
                                        var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                            case 5
                                goto label_5d5026
                            case 6
                                goto label_5d4fb3
                            case 7
                                goto label_5d7355
                            case 8
                                int32_t var_17c_33 = arg3[5]
                                ecx_9 = sub_5d2010(eax_3, arg3[2], ecx_64, arg3[4])
                                goto label_5d46f6
                            case 9
                                goto label_5d632a
                else
                    if (ecx_64 == 0x3e9)
                        int32_t edx_35 = arg3[2]
                        
                        if (edx_35 != data_b809cc)
                            int32_t var_17c_25 = arg3[5]
                            ecx_9 = sub_5d2010(ecx_64, edx_35, ecx_64, arg3[4])
                            goto label_5d46f6
                        
                        float var_e8[0x9]
                        float* eax_191 = sub_5d12d0(&var_e8, arg3, esi_1, &var_e8)
                        int128_t xmm1_3 = *(eax_191 + 0x10)
                        *arg4 = *eax_191
                        arg4[1] = xmm1_3
                        CookieCheckFunction(arg4)
                        return arg4
                    
                    eax_3 = ecx_64 - 1
                    
                    if (eax_3 u> 5)
                        goto label_5d632a
                    
                    switch (eax_3)
                        case 0, 4
                            goto label_5d7355
                        case 1
                            int32_t edx_31
                            int32_t edi_24
                            
                            if (arg3[0xf] != "tbl_trash" || arg3[0xe] != esi_1 || arg3[0x10] != 0
                                || arg3[0x11] != 0)
                            label_5d58cc:
                                int32_t eax_161 = sub_67bd70(esi_1, "tbl_trash")
                                
                                if (eax_161 == 0)
                                    goto label_5d467a
                                
                                int32_t eax_163 = sub_64c870(sub_64e7a0(eax_161), nullptr)
                                arg3[0x16] = eax_163
                                
                                if (eax_163 == 0)
                                    goto label_5d4681
                                
                                arg3[0xf] = "tbl_trash"
                                arg3[0xe] = esi_1
                                arg3[0x10] = 0
                                arg3[0x11] = 0
                                ecx_9 = arg3[0x16]
                                
                                if (ecx_9 == 0)
                                    goto label_5d4681
                                
                                edx_31 = data_c23bac
                                edi_24 = data_c23ba8
                            else
                                ecx_9 = arg3[0x16]
                                
                                if (ecx_9 == 0)
                                    goto label_5d58cc
                                
                                edx_31 = data_c23bac
                                uint32_t eax_158 = zx.d(ecx_9.w)
                                
                                if (eax_158 u>= edx_31)
                                    goto label_5d58cc
                                
                                edi_24 = data_c23ba8
                                void* eax_160 = eax_158 * 0x18d0 + edi_24
                                
                                if (*(eax_160 + 0x18c8) != ecx_9 || eax_160 == 0)
                                    goto label_5d58cc
                            
                            uint32_t eax_164 = zx.d(ecx_9.w)
                            
                            if (eax_164 u>= edx_31)
                                goto label_5d4681
                            
                            cond:34_1 = *(eax_164 * 0x18d0 + edi_24 + 0x18c8) != ecx_9
                            goto label_5d471b
                        case 2
                            int32_t edi_25 = 7
                            void* esi_2 = &data_b8206c
                            
                            while (true)
                                if (edi_25 s>= 0x48)
                                    eax_3 = sub_591930()
                                
                                if (*esi_2 == 0xd00)
                                    break
                                
                                if (*(esi_2 + 4) == 0xd00)
                                    break
                                
                                esi_2 += 0x10
                                edi_25 += 1
                                
                                if (esi_2 s>= 0xb8247c)
                                    edi_25 = 0
                                    break
                            
                            void* eax_166 = sub_5cc410(eax_3, 0xffffffff, edi_25, 0, 0)
                            
                            if (eax_166 == 0)
                                goto label_5d7355
                            
                            int32_t ecx_87 = *(eax_166 + 0x1ba0)
                            
                            if (ecx_87 == 0)
                                eax_178 = arg4
                                *eax_178 = *(eax_166 + 0x1c04)
                                xmm0_3 = *(eax_166 + 0x1c14)
                                goto label_5d7369
                            
                            int32_t eax_167 = sub_67bd70(ecx_87, "tbl_assocPile")
                            int128_t xmm0_1
                            int128_t xmm1_2
                            
                            if (eax_167 == 0)
                                xmm1_2 = data_bf21f8
                                xmm0_1 = data_bf21e8
                            else
                                int32_t eax_169 = sub_64c870(sub_64e7a0(eax_167), nullptr)
                                
                                if (eax_169 == 0)
                                    xmm1_2 = data_bf21f8
                                    xmm0_1 = data_bf21e8
                                else
                                    int32_t eax_170 = sub_67bd70(eax_169, "tbl_card")
                                    int32_t ecx_91
                                    
                                    if (eax_170 != 0)
                                        ecx_91 = sub_64c870(sub_64e7a0(eax_170), nullptr)
                                    else
                                        ecx_91 = 0
                                    
                                    if (ecx_91 == 0)
                                        xmm1_2 = data_bf21f8
                                        xmm0_1 = data_bf21e8
                                    else
                                        uint32_t eax_173 = zx.d(ecx_91.w)
                                        
                                        if (eax_173 u>= data_c23bac
                                                || *(eax_173 * 0x18d0 + data_c23ba8 + 0x18c8)
                                                != ecx_91)
                                            xmm1_2 = data_bf21f8
                                            xmm0_1 = data_bf21e8
                                        else
                                            uint32_t eax_176 = sub_64e7a0(ecx_91)
                                            xmm0_1 = *(eax_176 + 0x1620)
                                            xmm1_2 = *(eax_176 + 0x1630)
                            
                            *(eax_166 + 0x1c04) = xmm0_1
                            *(eax_166 + 0x1c14) = xmm1_2
                            *arg4 = xmm0_1
                            arg4[1] = xmm1_2
                            CookieCheckFunction(arg4)
                            return arg4
                        case 3
                            goto label_5d632a
                        case 5
                            void* eax_179 = 7
                            void* edi_26 = &data_b8206c
                            void* var_b4_7 = 7
                            
                            while (true)
                                if (eax_179 s>= 0x48)
                                    sub_591930()
                                    eax_179 = var_b4_7
                                
                                if (*edi_26 == 0xd3d)
                                    break
                                
                                if (*(edi_26 + 4) == 0xd3d)
                                    break
                                
                                eax_179 += 1
                                edi_26 += 0x10
                                var_b4_7 = eax_179
                                
                                if (edi_26 s>= 0xb8247c)
                                    eax_179 = nullptr
                                    break
                            
                            int32_t ecx_96 = 0xa
                            void* eax_181 = &data_b821cc
                            
                            while (*eax_181 != 0)
                                eax_181 += 0x10
                                ecx_96 += 1
                                
                                if (eax_181 s> 0xb8220c)
                                    break
                            
                            void* eax_182 = &data_b8221c
                            int32_t ecx_97 = 0
                            
                            while (*eax_182 != 0)
                                eax_182 += 0x10
                                ecx_97 += 1
                                
                                if (eax_182 s> 0xb8225c)
                                    break
                            
                            int32_t edi_27 = 0
                            void* eax_183 = &data_b8227c
                            
                            while (*(eax_183 - 0x10) != 0)
                                if (*eax_183 == 0)
                                    edi_27 += 1
                                    break
                                
                                if (*(eax_183 + 0x10) == 0)
                                    edi_27 += 2
                                    break
                                
                                eax_183 += 0x30
                                edi_27 += 3
                                
                                if (eax_183 s> 0xb8247c)
                                    break
                            
                            bool cond:52_1 = sub_4aec30() != 0
                            eax_3 = data_cc8dc0
                            var_c4_1.b = cond:52_1
                            
                            if (eax_3 != 0)
                                if (*(eax_3 + 0x38) == 0)
                                    var_b4_7.b = 0
                                else
                                    eax_3 = sub_5cb070()
                                    var_b4_7.b = 1
                                    
                                    if (eax_3 != 0)
                                        var_b4_7.b = 0
                                
                                int32_t eax_186
                                void* edx_34
                                eax_186, edx_34 = sub_5d29b0(
                                    sub_5d2120(eax_3, ecx_97, ecx_96, edi_27, var_c4_1.b, 
                                        var_b4_7.b), 
                                    eax_179 - 0x27)
                                edi_19 = edx_34
                                
                                if (eax_186 == 0)
                                    goto label_5d5800
                                
                                if (eax_186 == 1)
                                    goto label_5d5790
                                
                                eax_3 = eax_186 - 2
                                
                                if (eax_186 == 2)
                                    goto label_5d5720
                                
                                var_17c_2 = "CalcUITransform_Int"
                                var_180_1 = 0x29bd
                                ecx_13 = "Halt"
                                var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                            else
                                var_17c_2 = "GetLocalSettings"
                                var_180_1 = 0x5fb
                                var_184_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                                ecx_13 = "gGameSettings.localSettings"
        case 1
            void* ecx_164 = arg3[1]
            void* edi_39 = ecx_164 - 7
            uint32_t* edi_40
            
            if (edi_39 u<= 0xb)
                if (sub_5d20c0() s> 8)
                    switch (edi_39)
                        case nullptr
                            edi_39 = 1
                        case 1
                            edi_39 = 2
                        case 2
                            edi_39 = 4
                        case 3
                            edi_39 = 5
                        case 4
                            edi_39 = 7
                        case 5
                            edi_39 = 8
                        case 6
                            edi_39 = 0xa
                        case 7
                            edi_39 = 0xb
                        case 8
                            edi_39 = nullptr
                        case 9
                            edi_39 = 3
                        case 0xa
                            edi_39 = 6
                        case 0xb
                            edi_39 = 9
                
                eax_3 = sub_67be20(edi_39)
                edi_40 = &arg3[0xe]
                goto label_5d6a76
            
            if (ecx_164 - 0x13 u> 0xe)
                void* edx_51 = ecx_164 - 0x22
                void* var_b4_11 = edx_51
                uint32_t var_b8_6
                
                if (edx_51 u<= 4)
                    int32_t ecx_176 = 0xa
                    void* eax_272 = &data_b821cc
                    
                    while (*eax_272 != 0)
                        eax_272 += 0x10
                        ecx_176 += 1
                        
                        if (eax_272 s> 0xb8220c)
                            break
                    
                    if (ecx_176 == 0xb)
                        void* ecx_177 = nullptr
                        void* eax_273 = &data_b8221c
                        
                        while (*eax_273 != 0)
                            eax_273 += 0x10
                            ecx_177 += 1
                            
                            if (eax_273 s> 0xb8225c)
                                break
                        
                        if (ecx_177 == 3)
                            if (edx_51 == 2)
                                edx_51 = ecx_177
                            
                            var_b4_11 = edx_51
                    
                    edi_40 = &arg3[0xe]
                    
                    if (arg3[0xf] == "tbl_landscape" && *edi_40 == esi_1 && edi_40[2] == edx_51
                            && edi_40[3] == 0)
                        eax_3 = edi_40[8]
                        var_b8_6 = eax_3
                        
                        if (eax_3 == 0)
                            goto label_5d679c
                        
                        uint32_t ecx_178 = zx.d(eax_3.w)
                        
                        if (ecx_178 u>= data_c23bac)
                            goto label_5d679c
                        
                        void* ecx_180 = ecx_178 * 0x18d0 + data_c23ba8
                        
                        if (*(ecx_180 + 0x18c8) != eax_3 || ecx_180 == 0)
                            goto label_5d679c
                        
                        goto label_5d6a97
                    
                label_5d679c:
                    eax_3 = sub_67be20(edx_51)
                    edi_40[8] = eax_3
                    
                    if (eax_3 != 0)
                        edi_40[1] = "tbl_landscape"
                        *edi_40 = esi_1
                        edi_40[2] = var_b4_11
                        edi_40[3] = 0
                        eax_3 = edi_40[8]
                        var_b8_6 = eax_3
                        
                        if (eax_3 != 0)
                            goto label_5d6a97
                    
                    var_17c_2 = "CalcUITransform_Int"
                    var_180_1 = 0x2a53
                    ecx_13 = "h != UI2_NULL"
                    var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                else if (ecx_164 - 0x27 u> 0x20)
                    eax_3 = ecx_164 - 0x44c
                    
                    if (eax_3 u<= 0x26)
                        int32_t var_17c_46 = arg3[5]
                        ecx_9 = sub_5d2010(eax_3, arg3[2], ecx_164, arg3[4])
                    label_5d46f6:
                        
                        if (ecx_9 == 0)
                            goto label_5d4681
                        
                        eax_10 = zx.d(ecx_9.w)
                        cond:23_1 = eax_10 u>= data_c23bac
                    label_5d4703:
                        
                        if (cond:23_1)
                            goto label_5d4681
                        
                        cond:34_1 = *(eax_10 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_9
                    label_5d471b:
                        
                        if (cond:34_1)
                            goto label_5d4681
                        
                        uint32_t eax_13 = sub_64e7a0(ecx_9)
                        xmm0 = *(eax_13 + 0x1620)
                        xmm1_1 = *(eax_13 + 0x1630)
                        goto label_5d4692
                    
                    if (ecx_164 != 6)
                        goto label_5d7355
                    
                    var_17c_2 = "CalcUITransform_Int"
                    var_180_1 = 0x2a85
                    ecx_13 = "Halt"
                    var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                else
                    int32_t ecx_182 = 0xa
                    void* eax_277 = &data_b821cc
                    
                    while (*eax_277 != 0)
                        eax_277 += 0x10
                        ecx_182 += 1
                        
                        if (eax_277 s> 0xb8220c)
                            break
                    
                    void* eax_278 = &data_b8221c
                    int32_t ecx_183 = 0
                    
                    while (*eax_278 != 0)
                        eax_278 += 0x10
                        ecx_183 += 1
                        
                        if (eax_278 s> 0xb8225c)
                            break
                    
                    int32_t edi_43 = 0
                    void* eax_279 = &data_b8227c
                    
                    while (*(eax_279 - 0x10) != 0)
                        if (*eax_279 == 0)
                            edi_43 += 1
                            break
                        
                        if (*(eax_279 + 0x10) == 0)
                            edi_43 += 2
                            break
                        
                        eax_279 += 0x30
                        edi_43 += 3
                        
                        if (eax_279 s> 0xb8247c)
                            break
                    
                    bool cond:39_1 = sub_4aec30() != 0
                    eax_3 = data_cc8dc0
                    
                    if (eax_3 != 0)
                        if (*(eax_3 + 0x38) == 0)
                            var_b4_11.b = 0
                        else
                            eax_3 = sub_5cb070()
                            var_b4_11.b = 1
                            
                            if (eax_3 != 0)
                                var_b4_11.b = 0
                        
                        int32_t eax_282
                        void* edx_55
                        eax_282, edx_55 = sub_5d29b0(
                            sub_5d2120(eax_3, ecx_183, ecx_182, edi_43, cond:39_1, var_b4_11.b), 
                            ecx_164 - 0x27)
                        
                        if (eax_282 == 0)
                            edi_40 = &arg3[0xe]
                            
                            if (arg3[0xf] == "tbl_centerExtra" && *edi_40 == esi_1
                                    && edi_40[2] == edx_55 && edi_40[3] == 0)
                                eax_3 = edi_40[8]
                                var_b8_6 = eax_3
                                
                                if (eax_3 == 0)
                                    goto label_5d6a4b
                                
                                uint32_t edx_64 = zx.d(eax_3.w)
                                
                                if (edx_64 u>= data_c23bac)
                                    goto label_5d6a4b
                                
                                void* edx_66 = edx_64 * 0x18d0 + data_c23ba8
                                
                                if (*(edx_66 + 0x18c8) != eax_3 || edx_66 == 0)
                                    goto label_5d6a4b
                                
                                goto label_5d6a7c
                            
                        label_5d6a4b:
                            eax_3 = sub_67be20(edx_55)
                            edi_40[8] = eax_3
                            
                            if (eax_3 == 0)
                                goto label_5d6a76
                            
                            edi_40[1] = "tbl_centerExtra"
                        label_5d6a67:
                            *edi_40 = esi_1
                            edi_40[2] = edx_55
                            edi_40[3] = 0
                            eax_3 = edi_40[8]
                        label_5d6a76:
                            var_b8_6 = eax_3
                        label_5d6a7c:
                            
                            if (eax_3 != 0)
                            label_5d6a97:
                                void* esi_5 = arg3[3]
                                int32_t ecx_190 = edi_40[1]
                                
                                if (*arg3 != 8)
                                    if (ecx_190 != "tbl_tokens" || *edi_40 != eax_3
                                        || edi_40[2] != esi_5 || edi_40[3] != 0)
                                    label_5d6b75:
                                        ecx_9 = sub_67be20(esi_5)
                                        edi_40[8] = ecx_9
                                        
                                        if (ecx_9 != 0)
                                            edi_40[1] = "tbl_tokens"
                                            *edi_40 = var_b8_6
                                            edi_40[2] = esi_5
                                            edi_40[3] = 0
                                    else
                                        ecx_9 = edi_40[8]
                                        
                                        if (ecx_9 == 0)
                                            goto label_5d6b75
                                        
                                        uint32_t edx_72 = zx.d(ecx_9.w)
                                        
                                        if (edx_72 u>= data_c23bac)
                                            goto label_5d6b75
                                        
                                        void* edx_74 = edx_72 * 0x18d0 + data_c23ba8
                                        
                                        if (*(edx_74 + 0x18c8) != ecx_9 || edx_74 == 0)
                                            goto label_5d6b75
                                else if (ecx_190 != "tbl_card" || *edi_40 != eax_3
                                    || edi_40[2] != esi_5 || edi_40[3] != 0)
                                label_5d6af5:
                                    ecx_9 = sub_67be20(esi_5)
                                    edi_40[8] = ecx_9
                                    
                                    if (ecx_9 != 0)
                                        edi_40[1] = "tbl_card"
                                        *edi_40 = var_b8_6
                                        edi_40[2] = esi_5
                                        edi_40[3] = 0
                                else
                                    ecx_9 = edi_40[8]
                                    
                                    if (ecx_9 == 0)
                                        goto label_5d6af5
                                    
                                    uint32_t edx_68 = zx.d(ecx_9.w)
                                    
                                    if (edx_68 u>= data_c23bac)
                                        goto label_5d6af5
                                    
                                    void* edx_70 = edx_68 * 0x18d0 + data_c23ba8
                                    
                                    if (*(edx_70 + 0x18c8) != ecx_9 || edx_70 == 0)
                                        goto label_5d6af5
                                
                                goto label_5d46f6
                            
                            var_17c_2 = "CalcUITransform_Int"
                            var_180_1 = 0x2aa3
                            ecx_13 = "h != UI2_NULL"
                            var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                        else
                            if (eax_282 == 1)
                                edi_40 = &arg3[0xe]
                                
                                if (arg3[0xf] != "tbl_centerExtraBottom" || *edi_40 != esi_1
                                    || edi_40[2] != edx_55 || edi_40[3] != 0)
                                label_5d69dc:
                                    eax_3 = sub_67be20(edx_55)
                                    edi_40[8] = eax_3
                                    
                                    if (eax_3 == 0)
                                        goto label_5d6a76
                                    
                                    edi_40[1] = "tbl_centerExtraBottom"
                                    goto label_5d6a67
                                
                                eax_3 = edi_40[8]
                                var_b8_6 = eax_3
                                
                                if (eax_3 == 0)
                                    goto label_5d69dc
                                
                                uint32_t edx_60 = zx.d(eax_3.w)
                                
                                if (edx_60 u>= data_c23bac)
                                    goto label_5d69dc
                                
                                void* edx_62 = edx_60 * 0x18d0 + data_c23ba8
                                
                                if (*(edx_62 + 0x18c8) != eax_3 || edx_62 == 0)
                                    goto label_5d69dc
                                
                                goto label_5d6a7c
                            
                            eax_3 = eax_282 - 2
                            
                            if (eax_282 == 2)
                                edi_40 = &arg3[0xe]
                                
                                if (arg3[0xf] != "tbl_centerOther" || *edi_40 != esi_1
                                    || edi_40[2] != edx_55 || edi_40[3] != 0)
                                label_5d6966:
                                    eax_3 = sub_67be20(edx_55)
                                    edi_40[8] = eax_3
                                    
                                    if (eax_3 == 0)
                                        goto label_5d6a76
                                    
                                    edi_40[1] = "tbl_centerOther"
                                    goto label_5d6a67
                                
                                eax_3 = edi_40[8]
                                var_b8_6 = eax_3
                                
                                if (eax_3 == 0)
                                    goto label_5d6966
                                
                                uint32_t edx_56 = zx.d(eax_3.w)
                                
                                if (edx_56 u>= data_c23bac)
                                    goto label_5d6966
                                
                                void* edx_58 = edx_56 * 0x18d0 + data_c23ba8
                                
                                if (*(edx_58 + 0x18c8) != eax_3 || edx_58 == 0)
                                    goto label_5d6966
                                
                                goto label_5d6a7c
                            
                            var_17c_2 = "CalcUITransform_Int"
                            var_180_1 = 0x2a6e
                            ecx_13 = "Halt"
                            var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    else
                        var_17c_2 = "GetLocalSettings"
                        var_180_1 = 0x5fb
                        var_184_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                        ecx_13 = "gGameSettings.localSettings"
            else
                int32_t ecx_166 = 0xa
                void* eax_262 = &data_b821cc
                
                while (*eax_262 != 0)
                    eax_262 += 0x10
                    ecx_166 += 1
                    
                    if (eax_262 s> 0xb8220c)
                        break
                
                void* eax_263 = &data_b8221c
                int32_t ecx_167 = 0
                
                while (*eax_263 != 0)
                    eax_263 += 0x10
                    ecx_167 += 1
                    
                    if (eax_263 s> 0xb8225c)
                        break
                
                int32_t edi_41 = 0
                void* eax_264 = &data_b8227c
                
                while (*(eax_264 - 0x10) != 0)
                    if (*eax_264 == 0)
                        edi_41 += 1
                        break
                    
                    if (*(eax_264 + 0x10) == 0)
                        edi_41 += 2
                        break
                    
                    eax_264 += 0x30
                    edi_41 += 3
                    
                    if (eax_264 s> 0xb8247c)
                        break
                
                bool cond:31_1 = sub_4aec30() != 0
                eax_3 = data_cc8dc0
                
                if (eax_3 != 0)
                    if (*(eax_3 + 0x38) == 0)
                        var_b4_1.b = 0
                    else
                        eax_3 = sub_5cb070()
                        var_b4_1.b = 1
                        
                        if (eax_3 != 0)
                            var_b4_1.b = 0
                    
                    int32_t eax_266 =
                        sub_5d2120(eax_3, ecx_167, ecx_166, edi_41, cond:31_1, var_b4_1.b)
                    void* edi_42 = ecx_164 - 0x13
                    
                    if (edi_42 s>= 5 && sub_5d3300(eax_266) == 1)
                        edi_42 += 1
                    
                    if (edi_42 s>= 6 && sub_5d3300(eax_266) == 4)
                        edi_42 += 1
                    
                    void* ecx_171 = arg3[3]
                    char* eax_269
                    
                    if (*arg3 != 8)
                        void* eax_270 = 5
                        
                        if (ecx_171 s< 5)
                            eax_270 = ecx_171
                        
                        ecx_171 = eax_270
                        eax_269 = "tbl_tokens"
                    else
                        eax_269 = "tbl_card"
                    
                    eax_271 = sub_5ca740(&arg3[0xe], esi_1, "tbl_center", edi_42, eax_269, ecx_171)
                    
                    if (eax_271 == 0)
                        goto label_5d7355
                    
                    uint32_t ecx_173 = zx.d(eax_271.w)
                    
                    if (ecx_173 u>= data_c23bac
                            || *(ecx_173 * 0x18d0 + data_c23ba8 + 0x18c8) != eax_271)
                        goto label_5d66d7
                    
                    goto label_5d6d9e
                
                var_17c_2 = "GetLocalSettings"
                var_180_1 = 0x5fb
                var_184_3 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                ecx_13 = "gGameSettings.localSettings"
        case 2
            eax_3 = sub_5de8b0(arg3[1])
            uint32_t ecx_161 = eax_3
            
            if (ecx_161 != 0)
                eax_3 = sub_5dc840(ecx_161)
                int32_t esi_4
                
                if (eax_3.b == 0)
                    esi_4 = *(ecx_161 + 0x1ba0)
                label_5d643e:
                    
                    if (esi_4 == 0)
                        goto label_5d7355
                    
                    void* edi_38 = arg3[3]
                    
                    if (arg3[0xf] != "tbl_tokens" || arg3[0xe] != esi_4 || arg3[0x10] != edi_38
                        || arg3[0x11] != 0)
                    label_5d64a8:
                        int32_t eax_259 = sub_67be20(edi_38)
                        arg3[0x16] = eax_259
                        
                        if (eax_259 == 0)
                            goto label_5d4681
                        
                        arg3[0xf] = "tbl_tokens"
                        arg3[0xe] = esi_4
                        arg3[0x10] = edi_38
                        goto label_5d47bf
                    
                    ecx_9 = arg3[0x16]
                    
                    if (ecx_9 == 0)
                        goto label_5d64a8
                    
                    edx_1 = data_c23bac
                    uint32_t eax_256 = zx.d(ecx_9.w)
                    
                    if (eax_256 u>= edx_1)
                        goto label_5d64a8
                    
                    edi_4 = data_c23ba8
                    void* eax_258 = eax_256 * 0x18d0 + edi_4
                    
                    if (*(eax_258 + 0x18c8) != ecx_9 || eax_258 == 0)
                        goto label_5d64a8
                    
                    goto label_5d47dd
                
                if (*(ecx_161 + 0x2c) == 0)
                    esi_4 = *(sub_5cba00(*(ecx_161 + 0x9c)) + 0x1ba0)
                    goto label_5d643e
                
                var_17c_2 = "CalcUITransform_Int"
                var_180_1 = 0x29f7
                ecx_13 = "gfx.type == DOMGFX_CARD"
                var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            else
                var_17c_2 = "LookupCard"
                var_180_1 = 0x3d96
                ecx_13 = &data_871964
                var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        case 3
            int32_t edx_8
            int32_t edi_16
            
            if (arg3[0xf] != "tbl_trash_display" || arg3[0xe] != esi_1 || arg3[0x10] != 0
                || arg3[0x11] != 0)
            label_5d4d47:
                int32_t eax_68 = sub_67bd70(esi_1, "tbl_trash_display")
                
                if (eax_68 == 0)
                label_5d467a:
                    arg3[0x16] = 0
                label_5d4681:
                    xmm1_1 = data_bf21f8
                    xmm0 = data_bf21e8
                label_5d4692:
                    *arg4 = xmm0
                    arg4[1] = xmm1_1
                    CookieCheckFunction(arg4)
                    return arg4
                
                int32_t eax_70 = sub_64c870(sub_64e7a0(eax_68), nullptr)
                arg3[0x16] = eax_70
                
                if (eax_70 == 0)
                    goto label_5d4681
                
                arg3[0xf] = "tbl_trash_display"
                arg3[0xe] = esi_1
                arg3[0x10] = 0
                arg3[0x11] = 0
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4681
                
                edx_8 = data_c23bac
                edi_16 = data_c23ba8
            else
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4d47
                
                edx_8 = data_c23bac
                uint32_t eax_65 = zx.d(ecx_9.w)
                
                if (eax_65 u>= edx_8)
                    goto label_5d4d47
                
                edi_16 = data_c23ba8
                void* eax_67 = eax_65 * 0x18d0 + edi_16
                
                if (*(eax_67 + 0x18c8) != ecx_9 || eax_67 == 0)
                    goto label_5d4d47
            
            uint32_t eax_71 = zx.d(ecx_9.w)
            
            if (eax_71 u>= edx_8)
                goto label_5d4681
            
            cond:34_1 = *(eax_71 * 0x18d0 + edi_16 + 0x18c8) != ecx_9
            goto label_5d471b
        case 4
            int32_t edi_1 = data_b604e0
            int32_t ecx = arg3[2]
            int32_t eax_4 = edi_1
            
            if (edi_1 == 0xffffffff)
                eax_4 = 0
            
            if (ecx != eax_4)
                if (edi_1 == 0xffffffff)
                    edi_1 = 0
                
                void* ecx_2 = ecx - edi_1
                void* edi_2 = ecx_2 + sub_4b95e0()
                
                if (ecx - edi_1 s>= 0)
                    edi_2 = ecx_2
                
                if (arg3[0xf] != "tbl_opponents" || arg3[0xe] != esi_1 || arg3[0x10] != edi_2 - 1
                        || arg3[0x11] != "tbl_opponent_hand_display" || arg3[0x12] != 0
                        || arg3[0x13] != 0)
                    int32_t eax_6 = sub_67be20(edi_2 - 1)
                    
                    if (eax_6 == 0)
                        goto label_5d467a
                    
                    int32_t eax_8 = sub_67bd70(eax_6, "tbl_opponent_hand_display")
                    
                    if (eax_8 != 0)
                        eax_8 = sub_64c870(sub_64e7a0(eax_8), nullptr)
                    
                    arg3[0x16] = eax_8
                    
                    if (eax_8 == 0)
                        goto label_5d4681
                    
                    arg3[0xe] = esi_1
                    arg3[0xf] = "tbl_opponents"
                    arg3[0x10] = edi_2 - 1
                    arg3[0x11] = "tbl_opponent_hand_display"
                    goto label_5d46e5
                
                goto label_5d46f3
            
            if (arg3[0xf] == "tbl_player_display" && arg3[0xe] == esi_1 && arg3[0x10] == 0
                    && arg3[0x11] == 0)
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4786
                
                edx_1 = data_c23bac
                uint32_t eax_14 = zx.d(ecx_9.w)
                
                if (eax_14 u>= edx_1)
                    goto label_5d4786
                
                edi_4 = data_c23ba8
                void* eax_16 = eax_14 * 0x18d0 + edi_4
                
                if (*(eax_16 + 0x18c8) != ecx_9 || eax_16 == 0)
                    goto label_5d4786
                
                goto label_5d47dd
            
        label_5d4786:
            int32_t eax_17 = sub_67bd70(esi_1, "tbl_player_display")
            
            if (eax_17 == 0)
                goto label_5d467a
            
            int32_t eax_19 = sub_64c870(sub_64e7a0(eax_17), nullptr)
            arg3[0x16] = eax_19
            
            if (eax_19 == 0)
                goto label_5d4681
            
            arg3[0xf] = "tbl_player_display"
            arg3[0xe] = esi_1
            arg3[0x10] = 0
        label_5d47bf:
            arg3[0x11] = 0
            ecx_9 = arg3[0x16]
            
            if (ecx_9 == 0)
                goto label_5d4681
            
            edx_1 = data_c23bac
            edi_4 = data_c23ba8
        label_5d47dd:
            uint32_t eax_20 = zx.d(ecx_9.w)
            
            if (eax_20 u>= edx_1)
                goto label_5d4681
            
            cond:34_1 = *(eax_20 * 0x18d0 + edi_4 + 0x18c8) != ecx_9
            goto label_5d471b
        case 5
            edi_11 = data_b604e0
            int32_t ecx_40 = arg3[2]
            int32_t eax_56 = edi_11
            var_b4_5 = ecx_40
            
            if (edi_11 == 0xffffffff)
                eax_56 = 0
            
            if (ecx_40 != eax_56)
                goto label_5d4ab6
            
            int32_t edx_7
            int32_t edi_15
            
            if (arg3[0xf] != "tbl_player_deck_display" || arg3[0xe] != esi_1 || arg3[0x10] != 0
                || arg3[0x11] != 0)
            label_5d4c84:
                int32_t eax_60 = sub_67bd70(esi_1, "tbl_player_deck_display")
                
                if (eax_60 == 0)
                    goto label_5d467a
                
                int32_t eax_62 = sub_64c870(sub_64e7a0(eax_60), nullptr)
                arg3[0x16] = eax_62
                
                if (eax_62 == 0)
                    goto label_5d4681
                
                arg3[0xf] = "tbl_player_deck_display"
                arg3[0xe] = esi_1
                arg3[0x10] = 0
                arg3[0x11] = 0
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4681
                
                edx_7 = data_c23bac
                edi_15 = data_c23ba8
            else
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4c84
                
                edx_7 = data_c23bac
                uint32_t eax_57 = zx.d(ecx_9.w)
                
                if (eax_57 u>= edx_7)
                    goto label_5d4c84
                
                edi_15 = data_c23ba8
                void* eax_59 = eax_57 * 0x18d0 + edi_15
                
                if (*(eax_59 + 0x18c8) != ecx_9 || eax_59 == 0)
                    goto label_5d4c84
            
            uint32_t eax_63 = zx.d(ecx_9.w)
            
            if (eax_63 u>= edx_7)
                goto label_5d4681
            
            cond:34_1 = *(eax_63 * 0x18d0 + edi_15 + 0x18c8) != ecx_9
            goto label_5d471b
        case 6
            int32_t edi_5 = arg3[2]
            
            if (edi_5 != 0xffffffff)
                int32_t ecx_14 = data_b604e0
                int32_t eax_22 = ecx_14
                
                if (ecx_14 == 0xffffffff)
                    eax_22 = 0
                
                if (edi_5 == eax_22)
                    int32_t edx_3
                    int32_t edi_8
                    
                    if (arg3[0xf] != "tbl_player_discard_display" || arg3[0xe] != esi_1
                        || arg3[0x10] != 0 || arg3[0x11] != 0)
                    label_5d493e:
                        int32_t eax_30 = sub_67bd70(esi_1, "tbl_player_discard_display")
                        
                        if (eax_30 == 0)
                            goto label_5d467a
                        
                        int32_t eax_32 = sub_64c870(sub_64e7a0(eax_30), nullptr)
                        arg3[0x16] = eax_32
                        
                        if (eax_32 == 0)
                            goto label_5d4681
                        
                        arg3[0xf] = "tbl_player_discard_display"
                        arg3[0xe] = esi_1
                        arg3[0x10] = 0
                        arg3[0x11] = 0
                        ecx_9 = arg3[0x16]
                        
                        if (ecx_9 == 0)
                            goto label_5d4681
                        
                        edx_3 = data_c23bac
                        edi_8 = data_c23ba8
                    else
                        ecx_9 = arg3[0x16]
                        
                        if (ecx_9 == 0)
                            goto label_5d493e
                        
                        edx_3 = data_c23bac
                        uint32_t eax_27 = zx.d(ecx_9.w)
                        
                        if (eax_27 u>= edx_3)
                            goto label_5d493e
                        
                        edi_8 = data_c23ba8
                        void* eax_29 = eax_27 * 0x18d0 + edi_8
                        
                        if (*(eax_29 + 0x18c8) != ecx_9 || eax_29 == 0)
                            goto label_5d493e
                    
                    uint32_t eax_33 = zx.d(ecx_9.w)
                    
                    if (eax_33 u>= edx_3)
                        goto label_5d4681
                    
                    cond:34_1 = *(eax_33 * 0x18d0 + edi_8 + 0x18c8) != ecx_9
                    goto label_5d471b
                
                if (ecx_14 == 0xffffffff)
                    ecx_14 = 0
                
                uint32_t edi_6 = edi_5 - ecx_14
                eax_3 = edi_6 + sub_4b95e0()
                
                if (edi_5 - ecx_14 s>= 0)
                    eax_3 = edi_6
                
                if (eax_3 s>= 1)
                    if (arg3[0xf] == "tbl_opponents" && arg3[0xe] == esi_1
                            && arg3[0x10] == eax_3 - 1
                            && arg3[0x11] == "tbl_opponent_discard_display" && arg3[0x12] == 0
                            && arg3[0x13] == 0)
                        goto label_5d46f3
                    
                    int32_t eax_24 = sub_67be20(eax_3 - 1)
                    
                    if (eax_24 == 0)
                        goto label_5d467a
                    
                    int32_t eax_25 = sub_67bd70(eax_24, "tbl_opponent_discard_display")
                    
                    if (eax_25 != 0)
                        eax_25 = sub_64c870(sub_64e7a0(eax_25), nullptr)
                    
                    arg3[0x16] = eax_25
                    
                    if (eax_25 == 0)
                        goto label_5d4681
                    
                    arg3[0xe] = esi_1
                    arg3[0xf] = "tbl_opponents"
                    arg3[0x10] = eax_3 - 1
                    arg3[0x11] = "tbl_opponent_discard_display"
                    goto label_5d46e5
                
                var_17c_2 = "CalcUITransform_Int"
                var_180_1 = 0x2762
                ecx_13 = "seat >= SEAT_OPP1"
                var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            else
                var_17c_2 = "CalcUITransform_Int"
                var_180_1 = 0x275d
                ecx_13 = "who != PLAYER_NONE"
                var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        case 7
            edi_11 = data_b604e0
            int32_t ecx_30 = arg3[2]
            int32_t eax_43 = edi_11
            var_b4_5 = ecx_30
            
            if (edi_11 == 0xffffffff)
                eax_43 = 0
            
            if (ecx_30 != eax_43)
            label_5d4ab6:
                
                if (edi_11 == 0xffffffff)
                    edi_11 = 0
                
                void* ecx_32 = var_b4_5 - edi_11
                void* edi_12 = ecx_32 + sub_4b95e0()
                
                if (var_b4_5 - edi_11 s>= 0)
                    edi_12 = ecx_32
                
                if (arg3[0xf] != "tbl_opponents" || arg3[0xe] != esi_1 || arg3[0x10] != edi_12 - 1
                        || arg3[0x11] != "tbl_opponent_deck_display" || arg3[0x12] != 0
                        || arg3[0x13] != 0)
                    int32_t eax_45 = sub_67be20(edi_12 - 1)
                    
                    if (eax_45 == 0)
                        goto label_5d467a
                    
                    int32_t eax_46 = sub_67bd70(eax_45, "tbl_opponent_deck_display")
                    
                    if (eax_46 != 0)
                        eax_46 = sub_64c870(sub_64e7a0(eax_46), nullptr)
                    
                    arg3[0x16] = eax_46
                    
                    if (eax_46 == 0)
                        goto label_5d4681
                    
                    arg3[0xe] = esi_1
                    arg3[0xf] = "tbl_opponents"
                    arg3[0x10] = edi_12 - 1
                    arg3[0x11] = "tbl_opponent_deck_display"
                    goto label_5d46e5
                
                goto label_5d46f3
            
            int32_t edx_6
            int32_t edi_14
            
            if (arg3[0xf] != "tbl_player_deck_display" || arg3[0xe] != esi_1 || arg3[0x10] != 0
                || arg3[0x11] != 0)
            label_5d4ba2:
                int32_t eax_51 = sub_67bd70(esi_1, "tbl_player_deck_display")
                
                if (eax_51 == 0)
                    goto label_5d467a
                
                int32_t eax_53 = sub_64c870(sub_64e7a0(eax_51), nullptr)
                arg3[0x16] = eax_53
                
                if (eax_53 == 0)
                    goto label_5d4681
                
                arg3[0xf] = "tbl_player_deck_display"
                arg3[0xe] = esi_1
                arg3[0x10] = 0
                arg3[0x11] = 0
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4681
                
                edx_6 = data_c23bac
                edi_14 = data_c23ba8
            else
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4ba2
                
                edx_6 = data_c23bac
                uint32_t eax_48 = zx.d(ecx_9.w)
                
                if (eax_48 u>= edx_6)
                    goto label_5d4ba2
                
                edi_14 = data_c23ba8
                void* eax_50 = eax_48 * 0x18d0 + edi_14
                
                if (*(eax_50 + 0x18c8) != ecx_9 || eax_50 == 0)
                    goto label_5d4ba2
            
            uint32_t eax_54 = zx.d(ecx_9.w)
            
            if (eax_54 u>= edx_6)
                goto label_5d4681
            
            cond:34_1 = *(eax_54 * 0x18d0 + edi_14 + 0x18c8) != ecx_9
            goto label_5d471b
        case 8
            int32_t edi_9 = data_b604e0
            int32_t ecx_22 = arg3[2]
            int32_t eax_35 = edi_9
            
            if (edi_9 == 0xffffffff)
                eax_35 = 0
            
            if (ecx_22 != eax_35)
                if (edi_9 == 0xffffffff)
                    edi_9 = 0
                
                void* ecx_24 = ecx_22 - edi_9
                void* eax_37 = ecx_24 + sub_4b95e0()
                
                if (ecx_22 - edi_9 s>= 0)
                    eax_37 = ecx_24
                
                int32_t* var_17c_4 = &arg3[0xe]
                char const* const var_180_2 = "tbl_card_display_below"
                int32_t var_184_1 = arg3[3]
                ecx_9 = sub_5ca800(&arg3[0xe], esi_1, &arg3[0xe], eax_37 - 1, &arg3[0xe])
                goto label_5d46f6
            
            void* edi_10 = arg3[3]
            
            if (arg3[0xf] == "tbl_player_pods" && arg3[0xe] == esi_1 && arg3[0x10] == edi_10
                    && arg3[0x11] == "tbl_card_display" && arg3[0x12] == 0 && arg3[0x13] == 0)
                goto label_5d46f3
            
            int32_t eax_40 = sub_67be20(edi_10)
            
            if (eax_40 == 0)
                goto label_5d467a
            
            int32_t eax_41 = sub_67bd70(eax_40, "tbl_card_display")
            
            if (eax_41 != 0)
                eax_41 = sub_64c870(sub_64e7a0(eax_41), nullptr)
            
            arg3[0x16] = eax_41
            
            if (eax_41 == 0)
                goto label_5d4681
            
            arg3[0xe] = esi_1
            arg3[0xf] = "tbl_player_pods"
            arg3[0x10] = edi_10
            arg3[0x11] = "tbl_card_display"
        label_5d46e5:
            arg3[0x12] = 0
            arg3[0x13] = 0
        label_5d46f3:
            ecx_9 = arg3[0x16]
            goto label_5d46f6
        case 9
            edi_17 = data_b604e0
            int32_t eax_73 = edi_17
            int32_t ecx_47 = arg3[2]
            void* edx_9 = arg3[3]
            
            if (edi_17 == 0xffffffff)
                eax_73 = 0
            
            if (ecx_47 != eax_73)
                if (edi_17 == 0xffffffff)
                    edi_17 = 0
                
                eax_74 = sub_4b95e0()
                ecx_48 = ecx_47
                var_17c_7 = edx_9
            label_5d4e07:
                void* ecx_49 = ecx_48 - edi_17
                void* eax_75 = ecx_49 + eax_74
                
                if (ecx_48 - edi_17 s>= 0)
                    eax_75 = ecx_49
                
                ecx_9 = sub_5ca740(&arg3[0xe], esi_1, "tbl_opponents", eax_75 - 1, 
                    "tbl_opponent_pods", var_17c_7)
                goto label_5d46f6
            
            int32_t edi_18
            
            if (arg3[0xf] != "tbl_player_pods" || arg3[0xe] != esi_1 || arg3[0x10] != edx_9
                || arg3[0x11] != 0)
            label_5d4e78:
                int32_t eax_81 = sub_67be20(edx_9)
                arg3[0x16] = eax_81
                
                if (eax_81 == 0)
                    goto label_5d4681
                
                arg3[0xf] = "tbl_player_pods"
                arg3[0xe] = esi_1
                arg3[0x10] = edx_9
                arg3[0x11] = 0
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4681
                
                edi_18 = data_c23bac
            else
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4e78
                
                edi_18 = data_c23bac
                uint32_t eax_78 = zx.d(ecx_9.w)
                
                if (eax_78 u>= edi_18)
                    goto label_5d4e78
                
                void* eax_80 = eax_78 * 0x18d0 + data_c23ba8
                
                if (*(eax_80 + 0x18c8) != ecx_9 || eax_80 == 0)
                    goto label_5d4e78
            
            eax_10 = zx.d(ecx_9.w)
            cond:23_1 = eax_10 u>= edi_18
            goto label_5d4703
        case 0xa
            int32_t eax_87 = arg3[1]
            
            if (eax_87 != 0x3ee)
                if (eax_87 == 0x3ef)
                label_5d5026:
                    edi_19 = arg3[3]
                    
                    if (arg3[0xf] != "tbl_player_reveal_left" || arg3[0xe] != esi_1
                        || arg3[0x10] != edi_19 || arg3[0x11] != 0)
                    label_5d5073:
                        int32_t eax_98 = sub_67be20(edi_19)
                        arg3[0x16] = eax_98
                        
                        if (eax_98 == 0)
                            goto label_5d4681
                        
                        arg3[0xf] = "tbl_player_reveal_left"
                        goto label_5d4f2a
                    
                    ecx_9 = arg3[0x16]
                    
                    if (ecx_9 == 0)
                        goto label_5d5073
                    
                    edx_13 = data_c23bac
                    uint32_t eax_95 = zx.d(ecx_9.w)
                    
                    if (eax_95 u>= edx_13)
                        goto label_5d5073
                    
                    void* eax_97 = eax_95 * 0x18d0 + data_c23ba8
                    
                    if (*(eax_97 + 0x18c8) != ecx_9 || eax_97 == 0)
                        goto label_5d5073
                    
                    goto label_5d4f48
                
                if (eax_87 != 0x3f0)
                    goto label_5d5092
                
            label_5d4fb3:
                edi_19 = arg3[3]
                
                if (arg3[0xf] == "tbl_player_reveal_right" && arg3[0xe] == esi_1
                        && arg3[0x10] == edi_19 && arg3[0x11] == 0)
                    ecx_9 = arg3[0x16]
                    
                    if (ecx_9 != 0)
                        edx_13 = data_c23bac
                        uint32_t eax_91 = zx.d(ecx_9.w)
                        
                        if (eax_91 u< edx_13)
                            void* eax_93 = eax_91 * 0x18d0 + data_c23ba8
                            
                            if (*(eax_93 + 0x18c8) == ecx_9 && eax_93 != 0)
                                goto label_5d4f48
                
                int32_t eax_94 = sub_67be20(edi_19)
                arg3[0x16] = eax_94
                
                if (eax_94 == 0)
                    goto label_5d4681
                
                arg3[0xf] = "tbl_player_reveal_right"
                goto label_5d4f2a
            
        label_5d5092:
            void* eax_99 = data_b7fcf4
            
            if (eax_99 == 0)
                eax_99.b = data_19e3a94
            else
                uint32_t ecx_58 = zx.d(eax_99.w)
                
                if (ecx_58 u>= data_b809e4)
                    eax_99.b = data_19e3a94
                else
                    void* ecx_60 = ecx_58 * 0x1c30 + data_b809e0
                    
                    if (*(ecx_60 + 0x1c28) != eax_99 || ecx_60 == 0)
                        eax_99.b = data_19e3a94
                    else
                        eax_99 = sub_5d4360(ecx_60)
                        
                        if (eax_99 == 2 || eax_99 == 3)
                            eax_99.b = 1
                            data_19e3a94 = 1
                        else
                            eax_99.b = 0
                            data_19e3a94 = 0
            
            edi_19 = arg3[3]
            int32_t ecx_61 = arg3[0xf]
            
            if (eax_99.b == 0)
                if (ecx_61 == "tbl_player_reveal" && arg3[0xe] == esi_1 && arg3[0x10] == edi_19
                        && arg3[0x11] == 0)
                    ecx_9 = arg3[0x16]
                    
                    if (ecx_9 != 0)
                        edx_13 = data_c23bac
                        uint32_t eax_104 = zx.d(ecx_9.w)
                        
                        if (eax_104 u< edx_13)
                            void* eax_106 = eax_104 * 0x18d0 + data_c23ba8
                            
                            if (*(eax_106 + 0x18c8) == ecx_9 && eax_106 != 0)
                                goto label_5d4f48
                
                int32_t eax_107 = sub_67be20(edi_19)
                arg3[0x16] = eax_107
                
                if (eax_107 == 0)
                    goto label_5d4681
                
                arg3[0xf] = "tbl_player_reveal"
                goto label_5d4f2a
            
            if (ecx_61 == "tbl_player_reveal_slide" && arg3[0xe] == esi_1 && arg3[0x10] == edi_19
                    && arg3[0x11] == 0)
                ecx_9 = arg3[0x16]
                
                if (ecx_9 != 0)
                    edx_13 = data_c23bac
                    uint32_t eax_100 = zx.d(ecx_9.w)
                    
                    if (eax_100 u< edx_13)
                        void* eax_102 = eax_100 * 0x18d0 + data_c23ba8
                        
                        if (*(eax_102 + 0x18c8) == ecx_9 && eax_102 != 0)
                            goto label_5d4f48
            
            int32_t eax_103 = sub_67be20(edi_19)
            arg3[0x16] = eax_103
            
            if (eax_103 == 0)
                goto label_5d4681
            
            arg3[0xf] = "tbl_player_reveal_slide"
            goto label_5d4f2a
        case 0xb
            int32_t edx_77
            eax_3, edx_77 = sub_5de8b0(arg3[1])
            
            if (eax_3 != 0)
                void var_148
                int128_t* eax_292 = sub_5de520(&var_148, edx_77, eax_3, &var_148)
                bool cond:14_1 = *(eax_3 + 0x1a18) == 0
                int128_t xmm3_1 = *eax_292
                int128_t xmm0_10 = eax_292[1]
                var_2c = xmm3_1
                int128_t var_1c_1
                bool cond:32_1
                
                if (cond:14_1)
                    if (*(eax_3 + 0x370) == 1)
                        cond:32_1 = *(eax_3 + 0x378) != 0x21
                    label_5d6c65:
                        
                        if (cond:32_1)
                            goto label_5d6d0b
                        
                        goto label_5d6c6b
                    
                label_5d6d0b:
                    float xmm2_7 = _mm_cvtepi32_ps(zx.o(arg3[3] + 1))
                    eax_178 = arg4
                    *eax_178 = xmm3_1
                    float xmm1_12 = xmm3_1.d * 50f * xmm2_7
                    var_1c_1:4.d = xmm0_10:4.d + xmm1_12
                    var_1c_1:8.d = xmm1_12 f+ xmm0_10:8.d
                    var_1c_1:0xc.d = xmm3_1.d * 0f * xmm2_7 f+ var_1c_1:0xc.d
                    xmm0_3 = var_1c_1
                else
                    if (*(eax_3 + 0x2e8) != 1 || *(eax_3 + 0x2f0) != 0x21)
                        if (*(eax_3 + 0x418) != 1)
                            goto label_5d6d0b
                        
                        cond:32_1 = *(eax_3 + 0x420) != 0x21
                        goto label_5d6c65
                    
                label_5d6c6b:
                    float xmm1_8 = var_2c.d
                    float xmm2_1 = float.s(arg3[3])
                    eax_178 = arg4
                    var_1c_1:4.d = (xmm2_1 * 100f + 475f) * xmm1_8 f+ xmm0_10:4.d
                    var_1c_1:8.d = (xmm2_1 * 50f + 180f) * xmm1_8 f+ var_1c_1:8.d
                    var_2c.d = xmm1_8 * 0.5f
                    var_1c_1:0xc.d = (xmm2_1 * 0f + 0f) * xmm1_8 f+ var_1c_1:0xc.d
                    xmm0_3 = var_1c_1
                    *eax_178 = var_2c
                goto label_5d7369
            
            var_17c_2 = "LookupCard"
            var_180_1 = 0x3d96
            ecx_13 = &data_871964
            var_184_3 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        case 0xc
            edi_17 = data_b604e0
            int32_t eax_250 = edi_17
            
            if (edi_17 == 0xffffffff)
                eax_250 = 0
            
            int32_t ecx_158 = arg3[2]
            
            if (ecx_158 != eax_250)
                if (edi_17 == 0xffffffff)
                    edi_17 = 0
                
                eax_74 = sub_4b95e0()
                ecx_48 = ecx_158
                var_17c_7 = arg3[3]
                goto label_5d4e07
            
            edi_19 = arg3[3]
            
            if (arg3[0xf] != "tbl_player_pods" || arg3[0xe] != esi_1 || arg3[0x10] != edi_19
                || arg3[0x11] != 0)
            label_5d63c5:
                int32_t eax_254 = sub_67be20(edi_19)
                arg3[0x16] = eax_254
                
                if (eax_254 == 0)
                    goto label_5d4681
                
                arg3[0xf] = "tbl_player_pods"
                goto label_5d4f2a
            
            ecx_9 = arg3[0x16]
            
            if (ecx_9 == 0)
                goto label_5d63c5
            
            edx_13 = data_c23bac
            uint32_t eax_251 = zx.d(ecx_9.w)
            
            if (eax_251 u>= edx_13)
                goto label_5d63c5
            
            void* eax_253 = eax_251 * 0x18d0 + data_c23ba8
            
            if (*(eax_253 + 0x18c8) != ecx_9 || eax_253 == 0)
                goto label_5d63c5
            
            goto label_5d4f48
        case 0xd
            edi_19 = arg3[3]
            
            if (arg3[0xf] == "tbl_abilityTriggers" && arg3[0xe] == esi_1 && arg3[0x10] == edi_19
                    && arg3[0x11] == 0)
                ecx_9 = arg3[0x16]
                
                if (ecx_9 == 0)
                    goto label_5d4f10
                
                edx_13 = data_c23bac
                uint32_t eax_82 = zx.d(ecx_9.w)
                
                if (eax_82 u>= edx_13)
                    goto label_5d4f10
                
                void* eax_84 = eax_82 * 0x18d0 + data_c23ba8
                
                if (*(eax_84 + 0x18c8) != ecx_9 || eax_84 == 0)
                    goto label_5d4f10
                
                goto label_5d4f48
            
        label_5d4f10:
            int32_t eax_85 = sub_67be20(edi_19)
            arg3[0x16] = eax_85
            
            if (eax_85 == 0)
                goto label_5d4681
            
            arg3[0xf] = "tbl_abilityTriggers"
        label_5d4f2a:
            arg3[0xe] = esi_1
            arg3[0x10] = edi_19
            arg3[0x11] = 0
            ecx_9 = arg3[0x16]
            
            if (ecx_9 == 0)
                goto label_5d4681
            
            edx_13 = data_c23bac
        label_5d4f48:
            eax_10 = zx.d(ecx_9.w)
            cond:23_1 = eax_10 u>= edx_13
            goto label_5d4703
        case 0xe
            if (data_8db664 == 0x3e8)
                data_8db668
            else if (data_8db674 == 0x3e8)
                data_8db678
            
            ecx_9 = sub_67be20(arg3[3])
            goto label_5d46f6
        case 0xf
            if (arg2 != 0)
                *arg2 = 1
            
            int32_t ecx_200
            int32_t edx_78
            int32_t edi_44
            
            if (arg3[0xf] == "tbl_zoom" && arg3[0xe] == esi_1 && arg3[0x10] == 0 && arg3[0x11] == 0)
                ecx_200 = arg3[0x16]
                
                if (ecx_200 == 0)
                    goto label_5d6e12
                
                edx_78 = data_c23bac
                uint32_t eax_297 = zx.d(ecx_200.w)
                
                if (eax_297 u>= edx_78)
                    goto label_5d6e12
                
                edi_44 = data_c23ba8
                void* eax_299 = eax_297 * 0x18d0 + edi_44
                
                if (*(eax_299 + 0x18c8) != ecx_200 || eax_299 == 0)
                    goto label_5d6e12
                
                goto label_5d6f08
            
        label_5d6e12:
            int32_t eax_300 = sub_67bd70(esi_1, "tbl_zoom")
            int128_t xmm0_27
            int128_t xmm1_14
            
            if (eax_300 != 0)
                int32_t eax_303 = sub_64c870(sub_64e7a0(eax_300), nullptr)
                arg3[0x16] = eax_303
                
                if (eax_303 == 0)
                    xmm1_14 = data_bf21f8
                    xmm0_27 = data_bf21e8
                else
                    arg3[0xf] = "tbl_zoom"
                    arg3[0xe] = esi_1
                    arg3[0x10] = 0
                    arg3[0x11] = 0
                    ecx_200 = arg3[0x16]
                    
                    if (ecx_200 == 0)
                        xmm1_14 = data_bf21f8
                        xmm0_27 = data_bf21e8
                    else
                        edx_78 = data_c23bac
                        edi_44 = data_c23ba8
                    label_5d6f08:
                        uint32_t eax_304 = zx.d(ecx_200.w)
                        
                        if (eax_304 u>= edx_78 || *(eax_304 * 0x18d0 + edi_44 + 0x18c8) != ecx_200)
                            xmm1_14 = data_bf21f8
                            xmm0_27 = data_bf21e8
                        else
                            uint32_t eax_306 = sub_64e7a0(ecx_200)
                            xmm0_27 = *(eax_306 + 0x1620)
                            xmm1_14 = *(eax_306 + 0x1630)
            else
                arg3[0x16] = eax_300
                xmm1_14 = data_bf21f8
                xmm0_27 = data_bf21e8
            
            void* eax_301 = data_cf65b8
            int128_t var_b0 = xmm0_27
            int128_t var_a0_1 = xmm1_14
            int128_t var_50 = data_bf21e8
            int32_t xmm1_15 = (zx.o(0)).d
            int128_t var_40_1 = data_bf21f8
            var_40_1:8.d = 0
            var_40_1:0xc.d = 0
            var_40_1:4.d = _mm_cvtepi32_ps(zx.o(*(eax_301 + 0x14))) * 0.5f
            float xmm0_33 = data_b7d420
            float xmm0_35 = (xmm0_33 - -1f) * 0.5f
            float var_b8_8
            
            if (xmm0_33 <= 0f)
                if (0 f>= xmm0_35)
                    var_b8_8 = xmm1_15
                else if (xmm0_35 < 1f)
                    var_b8_8 = sub_4ae110(4, xmm0_35, xmm1_15, 1.57079637f)
                else
                    var_b8_8 = 0x3fc90fdb
            else if (not(0 f< xmm0_35))
                var_b8_8 = -3.14159274f
            else if (xmm0_35 >= 1f)
                var_b8_8 = xmm1_15
            else
                var_b8_8 = sub_4ae110(4, xmm0_35, 0xc0490fdb, (zx.o(0)).d)
            
            var_2c = data_bf21e8
            int128_t var_1c_2 = data_bf21f8
            float xmm0_40 = var_b8_8 * 0.5f
            float xmm0_41 = sub_4ae0f0(ebp, xmm0_40)
            var_2c:8.d = xmm0_41
            float xmm1_17 = xmm0_41 * 0f
            var_2c:4.d = xmm1_17
            var_2c:0xc.d = xmm1_17
            var_1c_2.d = sub_4ae0d0(ebp, xmm0_40)
            float* edx_79 = &var_2c
            int128_t var_70
            sub_4eb600(&var_50, edx_79, &var_70, &var_50)
            int128_t var_90 = var_70
            void var_168
            int128_t* eax_309 = sub_639a10(&var_168, edx_79, &var_50, &var_168)
            var_70 = *eax_309
            int128_t var_60_1 = eax_309[1]
            sub_4eb600(&var_90, &var_70, &var_50, &var_90)
            var_2c = var_50
            int128_t var_1c_3 = var_40_1
            sub_4eb600(&var_2c, &var_b0, &var_90, &var_2c)
            eax_178 = arg4
            *eax_178 = var_90
            int128_t var_60
            xmm0_3 = var_60
            goto label_5d7369
        case 0x10
            if (arg2 != 0)
                *arg2 = 1
            
            eax_3 = sub_64e7a0(sub_66b2b0(eax_3, "tbl_zoom_landscape", esi_1, 0xffffffff))
            int32_t ecx_197 = *(eax_3 + 0x189c)
            
            if (ecx_197 s>= 0)
                if (ecx_197 == 0)
                label_5d66d7:
                    xmm0_5 = data_bf21e8
                    xmm1_4 = data_bf21f8
                label_5d5c6d:
                    *arg4 = xmm0_5
                    arg4[1] = xmm1_4
                    CookieCheckFunction(arg4)
                    return arg4
                
            label_5d6d99:
                eax_271 = sub_64c870(eax_3, nullptr)
            label_5d6d9e:
                ecx_199 = eax_271
            label_5d6da0:
                uint32_t eax_296 = sub_64e7a0(ecx_199)
                xmm0_5 = *(eax_296 + 0x1620)
                xmm1_4 = *(eax_296 + 0x1630)
                goto label_5d5c6d
            
            var_17c_2 = "UI2::countChildren"
            var_180_1 = 0xba8
            var_184_3 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_13 = "numChildren >= 0"
        case 0x11
            if (arg2 != 0)
                *arg2 = 1
            
            int32_t eax_312 = arg3[3]
            int32_t eax_319 = sub_5ca740(&arg3[0xe], esi_1, "tbl_zoom_extra", 
                (eax_312 s>> 0x10) s% 0xc, "tbl_assoc_pile", zx.d(eax_312.w))
            ecx_199 = eax_319
            
            if (ecx_199 != 0)
                eax_321 = zx.d(ecx_199.w)
                cond:33_1 = eax_321 u>= data_c23bac
            label_5d712d:
                
                if (cond:33_1 || *(eax_321 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_199)
                    goto label_5d66d7
                
                goto label_5d6da0
            
            eax_3 = sub_64e7a0(sub_66b2b0(eax_319, "tbl_zoom_extra", esi_1, 0xffffffff))
            int32_t ecx_211 = *(eax_3 + 0x189c)
            
            if (ecx_211 s>= 0)
                if (ecx_211 != 0)
                    goto label_5d6d99
                
                xmm0_5 = data_bf21e8
                xmm1_4 = data_bf21f8
                goto label_5d5c6d
            
            var_17c_2 = "UI2::countChildren"
            var_180_1 = 0xba8
            var_184_3 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_13 = "numChildren >= 0"
        case 0x12
            if (arg2 != 0)
                *arg2 = 1
            
            void* edi_50 = arg3[3]
            int32_t edx_88
            
            if (arg3[0xf] == "tbl_zoom_extra_expand" && arg3[0xe] == esi_1 && arg3[0x10] == edi_50
                    && arg3[0x11] == 0)
                ecx_199 = arg3[0x16]
                
                if (ecx_199 == 0)
                    goto label_5d72c3
                
                edx_88 = data_c23bac
                uint32_t eax_334 = zx.d(ecx_199.w)
                
                if (eax_334 u>= edx_88)
                    goto label_5d72c3
                
                void* eax_336 = eax_334 * 0x18d0 + data_c23ba8
                
                if (*(eax_336 + 0x18c8) != ecx_199 || eax_336 == 0)
                    goto label_5d72c3
                
                goto label_5d72f3
            
        label_5d72c3:
            int32_t eax_337 = sub_67be20(edi_50)
            arg3[0x16] = eax_337
            
            if (eax_337 != 0)
                arg3[0xf] = "tbl_zoom_extra_expand"
                arg3[0xe] = esi_1
                arg3[0x10] = edi_50
                arg3[0x11] = 0
                ecx_199 = arg3[0x16]
            
            if (eax_337 != 0 && ecx_199 != 0)
                edx_88 = data_c23bac
            label_5d72f3:
                eax_321 = zx.d(ecx_199.w)
                cond:33_1 = eax_321 u>= edx_88
                goto label_5d712d
            
            eax_3 = sub_64e7a0(sub_66b2b0(eax_337, "tbl_zoom_extra_expand", esi_1, 0xffffffff))
            int32_t ecx_219 = *(eax_3 + 0x189c)
            
            if (ecx_219 s>= 0)
                if (ecx_219 != 0)
                    goto label_5d6d99
                
                xmm0_5 = data_bf21e8
                xmm1_4 = data_bf21f8
                goto label_5d5c6d
            
            var_17c_2 = "UI2::countChildren"
            var_180_1 = 0xba8
            var_184_3 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_13 = "numChildren >= 0"
        case 0x13
            if (arg2 != 0)
                *arg2 = 1
            
            int32_t edi_48 = mods.dp.d(sx.q(arg3[3]), 0x3f)
            int32_t edx_86
            int32_t edi_49
            
            if (arg3[0xf] == "tbl_podicons" && arg3[0xe] == esi_1 && arg3[0x10] == edi_48
                    && arg3[0x11] == 0)
                ecx_199 = arg3[0x16]
                
                if (ecx_199 == 0)
                    goto label_5d71bf
                
                edx_86 = data_c23bac
                uint32_t eax_327 = zx.d(ecx_199.w)
                
                if (eax_327 u>= edx_86)
                    goto label_5d71bf
                
                edi_49 = data_c23ba8
                void* eax_329 = eax_327 * 0x18d0 + edi_49
                
                if (*(eax_329 + 0x18c8) != ecx_199 || eax_329 == 0)
                    goto label_5d71bf
                
                goto label_5d71f5
            
        label_5d71bf:
            int32_t eax_330 = sub_67be20(edi_48)
            arg3[0x16] = eax_330
            
            if (eax_330 != 0)
                arg3[0xf] = "tbl_podicons"
                arg3[0xe] = esi_1
                arg3[0x10] = edi_48
                arg3[0x11] = 0
                ecx_199 = arg3[0x16]
            
            if (eax_330 != 0 && ecx_199 != 0)
                edx_86 = data_c23bac
                edi_49 = data_c23ba8
            label_5d71f5:
                uint32_t eax_331 = zx.d(ecx_199.w)
                
                if (eax_331 u>= edx_86 || *(eax_331 * 0x18d0 + edi_49 + 0x18c8) != ecx_199)
                    goto label_5d66d7
                
                goto label_5d6da0
            
            eax_3 = sub_64e7a0(sub_66b2b0(eax_330, "tbl_podicons", esi_1, 0xffffffff))
            int32_t ecx_215 = *(eax_3 + 0x189c)
            
            if (ecx_215 s>= 0)
                if (ecx_215 != 0)
                    goto label_5d6d99
                
                xmm0_5 = data_bf21e8
                xmm1_4 = data_bf21f8
                goto label_5d5c6d
            
            var_17c_2 = "UI2::countChildren"
            var_180_1 = 0xba8
            var_184_3 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_13 = "numChildren >= 0"
        case 0x14
            goto label_5d7377

sub_63b870(eax_3, &data_801800, ecx_13, var_184_3, var_180_1, var_17c_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
