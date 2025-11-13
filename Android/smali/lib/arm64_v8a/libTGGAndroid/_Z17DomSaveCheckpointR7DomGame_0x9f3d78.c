// 函数: _Z17DomSaveCheckpointR7DomGame
// 地址: 0x9f3d78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameSave* x0 = ActiveGame()
int32_t var_58[0x6]

if (*(arg1 + 0xd40) s>= 1)
    int64_t i = 0
    
    do
        int64_t* x0_2 = LogGet(x0, zx.q(i.d))
        int32_t x8_2 = *(x0_2 + 0x14)
        int32_t x8_3
        
        if (x8_2 s< 0)
            x8_3 = x8_2 + 3
        else
            x8_3 = x8_2
        
        var_58[i] = x8_3 s>> 2
        MCTS_ClearSavedLog(zx.q(i.d))
        
        if (*(x0_2 + 0xc) s>= 1)
            int32_t j = 0
            
            do
                MCTS_AddSavedLog(zx.q(i.d), *(*x0_2 + sx.q(j)))
                j += 4
            while (j s< *(x0_2 + 0xc))
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xd40)))

return MCTS_SetCheckpoint(arg1, &var_58)
