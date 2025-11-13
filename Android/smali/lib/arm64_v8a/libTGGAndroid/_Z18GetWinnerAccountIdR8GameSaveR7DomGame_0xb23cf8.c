// 函数: _Z18GetWinnerAccountIdR8GameSaveR7DomGame
// 地址: 0xb23cf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x11b4) s>= 1)
    int64_t i = 0
    void* __offset(GameSave, 0x70) x20_1 = arg1 + 0x70
    
    do
        int32_t var_28
        int32_t var_24
        
        if ((IsWinner(arg1, zx.q(*x20_1), &var_24, &var_28) & 1) != 0)
            if (*(x20_1 - 8) == 1)
                return zx.q(*(x20_1 - 4))
            
            break
        
        i += 1
        x20_1 += 0x22c
    while (i s< sx.q(*(arg1 + 0x11b4)))

return 0
