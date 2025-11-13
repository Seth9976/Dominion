// 函数: sub_f34d44
// 地址: 0xf34d44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = **(arg1 + 0x10)

if (x8[4].d != 1)
    x8[4].d = 1
    return 0

int64_t x9_1 = x8[3]

if (x9_1 == -1)
    int64_t x10_1 = *x8
    int64_t x12_1 = x8[1]
    int64_t x11_1 = x12_1 - x10_1
    
    if (x12_1 == x10_1)
        x9_1 = 0
    else
        int64_t x13_1
        
        x13_1 = x11_1 s>= 0 ? x11_1 : -1
        
        int64_t x12_2 = x10_1 - x12_1
        int64_t x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        x9_1 = x11_1 s>> 2
        int64_t x11_2
        
        x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
        
        int64_t i_1 = x13_2 * (x11_2 u>> 2)
        uint64_t x12_3 = 1
        int64_t i
        
        do
            int32_t x13_3 = *(x10_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
            x9_1 -= x12_3
        while (i != 1)
    
    x8[3] = x9_1

x8[4].d = x9_1 == 0 ? 1 : 0
return 0
