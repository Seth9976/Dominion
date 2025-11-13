// 函数: sub_a15484
// 地址: 0xa15484
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) s< 1)
    return 

void* x19_1 = arg1
int32_t i = 0

do
    arg1 = TopDeckCard()
    
    if (arg1.d == 0)
        break
    
    int32_t x20_1 = arg1.d
    DiscardCard(arg1, 0x3eb, 0x14, 7, 0x20)
    
    if ((CostBetween(zx.q(x20_1), 3, 4).d & 1) != 0)
        TrashDisplay(zx.q(x20_1), 0x3ec, 0)
    
    i += 1
while (i s< *(x19_1 + 8))
