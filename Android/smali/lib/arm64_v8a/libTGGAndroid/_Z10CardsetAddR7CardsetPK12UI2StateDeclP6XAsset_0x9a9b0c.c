// 函数: _Z10CardsetAddR7CardsetPK12UI2StateDeclP6XAsset
// 地址: 0x9a9b0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0x1520))

if (i_2.d s>= 1)
    void* __offset(Cardset, 0x278) x9_1 = arg1 + 0x278
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        if (*(x9_1 - 0x18) == arg2)
            *x9_1 += 1
            return 
        
        i = i_1
        i_1 -= 1
        x9_1 += 0x20
    while (i != 1)

*(arg1 + 0x1520) = i_2.d + 1
void* x8_1 = arg1 + (sx.q(i_2.d) << 5)
*(x8_1 + 0x260) = arg2
*(x8_1 + 0x278) = 1
*(x8_1 + 0x268) = arg3
*(x8_1 + 0x270) = 0
