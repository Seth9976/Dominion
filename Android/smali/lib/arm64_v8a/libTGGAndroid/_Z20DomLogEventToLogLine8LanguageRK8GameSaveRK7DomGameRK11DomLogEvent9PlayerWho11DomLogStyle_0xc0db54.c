// 函数: _Z20DomLogEventToLogLine8LanguageRK8GameSaveRK7DomGameRK11DomLogEvent9PlayerWho11DomLogStyle
// 地址: 0xc0db54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg4
int32_t x21 = arg6
int32_t x23 = arg1
int32_t x8_1

if (x9 == arg5 || *(arg4 + 4) == arg5)
    x8_1 = 1
else
    x8_1 = 0

int32_t x10 = *(arg4 + 8)
uint64_t x11 = zx.q(x10 - 2)

if (x11.d u<= 0x51)
    int32_t x5 = x8_1 | (zx.d(*(arg3 + 0x1a0c)) != 0 ? 1 : 0)
    int128_t var_90
    uint64_t x0_25
    uint64_t x1_19
    DomLogEvent* x2_5
    int64_t x3
    int64_t x3_1
    GameSave const& x4_4
    bool x5_2
    int64_t x6_1
    int64_t x6_3
    char* entry_x8
    int128_t v3
    
    switch (x11)
        case 0
            if (*(arg4 + 0x1c) == 0)
                x3 = 0xe
                goto label_c0e248
            
            XString::XString(&var_90)
            x3_1 = 0xe
            goto label_c0e500
        case 2
            if (*(arg4 + 0x1c) == 0)
                x3 = 0x1b
            else
                x3 = 0x1c
            
            goto label_c0e248
        case 3
            x3 = 6
            goto label_c0e248
        case 4
            if (*(arg4 + 0x24) == 0)
                x3 = 8
            else
                x3 = 9
            
            goto label_c0e248
        case 6
            if (*(arg4 + 0x24) == 0)
                x3 = 0xa
            else
                x3 = 0xb
            
            goto label_c0e248
        case 7
            int64_t x8_10 = sx.q(*(arg4 + 0x1c))
            
            if (x8_10.d u< 9)
                LogDoReplacements(zx.q(x23), zx.q(x21), arg4, zx.q(*(&data_802eb8 + (x8_10 << 2))), 
                    arg2, true, 0)
                LogDoReplacements(zx.q(x23), zx.q(x21), arg4, 0x12, arg2, true, 0)
                StringReplace(XString::operator char const*(), "[reason]", 
                    XString::operator char const*())
                XString::~XString()
                return XString::~XString()
        case 8
            int32_t x8_12 = *(arg4 + 0x1c)
            
            if (x8_12 - 1 u< 2)
            label_c0dd8c:
                x3 = 0x48
                x6_1 = 5
            label_c0e3a4:
                return LogDoReplacements(zx.q(x23), zx.q(x21), arg4, x3, arg2, 0.b, x6_1) __tailcall
            
            if (x8_12 == 0)
                int32_t x8_38 = *(arg4 + 0x20)
                
                if ((x8_38 & 0x80000000) == 0)
                    x3 = 0x48
                    x6_1 = 6
                    goto label_c0e3a4
                
                v3 = *(arg4 + 0x10)
                int128_t var_70_3 = *(arg4 + 0x20)
                int128_t var_60_3 = *(arg4 + 0x30)
                var_90 = *arg4
                int128_t var_80_3 = v3
                var_70_3.d = neg.d(x8_38)
                DomLogEvent* x2_13
                int64_t x3_8
                int64_t x6_6
                
                if ((zx.d(*(arg4 + 0x28)) & 8) != 0)
                    x2_13 = &var_90
                    x3_8 = 0x48
                    x6_6 = 0xa
                else
                    x2_13 = &var_90
                    x3_8 = 0x49
                    x6_6 = 2
                
                return LogDoReplacements(zx.q(x23), zx.q(x21), x2_13, x3_8, arg2, false, x6_6)
            
            if (x8_12 == 3)
                goto label_c0dd8c
        case 9
            int32_t x8_13 = *(arg4 + 0x1c)
            
            if (x8_13 s<= 0xbff)
                if (x8_13 == 0x401)
                    x3 = 0x4c
                    goto label_c0e248
                
                if (x8_13 == 0x601)
                label_c0e1e8:
                    x3 = 0x48
                    x6_1 = 4
                    goto label_c0e3a4
                
                if (x8_13 == 0xa00)
                    goto label_c0e1e0
                
                goto label_c0e4cc
            
            DomLogEvent* x2_11
            int64_t x3_7
            
            if (x8_13 == 0xc00)
                int32_t x8_45 = *(arg4 + 0x20)
                
                if ((x8_45 & 0x80000000) == 0)
                    x3 = 0x48
                    goto label_c0e248
                
                v3 = *(arg4 + 0x10)
                x2_11 = &var_90
                x3_7 = 0x4b
                int128_t var_70_4 = *(arg4 + 0x20)
                int128_t var_60_4 = *(arg4 + 0x30)
                var_90 = *arg4
                int128_t var_80_4 = v3
                var_70_4.d = neg.d(x8_45)
            label_c0e5e8:
                return LogDoReplacements(zx.q(x23), zx.q(x21), x2_11, x3_7, arg2, true, 0)
            
            if (x8_13 == 0xe00 || x8_13 == 0x1000)
            label_c0e1e0:
                int32_t x8_31 = *(arg4 + 0x20)
                
                if ((x8_31 & 0x80000000) == 0)
                    goto label_c0e1e8
                
                v3 = *(arg4 + 0x10)
                x2_11 = &var_90
                int128_t var_70_1 = *(arg4 + 0x20)
                int128_t var_60_1 = *(arg4 + 0x30)
                var_90 = *arg4
                int128_t var_80_1 = v3
                var_70_1.d = neg.d(x8_31)
                x3_7 = 0x49
                goto label_c0e5e8
            
        label_c0e4cc:
            int32_t x8_46 = *(arg4 + 0x20)
            
            if (x8_46 == 1)
                x3 = 0x52
                goto label_c0e248
            
            if (x8_46 == 0xffffffff)
                x3 = 0x53
                goto label_c0e248
        case 0xa
            if (*(arg4 + 0x1c) != 0x1000)
                x3 = 0x51
            else
                x3 = 0x50
            
            goto label_c0e248
        case 0xb
            x3 = 0x4d
            goto label_c0e248
        case 0xc
            if (*(arg4 + 0x20) == 0)
                x3 = 0x6a
            else
                x3 = 0x6b
            
            goto label_c0e248
        case 0xd
            return XString::XString(entry_x8) __tailcall
        case 0xe
            if (*(arg4 + 0x1c) == 0)
                x3 = 0x5c
            else
                x3 = 0x5b
            
            goto label_c0e248
        case 0xf
            x3 = 0x1e
            goto label_c0e248
        case 0x10, 0x51
            x3 = 0x1f
        label_c0e248:
            x5 = 1
            goto label_c0e250
        case 0x11
            x3 = 0x20
            goto label_c0e248
        case 0x12, 0x13
            x3 = 0x24
            goto label_c0e248
        case 0x14
            x3 = 0x25
            goto label_c0e248
        case 0x16
            x3 = 0x5d
            goto label_c0e248
        case 0x17
            x3 = 0x5e
            goto label_c0e248
        case 0x18
            x3 = 0x26
            goto label_c0e248
        case 0x19
            x3 = x9 == 0xffffffff ? 0x68 : 0x67
            
            goto label_c0e248
        case 0x1a
            if (*(arg4 + 0x1c) == 0)
                x3 = 0x64
                goto label_c0e248
            
            return LogDoReplacements(zx.q(x23), zx.q(x21), arg4, 0x63, arg2, 1.b, 0x10) __tailcall
        case 0x1c
            x3 = 0xf
            goto label_c0e248
        case 0x1f
            x3 = 0x27
            goto label_c0e248
        case 0x20
            x3 = 0x28
            goto label_c0e248
        case 0x21
            if (*(arg4 + 0x1c) != 0x474)
                x3 = 0x29
            else
                x3 = 0x2e
            
            goto label_c0e248
        case 0x22
            x3 = 0x2f
            goto label_c0e248
        case 0x23
            x3 = 0x31
            goto label_c0e248
        case 0x24
            x3 = 0x69
            x5 |= *(arg4 + 0x1c) == arg5 ? 1 : 0
            goto label_c0e250
        case 0x25, 0x26
            int32_t x26_1 = *(arg4 + 0x1c)
            int32_t x24_1 = (x10 == 0x28 ? 1 : 0) | x5
            
            if (x26_1 != 0x3eb)
            label_c0dc60:
                int32_t x0_1 = FateDeckWhere(arg3, 0xd30)
                int32_t x0_3
                int128_t v3_1
                int128_t v0_1
                int128_t v1_1
                int128_t v2_1
                
                if (x0_1 != x26_1)
                    x0_3, v0_1, v1_1, v2_1, v3_1 = FateDeckWhere(arg3, 0xd3d)
                
                if (x0_1 != x26_1 && x0_3 != x26_1)
                    int32_t x8_37 = *(arg4 + 0x1c)
                    
                    if (x8_37 s<= 0x45e)
                        if (x8_37 == 0x3ea)
                            x3 = 0x3e
                        else
                            if (x8_37 == 0x3ec)
                                x3 = x24_1 == 0 ? 0x3d : 0x3e
                                
                                goto label_c0e248
                            
                            if (x8_37 != 0x44e)
                                x3 = 0x3b
                            else
                                int32_t x8_42 = *(arg4 + 0x20)
                                
                                if (x8_42 == 0xffffffff)
                                    x3 = 0x41
                                else
                                    if (x8_42 != 0)
                                        v3_1 = *(arg4 + 0x10)
                                        int128_t var_70_2 = *(arg4 + 0x20)
                                        int128_t var_60_2 = *(arg4 + 0x30)
                                        var_90 = *arg4
                                        int128_t var_80_2 = v3_1
                                        var_80_2:0xc.d = 0x3eb
                                        return LogDoReplacements(zx.q(x23), zx.q(x21), &var_90, 
                                            0x3e, arg2, x24_1.b, 0)
                                    
                                    x3 = 0x40
                    else if (x8_37 - 0x460 u< 3 || x8_37 == 0x45f)
                        x3 = 0x3f
                    else
                        x3 = 0x3b
                else
                    x3 = 0x60
            else
                int32_t x8_3 = *(arg4 + 0x20)
                
                if (x8_3 == 0xffffffff)
                    x3 = 0x41
                else
                    if (x8_3 != 0)
                        goto label_c0dc60
                    
                    x3 = 0x40
            
            return LogDoReplacements(zx.q(x23), zx.q(x21), arg4, x3, arg2, x24_1.b, 0) __tailcall
        case 0x27, 0x28
            x5 |= x10 == 0x2a ? 1 : 0
            x3 = 0x3c
        label_c0e250:
            return LogDoReplacements(zx.q(x23), zx.q(x21), arg4, x3, arg2, x5.b, 0) __tailcall
        case 0x29
            x3 = 0x43
            goto label_c0e248
        case 0x2a
            x3 = 0x35
            goto label_c0e250
        case 0x2b
            x3 = 0x32
            goto label_c0e248
        case 0x2c, 0x2d
            x5 |= x10 == 0x2f ? 1 : 0
            x3 = 0x1d
            goto label_c0e250
        case 0x2e
            int32_t x8_23 = *(arg4 + 0x14)
            
            if (x8_23 s> 1)
                if ((x5 & 1) == 0)
                    goto label_c0e280
                
            label_c0e360:
                x3 = 0x36
                goto label_c0e250
            
            int32_t x9_7 = *(*(gLog + 0x28) + (sx.q(*(arg4 + 0x10)) << 3) + 4)
            
            if (((x5 | (x9_7 s< 2 ? 1 : 0)) & 1) == 0)
            label_c0e280:
                x3 = 0x38
                goto label_c0e250
            
            if (x8_23 != 1 || ((x5 | (x9_7 != 1 ? 1 : 0)) & 1) != 0)
                goto label_c0e360
            
            goto label_c0e244
        case 0x2f
            x3 = 0x39
            goto label_c0e248
        case 0x30, 0x31
        label_c0e244:
            x3 = 0x36
            goto label_c0e248
        case 0x32
            x3 = 0x46
            goto label_c0e248
        case 0x33
            x3 = 0x58
            goto label_c0e248
        case 0x34
            x3 = 0x54
            goto label_c0e248
        case 0x35
            x3 = 0x55
            goto label_c0e248
        case 0x36
            x3 = 0x6d
            goto label_c0e248
        case 0x38
            x3 = 0xd
            goto label_c0e248
        case 0x39
            x3 = 0x6e
            goto label_c0e248
        case 0x3b
            x3 = 0x6f
            goto label_c0e248
        case 0x3c
            x3 = 0x70
            goto label_c0e248
        case 0x3d
            x3 = 0x71
            goto label_c0e248
        case 0x3e
            x3 = 0x72
            goto label_c0e248
        case 0x3f
            x3 = 0x73
            goto label_c0e248
        case 0x40
            x3 = 0x74
            goto label_c0e248
        case 0x41
            if (x9 != 0xffffffff)
                int32_t x8_24 = *(arg4 + 0x1c)
                
                if (x8_24 == 0x461 || x8_24 == 0x45f)
                    XString::XString(&var_90)
                    x3_1 = 0x78
                else
                    XString::XString(&var_90)
                    x3_1 = 0x77
            else if (*(arg4 + 0x14) == 0)
                XString::XString(&var_90)
                x3_1 = 0x79
            else
                XString::XString(&var_90)
                x3_1 = 0x7a
            
            goto label_c0e500
        case 0x42
            XString::XString(&var_90)
            x3_1 = 0x85
        label_c0e500:
            x5_2 = true
            x0_25 = zx.q(x23)
            x1_19 = zx.q(x21)
            x2_5 = arg4
            x4_4 = arg2
            x6_3 = 0
            goto label_c0e518
        case 0x43
            if (*(arg4 + 0x20) == 0)
                XString::XString(&var_90)
                x3_1 = 0x86
            else
                XString::XString(&var_90)
                x3_1 = 0x87
            
            goto label_c0e500
        case 0x44
            XString::XString(&var_90)
            x3_1 = 0x7b
            goto label_c0e500
        case 0x45
            XString::XString(&var_90)
            x3_1 = 0x7c
            goto label_c0e500
        case 0x46
            XString::XString(&var_90)
            x3_1 = 0x7e
            goto label_c0e500
        case 0x47
            XString::XString(&var_90)
            x3_1 = 0x7d
            goto label_c0e500
        case 0x48
            if ((*(arg4 + 0x20) & 0x80000000) != 0)
                XString::XString(&var_90)
                x3_1 = 0x81
            else
                XString::XString(&var_90)
                x3_1 = 0x82
            
            goto label_c0e500
        case 0x49
            XString::XString(&var_90)
            x3_1 = 0x84
            goto label_c0e500
        case 0x4a
            XString::XString(&var_90)
            x3_1 = 0x8a
            goto label_c0e500
        case 0x4b
            XString::XString(&var_90)
            x3_1 = 0x88
            goto label_c0e500
        case 0x4c
            XString::XString(&var_90)
            x3_1 = 0x7f
            x6_3 = 4
            x0_25 = zx.q(x23)
            x1_19 = zx.q(x21)
            x2_5 = arg4
            x4_4 = arg2
            x5_2 = false
        label_c0e518:
            LogDoReplacements(x0_25, x1_19, x2_5, x3_1, x4_4, x5_2, x6_3)
            XString::operator+(&var_90)
            XString::~XString()
            return XString::~XString()
        case 0x4d
            XString::XString(&var_90)
            x3_1 = 0x83
            goto label_c0e500
        case 0x4e
            XString::XString(&var_90)
            x3_1 = 0x80
            goto label_c0e500
        case 0x4f
            int32_t x8_27 = *(arg4 + 0x14)
            
            if (*(arg4 + 0x20) == 0)
                if (x8_27 == 0)
                    LogDoReplacements(zx.q(x23), zx.q(x21), arg4, 0x8b, arg2, true, 0)
                    void var_b0
                    TryCapitalize(&var_b0)
                else
                    LogDoReplacements(zx.q(x23), zx.q(x21), arg4, 0x8c, arg2, true, 0)
                    void var_a8
                    TryCapitalize(&var_a8)
            else if (x8_27 == 0)
                LogDoReplacements(zx.q(x23), zx.q(x21), arg4, 0x8d, arg2, true, 0)
                void var_a0
                TryCapitalize(&var_a0)
            else
                LogDoReplacements(zx.q(x23), zx.q(x21), arg4, 0x8e, arg2, true, 0)
                void var_98
                TryCapitalize(&var_98)
            
            return XString::~XString()
        case 0x50
            return LogDoReplacements_Hint(zx.q(x23), arg4, 0x1e, arg2, 0x21) __tailcall

pthread_kill(pthread_self(), 6)
return RemoveFormatting(XNoReturn()) __tailcall
