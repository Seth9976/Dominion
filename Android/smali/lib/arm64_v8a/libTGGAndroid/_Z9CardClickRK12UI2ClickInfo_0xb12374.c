// 函数: _Z9CardClickRK12UI2ClickInfo
// 地址: 0xb12374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x19 = *(arg1 + 8)
int64_t var_248[0x41]
XString::XString(&var_248)
int32_t x0_2 = operator==(x19, &var_248)
XString::~XString()

if ((x0_2 & 1) == 0)
    char* x21_1 = *(arg1 + 8)
    XString::XString(&var_248)
    int32_t x0_6 = operator==(x21_1, &var_248)
    XString::~XString()
    
    if ((x0_6 & 1) != 0)
        *(gDomClient + 0x1d000) ^= 1
    
    char* x21_3 = *(arg1 + 8)
    XString::XString(&var_248)
    int32_t x0_9 = operator==(x21_3, &var_248)
    XString::~XString()
    
    if ((x0_9 & 1) != 0)
        uint32_t x10_1 = zx.d(*(gDomClient + 0x1d01c))
        int64_t x9_4 = *(gDomClient + 0x205e0)
        
        while (true)
            uint64_t x10_2 = zx.q(x10_1) & 0xffff
            int32_t x12_2 = *(x9_4 + mulu.dp.d(x10_2.d, 0x21d8) + 0x2c)
            uint64_t x0_10
            
            if (x12_2 != 3)
                if (x12_2 == 5)
                    x0_10 = zx.q(*(x9_4 + x10_2 * 0x21d8 + 0x204))
                else if (x12_2 == 1)
                    x0_10 = zx.q(*(x9_4 + x10_2 * 0x21d8 + 0x170))
                else
                    if (x12_2 != 0)
                        goto label_b12770
                    
                    x0_10 = CardWhat(gDomClient + 0x20728, zx.q(*(x9_4 + x10_2 * 0x21d8 + 0x98)))
                
            label_b12528:
                GetSmartplayDefs(x0_10, &var_248)
                ToggleSmartplaySetting(zx.q(*var_248[sx.q(*(arg1 + 0x10))]), 1)
                break
            
            x0_10 = zx.q(*(x9_4 + x10_2 * 0x21d8 + 0x30))
            
            if (x0_10.d == 0x70d)
                goto label_b12528
            
            if (x0_10.d == 0x718)
                goto label_b12528
            
            x10_1 = *(x9_4 + x10_2 * 0x21d8 + 0x70)
            
            if (x10_1 == 0)
                goto label_b12528
    
    char* x21_5 = *(arg1 + 8)
    XString::XString(&var_248)
    int32_t x0_15 = operator==(x21_5, &var_248)
    XString::~XString()
    
    if ((x0_15 & 1) != 0)
        uint32_t x10_4 = zx.d(*(gDomClient + 0x1d01c))
        int64_t x9_6 = *(gDomClient + 0x205e0)
        
        while (true)
            uint64_t x10_5 = zx.q(x10_4) & 0xffff
            int32_t x12_5 = *(x9_6 + mulu.dp.d(x10_5.d, 0x21d8) + 0x2c)
            uint64_t x0_16
            
            if (x12_5 != 3)
                if (x12_5 == 5)
                    x0_16 = zx.q(*(x9_6 + x10_5 * 0x21d8 + 0x204))
                else if (x12_5 == 1)
                    x0_16 = zx.q(*(x9_6 + x10_5 * 0x21d8 + 0x170))
                else
                    if (x12_5 != 0)
                        break
                    
                    x0_16 = CardWhat(gDomClient + 0x20728, zx.q(*(x9_6 + x10_5 * 0x21d8 + 0x98)))
                
            label_b12628:
                SmartPlayDef* var_258[0x2]
                GetSmartplayDefs(x0_16, &var_258)
                int32_t x22_1 = *var_258[sx.q(*(arg1 + 0x10))]
                int32_t x0_18 = LocalWho()
                void* x0_21 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_18))
                int32_t x0_23 = GetSmartplayDefault(zx.q(x22_1))
                uint64_t i_2 = zx.q(*(x0_21 + 0x228))
                int32_t x21_8 = x0_23
                
                if (i_2.d s>= 1)
                    void* x9_8 = x0_21 + 0x2c
                    uint64_t i
                    
                    do
                        if (*(x9_8 - 4) == x22_1)
                            x21_8 = *x9_8
                            break
                        
                        i = i_2
                        i_2 -= 1
                        x9_8 += 8
                    while (i != 1)
                
                int32_t i_1 = *var_258[sx.q(*(arg1 + 0x10))]
                void* x0_24 = GetActiveProfile()
                int32_t x8_13 = *(x0_24 + 0x5960)
                
                if (x8_13 != 0)
                    if (x8_13 s>= 1)
                        goto label_b126ec
                    
                    goto label_b12718
                
                DefaultSmartplays()
                CopySmartplays(x0_24 + 0x5760, &var_248)
                x8_13 = *(x0_24 + 0x5960)
                int64_t x9_9
                
                if (x8_13 s< 1)
                label_b12718:
                    x9_9 = sx.q(x8_13)
                    *(x0_24 + 0x5960) = x8_13 + 1
                    *(x0_24 + (sx.q(x8_13) << 3) + 0x5760) = i_1
                else
                label_b126ec:
                    x9_9 = 0
                    void* x11_1 = x0_24 + 0x5760
                    
                    while (*x11_1 != i_1)
                        x9_9 += 1
                        x11_1 += 8
                        
                        if (zx.q(x8_13) == x9_9)
                            goto label_b12718
                
                *(x0_24 + (x9_9 << 3) + 0x5764) = x21_8
                *(GetActiveProfile() + 0x42e8) = CurrentDateTime()
                SaveProfiles()
                return zx.q(x0_2) & 1
            
            x0_16 = zx.q(*(x9_6 + x10_5 * 0x21d8 + 0x30))
            
            if (x0_16.d == 0x70d)
                goto label_b12628
            
            if (x0_16.d == 0x718)
                goto label_b12628
            
            x10_4 = *(x9_6 + x10_5 * 0x21d8 + 0x70)
            
            if (x10_4 == 0)
                goto label_b12628
        
    label_b12770:
        pthread_kill(pthread_self(), 6)
        uint64_t x0_30
        SmartPlayDef** x1_15
        x0_30, x1_15 = XNoReturn()
        return GetSmartplayDefs(x0_30, x1_15) __tailcall
else
    DomGfxActivate(*(gDomClient + 0x205e0) + zx.q(*(arg1 + 0x24)) * 0x21d8, V20, true, false, true)

return zx.q(x0_2) & 1
