// 函数: _Z8PodClickRK12UI2ClickInfo
// 地址: 0xb15c50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_238[0x208]
XString::XString(&var_238)
int32_t x0_2 = operator==(&var_238, *(arg1 + 8))
XString::~XString()
int32_t x19_1

if ((x0_2 & 1) == 0)
    char* x20_1 = *(arg1 + 8)
    XString::XString(&var_238)
    int32_t x0_5 = operator==(x20_1, &var_238)
    XString::~XString()
    
    if ((x0_5 & 1) == 0)
        char* x20_3 = *(arg1 + 8)
        XString::XString(&var_238)
        int32_t x0_8 = operator==(x20_3, &var_238)
        XString::~XString()
        
        if ((x0_8 & 1) == 0)
            XString::XString(&var_238)
            
            if ((operator==(&var_238, *(arg1 + 8)) & 1) == 0)
                char var_240
                XString::XString(&var_240)
                int32_t x0_18 = operator==(&var_240, *(arg1 + 8))
                XString::~XString()
                XString::~XString()
                
                if ((x0_18 & 1) != 0)
                    goto label_b15dd0
            else
                XString::~XString()
            label_b15dd0:
                uint64_t x9_4 = zx.q(*(arg1 + 0x24))
                int64_t x10_2 = *(gDomClient + 0x205e0)
                DomGfx* x0_19 = x10_2 + x9_4 * 0x21d8
                int32_t x11_1 = *(x0_19 + 0x5c)
                
                if (x11_1 == 0x3ee || x11_1 == 3)
                label_b15e14:
                    
                    if (*(gDomClient + 0x1f8e4) != *(x0_19 + 0x21d0))
                        DomExpandPile(x0_19, false)
                    else
                        DomMinimizePile(x0_19)
                else if (x11_1 - 0x44c u<= 0x27)
                    if (*(x10_2 + x9_4 * 0x21d8 + 0x2c) == 3)
                        goto label_b15e14
                    
                    DomZoomCard(x0_19, false)
                else if (x11_1 == 0x3e9)
                    goto label_b15e14
            
            x19_1 = 0
        else
            int32_t x0_9 = LocalWho()
            void* x0_12 = GameGetPlayer(ActiveGame() + 8, zx.q(x0_9))
            uint64_t x8_2 = zx.q(*(x0_12 + 0x228))
            int32_t x21_1
            
            if (x8_2.d s< 1)
            label_b15d64:
                x21_1 = 5
            else
                void* x9_3 = x0_12 + 0x2c
                
                while (*(x9_3 - 4) != 7)
                    uint64_t temp0_1 = x8_2
                    x8_2 -= 1
                    x9_3 += 8
                    
                    if (temp0_1 == 1)
                        goto label_b15d64
                
                x21_1 = *x9_3
            
            void* x0_20 = GetActiveProfile()
            int32_t x8_4 = *(x0_20 + 0x5960)
            
            if (x8_4 == 0)
                DefaultSmartplays()
                CopySmartplays(x0_20 + 0x5760, &var_238)
                x8_4 = *(x0_20 + 0x5960)
            
            if (x8_4 s< 1)
            label_b15ea0:
                *(x0_20 + 0x5960) = x8_4 + 1
                *(x0_20 + (sx.q(x8_4) << 3) + 0x5760) = 7
                *(x0_20 + (sx.q(x8_4) << 3) + 0x5764) = x21_1
            else
                uint64_t x9_6 = zx.q(x8_4)
                void* x10_3 = x0_20 + 0x5764
                
                while (*(x10_3 - 4) != 7)
                    uint64_t temp1_1 = x9_6
                    x9_6 -= 1
                    x10_3 += 8
                    
                    if (temp1_1 == 1)
                        goto label_b15ea0
                
                *x10_3 = x21_1
            
            *(GetActiveProfile() + 0x42e8) = CurrentDateTime()
            SaveProfiles()
            x19_1 = 1
    else
        x19_1 = 1
        ToggleSmartplaySetting(7, 1)
else
    x19_1 = 1
    *(gDomClient + 0x1d000) ^= 1

return zx.q(x19_1)
