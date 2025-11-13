// 函数: _Z9CardTypesR7DomGamePK6CardIDiP11DomCardEnumPi
// 地址: 0xb9df44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23

if (arg3 s< 1)
    x23 = 0
else
    int64_t x24_1 = 0
    x23 = 0
    uint64_t x25_1 = zx.q(arg3)
    
    while (true)
        uint64_t x28_1 = zx.q(x23)
        int32_t i = CardWhat(arg1, zx.q(*(arg2 + (x24_1 << 2))))
        
        if (x23 s>= 1)
            int64_t x8_3 = 0
            int64_t x9_1 = 0
            
            while (*(arg4 + (x9_1 << 2)) != i)
                x9_1 += 1
                x8_3 += 0x100000000
                
                if (x28_1 == x9_1)
                    goto label_b9df90
            
            if (x9_1.d != 0xffffffff)
                int64_t x8_4 = x8_3 s>> 0x1e
                x23 = x28_1.d
                *(arg5 + x8_4) += 1
                x24_1 += 1
                
                if (x24_1 == x25_1)
                    break
                
                continue
        
    label_b9df90:
        x23 = x28_1.d + 1
        *(arg4 + (sx.q(x28_1.d) << 2)) = i
        arg5[sx.q(x28_1.d)] = 1
        x24_1 += 1
        
        if (x24_1 == x25_1)
            break

return zx.q(x23)
