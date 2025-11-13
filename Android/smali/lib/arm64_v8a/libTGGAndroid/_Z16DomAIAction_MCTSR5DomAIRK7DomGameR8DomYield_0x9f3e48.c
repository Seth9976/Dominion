// 函数: _Z16DomAIAction_MCTSR5DomAIRK7DomGameR8DomYield
// 地址: 0x9f3e48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = *(arg3 + 0x48)

if (*(arg2 + 0xd40) s>= 1)
    int32_t i = 0
    
    do
        int64_t* x0_1 = LogGet(*(arg1 + 8), zx.q(i))
        MCTS_ClearSavedLog(zx.q(i))
        
        if (*(x0_1 + 0xc) s>= 1)
            int32_t j = 0
            
            do
                MCTS_AddSavedLog(zx.q(i), *(*x0_1 + sx.q(j)))
                j += 4
            while (j s< *(x0_1 + 0xc))
        
        i += 1
    while (i s< *(arg2 + 0xd40))

int64_t v8

if (x24 == 0x18)
    v8.d = 0f
else
    v8.d = fconvert.s(1f)

MCTS_CreateRoot(arg2, arg3, zx.q(*(arg3 + 0x58)))
MCTS_Run(arg3, arg1 + 0x10, false, v8.d)
return MCTS_ExtractBest(arg2, arg3) __tailcall
