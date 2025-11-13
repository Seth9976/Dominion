// 函数: _Z16ResignActiveGamev
// 地址: 0x9c0294
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = ActiveGame()

if (x0[0x46d] s>= 1)
    int64_t i = 0
    void* x21_1 = &x0[0x1d]
    
    do
        if (*(x21_1 - 4) == LocalWho())
            *x21_1 = 0x3e9
        
        i += 1
        x21_1 += 0x22c
    while (i s< sx.q(x0[0x46d]))

if (*(GetClient() + 0x5068) == 2)
    return GameClientDismissNetworkGame(zx.q(*(GetClient() + 0x506c)), 2) __tailcall

GameSepcific_NotifyGameEnd(5, zx.q(LocalWho()))
ActiveGameComplete_Stats(x0)
LocalGameSave(x0, *x0)
return SaveProfiles() __tailcall
