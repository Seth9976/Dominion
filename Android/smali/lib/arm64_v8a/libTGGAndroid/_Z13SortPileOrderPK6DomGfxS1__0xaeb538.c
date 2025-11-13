// 函数: _Z13SortPileOrderPK6DomGfxS1_
// 地址: 0xaeb538
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9_2 = *(arg1 + 0x2c)
int32_t x8 = *(arg2 + 0x2c)

if (x9_2 s< x8)
    return 0

if (x9_2 s> x8)
    return 1

int64_t x12

x12 = x9_2 == 4 ? 0x1c4 : 0x58

int64_t x10

x10 = x8 == 4 ? 0x1c4 : 0x58

int32_t x12_1 = *(arg1 + x12)
int32_t x10_1 = *(arg2 + x10)

if (x12_1 s< x10_1)
    return 0

if (x12_1 s> x10_1)
    return 1

int32_t x9

if (x9_2 == 4)
    x9 = *(arg1 + 0x1bc)
    
    if (x8 == 4)
        goto label_aeb5d0
    
    goto label_aeb5b0

x9 = 0
bool cond:3

if (x8 != 4)
label_aeb5b0:
    cond:3 = x9 s<= 0
    
    if (x9 s< 0)
        return 0
else
label_aeb5d0:
    int32_t x8_1 = *(arg2 + 0x1bc)
    cond:3 = x9 s<= x8_1
    
    if (x9 s< x8_1)
        return 0

if (cond:3)
    return zx.q(*(arg1 + 0x2140) s> *(arg2 + 0x2140) ? 1 : 0)

return 1
