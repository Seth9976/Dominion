// 函数: _Z27DomMatchmakingSettingsClickRK12UI2ClickInfo
// 地址: 0xb2baec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_100
XString::XString(&var_100)

if ((operator==(*(arg1 + 8), &var_100) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerDismiss(7, false)
else
    XString::~XString()
    GameDlgManagerDismiss(7, false)

char* x20_2 = *(arg1 + 8)
XString::XString(&var_100)
int32_t x0_5 = operator==(x20_2, &var_100)
XString::~XString()

if ((x0_5 & 1) != 0)
    GameDlgManagerDismiss(7, false)
    int64_t x1_4
    
    if (*gMatchmakingSettingsDlg == 1)
        x1_4 = 0x11
    else
        x1_4 = 0x13
    
    GameDialogOpenStore(0, x1_4, 0x7f1)

char* x20_4 = *(arg1 + 8)
XString::XString(&var_100)
int32_t x0_8 = operator==(x20_4, &var_100)
XString::~XString()

if ((x0_8 & 1) != 0)
    uint32_t x8_3
    
    if (*gMatchmakingSettingsDlg != 1)
        x8_3 = 2
    else
        x8_3 = 1
    
    *gKingdomExpansionStyle = x8_3
    GameDlgManagerShow(0x7ee, 7)

char* x20_6 = *(arg1 + 8)
XString::XString(&var_100)
int32_t x0_11 = operator==(x20_6, &var_100)
XString::~XString()

if ((x0_11 & 1) != 0)
    int32_t* x8_4 = GetActiveProfile() + 0x7570
    int32_t x9_1 = *x8_4
    int32_t x9_2
    
    if (x9_1 == 0xffffffff)
        x9_2 = 0
    else if (x9_1 != 0x10)
        x9_2 = x9_1 + 1
    else
        x9_2 = -1
    
    *x8_4 = x9_2
    SaveProfiles()

char* x20_8 = *(arg1 + 8)
XString::XString(&var_100)
int32_t x0_15 = operator==(x20_8, &var_100)
XString::~XString()

if ((x0_15 & 1) != 0)
    int32_t* x8_5 = GetActiveProfile() + 0x7570
    int32_t x9_3 = *x8_5
    int32_t x9_4
    
    if (x9_3 == 0)
        x9_4 = -1
    else if (x9_3 != 0xffffffff)
        x9_4 = x9_3 - 1
    else
        x9_4 = 0x10
    
    *x8_5 = x9_4
    SaveProfiles()

int32_t x25 = 0

for (char const (** i)[0x6] = &data_11ad3a0; i != &data_11ad3c0; )
    *i
    char* x21_1 = *(arg1 + 8)
    XString::XString(&var_100)
    int32_t x0_19 = operator==(x21_1, &var_100)
    XString::~XString()
    
    if ((x0_19 & 1) != 0)
        void* x0_20 = GetActiveProfile()
        int32_t x9_5 = *(arg1 + 0x10)
        
        if (x9_5 == 1)
            *(x0_20 + 0x756c) = x25
        else
            if (x9_5 != 0)
                pthread_kill(pthread_self(), 6)
                return DomCreateKindomExpansionsOpen(XNoReturn()) __tailcall
            
            *(x0_20 + 0x7560) = x25
            
            if (x25 != 0)
                int32_t var_1a0[0x28]
                int32_t j_1 = DomExpansionsFromBitset(zx.q(*(x0_20 + 0x7568)), &var_1a0)
                int32_t x28_1 = var_1a0[sx.q(j_1) - 1]
                int32_t* x21_3 = ExpansionEnumerator::begin()
                int64_t x0_25 = ExpansionEnumerator::end()
                
                if (x21_3 != x0_25)
                    int32_t j
                    
                    if (x28_1 == 0x13)
                        j = j_1 - 1
                    else
                        j = j_1
                    
                    while (j s<= 3)
                        int32_t k = *x21_3
                        
                        if (k != 0x13
                                && (ProfileHasEntitlementForExpansion(zx.q(k), nullptr) & 1) != 0)
                            int32_t x0_32 = DomExpansionsFromBitset(
                                zx.q(*(GetActiveProfile() + 0x7568)), &var_100)
                            
                            if (x0_32 s<= 0)
                            label_b2be74:
                                int32_t* x28_2 = GetActiveProfile() + 0x7568
                                int32_t x0_35 = DomExpansionsFromBitset(zx.q(*x28_2), &var_100)
                                uint64_t x1_14 = zx.q(x0_35)
                                uint64_t x8_12
                                
                                if (x0_35 s< 1)
                                    x8_12 = sx.q(x1_14.d)
                                label_b2bee0:
                                    x1_14 = zx.q(x1_14.d + 1)
                                    (&var_100)[x8_12] = k
                                else
                                    x8_12 = zx.q(x1_14.d)
                                    int32_t* x9_7 = &var_100
                                    uint64_t x10_2 = x8_12
                                    
                                    while (true)
                                        if (*x9_7 == k)
                                            x1_14 = sx.q(x1_14.d) - 1
                                            *x9_7 = (&var_100)[x1_14]
                                            break
                                        
                                        uint64_t temp0_1 = x10_2
                                        x10_2 -= 1
                                        x9_7 = &x9_7[1]
                                        
                                        if (temp0_1 == 1)
                                            int32_t* x9_8 = &var_100
                                            uint64_t x10_3 = x8_12
                                            
                                            while (*x9_8 != k)
                                                uint64_t temp1_1 = x10_3
                                                x10_3 -= 1
                                                x9_8 = &x9_8[1]
                                                
                                                if (temp1_1 == 1)
                                                    goto label_b2bee0
                                            
                                            break
                                j += 1
                                *x28_2 = DomExpansionsBitsetFromExpansions(&var_100, x1_14.d)
                            else if (var_100 != k)
                                uint64_t x9_6 = zx.q(x0_32)
                                int64_t x8_11 = 0
                                int32_t x11_1
                                
                                do
                                    if (x9_6 - 1 == x8_11)
                                        goto label_b2be74
                                    
                                    int32_t var_fc[0x27]
                                    x11_1 = var_fc[x8_11]
                                    x8_11 += 1
                                while (x11_1 != k)
                                
                                if (x8_11 u>= x9_6)
                                    goto label_b2be74
                        
                        x21_3 = &x21_3[1]
                        
                        if (x21_3 == x0_25)
                            break
        
        SaveProfiles()
    
    i = &i[1]
    x25 += 1

return 0
