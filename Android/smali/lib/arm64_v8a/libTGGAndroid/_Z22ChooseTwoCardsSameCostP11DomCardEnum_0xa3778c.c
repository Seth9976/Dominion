// 函数: _Z22ChooseTwoCardsSameCostP11DomCardEnum
// 地址: 0xa3778c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_88[0xa]
int32_t x0_1 = KingdomCardsForImbalancedStart(&var_88)
int32_t x28_1

if (x0_1 s< 1)
    x28_1 = 0
else
    int64_t x25_1 = 0
    uint64_t x24_1 = zx.q(x0_1)
    int64_t x19_1 = 1
    int32_t x27_1 = 1
    bool cond:1_1
    
    do
        x28_1 = x25_1 + 1 u< x24_1 ? 1 : 0
        
        if (x25_1 + 1 u< x24_1)
            int32_t x20_1 = var_88[x25_1]
            int64_t x26_1 = x19_1
            
            while (true)
                int32_t x21_1 = var_88[x26_1]
                void* x0_3 = DomDefGet(zx.q(x20_1), 0x17)
                void* x0_5 = DomDefGet(zx.q(x21_1), 0x17)
                
                if (*(x0_3 + 0xc4) == *(x0_5 + 0xc4))
                    int32_t x8_2 = var_88[zx.q(x26_1.d)]
                    x28_1 = x27_1
                    *arg1 = var_88[zx.q(x25_1.d)]
                    *(arg1 + 4) = x8_2
                    break
                
                x26_1 += 1
                
                if (x24_1 == x26_1)
                    goto label_a377d8
            
            break
        
    label_a377d8:
        cond:1_1 = x25_1 + 1 == x24_1
        x19_1 += 1
        x25_1 += 1
        x27_1 = x28_1
    while (not(cond:1_1))

return zx.q(x28_1) & 1
