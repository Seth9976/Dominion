// 函数: _Z23GetWeeklyCampaignResultRK4DateRi
// 地址: 0xb3f65c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = GetWeekIdForDate(arg1)
int64_t x8_3
int64_t x9_1
uint64_t x10_1

if (i == 0)
    x8_3 = 0
    x9_1 = 0
    x10_1 = -0x100000000
else
    void* x0 = GetActiveProfile()
    int32_t* x20_1 = *(*(x0 + 0x7750) + ((zx.q(*(x0 + 0x7758)) & (zx.q(i) | zx.q(i s>> 4))) << 3))
    
    if (x20_1 == 0)
        x8_3 = 0
        x10_1 = -0x100000000
    else
        x9_1 = 1
        
        while (i != *x20_1)
            x20_1 = *(x20_1 + 0x98)
            
            if (x20_1 == 0)
                x8_3 = 0
                x10_1 = -0x100000000
                goto label_b3f760
        
        uint64_t x9_2
        void* x10_3
        
        if ((AILevelLessThan(zx.q(x20_1[2]), zx.q(x20_1[4])) & 1) == 0)
            x9_2 = zx.q(x20_1[2])
            
            if (x9_2.d != x20_1[4] || x20_1[3] s>= x20_1[5])
                x8_3 = 0
                x10_3 = &x20_1[3]
            else
                x10_3 = &x20_1[5]
                x8_3 = 0x100
        else
            x9_2 = zx.q(x20_1[4])
            x10_3 = &x20_1[5]
            x8_3 = 0x100
        
        x20_1[7]
        x10_1 = x9_2 << 0x20
        *x10_3
    
    x9_1 = 1

label_b3f760:
return (x8_3 & 0x100) | x10_1 | x9_1
