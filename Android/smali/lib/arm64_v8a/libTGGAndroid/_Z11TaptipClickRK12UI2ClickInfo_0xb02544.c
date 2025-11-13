// 函数: _Z11TaptipClickRK12UI2ClickInfo
// 地址: 0xb02544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_238[0x208]
XString::XString(&var_238)
int32_t x0_2 = operator==(&var_238, *(arg1 + 8))
XString::~XString()
int32_t x19_1

if ((x0_2 & 1) == 0)
    XString::XString(&var_238)
    int32_t x0_5 = operator==(&var_238, *(arg1 + 8))
    XString::~XString()
    
    if ((x0_5 & 1) == 0)
        XString::XString(&var_238)
        int32_t x0_8 = operator==(&var_238, *(arg1 + 8))
        XString::~XString()
        
        if ((x0_8 & 1) != 0)
            int32_t x0_9 = LocalWho()
            void* x0_12 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_9))
            uint64_t x8_2 = zx.q(*(x0_12 + 0x228))
            int32_t x21_1
            
            if (x8_2.d s< 1)
            label_b02650:
                x21_1 = 1
            else
                void* x9_3 = x0_12 + 0x2c
                
                while (*(x9_3 - 4) != 0x16)
                    uint64_t temp0_1 = x8_2
                    x8_2 -= 1
                    x9_3 += 8
                    
                    if (temp0_1 == 1)
                        goto label_b02650
                
                x21_1 = *x9_3
            
            void* x0_13 = GetActiveProfile()
            int32_t x8_3 = *(x0_13 + 0x5960)
            
            if (x8_3 != 0)
                if (x8_3 s>= 1)
                    goto label_b026ac
                
                goto label_b026e0
            
            DefaultSmartplays()
            CopySmartplays(x0_13 + 0x5760, &var_238)
            x8_3 = *(x0_13 + 0x5960)
            
            if (x8_3 s< 1)
            label_b026e0:
                *(x0_13 + 0x5960) = x8_3 + 1
                *(x0_13 + (sx.q(x8_3) << 3) + 0x5760) = 0x16
                *(x0_13 + (sx.q(x8_3) << 3) + 0x5764) = x21_1
            else
            label_b026ac:
                uint64_t x9_4 = zx.q(x8_3)
                void* x10_2 = x0_13 + 0x5764
                
                while (*(x10_2 - 4) != 0x16)
                    uint64_t temp1_1 = x9_4
                    x9_4 -= 1
                    x10_2 += 8
                    
                    if (temp1_1 == 1)
                        goto label_b026e0
                
                *x10_2 = x21_1
            
            *(GetActiveProfile() + 0x42e8) = CurrentDateTime()
            SaveProfiles()
        
        x19_1 = 0
    else
        x19_1 = 1
        ToggleSmartplaySetting(0x16, 1)
else
    x19_1 = 1
    *(gDomClient + 0x1d000) ^= 1

return zx.q(x19_1)
