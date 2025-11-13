// 函数: _ZNK5Botan6BigInt13top_bits_freeEv
// 地址: 0xcdc0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t x8_7 = *entry_x0
int64_t x11_1 = entry_x0[1]
int64_t x10 = entry_x0[3]
int64_t x12 = x11_1 - x8_7
int64_t x9 = x12 s>> 2
int32_t x8
uint64_t x9_3
int64_t x10_1

if (x10 == -1)
    int64_t x10_5
    
    if (x12 == 0)
        x10_5 = 0
    else
        int64_t x13_1
        
        x13_1 = x12 s>= 0 ? x12 : -1
        
        int64_t x10_2 = x8_7 - x11_1
        int64_t x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        int64_t x10_3
        
        x10_3 = x10_2 s> x12 ? x10_2 : x12
        
        int64_t i_1 = x13_2 * (x10_3 u>> 2)
        uint64_t x13_3 = 1
        x10_5 = x9
        int64_t i
        
        do
            int32_t x14_1 = *(x8_7 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x13_3 = zx.q(x13_3.d) & zx.q(((x14_1 - 1) & not.d(x14_1)) s>> 0x1f)
            x10_5 -= x13_3
        while (i != 1)
    
    entry_x0[3] = x10_5
    x10_1 = x10_5 - 1
    
    if (x9 u> x10_1)
        x8 = *(x8_7 + (x10_1 << 2))
        x9_3 = zx.q(x8 u>> 0x10 != 0 ? 1 : 0) << 4
    else
        x8 = 0
        x9_3 = 0
else
    x10_1 = x10 - 1
    
    if (x9 u<= x10_1)
        x8 = 0
        x9_3 = 0
    else
        x8 = *(x8_7 + (x10_1 << 2))
        x9_3 = zx.q(x8 u>> 0x10 != 0 ? 1 : 0) << 4
uint32_t x8_1 = x8 u>> x9_3.d
uint64_t x10_7 = zx.q(x8_1 u> 0xff ? 1 : 0) << 3
uint32_t x8_2 = x8_1 u>> x10_7.d
uint64_t x10_9 = zx.q(x8_2 u> 0xf ? 1 : 0) << 2
uint32_t x8_3 = x8_2 u>> x10_9.d
uint64_t x10_11 = zx.q(x8_3 u> 3 ? 1 : 0) << 1
uint32_t x8_4 = x8_3 u>> x10_11.d
int64_t x10_13

x10_13 = x8_4 u<= 1 ? 0x20 : 0x1f

return x10_13 - ((x9_3 | x10_7 | x10_9 | x10_11) + zx.q(x8_4 u>> (x8_4 u> 1 ? 1 : 0)))
