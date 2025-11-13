// 函数: _Z14CountNonArrowsRK11PodIconInfoRK16PodIconInfoEntry
// 地址: 0xba9610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = *arg2
int64_t x9 = *(arg2 + 4)

if (x10.d s>= x9.d)
    return 0

int64_t x8 = x9 - x10
int32_t x8_1

if (x8 u>= 2)
    int64_t i_2 = x8 & 0xfffffffffffffffe
    void* x14_1 = arg1 + (x10 << 3)
    int32_t x11_1 = 0
    int32_t x12_1 = 0
    x10 += i_2
    void* x14_2 = x14_1 + 0x1010
    int64_t i_1 = i_2
    int64_t i
    
    do
        void* x16_1 = *(x14_2 - 8)
        void* x17_1 = *x14_2
        x14_2 += 0x10
        
        if (*(x16_1 + 0x2c) != 7)
            x11_1 += 1
        
        if (*(x17_1 + 0x2c) != 7)
            x12_1 += 1
        
        i = i_1
        i_1 -= 2
    while (i != 2)
    x8_1 = x12_1 + x11_1
    
    if (x8 != i_2)
        goto label_ba96ac
else
    x8_1 = 0
label_ba96ac:
    
    do
        void* x12_2 = *(arg1 + 0x1008 + (x10 << 3))
        x10 += 1
        
        if (*(x12_2 + 0x2c) != 7)
            x8_1 += 1
    while (x10 s< x9)

return zx.q(x8_1)
