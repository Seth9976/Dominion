// 函数: _Z3Buyi7LogFlag
// 地址: 0xad2358
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x4

if ((arg2 & 1) != 0)
    int32_t* x0_1
    CardID* x1
    x0_1, x1 = DomGetContext()
    int32_t x8_1 = *x0_1
    int32_t x0_2
    
    if (x8_1 == 3)
        x1 = zx.q(x0_1[7])
        int32_t x8_2 = x1.d u>> 4 & 3
        
        if (x8_2 == 0)
            x4 = zx.q(*(AbilityGetRegistered(*(x0_1 + 8), x1) + 0x24))
        else if (x8_2 != 2)
            x0_2 = ThisCard(false, x1)
            x4 = zx.q(CardWhat(*(DomGetContext() + 8), zx.q(x0_2)))
        else
            x4 = x1 u>> 0x12 & 0x3fff
    else if (x8_1 != 4)
        x0_2 = ThisCard(false, x1)
        x4 = zx.q(CardWhat(*(DomGetContext() + 8), zx.q(x0_2)))
    else
        x4 = zx.q(x0_1[7])
else
    x4 = 0

AddResource(*(x0 + 8), zx.q(*(x0 + 0x18)), 2, arg1, x4, 0)
void* result = DomGetContext()
void* x8_4 = *(result + 8) + sx.q(*(result + 0x18)) * 0x5a30
*(x8_4 + 0x181f8) |= 8
return result
