// 函数: sub_acb504
// 地址: 0xacb504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg2
int32_t var_cb0
int32_t x0_1 = CardsTypesWhere(&var_cb0, 0x3e9)

if ((CardIs(zx.q(x20), 4) & 1) != 0)
    int32_t* x22_1 = *(arg1 + 8)
    uint64_t x21_1 = zx.q(**(arg1 + 0x10))
    int32_t x0_5 = CardWhat(zx.q(x20))
    
    if (x21_1.d s< 1)
    label_acb590:
        int32_t x0_7 = CardWhat(zx.q(x20))
        
        if (x0_1 s< 1)
            return 1
        
        if (var_cb0 != x0_7)
            uint64_t x8_5 = zx.q(x0_1)
            uint64_t x9_2 = 0
            int32_t x12_1
            
            do
                if (x8_5 - 1 == x9_2)
                    x9_2 = x8_5
                    break
                
                int32_t var_cac[0x31f]
                x12_1 = var_cac[x9_2]
                x9_2 += 1
            while (x12_1 != x0_7)
            return zx.q(x9_2 u>= x8_5 ? 1 : 0)
    else if (*x22_1 != x0_5)
        int64_t x8_3 = 0
        int32_t x11_1
        
        do
            if (x21_1 - 1 == x8_3)
                goto label_acb590
            
            x11_1 = x22_1[1 + x8_3]
            x8_3 += 1
        while (x11_1 != x0_5)
        
        if (x8_3 u>= x21_1)
            goto label_acb590

return 0
