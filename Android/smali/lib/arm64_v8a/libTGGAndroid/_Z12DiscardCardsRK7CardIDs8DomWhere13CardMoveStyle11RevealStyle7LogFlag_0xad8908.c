// 函数: _Z12DiscardCardsRK7CardIDs8DomWhere13CardMoveStyle11RevealStyle7LogFlag
// 地址: 0xad8908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg5
void* x0 = DomGetContext()
int32_t x0_1

if ((x19 & 1) != 0)
    int32_t* x0_2
    uint64_t x1
    x0_2, x1 = DomGetContext()
    int32_t x8_1 = *x0_2
    int32_t x0_3
    
    if (x8_1 == 3)
        x1 = zx.q(x0_2[7])
        int32_t x8_2 = x1.d u>> 4 & 3
        
        if (x8_2 == 0)
            x0_1 = *(AbilityGetRegistered(*(x0_2 + 8), x1) + 0x24)
        else if (x8_2 != 2)
            x0_3 = ThisCard(false, x1)
            x0_1 = CardWhat(*(DomGetContext() + 8), zx.q(x0_3))
        else
            x0_1 = (x1 u>> 0x12).d & 0x3fff
    else if (x8_1 != 4)
        x0_3 = ThisCard(false, x1)
        x0_1 = CardWhat(*(DomGetContext() + 8), zx.q(x0_3))
    else
        x0_1 = x0_2[7]
else
    x0_1 = 0

int32_t var_60 = x0_1
int32_t var_50 = 0
int64_t var_58 = 0
return DiscardCards(*(x0 + 8), zx.q(*(x0 + 0x18)), arg1, zx.q(*(arg1 + 0xc80)), zx.q(arg2), 
    zx.q(arg3), zx.q(arg4), zx.q(x19))
