// 函数: _Z22DomSetupConfigToStringRK14DomSetupConfigi14DomConfigStyle
// 地址: 0x9e5380
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_2a4 = arg3
XString::XString()
int64_t x21 = 0
int32_t x8

x8 = arg2 s<= 0xb ? 3 : 1

while (true)
    void* x19_1 = arg1 + x21
    
    if (*(x19_1 + 0x9c8) != 0)
        char var_68
        
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_68)
        
        int32_t x8_3 = *(x19_1 + 0x9c8) - 2
        
        if (x8_3 u>= 0x12)
            break
        
        *(mulu.dp.d(x8_3, 0x28) + &data_1124880)
        XString::operator+=(&var_68)
        uint64_t x9_1 = zx.q(*(x19_1 + 0x9c8) - 2)
        
        if (x9_1.d u> 0x11)
            break
        
        void* x26_1 = arg1 + x21
        int32_t x8_6 = *(x26_1 + 0x9cc)
        int32_t x9_2 = 1
        
        switch (x9_1)
            case 0, 1
                goto label_9e54d4
            case 2
                if (x8_6 != x8)
                    goto label_9e54dc
                
                goto label_9e5528
            case 3, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10
            label_9e54a0:
                
                if (x8_6 != 0)
                label_9e54dc:
                    uint64_t x8_7 = zx.q(x8_6 + 1)
                    
                    if (x8_7.d u> 3)
                        break
                    
                    switch (x8_7)
                        case 1
                            XString::operator+=(&var_68)
                        case 2
                            XString::operator+=(&var_68)
                        case 3
                            XString::operator+=(&var_68)
                    
                    goto label_9e5528
                
            label_9e5528:
                void* x8_8 = arg1 + x21
                
                if (*(x8_8 + 0x9d0) != 0 || *(x8_8 + 0x9d4) != 0xa)
                    XFormatString("(%d,%d)")
                    XString::operator char const*()
                    XString::operator+=(&var_68)
                    XString::~XString()
            case 4
                if (arg2 s> 0xd)
                    goto label_9e5550
                
                goto label_9e54d0
            case 5, 6
                if (arg2 s<= 0xe)
                    goto label_9e54d0
                
            label_9e5550:
                
                if (x8_6 != 1)
                    goto label_9e54dc
                
                goto label_9e5528
            case 7
            label_9e54d0:
                x9_2 = 0
            label_9e54d4:
                
                if (x8_6 == x9_2)
                    goto label_9e5528
                
                goto label_9e54dc
            case 8
                if (arg2 s<= 0x14)
                    goto label_9e54a0
                
                goto label_9e5550
            case 0x11
                if (x8_6 != 0)
                    XString::operator+=(&var_68)
                    int32_t x19_2 = *(x26_1 + 0x9cc)
                    int32_t x8_9
                    
                    if ((x19_2 & 1) != 0)
                        XString::operator+=(&var_68)
                        int32_t x9_5 = *(x26_1 + 0x9cc)
                        
                        if ((x9_5 & 2) != 0)
                            XString::operator+=(&var_68)
                        label_9e55c8:
                            XString::operator+=(&var_68)
                            x19_2 = *(x26_1 + 0x9cc)
                            
                            if ((x19_2 & 4) != 0)
                                goto label_9e55dc
                            
                            x8_9 = 1
                        else if ((x9_5 & 4) != 0)
                        label_9e55dc:
                            XString::operator+=(&var_68)
                        label_9e55ec:
                            XString::operator+=(&var_68)
                            x19_2 = *(x26_1 + 0x9cc)
                            x8_9 = 1
                        else
                            x8_9 = x19_2 & 1
                            x19_2 = x9_5
                    else
                        if ((x19_2 & 2) != 0)
                            goto label_9e55c8
                        
                        if ((x19_2 & 4) != 0)
                            goto label_9e55ec
                        
                        x8_9 = x19_2 & 1
                    
                    if ((x19_2 & 8) != 0)
                        if (x8_9 != 0)
                            XString::operator+=(&var_68)
                        
                        XString::operator+=(&var_68)
                    
                    XString::operator+=(&var_68)
        
        x21 += 0x10
        
        if (x21 != 0x200)
            continue
    
    ExportKingdomString(arg1)
    XString::XString()
    int32_t x8_10 = *(arg1 + 0xbfc)
    char var_78
    int32_t x23_1
    
    if (x8_10 == 2)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        x23_1 = var_2a4
        XString::operator+=(&var_78)
    else
        x23_1 = var_2a4
        
        if (x8_10 == 1)
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_78)
            
            XString::operator+=(&var_78)
    
    int32_t x8_11 = *(arg1 + 0xc00)
    
    if (x8_11 == 2)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator+=(&var_78)
    else if (x8_11 == 1)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator+=(&var_78)
    
    int32_t x8_12 = *(arg1 + 0x16f4)
    int32_t x8_13
    
    if ((x8_12 & 1) != 0)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator+=(&var_78)
        x8_13 = *(arg1 + 0x16f4)
        
        if ((x8_13 & 4) == 0)
            goto label_9e5730
        
        goto label_9e57b4
    
    if ((x8_12 & 2) != 0)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator+=(&var_78)
        x8_13 = *(arg1 + 0x16f4)
        
        if ((x8_13 & 4) != 0)
            goto label_9e57b4
    else
        x8_13 = *(arg1 + 0x16f4)
        
        if ((x8_13 & 4) != 0)
        label_9e57b4:
            
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_78)
            
            XString::operator+=(&var_78)
            x8_13 = *(arg1 + 0x16f4)
            
            if ((x8_13 & 8) == 0)
                goto label_9e5734
            
            goto label_9e57e8
    
label_9e5730:
    
    if ((x8_13 & 8) != 0)
    label_9e57e8:
        
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator+=(&var_78)
        x8_13 = *(arg1 + 0x16f4)
        
        if ((x8_13 & 0x10) == 0)
            goto label_9e5738
        
        goto label_9e581c
    
label_9e5734:
    
    if ((x8_13 & 0x10) != 0)
    label_9e581c:
        
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator+=(&var_78)
        x8_13 = *(arg1 + 0x16f4)
        
        if ((x8_13 & 0x20) == 0)
            goto label_9e573c
        
        goto label_9e5850
    
label_9e5738:
    
    if ((x8_13 & 0x20) != 0)
    label_9e5850:
        
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator+=(&var_78)
        
        if ((*(arg1 + 0x16f4) & 0x40) != 0)
            goto label_9e5884
    else
    label_9e573c:
        
        if ((x8_13 & 0x40) != 0)
        label_9e5884:
            
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_78)
            
            XString::operator+=(&var_78)
    
    int128_t var_290
    XString::XString(&var_290)
    int64_t var_80 = 0x200000000
    AddLandscapeModifierStr(&var_78, arg1 + 0xbc8, &var_290, &var_80)
    XString::~XString()
    XString::XString(&var_290)
    var_80 = 0x200000000
    AddLandscapeModifierStr(&var_78, arg1 + 0xbd0, &var_290, &var_80)
    XString::~XString()
    XString::XString(&var_290)
    var_80 = 0x200000000
    AddLandscapeModifierStr(&var_78, arg1 + 0xbd8, &var_290, &var_80)
    XString::~XString()
    XString::XString(&var_290)
    var_80 = 0x200000000
    AddLandscapeModifierStr(&var_78, arg1 + 0xbe0, &var_290, &var_80)
    XString::~XString()
    XString::XString(&var_290)
    var_80 = 0x100000000
    AddLandscapeModifierStr(&var_78, arg1 + 0xbe8, &var_290, &var_80)
    XString::~XString()
    XString::XString(&var_290)
    var_80 = 0x200000000
    AddLandscapeModifierStr(&var_78, arg1 + 0xbf0, &var_290, &var_80)
    XString::~XString()
    uint32_t x19_3 = zx.d(*(arg1 + 0xbf8))
    XString::XString(&var_290)
    
    if (x19_3 != 0)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator char const*()
        XString::operator+=(&var_78)
    
    XString::~XString()
    uint32_t x19_4 = zx.d(*(arg1 + 0xbf9))
    XString::XString(&var_290)
    
    if (x19_4 != 0)
        if ((XString::IsEmpty() & 1) == 0)
            XString::operator+=(&var_78)
        
        XString::operator char const*()
        XString::operator+=(&var_78)
    
    XString::~XString()
    XString::XString()
    
    if (x23_1 != 1)
        int64_t x22_8 = 0
        
        while (*(arg1 + 0xc04 + x22_8) != 0)
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_80)
            
            GetCardName(0, zx.q(*(arg1 + 0xc04 + x22_8)))
            XString::operator char const*()
            XString::operator+=(&var_80)
            XString::~XString()
            x22_8 += 4
            
            if (x22_8 == 0xaf0)
                break
    else
        int64_t x22_7 = 0
        
        while (*(arg1 + 0xc04 + x22_7) != 0)
            if ((XString::IsEmpty() & 1) == 0)
                XString::operator+=(&var_80)
            
            *(DomDefGet(zx.q(*(arg1 + 0xc04 + x22_7)), 0x17) + 0x58)
            XString::XString(&var_290)
            XString::operator char const*()
            XString::operator+=(&var_80)
            XString::~XString()
            x22_7 += 4
            
            if (x22_7 == 0xaf0)
                break
    
    XString::XString()
    uint64_t x8_17 = zx.q(*(arg1 + 0x16f8))
    char var_88
    
    if (x8_17.d u<= 4)
        switch (x8_17)
            case 0
                goto label_9e5d6c
            case 3
                XString::operator=(&var_88)
            label_9e5d6c:
                XString::XString()
                XString::XString()
                char* entry_x8
                
                if ((XString::IsEmpty() & 1) == 0)
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(entry_x8)
                    
                    XString::GetString()
                    XFormatString("-e %s")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    XString::~XString()
                    
                    if ((XString::IsEmpty() & 1) != 0)
                        goto label_9e5d94
                    
                    goto label_9e5e28
                
                if ((XString::IsEmpty() & 1) == 0)
                label_9e5e28:
                    
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(entry_x8)
                    
                    XString::GetString()
                    XFormatString("-k %s")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    XString::~XString()
                    
                    if ((XString::IsEmpty() & 1) != 0)
                        goto label_9e5da0
                    
                    goto label_9e5e88
                
            label_9e5d94:
                
                if ((XString::IsEmpty() & 1) == 0)
                label_9e5e88:
                    
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(entry_x8)
                    
                    XString::GetString()
                    XFormatString("-m %s")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    XString::~XString()
                    
                    if ((XString::IsEmpty() & 1) != 0)
                        goto label_9e5dac
                    
                    goto label_9e5ee8
                
            label_9e5da0:
                
                if ((XString::IsEmpty() & 1) == 0)
                label_9e5ee8:
                    
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(entry_x8)
                    
                    XString::GetString()
                    XFormatString("-b %s")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    XString::~XString()
                    
                    if ((XString::IsEmpty() & 1) != 0)
                        goto label_9e5db8
                    
                    goto label_9e5f48
                
            label_9e5dac:
                int32_t x11_3
                uint64_t x12
                
                if ((XString::IsEmpty() & 1) == 0)
                label_9e5f48:
                    
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(entry_x8)
                    
                    XString::GetString()
                    XFormatString("-r %s")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    XString::~XString()
                    int32_t x0_139
                    x0_139, x11_3, x12 = XString::IsEmpty()
                    
                    if ((x0_139 & 1) == 0)
                        goto label_9e5fa8
                else
                label_9e5db8:
                    int32_t x0_104
                    x0_104, x11_3, x12 = XString::IsEmpty()
                    
                    if ((x0_104 & 1) == 0)
                    label_9e5fa8:
                        
                        if ((XString::IsEmpty() & 1) == 0)
                            XString::operator+=(entry_x8)
                        
                        XString::GetString()
                        XFormatString("-s %s")
                        XString::operator char const*()
                        XString::operator+=(entry_x8)
                        x11_3, x12 = XString::~XString()
                
                int64_t i = 0
                void* __offset(DomSetupConfig, 0x1d4) x9_6 = arg1 + 0x1d4
                __builtin_memset(&var_290, 0, 0x200)
                
                do
                    int32_t x14_1 = *(x9_6 - 0x14)
                    int32_t x13_1
                    
                    if (x14_1 == 1)
                        x12 = zx.q(*(x9_6 - 0x10))
                        x13_1 = *(x9_6 - 4)
                        
                        if (x13_1 == 1)
                            goto label_9e609c
                        
                        goto label_9e6078
                    
                    x13_1 = *(x9_6 - 4)
                    
                    if (x13_1 == 1)
                    label_9e609c:
                        x11_3 = *x9_6
                        
                        if (x14_1 == 1)
                            goto label_9e6080
                        
                        goto label_9e60a8
                    
                label_9e6078:
                    
                    if (x14_1 != 1)
                    label_9e60a8:
                        
                        if (x13_1 == 1)
                            x12 = &var_290 + i
                            *(x12 + 4) = x11_3
                    else
                    label_9e6080:
                        *(&var_290 + i) = x12.d
                        
                        if (x13_1 == 1)
                            x12 = &var_290 + i
                            *(x12 + 4) = x11_3
                    
                    i += 8
                    x9_6 += 0x20
                while (i != 0x200)
                
                ToExtrasString(arg1 + 0x1710, &var_290)
                
                if ((XString::IsEmpty() & 1) == 0)
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(entry_x8)
                    
                    XString::GetString()
                    XFormatString("-x %s")
                    XString::operator char const*()
                    XString::operator+=(entry_x8)
                    XString::~XString()
                
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                XString::~XString()
                return XString::~XString()
            case 4
                XString::operator=(&var_88)
                XString::XString()
                
                if (*(arg1 + 0x1704) == 0)
                    goto label_9e5c4c
                
                if ((XString::IsEmpty() & 1) == 0)
                    XString::operator+=(&var_290)
                
                int32_t x8_19 = *(arg1 + 0x1704)
                
                if (x8_19 == 0 || x8_19 == 1)
                    XString::operator+=(&var_290)
                label_9e5c4c:
                    
                    if (*(arg1 + 0x1708) == 1)
                        goto label_9e5c94
                    
                    if ((XString::IsEmpty() & 1) == 0)
                        XString::operator+=(&var_290)
                    
                    int64_t x8_21 = sx.q(*(arg1 + 0x1708))
                    
                    if (x8_21.d u< 3)
                        (&data_1125998)[x8_21]
                        XString::operator+=(&var_290)
                    label_9e5c94:
                        
                        if (*(arg1 + 0x16fc) == 0)
                            goto label_9e5cd8
                        
                        if ((XString::IsEmpty() & 1) == 0)
                            XString::operator+=(&var_290)
                        
                        int64_t x8_23 = sx.q(*(arg1 + 0x16fc))
                        
                        if (x8_23.d u< 3)
                            (&data_11259b0)[x8_23]
                            XString::operator+=(&var_290)
                        label_9e5cd8:
                            
                            if (*(arg1 + 0x1700) == 2)
                                goto label_9e5d20
                            
                            if ((XString::IsEmpty() & 1) == 0)
                                XString::operator+=(&var_290)
                            
                            int64_t x8_25 = sx.q(*(arg1 + 0x1700))
                            
                            if (x8_25.d u< 4)
                                (&data_11259c8)[x8_25]
                                XString::operator+=(&var_290)
                            label_9e5d20:
                                
                                if ((XString::IsEmpty() & 1) == 0)
                                    XString::GetString()
                                    XFormatString(":%s")
                                    XString::operator char const*()
                                    XString::operator+=(&var_88)
                                    XString::~XString()
                                
                                XString::~XString()
                                goto label_9e5d6c
    break

pthread_kill(pthread_self(), 6)
int32_t x0_156
DomExpansion* x1_99
x0_156, x1_99 = XNoReturn()
return CollectActiveExpansions_Old(x0_156, x1_99) __tailcall
