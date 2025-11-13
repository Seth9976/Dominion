// 函数: _Z31DomCreateUpdateRulesCustomClickRK12UI2ClickInfo
// 地址: 0xb2f340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
char var_19b0[0x990]
XString::XString(&var_19b0)

if ((operator==(x20, &var_19b0) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(7, false)
else
    XString::~XString()
    GameDlgManagerDismiss(7, false)

data_11ad3a0
char* x20_2 = *(arg1 + 8)
XString::XString(&var_19b0)
int32_t x0_5 = operator==(x20_2, &var_19b0)
XString::~XString()

if ((x0_5 & 1) == 0)
label_b2f434:
    data_11ad3a8
    char* x20_5 = *(arg1 + 8)
    XString::XString(&var_19b0)
    int32_t x0_10 = operator==(x20_5, &var_19b0)
    XString::~XString()
    
    if ((x0_10 & 1) == 0)
    label_b2f4d0:
        data_11ad3b0
        char* x20_8 = *(arg1 + 8)
        XString::XString(&var_19b0)
        int32_t x0_15 = operator==(x20_8, &var_19b0)
        XString::~XString()
        
        if ((x0_15 & 1) == 0)
        label_b2f56c:
            data_11ad3b8
            char* x20_11 = *(arg1 + 8)
            XString::XString(&var_19b0)
            int32_t x0_20 = operator==(x20_11, &var_19b0)
            XString::~XString()
            
            if ((x0_20 & 1) == 0)
                return 0
            
            GameSetup* x0_21 = GetActiveGameSetup()
            GetKingdomConfig(x0_21)
            uint64_t x8_4 = zx.q(*(arg1 + 0x10))
            
            if (x8_4.d u<= 3)
                switch (x8_4)
                    case 0
                        int32_t var_2b4_4 = 3
                    case 1
                        int32_t var_2b0_4 = 3
                    case 2
                        int32_t var_2ac_4 = 3
                    case 3
                        int32_t var_2a8_4 = 3
                
                SaveSetupData(x0_21, &var_19b0)
                return 0
        else
            GameSetup* x0_16 = GetActiveGameSetup()
            GetKingdomConfig(x0_16)
            uint64_t x8_3 = zx.q(*(arg1 + 0x10))
            
            if (x8_3.d u<= 3)
                switch (x8_3)
                    case 0
                        int32_t var_2b4_3 = 2
                    case 1
                        int32_t var_2b0_3 = 2
                    case 2
                        int32_t var_2ac_3 = 2
                    case 3
                        int32_t var_2a8_3 = 2
                
                SaveSetupData(x0_16, &var_19b0)
                goto label_b2f56c
    else
        GameSetup* x0_11 = GetActiveGameSetup()
        GetKingdomConfig(x0_11)
        uint64_t x8_2 = zx.q(*(arg1 + 0x10))
        
        if (x8_2.d u<= 3)
            switch (x8_2)
                case 0
                    int32_t var_2b4_2 = 1
                case 1
                    int32_t var_2b0_2 = 1
                case 2
                    int32_t var_2ac_2 = 1
                case 3
                    int32_t var_2a8_2 = 1
            
            SaveSetupData(x0_11, &var_19b0)
            goto label_b2f4d0
else
    GameSetup* x0_6 = GetActiveGameSetup()
    GetKingdomConfig(x0_6)
    uint64_t x8_1 = zx.q(*(arg1 + 0x10))
    
    if (x8_1.d u<= 3)
        switch (x8_1)
            case 0
                int32_t var_2b4_1 = 0
            case 1
                int32_t var_2b0_1 = 0
            case 2
                int32_t var_2ac_1 = 0
            case 3
                int32_t var_2a8_1 = 0
        
        SaveSetupData(x0_6, &var_19b0)
        goto label_b2f434

pthread_kill(pthread_self(), 6)
PileInclude* x0_25
int32_t x1_14
x0_25, x1_14 = XNoReturn()
return ToggleTristate(x0_25, x1_14) __tailcall
