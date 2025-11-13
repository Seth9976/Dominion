// 函数: _Z14ReturnToSupplyRK7CardIDs8DomWhere
// 地址: 0xadafd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs const& x20 = arg1
void* result = DomGetContext()
int64_t x8 = sx.q(*(x20 + 0xc80))

if (x8.d != 0)
    void* result_1 = result
    int64_t i_1 = x8 << 2
    int64_t i
    
    do
        int32_t x22_1 = *x20
        result = BoardPileSource(*(result_1 + 8), zx.q(x22_1))
        
        if (result.d != 0)
            int64_t x0_2 = BoardPileWhere(*(result_1 + 8), zx.q(result.d))
            result = IsSupplyPile(x0_2)
            
            if ((result.d & 1) != 0)
                int32_t var_48_1 = 0
                int64_t var_50_1 = 0
                int32_t var_58_1 = 0
                int32_t var_60_1 = 0
                int32_t var_68_1 = 0
                int64_t var_70_1 = 0
                result = MoveCardTo(*(result_1 + 8), 0xffffffff, zx.q(x22_1), zx.q(arg2), 0x15, 
                    zx.q(x0_2.d), 0, 0)
        
        i = i_1
        i_1 -= 4
        x20 += 4
    while (i != 4)

return result
