// 函数: _ZNK22SortCardDisplayEntriesclEss
// 地址: 0xc0839c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 8)
int64_t x12 = *arg1 + 8
int32_t x19 = *(x12 + sx.q(arg2) * 0x1c + 4)
int32_t x8_2 = x21 << 0x10
int32_t x9_5 = (x8_2 + x19) s% 0x3e5
int32_t* x10_1 = *(&data_1838a20 + (sx.q(x9_5) << 3))
int16_t entry_x2
int32_t x20 = *(x12 + sx.q(entry_x2) * 0x1c + 4)
void* x0_3

if (x10_1 != 0)
    while (*x10_1 != x19 || x10_1[1] != x21)
        x10_1 = *(x10_1 + 0x10)
        
        if (x10_1 == 0)
            goto label_c08420
    
    x0_3 = *(x10_1 + 8)
else
label_c08420:
    DomDefGetSlow(zx.q(x19), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_3 = sx.q(x9_5) << 3
    int64_t x9_6 = *(&data_1838a20 + x8_3)
    *x0_1 = x19
    x0_1[1] = x21
    *(&data_1838a20 + x8_3) = x0_1
    *(x0_1 + 0x10) = x9_6
    x0_3 = DomDefGetSlow(zx.q(x19), zx.q(x21))
    *(x0_1 + 8) = x0_3
    x21 = *(arg1 + 8)
    x8_2 = x21 << 0x10

int32_t x8_5 = (x8_2 + x20) s% 0x3e5
int32_t* x9_11 = *(&data_1838a20 + (sx.q(x8_5) << 3))
int32_t x23_2 = (*(x0_3 + 0xc8) u>> 0x31).d & 1

if (x9_11 != 0)
    while (*x9_11 != x20 || x9_11[1] != x21)
        x9_11 = *(x9_11 + 0x10)
        
        if (x9_11 == 0)
            goto label_c084c8
    
    int32_t x8_10 = (*(*(x9_11 + 8) + 0xc8) u>> 0x31).d & 1
    
    if (x23_2 != x8_10)
        return zx.q(x23_2 u< x8_10 ? 1 : 0)
else
label_c084c8:
    DomDefGetSlow(zx.q(x20), zx.q(x21))
    int32_t* x0_5 = malloc(0x18)
    int64_t x8_6 = sx.q(x8_5) << 3
    int64_t x9_12 = *(&data_1838a20 + x8_6)
    *x0_5 = x20
    x0_5[1] = x21
    *(&data_1838a20 + x8_6) = x0_5
    *(x0_5 + 0x10) = x9_12
    void* x0_7 = DomDefGetSlow(zx.q(x20), zx.q(x21))
    *(x0_5 + 8) = x0_7
    int32_t x8_8 = (*(x0_7 + 0xc8) u>> 0x31).d & 1
    
    if (x23_2 != x8_8)
        return zx.q(x23_2 u< x8_8 ? 1 : 0)

int32_t x0_9 = SortClass(zx.q(x19))
int32_t x0_11 = SortClass(zx.q(x20))

if (x0_9 s< x0_11)
    return 1

if (x0_9 s<= x0_11)
    return SortCardsByCostNameRev(zx.q(x19), zx.q(x20)) __tailcall

return 0
