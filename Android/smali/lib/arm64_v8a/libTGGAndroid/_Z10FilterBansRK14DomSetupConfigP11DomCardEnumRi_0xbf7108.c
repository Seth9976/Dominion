// 函数: _Z10FilterBansRK14DomSetupConfigP11DomCardEnumRi
// 地址: 0xbf7108
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10_2 = *arg3

if (x10_2 s< 1)
    return 

int32_t x8_1 = 0

do
    int64_t i = 0
    int64_t x11_1 = sx.q(x8_1)
    
    do
        int32_t x14_1 = *(arg1 + 0xc04 + i)
        
        if (x14_1 == 0)
            break
        
        if (x14_1 == *(arg2 + (sx.q(x8_1) << 2)))
            *arg3 = x10_2 - 1
            x8_1 -= 1
            *(arg2 + (x11_1 << 2)) = *(arg2 + (sx.q(x10_2 - 1) << 2))
            x10_2 = *arg3
            break
        
        i += 4
    while (i != 0xaf0)
    
    x8_1 += 1
while (x8_1 s< x10_2)
