// 函数: _Z22DomAIMCTS_InitSavedLogR9PlayerLog9PlayerWho
// 地址: 0x9f3d24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = MCTS_ClearSavedLog(zx.q(arg2))

if (*(arg1 + 0xc) s>= 1)
    int32_t i = 0
    
    do
        result = MCTS_AddSavedLog(zx.q(arg2), *(*arg1 + sx.q(i)))
        i += 4
    while (i s< *(arg1 + 0xc))

return result
