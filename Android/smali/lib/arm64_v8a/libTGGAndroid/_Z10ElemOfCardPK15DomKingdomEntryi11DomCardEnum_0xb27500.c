// 函数: _Z10ElemOfCardPK15DomKingdomEntryi11DomCardEnum
// 地址: 0xb27500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s>= 1)
    uint64_t i_1 = zx.q(arg2)
    void* __offset(DomKingdomEntry, 0x4) x9_1 = arg1 + 4
    uint64_t i
    
    do
        int32_t x10_2 = *(x9_1 - 4)
        
        if (x10_2 == 1)
            if (*x9_1 == arg3)
                return 1
        else if (x10_2 == 0)
            break
        
        i = i_1
        i_1 -= 1
        x9_1 += 0x10
    while (i != 1)

return 0
