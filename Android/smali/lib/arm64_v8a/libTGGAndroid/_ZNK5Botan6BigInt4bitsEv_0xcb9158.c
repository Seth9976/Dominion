// 函数: _ZNK5Botan6BigInt4bitsEv
// 地址: 0xcb9158
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x8 = entry_x0[3]

if (x8 == -1)
    int64_t x9_5 = *entry_x0
    int64_t x11_3 = entry_x0[1]
    int64_t x10_3 = x11_3 - x9_5
    
    if (x11_3 == x9_5)
        entry_x0[3] = 0
        return 0
    
    int64_t x12_2
    
    x12_2 = x10_3 s>= 0 ? x10_3 : -1
    
    int64_t x11_4 = x9_5 - x11_3
    int64_t x12_3
    
    x12_3 = x12_2 s< 1 ? x12_2 : 1
    
    x8 = x10_3 s>> 2
    int64_t x10_4
    
    x10_4 = x11_4 s> x10_3 ? x11_4 : x10_3
    
    int64_t i_2 = x12_3 * (x10_4 u>> 2)
    uint64_t x11_5 = 1
    int64_t i
    
    do
        int32_t x12_4 = *(x9_5 - 4 + (i_2 << 2))
        i = i_2
        i_2 -= 1
        x11_5 = zx.q(x11_5.d) & zx.q(((x12_4 - 1) & not.d(x12_4)) s>> 0x1f)
        x8 -= x11_5
    while (i != 1)
    entry_x0[3] = x8
    
    if (x8 == 0)
        return 0
else if (x8 == 0)
    return 0

int64_t x9_1 = *entry_x0
int64_t x12_1 = entry_x0[1]
int64_t x13_1 = x12_1 - x9_1
int64_t x10_1 = x13_1 s>> 2
int64_t x8_1
uint64_t x9_4
int32_t x10_2
int64_t x11_2

if (x8 == -1)
    int64_t x11_9
    
    if (x13_1 == 0)
        x11_9 = 0
    else
        int64_t x14_1
        
        x14_1 = x13_1 s>= 0 ? x13_1 : -1
        
        int64_t x11_6 = x9_1 - x12_1
        int64_t x14_2
        
        x14_2 = x14_1 s< 1 ? x14_1 : 1
        
        int64_t x11_7
        
        x11_7 = x11_6 s> x13_1 ? x11_6 : x13_1
        
        int64_t i_3 = x14_2 * (x11_7 u>> 2)
        uint64_t x14_3 = 1
        x11_9 = x10_1
        int64_t i_1
        
        do
            int32_t x15_1 = *(x9_1 - 4 + (i_3 << 2))
            i_1 = i_3
            i_3 -= 1
            x14_3 = zx.q(x14_3.d) & zx.q(((x15_1 - 1) & not.d(x15_1)) s>> 0x1f)
            x11_9 -= x14_3
        while (i_1 != 1)
    
    entry_x0[3] = x11_9
    x11_2 = x11_9 - 1
    x8_1 = x8 << 5
    
    if (x10_1 u> x11_2)
        x10_2 = *(x9_1 + (x11_2 << 2))
        x9_4 = zx.q(x10_2 u>> 0x10 != 0 ? 1 : 0) << 4
    else
        x10_2 = 0
        x9_4 = 0
else
    x11_2 = x8 - 1
    x8_1 = x8 << 5
    
    if (x10_1 u<= x11_2)
        x10_2 = 0
        x9_4 = 0
    else
        x10_2 = *(x9_1 + (x11_2 << 2))
        x9_4 = zx.q(x10_2 u>> 0x10 != 0 ? 1 : 0) << 4
uint32_t x10_6 = x10_2 u>> x9_4.d
uint64_t x9_8 = zx.q(x10_6 u> 0xff ? 1 : 0) << 3
uint32_t x10_7 = x10_6 u>> x9_8.d
uint64_t x9_10 = zx.q(x10_7 u> 0xf ? 1 : 0) << 2
uint32_t x10_8 = x10_7 u>> x9_10.d
uint64_t x9_12 = zx.q(x10_8 u> 3 ? 1 : 0) << 1
uint32_t x10_9 = x10_8 u>> x9_12.d
int64_t x11_10

x11_10 = x10_9 u> 1 ? -0x1f : -0x20

return (x9_4 | x8_1 | x9_8 | x9_10 | x9_12) + x11_10 + zx.q(x10_9 u>> (x10_9 u> 1 ? 1 : 0))
