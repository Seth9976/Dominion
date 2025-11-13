// 函数: _Z17LogDoReplacements8Language11DomLogStyleRK11DomLogEvent15DomLocalizationRK8GameSaveb19LogReplacementFlags
// 地址: 0xc0bd08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_bc = arg7
DomLogEvent const& x24 = arg3
int32_t x20 = arg1.d
Translation* x0 = GetLocTranslation(arg1, zx.q(arg4))
char* x0_1 = XString::operator char const*()

if (arg2 != 3)
    GetPlayerInitial(arg5, *x24)
else
    DoTranslate("dom_log_each_player")

int32_t i_6 = *(x24 + 0x18)
XString::XString()
int64_t var_80

if (i_6 s>= 1)
    int32_t i
    
    do
        XString::operator+=(&var_80)
        i = i_6
        i_6 -= 1
    while (i != 1)

StringReplace(x0_1, "[p]", XString::operator char const*())
XString::operator+(&var_80)
XString::~XString()
int64_t x6 = XString::~XString()
int32_t x25_1 = var_bc
var_80 = *(x24 + 0x1c)
int64_t x26_2 = 0
int32_t x22 = 0
int32_t x12 = x25_1 u>> 4 & 1
int32_t x8_2

if ((x25_1 & 0x10) == 0)
    x8_2 = 2
else
    x8_2 = 1

int32_t var_78 = *(x24 + 0x24)
XString* entry_x8

while (true)
    uint64_t x8_5 = zx.q(*(&data_11549a0 + sx.q(arg4) * 0x30 + (x26_2 << 2) + 0x10))
    char var_a8
    char var_a0
    char var_98
    int32_t var_90
    int32_t var_68
    char* x0_18
    char* x0_25
    char* x0_60
    char* x0_147
    char const* const x1_4
    char const* const x1_6
    char const* const x1_14
    char const* const x1_17
    char const* const x1_38
    char* x2_2
    char* x2_4
    int32_t* x2_8
    char* x2_13
    char* x2_15
    char* x2_23
    uint64_t x4
    int64_t x6_3
    int32_t x21_2
    char* x23_8
    char* x28_1
    char* x28_3
    int32_t x28_6
    char* x28_13
    char* fp_2
    char* fp_3
    
    if (x8_5.d u<= 0x1b)
        switch (x8_5)
            case 0
                if (*x24 == 0xffffffff)
                    goto label_c0bec8
                
                char* x0_20 = XString::operator char const*()
                PlayerGetNameAvatar(arg5 + 8, GameGetPlayer(arg5 + 8, zx.q(*x24)), &var_68)
                x2_2 = XString::operator char const*()
                x0_25 = x0_20
                x1_4 = "[player]"
                goto label_c0bea8
            case 1
                int32_t x23_4 = *(&var_80 + (sx.q(x22) << 2))
                x21_2 = x22 + 1
                x28_3 = XString::operator char const*()
                PlayerGetNameAvatar(arg5 + 8, GameGetPlayer(arg5 + 8, zx.q(x23_4)), &var_68)
                x2_4 = XString::operator char const*()
                x1_6 = "[opponent]"
            label_c0c5e8:
                x0_18 = x28_3
            label_c0c790:
                StringReplace(x0_18, x1_6, x2_4)
                XString::operator=(entry_x8)
                XString::~XString()
                goto label_c0c7ac
            case 2
                int32_t x28_4 = *(&var_80 + (sx.q(x22) << 2))
                x21_2 = x22 + 1
                fp_2 = XString::operator char const*()
                XStringFromInt(x28_4)
                x2_4 = XString::operator char const*()
                x1_6 = &data_79783f
            label_c0c78c:
                x0_18 = fp_2
                goto label_c0c790
            case 3
                int32_t x0_37 = TranslationGetParticleStyle(x0, 2)
                
                if ((arg6.d & 1) != 0)
                    char* x0_39
                    int64_t x6_2
                    x0_39, x6_2 = XString::operator char const*()
                    fp_3 = x0_39
                    CardsetKnown(zx.q(x20), zx.q(x0_37), *(x24 + 0x10), *(x24 + 0x14), 0, false, 
                        x6_2, false)
                    x2_2 = XString::operator char const*()
                    x1_4 = "[cards]"
                    goto label_c0c66c
                
                char* x0_139
                uint128_t v0_1
                int128_t v1_1
                int128_t v2_1
                int128_t v3_1
                int128_t v4_1
                int128_t v5_1
                x0_139, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = XString::operator char const*()
                uint64_t x8_25 = zx.q(*(x24 + 0x14))
                x28_1 = x0_139
                int32_t x0_140
                
                if (x8_25.d s< 1)
                    x0_140 = 0
                label_c0cbfc:
                    XStringFromInt(x0_140)
                    DoTranslateWithReplacement("dom_log_n_cards", "[N]", &var_68)
                    XString::~XString()
                else
                    int64_t x9_6 = sx.q(*(x24 + 0x10))
                    int64_t x10_3 = *(gLog + 0x28)
                    int64_t i_8
                    
                    if (x8_25.d u> 8)
                        int64_t x11_2
                        
                        if ((x8_25 & 7) == 0)
                            x11_2 = 8
                        else
                            x11_2 = x8_25 & 7
                        
                        i_8 = x8_25 - x11_2
                        v0_1.q = 0
                        v0_1:8.q = 0
                        int32_t* x12_1 = x10_3 + (x9_6 << 3) + 0x24
                        int64_t i_5 = i_8
                        v1_1.q = 0
                        v1_1:8.q = 0
                        int64_t i_1
                        
                        do
                            v2_1.d = *x12_1
                            v3_1.d = x12_1[1]
                            v2_1:4.d = x12_1[2]
                            v3_1:4.d = x12_1[3]
                            v2_1:8.d = x12_1[4]
                            v3_1:8.d = x12_1[5]
                            v2_1:0xc.d = x12_1[6]
                            v3_1:0xc.d = x12_1[7]
                            v4_1.d = *(x12_1 - 0x20)
                            v5_1.d = *(x12_1 - 0x1c)
                            v4_1:4.d = *(x12_1 - 0x18)
                            v5_1:4.d = *(x12_1 - 0x14)
                            v4_1:8.d = *(x12_1 - 0x10)
                            v5_1:8.d = *(x12_1 - 0xc)
                            v4_1:0xc.d = *(x12_1 - 8)
                            v5_1:0xc.d = *(x12_1 - 4)
                            i_1 = i_5
                            i_5 -= 8
                            x12_1 = &x12_1[0x10]
                            v1_1 += v2_1
                            v0_1 += v4_1
                        while (i_1 != 8)
                        v0_1.d = vaddvq_u32(v1_1 + v0_1)
                        x0_140 = v0_1.d
                    else
                        i_8 = 0
                        x0_140 = 0
                    
                    int64_t i_4 = x8_25 - i_8
                    int32_t* x9_10 = x10_3 + ((i_8 + x9_6) << 3) + 4
                    int64_t i_2
                    
                    do
                        int32_t x10_4 = *x9_10
                        x9_10 = &x9_10[2]
                        i_2 = i_4
                        i_4 -= 1
                        x0_140 += x10_4
                    while (i_2 != 1)
                    
                    if (x20 == 0x11 || x0_140 != 1)
                        goto label_c0cbfc
                    
                    var_68.q = 3
                    GetNResLikes(zx.q(x20), &var_68, 1, 0, 2)
                x2_2 = XString::operator char const*()
                x1_4 = "[cards]"
                goto label_c0bea4
            case 6
                x28_6 = TranslationGetParticleStyle(x0, 1)
                x21_2 = x22 + 1
                var_90 = *(&var_80 + (sx.q(x22) << 2))
                char* x0_45
                x0_45, x6_3 = XString::operator char const*()
                x4 = zx.q(x12)
                fp_2 = x0_45
                x2_8 = &var_90
            label_c0c49c:
                CardsKnown(zx.q(x20), zx.q(x28_6), x2_8, 1, x4, false, x6_3, false)
                x2_4 = XString::operator char const*()
                x1_6 = "[card]"
                goto label_c0c78c
            case 7
                var_90 =
                    *(*(gLog + 0x28) + (zx.q(*(x24 + 0x10) + *(x24 + 0x14) - 1) << 0x20 s>> 0x1d))
                char* x0_47
                int64_t x6_4
                x0_47, x6_4 = XString::operator char const*()
                x28_1 = x0_47
                CardsKnown(zx.q(x20), 1, &var_90, 1, 0, false, x6_4, false)
                x2_2 = XString::operator char const*()
                x1_4 = "[card]"
                goto label_c0bea4
            case 8
                int64_t x9_3 = sx.q(x22)
                
                if ((x25_1 & 1) != 0)
                    int32_t x21_6 = *(&var_80 + (x9_3 << 2))
                    int32_t x23_12 = *(&var_80 + ((x9_3 + 1) << 2))
                    x22 += 2
                    x28_1 = XString::operator char const*()
                    var_90 = 0
                    int32_t var_8c_4 = x21_6
                    GetNResLikes(zx.q(x20), &var_90, x23_12, zx.q(x25_1), 2)
                    x2_2 = XString::operator char const*()
                    x1_4 = "[resources]"
                    goto label_c0bea4
                
                if ((x25_1 & 2) != 0)
                    int32_t x23_13 = *(&var_80 + (sx.q((x9_3 + 1).d) << 2))
                    x22 += 2
                    char* x0_162 = XString::operator char const*()
                    var_90.q = 2
                    GetNResLikes(zx.q(x20), &var_90, x23_13, zx.q(x25_1), 2)
                    StringReplace(x0_162, "[resources]", XString::operator char const*())
                    XString::operator=(entry_x8)
                    XString::~XString()
                else
                    int32_t x9_4 = *(&var_80 + (x9_3 << 2))
                    int32_t x23_5 = *(&var_80 + (sx.q((x9_3 + 1).d) << 2))
                    x22 += 2
                    var_68 = 1
                    int32_t var_64_1 = x9_4
                    char* x0_51 = XString::operator char const*()
                    GetNResLikes(zx.q(x20), &var_68, x23_5, zx.q(x25_1), 2)
                    StringReplace(x0_51, "[resources]", XString::operator char const*())
                    XString::operator=(entry_x8)
                    XString::~XString()
                
                x6 = XString::~XString()
                goto label_c0bec8
            case 9
                void* x8_3 = &var_80 + (sx.q(x22) << 2)
                int32_t x23_1 = *(x8_3 - 4)
                int32_t x21_1 = *x8_3
                x22 += 1
                x28_1 = XString::operator char const*()
                var_90 = 0
                int32_t var_8c_1 = x21_1
                GetNResLikes(zx.q(x20), &var_90, x23_1, zx.q(x25_1), 2)
                x2_2 = XString::operator char const*()
                x1_4 = "[opponent]"
            label_c0bea4:
                x0_25 = x28_1
            label_c0bea8:
                StringReplace(x0_25, x1_4, x2_2)
                XString::operator=(entry_x8)
                XString::~XString()
                x6 = XString::~XString()
                goto label_c0bec8
            case 0xa
                void* x8_16 = &var_80 + (sx.q(x22) << 2)
                int32_t x9_5 = *x8_16
                int32_t x23_6 = *(x8_16 + 4)
                x22 += 2
                var_68 = 1
                int32_t var_64_2 = x9_5
                char* x0_57 = XString::operator char const*()
                GetNResLikes(zx.q(x20), &var_68, x23_6, 0, 2)
                x2_13 = XString::operator char const*()
                x1_14 = "[tokens]"
                x0_60 = x0_57
            label_c0c3e4:
                StringReplace(x0_60, x1_14, x2_13)
                XString::operator=(entry_x8)
                XString::~XString()
                x6 = XString::~XString()
                goto label_c0bec8
            case 0xb
                int32_t x8_17 = *(&var_80 + (sx.q(x22) << 2))
                x21_2 = x22 + 1
                var_68 = 1
                int32_t var_64_3 = x8_17
                char* x0_62 = XString::operator char const*()
                GetNResLikes(zx.q(x20), &var_68, 1, 0, 4)
                StringReplace(x0_62, "[token]", XString::operator char const*())
                XString::operator=(entry_x8)
                XString::~XString()
            label_c0c7ac:
                x6 = XString::~XString()
                x22 = x21_2
                goto label_c0bec8
            case 0xc
                int32_t x21_4 = *(&var_80 + (sx.q(x22) << 2))
                x22 += 1
                x23_8 = XString::operator char const*()
                var_90 = 0
                int32_t var_8c_2 = x21_4
                GetWhereLike(zx.q(x20), &var_90)
                x2_15 = XString::operator char const*()
                x1_17 = "[where]"
            label_c0c37c:
                x0_147 = x23_8
            label_c0c898:
                StringReplace(x0_147, x1_17, x2_15)
                XString::operator=(entry_x8)
                XString::~XString()
                x6 = XString::~XString()
                goto label_c0bec8
            case 0xd
                int32_t x21_5 = *(&var_80 + (sx.q(x22) << 2))
                x22 += 1
                x23_8 = XString::operator char const*()
                var_90 = 0
                int32_t var_8c_3 = x21_5
                GetWhereLike(zx.q(x20), &var_90)
                x2_15 = XString::operator char const*()
                x1_17 = "[where_to]"
                goto label_c0c37c
            case 0xe
                int32_t x8_19 = *(&var_80 + (sx.q(x22) << 2) - 8)
                var_68 = 2
                int32_t var_64_4 = x8_19
                char* x0_76 = XString::operator char const*()
                GetWhereLike(zx.q(x20), &var_68)
                x2_13 = XString::operator char const*()
                x0_60 = x0_76
                x1_14 = "[where]"
                goto label_c0c3e4
            case 0xf
                int32_t x0_81 = TranslationGetParticleStyle(x0, 2)
                int32_t x8_20 = *(&var_80 + (sx.q(x22) << 2))
                x22 += 1
                var_90 = x8_20
                uint64_t x0_84
                int32_t* x2_16
                int64_t x4_1
                int64_t x6_5
                char* fp_4
                
                if (x20 != 3)
                    char* x0_145
                    x0_145, x6_5 = XString::operator char const*()
                    fp_4 = x0_145
                    x2_16 = &var_90
                    x4_1 = 3
                    x0_84 = zx.q(x20)
                else
                    char* x0_83
                    x0_83, x6_5 = XString::operator char const*()
                    fp_4 = x0_83
                    x2_16 = &var_90
                    x0_84 = 3
                    x4_1 = 1
                
                CardsKnown(x0_84, zx.q(x0_81), x2_16, 1, x4_1, false, x6_5, false)
                x2_15 = XString::operator char const*()
                x1_17 = "[pile]"
                x0_147 = fp_4
                goto label_c0c898
            case 0x10, 0x11
                char* x28_2
                
                if (x8_5.d == 0x10)
                    x28_2 = "[pile2]"
                else
                    x28_2 = "[pile]"
                
                int32_t x0_13 = TranslationGetParticleStyle(x0, 2)
                x21_2 = x22 + 1
                var_90 = *(&var_80 + (sx.q(x22) << 2))
                char* x0_15
                int64_t x6_1
                x0_15, x6_1 = XString::operator char const*()
                CardsKnown(zx.q(x20), zx.q(x0_13), &var_90, 1, 1, false, x6_1, false)
                x2_4 = XString::operator char const*()
                x0_18 = x0_15
                x1_6 = x28_2
                goto label_c0c790
            case 0x12
                x28_6 = TranslationGetParticleStyle(x0, 1)
                x21_2 = x22 + 1
                var_90 = *(&var_80 + (sx.q(x22) << 2))
                char* x0_88
                x0_88, x6_3 = XString::operator char const*()
                fp_2 = x0_88
                x2_8 = &var_90
                x4 = 1
                goto label_c0c49c
            case 0x13
                int32_t x0_92 = TranslationGetParticleStyle(x0, 1)
                x21_2 = x22 + 1
                var_90 = *(&var_80 + (sx.q(x22) << 2))
                char* x0_94
                int64_t x6_6
                x0_94, x6_6 = XString::operator char const*()
                fp_2 = x0_94
                CardsKnown(zx.q(x20), zx.q(x0_92), &var_90, 1, 1, false, x6_6, false)
                x2_4 = XString::operator char const*()
                x1_6 = "[card1]"
                goto label_c0c78c
            case 0x14
                int32_t x0_98 = TranslationGetParticleStyle(x0, 1)
                x21_2 = x22 + 1
                var_90 = *(&var_80 + (sx.q(x22) << 2))
                char* x0_100
                int64_t x6_7
                x0_100, x6_7 = XString::operator char const*()
                fp_2 = x0_100
                CardsKnown(zx.q(x20), zx.q(x0_98), &var_90, 1, 1, false, x6_7, false)
                x2_4 = XString::operator char const*()
                x1_6 = "[card2]"
                goto label_c0c78c
            case 0x15
                int32_t x23_10 = *(&var_80 + (sx.q(x22) << 2))
                x21_2 = x22 + 1
                x28_3 = XString::operator char const*()
                var_90.q = 2
                GetNResLikes(zx.q(x20), &var_90, x23_10, 0, 2)
                x2_4 = XString::operator char const*()
                x1_6 = "[cost]"
                goto label_c0c5e8
            case 0x16
                x22 += 1
            label_c0bec8:
                x26_2 += 1
                
                if (x26_2 == 4)
                    break
                
                continue
            case 0x17
                if (x20 == 3)
                    uint64_t i_7 = zx.q(*(x24 + 0x14))
                    int32_t x23_11
                    DomLogEvent const& x25_2
                    int32_t fp_9
                    
                    if (i_7.d != 1)
                        x23_11 = 1
                        x25_2 = x24
                        
                        if (i_7.d s>= 1)
                            goto label_c0ca48
                        
                        fp_9 = 1
                    else
                        x25_2 = x24
                        x23_11 = 0
                    label_c0ca48:
                        int64_t x24_1 = 0
                        fp_9 = 1
                        uint64_t i_3
                        
                        do
                            int32_t* x8_27 = *(gLog + 0x28) + x24_1
                            int32_t x21_7 = x8_27[1]
                            void* x0_167 = CardnameTranslation(3, zx.q(*x8_27))
                            int32_t x9_7 = *(x0_167 + 0x18)
                            x24_1 += 8
                            bool z_1
                            
                            if (zx.d(*(x0_167 + 0x24)) == 0)
                                z_1 = x21_7 == 1
                            else
                                z_1 = false
                            
                            if (not(z_1))
                                x23_11 = 1
                            
                            bool z_2
                            
                            if (x9_7 == 2)
                                z_2 = fp_9 == 3
                            else
                                z_2 = false
                            
                            int32_t x8_29
                            
                            x8_29 = z_2 ? 2 : fp_9
                            
                            fp_9 = fp_9 == 1 ? x9_7 : x8_29
                            
                            i_3 = i_7
                            i_7 -= 1
                        while (i_3 != 1)
                    
                    XString::XString(&var_68)
                    
                    if (fp_9 == 3)
                        XString::operator+=(&var_68)
                    
                    x24 = x25_2
                    
                    if ((x23_11 & 0xff) != 0)
                        XString::operator+=(&var_68)
                    
                    StringReplace(XString::operator char const*(), "[revealed]", 
                        XString::operator char const*())
                    XString::operator=(entry_x8)
                    XString::~XString()
                    x6 = XString::~XString()
                    x25_1 = var_bc
                
                goto label_c0bec8
            case 0x18
                int32_t x0_108 = TranslationGetParticleStyle(x0, 2)
                char* x0_110
                int64_t x6_8
                x0_110, x6_8 = XString::operator char const*()
                fp_3 = x0_110
                CardsetKnown(zx.q(x20), zx.q(x0_108), *(x24 + 0x10), *(x24 + 0x14), 1, false, x6_8, 
                    false)
                x2_2 = XString::operator char const*()
                x1_4 = "[piles]"
            label_c0c66c:
                x0_25 = fp_3
                goto label_c0bea8
            case 0x19
                int32_t fp_5 = *(&var_80 + (sx.q(x22) << 2))
                x28_13 = XString::operator char const*()
                XString::XString(&var_98)
                void* x0_117 = CampaignPieceDefGet(zx.q(fp_5))
                Translation* x0_119 = LookupTranslationSafe(*(x0_117 + 8), zx.q(x20))
                
                if (x0_119 == 0)
                    *(x0_117 + 8)
                else
                    TranslationString(zx.q(x20), x0_119, false)
                
                x22 += 1
                XString::XString(&var_a0)
                XString::operator+(&var_98)
                XString::XString(&var_a8)
                XString::operator+(&var_90)
                x2_23 = XString::operator char const*()
                x1_38 = "[stamp]"
            label_c0c970:
                StringReplace(x28_13, x1_38, x2_23)
                XString::operator=(entry_x8)
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                x6 = XString::~XString()
                goto label_c0bec8
            case 0x1a
                int32_t fp_7 = *(&var_80 + (sx.q(x22) << 2))
                x28_13 = XString::operator char const*()
                XString::XString(&var_98)
                void* x0_126 = CampaignPieceDefGet(zx.q(fp_7))
                Translation* x0_128 = LookupTranslationSafe(*(x0_126 + 8), zx.q(x20))
                
                if (x0_128 == 0)
                    *(x0_126 + 8)
                else
                    TranslationString(zx.q(x20), x0_128, false)
                
                x22 += 1
                XString::XString(&var_a0)
                XString::operator+(&var_98)
                XString::XString(&var_a8)
                XString::operator+(&var_90)
                x2_23 = XString::operator char const*()
                x1_38 = "[twist]"
                goto label_c0c970
            case 0x1b
                x21_2 = x22 + 1
                var_90 = *(&var_80 + (sx.q(x22) << 2))
                int32_t x0_132 = TranslationGetParticleStyle(x0, 1)
                char* x0_134
                int64_t x6_9
                x0_134, x6_9 = XString::operator char const*()
                fp_2 = x0_134
                CardsKnown(zx.q(x20), zx.q(x0_132), &var_90, 1, zx.q(x8_2), false, x6_9, false)
                x2_4 = XString::operator char const*()
                x1_6 = "[throne]"
                goto label_c0c78c
    pthread_kill(pthread_self(), 6)
    int64_t x0_183
    int64_t x1_47
    DomCardEnum* x2_29
    int32_t x3_7
    int64_t x4_3
    bool x5_1
    int64_t x6_10
    bool x7
    x0_183, x1_47, x2_29, x3_7, x4_3, x5_1, x6_10, x7 = XNoReturn()
    return CardsKnown(x0_183, x1_47, x2_29, x3_7, x4_3, x5_1, x6_10, x7) __tailcall

if (*(x24 + 0x2c) != 0)
    CardsKnown(zx.q(x20), 1, x24 + 0x2c, 1, 1, false, x6, false)
    XString var_88
    LocStringReplace(zx.q(x20), 0, "[entry]", entry_x8, "[source]", &var_88)
    XString::operator=(entry_x8)
    XString::~XString()
    XString::~XString()

return XString::~XString()
