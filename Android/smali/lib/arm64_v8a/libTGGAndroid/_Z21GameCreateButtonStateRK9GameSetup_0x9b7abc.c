// 函数: _Z21GameCreateButtonStateRK9GameSetup
// 地址: 0x9b7abc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *gCreateDlg

if (x8 != 3)
    if (x8 != 2)
        return 0
    
    PlayerConfig_V1* var_18
    int32_t x0 = GetGameStatusMenu(arg1, &var_18)
    
    if (x0 u> 0x12)
        pthread_kill(pthread_self(), 6)
        GameSetup* x0_12
        bool x1_3
        x0_12, x1_3 = XNoReturn()
        return GameIsValidToCreate(x0_12, x1_3) __tailcall
    
    switch (x0)
        case 1
            return 0
        case 2, 3
            return zx.q(x0)
        case 4
            if ((CanStartGame(arg1, var_18) & 1) != 0)
                return 5
            
            return 4
        case 6, 7
            if (var_18 != 0)
                return 6
        case 8, 9, 0xa
            return 8
        case 0xb, 0xc, 0xd, 0xe
            return 7

return 1
