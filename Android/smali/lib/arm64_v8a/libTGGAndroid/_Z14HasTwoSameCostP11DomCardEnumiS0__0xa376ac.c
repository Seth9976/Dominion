// 函数: _Z14HasTwoSameCostP11DomCardEnumiS0_
// 地址: 0xa376ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x27_1

if (arg2 s< 1)
    x27_1 = 0
else
    int64_t x25_1 = 0
    uint64_t x23_1 = zx.q(arg2)
    int64_t x24_1 = 1
    int32_t x26_1 = 1
    bool cond:1_1
    
    do
        x27_1 = x25_1 + 1 u< x23_1 ? 1 : 0
        int64_t fp_1 = x24_1
        
        if (x25_1 + 1 u< x23_1)
            while (true)
                int32_t x21_1 = *(arg1 + (fp_1 << 2))
                void* x0_1 = DomDefGet(zx.q(*(arg1 + (x25_1 << 2))), 0x17)
                void* x0_3 = DomDefGet(zx.q(x21_1), 0x17)
                
                if (*(x0_1 + 0xc4) == *(x0_3 + 0xc4))
                    x27_1 = x26_1
                    *arg3 = *(arg1 + (zx.q(x25_1.d) << 2))
                    *(arg3 + 4) = *(arg1 + (zx.q(fp_1.d) << 2))
                    break
                
                fp_1 += 1
                
                if (x23_1 == fp_1)
                    goto label_a376e8
            
            break
        
    label_a376e8:
        cond:1_1 = x25_1 + 1 == x23_1
        x24_1 += 1
        x25_1 += 1
        x26_1 = x27_1
    while (not(cond:1_1))

return zx.q(x27_1) & 1
