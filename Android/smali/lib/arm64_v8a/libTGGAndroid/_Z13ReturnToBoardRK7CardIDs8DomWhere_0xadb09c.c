// 函数: _Z13ReturnToBoardRK7CardIDs8DomWhere
// 地址: 0xadb09c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg1 + 0xc80))

if (x8.d == 0)
    return 

CardIDs const& x19_1 = arg1
int64_t i_1 = x8 << 2
int64_t i

do
    int32_t x22_1 = *x19_1
    void* x0 = DomGetContext()
    arg1 = BoardPileSource(*(x0 + 8), zx.q(x22_1))
    
    if (arg1.d != 0)
        arg1 = BoardPileWhere(*(x0 + 8), zx.q(arg1.d))
        
        if (arg1.d != 0)
            int32_t var_38_1 = 0
            int64_t var_40_1 = 0
            int32_t var_48_1 = 0
            int32_t var_50_1 = 0
            int32_t var_58_1 = 0
            int64_t var_60_1 = 0
            MoveCardTo(*(x0 + 8), 0xffffffff, zx.q(x22_1), zx.q(arg2), 0x15, zx.q(arg1.d), 0, 0)
            CalcScores(*(x0 + 8))
    
    i = i_1
    i_1 -= 4
    x19_1 += 4
while (i != 4)
