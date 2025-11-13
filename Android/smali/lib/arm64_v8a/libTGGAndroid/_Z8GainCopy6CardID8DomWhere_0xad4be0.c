// 函数: _Z8GainCopy6CardID8DomWhere
// 地址: 0xad4be0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_2 = CardWhat(*(DomGetContext() + 8), zx.q(arg1))
void* x0_3 = DomGetContext()
int32_t var_cc0[0x320]
int32_t x0_5 = CardsSupplyTops(*(x0_3 + 8), zx.q(*(x0_3 + 0x18)), &var_cc0, 4)

if (x0_5 s> 0)
    int32_t x0_7 = CardWhat(*(x0_3 + 8), zx.q(var_cc0[0]))
    uint64_t x22_2
    int64_t x24_1
    
    if (x0_7 != x0_2)
        x22_2 = zx.q(x0_5)
        int64_t x8_1 = 1
        bool cond:0_1
        
        do
            x24_1 = x8_1
            
            if (x22_2 == x8_1)
                break
            
            cond:0_1 = CardWhat(*(x0_3 + 8), zx.q(var_cc0[x24_1])) != x0_2
            x8_1 = x24_1 + 1
        while (cond:0_1)
    
    if (x0_7 == x0_2 || x24_1 u< x22_2)
        void* x0_10 = DomGetContext()
        int32_t x0_12 = BoardPileSource(*(x0_10 + 8), zx.q(x0_2), false)
        int32_t x0_14 = BoardPileWhere(*(x0_10 + 8), zx.q(x0_12))
        int32_t x0_16 = BoardPileTop(*(x0_10 + 8), zx.q(x0_14))
        
        if (x0_16 != 0)
            void* x0_17 = DomGetContext()
            int32_t var_cd0_1 = 4
            
            if ((GainCard(*(x0_17 + 8), zx.q(*(x0_17 + 0x18)), zx.q(x0_16), zx.q(arg2), 0, 0x476, 
                    0, 0) & 1) == 0)
                return 0
        
        return zx.q(x0_16)

return 0
