// 函数: _Z11ToggleScorev
// 地址: 0x9c0358
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gGameDlgManager + 0xcc) == 0x29)
    return GameDlgManagerDismiss(5, false) __tailcall

int32_t* x0_1 = ActiveGame()

if ((zx.d(x0_1[8].b) & 4) != 0)
    int64_t x0_7
    
    if ((PlayerWon(LocalWho()) & 1) == 0)
        x0_7 = 2
    else
        x0_7 = 1
    
    return GameSpecific_ScorescreenOpen(x0_7) __tailcall

int32_t var_14

if ((IsCampaignMission(zx.q(*x0_1), &var_14) & 1) == 0 && (zx.d(*(x0_1 + 0x21)) & 1) == 0)
    return GameSpecific_ScorescreenOpen(0) __tailcall

if ((PlayerWon(LocalWho()) & 1) != 0 && (zx.d(x0_1[8].b) & 1) == 0)
    return GameSpecific_ScorescreenOpen(3) __tailcall

return GameSpecific_ScorescreenOpen(4) __tailcall
