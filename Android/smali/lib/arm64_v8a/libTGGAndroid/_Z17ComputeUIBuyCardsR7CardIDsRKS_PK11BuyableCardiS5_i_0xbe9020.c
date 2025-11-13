// 函数: _Z17ComputeUIBuyCardsR7CardIDsRKS_PK11BuyableCardiS5_i
// 地址: 0xbe9020
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = memcpy(arg1, arg2, 0xc84)

if (arg4 s>= 1)
    int64_t x24_1 = 0
    uint64_t x23_1 = zx.q(arg4)
    
    while (true)
        uint64_t x8_1 = zx.q(*(arg1 + 0xc80))
        uint64_t x9_2 = zx.q(*(arg3 + (x24_1 << 3)))
        CardIDs& x11_1 = arg1
        int32_t x10_2 = (*(x9_2 + 4) & 1) << 0x10
        
        if (x8_1.d s< 1)
        label_be9068:
            result = operator+=(arg1, zx.q(x9_2.d) | zx.q(x10_2))
            x24_1 += 1
            
            if (x24_1 == x23_1)
                break
        else
            int32_t x12_1
            
            while (true)
                x12_1 = *x11_1
                
                if ((x12_1 & 0xffff0000) == x9_2.d)
                    break
                
                uint64_t temp0_1 = x8_1
                x8_1 -= 1
                x11_1 += 4
                
                if (temp0_1 == 1)
                    goto label_be9068
            
            *x11_1 = x12_1 | x10_2
            x24_1 += 1
            
            if (x24_1 == x23_1)
                break

if (arg6 s>= 1)
    int64_t x22_1 = 0
    uint64_t x21_1 = zx.q(arg6)
    
    while (true)
        void* x9_3 = arg5 + (x22_1 << 3)
        uint64_t x8_3 = zx.q(*(arg1 + 0xc80))
        int32_t x10_3 = *x9_3
        int32_t x9_4
        
        if ((zx.d(*(x9_3 + 4)) & 1) == 0)
            x9_4 = 0x20000
        else
            x9_4 = 0x40000
        
        CardIDs& x11_3 = arg1
        
        if (x8_3.d s< 1)
        label_be90ec:
            result = operator+=(arg1, zx.q(x10_3) | zx.q(x9_4))
            x22_1 += 1
            
            if (x22_1 == x21_1)
                break
        else
            int32_t x12_2
            
            while (true)
                x12_2 = *x11_3
                
                if ((x12_2 & 0xffff0000) == x10_3)
                    break
                
                uint64_t temp1_1 = x8_3
                x8_3 -= 1
                x11_3 += 4
                
                if (temp1_1 == 1)
                    goto label_be90ec
            
            *x11_3 = x12_2 | x9_4
            x22_1 += 1
            
            if (x22_1 == x21_1)
                break

return result
