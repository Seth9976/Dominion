// 函数: _Z17StoreDlgUpdateRow9UI2HandlePKcPPK6DlcDefi11GameDlcAreaii
// 地址: 0x9c4ea8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg7 - arg6

if (arg7 s> arg6)
    int32_t x19_1 = arg5
    int32_t x21_1 = arg1
    int64_t x22_1 = 0
    void* x28_1 = &data_11d0df8
    
    do
        int32_t x0_2
        
        if (*(x28_1 - 0x30) == "tblStoreItems" && *(x28_1 - 0x38) == x21_1
                && x22_1.d == *(x28_1 - 0x28) && *(x28_1 - 0x20) == 0)
            x0_2 = UI2Exists(zx.q(*x28_1))
        
        int32_t fp_1
        
        if (*(x28_1 - 0x30) != "tblStoreItems" || *(x28_1 - 0x38) != x21_1
                || x22_1.d != *(x28_1 - 0x28) || *(x28_1 - 0x20) != 0 || (x0_2 & 1) == 0)
            int32_t x0_4 = UI2GetHandle(zx.q(x21_1), "tblStoreItems", x22_1.d)
            fp_1 = x0_4
            *x28_1 = x0_4
            
            if (x0_4 != 0)
                *(x28_1 - 0x30) = "tblStoreItems"
                *(x28_1 - 0x38) = x21_1
                *(x28_1 - 0x28) = x22_1.d
                *(x28_1 - 0x20) = 0
        else
            fp_1 = *x28_1
        
        DlcDef* x25_1 = arg3[sx.q(arg6) + x22_1]
        
        if (*(x25_1 + 4) != 7)
            if (x19_1 == 1 && fp_1 != 0)
                UI2SetState(zx.q(fp_1), &data_11cf968, 0xffffffff, 0)
            
            if (fp_1 != 0)
                UI2SetState(zx.q(fp_1), *(x25_1 + 0x38), 0xffffffff, 0)
            
            switch (ProfileDLCState(x25_1))
                case 0
                    if (fp_1 != 0)
                        UI2SetState(zx.q(fp_1), &data_11cf908, 0xffffffff, 0)
                case 1
                    if (fp_1 != 0)
                        if (x19_1 == 0 && *x25_1 == 2)
                            UI2SetState(zx.q(fp_1), &data_11cf9e0, 0xffffffff, 0)
                        
                        if ((DLCMissingRequirements(zx.q(*x25_1)) & 1) != 0)
                            UI2SetState(zx.q(fp_1), &data_11cf950, 0xffffffff, 0)
                        else
                            XString::XString()
                            XString var_68
                            
                            if ((GameCenterGetPrice(x25_1, &var_68) & 1) != 0)
                                UI2SetState(zx.q(fp_1), &data_11cf9b0, 0xffffffff, 0)
                                UI2SetText(zx.q(fp_1), &data_11cf9c8, &var_68, 0xffffffff)
                            
                            UI2SetState(zx.q(fp_1), &data_11cf920, 0xffffffff, 0)
                            XString::~XString()
                case 2, 5
                    if (fp_1 != 0)
                        UI2SetState(zx.q(fp_1), &data_11cf8d8, 0xffffffff, 0)
                case 4
                    if (fp_1 != 0)
                        UI2SetState(zx.q(fp_1), &data_11cf938, 0xffffffff, 0)
                case 6
                    if (fp_1 != 0)
                        UI2SetState(zx.q(fp_1), &data_11cf8f0, 0xffffffff, 0)
                default
                    pthread_kill(pthread_self(), 6)
                    return PrivacyClick(XNoReturn()) __tailcall
        
        x22_1 += 1
        x28_1 += 0x40
    while (i != x22_1.d)

return zx.q(i)
