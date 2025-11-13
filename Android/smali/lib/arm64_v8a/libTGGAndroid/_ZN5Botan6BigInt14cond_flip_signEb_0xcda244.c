// 函数: _ZN5Botan6BigInt14cond_flip_signEb
// 地址: 0xcda244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
int32_t x8 = zx.d(*(arg1 + 0x20)) ^ (entry_x1 & 1)

if (x8 != 0)
    *(arg1 + 0x20) = x8
    return 

int64_t x8_1 = *(arg1 + 0x18)

if (x8_1 != -1)
    *(arg1 + 0x20) = x8_1 == 0 ? 1 : 0
    return 

int64_t x9_1 = *arg1
int64_t x11 = *(arg1 + 8)
int64_t x10 = x11 - x9_1
int64_t x8_3

if (x11 == x9_1)
    x8_3 = 0
else
    int64_t x12_1
    
    x12_1 = x10 s>= 0 ? x10 : -1
    
    int64_t x11_1 = x9_1 - x11
    int64_t x12_2
    
    x12_2 = x12_1 s< 1 ? x12_1 : 1
    
    x8_3 = x10 s>> 2
    int64_t x10_1
    
    x10_1 = x11_1 s> x10 ? x11_1 : x10
    
    int64_t i_1 = x12_2 * (x10_1 u>> 2)
    uint64_t x11_2 = 1
    int64_t i
    
    do
        int32_t x12_3 = *(x9_1 - 4 + (i_1 << 2))
        i = i_1
        i_1 -= 1
        x11_2 = zx.q(x11_2.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
        x8_3 -= x11_2
    while (i != 1)

*(arg1 + 0x18) = x8_3
*(arg1 + 0x20) = x8_3 == 0 ? 1 : 0
