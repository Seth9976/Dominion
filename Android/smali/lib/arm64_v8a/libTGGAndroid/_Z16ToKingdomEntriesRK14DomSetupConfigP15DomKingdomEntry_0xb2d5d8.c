// 函数: _Z16ToKingdomEntriesRK14DomSetupConfigP15DomKingdomEntry
// 地址: 0xb2d5d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *(arg1 + 0x10)
*arg2 = *arg1
*(arg2 + 0x10) = v0
v0 = *(arg1 + 0x50)
int128_t v3 = *(arg1 + 0x20)
int128_t v2 = *(arg1 + 0x30)
*(arg2 + 0x40) = *(arg1 + 0x40)
*(arg2 + 0x50) = v0
*(arg2 + 0x20) = v3
*(arg2 + 0x30) = v2
v0 = *(arg1 + 0x90)
v3 = *(arg1 + 0x60)
v2 = *(arg1 + 0x70)
*(arg2 + 0x80) = *(arg1 + 0x80)
*(arg2 + 0x90) = v0
*(arg2 + 0x60) = v3
*(arg2 + 0x70) = v2
int32_t i = *arg1

if (i != 0)
    if (*(arg1 + 0x10) == 0)
        i = 1
    else if (*(arg1 + 0x20) == 0)
        i = 2
    else if (*(arg1 + 0x30) == 0)
        i = 3
    else if (*(arg1 + 0x40) == 0)
        i = 4
    else if (*(arg1 + 0x50) == 0)
        i = 5
    else if (*(arg1 + 0x60) == 0)
        i = 6
    else if (*(arg1 + 0x70) == 0)
        i = 7
    else if (*(arg1 + 0x80) == 0)
        i = 8
    else if (*(arg1 + 0x90) == 0)
        i = 9
    else
        i = -1

int64_t x9 = 0

do
    void* x16_1 = arg1 + (x9 << 4)
    
    if (*(x16_1 + 0x9d0) s>= 1)
        int64_t x14_2 = 0
        void* x1 = arg2 + 4 + (sx.q(i) << 4)
        
        do
            *(x1 - 4) = 2
            int32_t x2_1 = *(x16_1 + 0x9c8)
            int32_t x2_2
            
            if (x2_1 == 0x12)
                x2_2 = 0x1416
            else
                x2_2 = x2_1 + 0x13fe
            
            *x1 = x2_2
            bool cond:1_1 = sx.q(i) + x14_2 s> 8
            x14_2 += 1
            *(x1 + 4) = *(x16_1 + 0x9c8)
            
            if (cond:1_1)
                break
            
            x1 += 0x10
        while (x14_2.d s< *(x16_1 + 0x9d0))
        
        i += x14_2.d
    
    if (x9 u> 0x1e)
        break
    
    x9 += 1
while (i s< 0xa)

return zx.q(i)
