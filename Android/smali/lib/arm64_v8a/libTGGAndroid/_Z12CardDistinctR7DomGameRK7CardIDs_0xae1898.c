// 函数: _Z12CardDistinctR7DomGameRK7CardIDs
// 地址: 0xae1898
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
*(entry_x8 + 0xc80) = 0
int64_t x8 = sx.q(*(arg2 + 0xc80))

if (x8.d == 0)
    return 

CardIDs const& i = arg2
DomGame& x21_1 = arg1

do
    int32_t x22_1 = *i
    int32_t x0_3 = CardWhat(*(DomGetContext() + 8), zx.q(x22_1))
    uint64_t x8_1 = sx.q(*(entry_x8 + 0xc80))
    
    if (x8_1.d != 0)
        uint64_t j_1 = x8_1 << 2
        void* x26_1 = entry_x8
        uint64_t j
        
        do
            uint64_t x1_1 = zx.q(*x26_1)
            x26_1 += 4
            
            if (CardWhat(x21_1, x1_1).d == x0_3)
                goto label_ae18e8
            
            j = j_1
            j_1 -= 4
        while (j != 4)
        x8_1 = zx.q(*(entry_x8 + 0xc80))
    
    GameAssert((x8_1.d s< 0x320 ? 1 : 0).b)
    int64_t x8_2 = sx.q(*(entry_x8 + 0xc80))
    *(entry_x8 + 0xc80) = x8_2.d + 1
    *(entry_x8 + (x8_2 << 2)) = x22_1
label_ae18e8:
    i += 4
while (i != arg2 + (x8 << 2))
