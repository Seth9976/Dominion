// 函数: _Z17SortAndGroupCardsPK11DomCardEnumiPS_Pi
// 地址: 0xc0d8b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

int64_t x9 = 0
int32_t x8 = 0
uint64_t x10 = zx.q(arg2)

while (true)
    int32_t i = *(arg1 + (x9 << 2))
    uint64_t x13_3 = zx.q(x8)
    
    if (x8 s>= 1)
        int64_t x8_1 = 0
        int64_t x15_1 = 0
        
        while (*(arg3 + (x15_1 << 2)) != i)
            x15_1 += 1
            x8_1 += 0x100000000
            
            if (x13_3 == x15_1)
                goto label_c0d8d8
        
        if (x15_1.d != 0xffffffff)
            int64_t x8_2 = x8_1 s>> 0x1e
            *(arg4 + x8_2) += 1
            x8 = x13_3.d
            x9 += 1
            
            if (x9 == x10)
                break
            
            continue
    
label_c0d8d8:
    x8 = x13_3.d + 1
    *(arg3 + (sx.q(x13_3.d) << 2)) = i
    arg4[sx.q(x13_3.d)] = 1
    x9 += 1
    
    if (x9 == x10)
        break

return zx.q(x8)
