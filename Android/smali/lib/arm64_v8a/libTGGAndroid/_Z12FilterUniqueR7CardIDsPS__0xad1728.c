// 函数: _Z12FilterUniqueR7CardIDsPS_
// 地址: 0xad1728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardIDs& x19 = arg1
int32_t var_cc0[0x320]

if (arg2 != 0)
    *(arg2 + 0xc80) = 0
    
    if (*(x19 + 0xc80) s>= 1)
        int32_t x23_1 = 0
        int32_t i = 0
        
        do
            arg1 = CardWhat(*(DomGetContext() + 8), zx.q(*(x19 + (sx.q(i) << 2))))
            uint64_t x8_4
            int64_t x9_1
            
            if (x23_1 s>= 1 && var_cc0[0] != arg1.d)
                x8_4 = zx.q(x23_1)
                int64_t x10_1 = 1
                
                do
                    x9_1 = x10_1
                    
                    if (x8_4 == x10_1)
                        break
                    
                    x10_1 = x9_1 + 1
                while (var_cc0[x9_1] != arg1.d)
            
            if (x23_1 s< 1 || (var_cc0[0] != arg1.d && x9_1 u>= x8_4))
                var_cc0[sx.q(x23_1)] = arg1.d
                x23_1 += 1
            else
                int64_t x9_2 = sx.q(*(arg2 + 0xc80))
                int64_t x8_6 = sx.q(i) << 2
                int32_t x10_3 = *(x19 + x8_6)
                i -= 1
                *(arg2 + 0xc80) = x9_2.d + 1
                *(arg2 + (x9_2 << 2)) = x10_3
                int64_t x9_4 = sx.q(*(x19 + 0xc80)) - 1
                *(x19 + 0xc80) = x9_4.d
                *(x19 + x8_6) = *(x19 + (x9_4 << 2))
            
            i += 1
        while (i s< *(x19 + 0xc80))
else if (*(x19 + 0xc80) s> 0)
    int32_t x22_1 = 0
    int32_t x21_2 = 0
    
    while (true)
        arg1 = CardWhat(*(DomGetContext() + 8), zx.q(*(x19 + (sx.q(x21_2) << 2))))
        
        if (x22_1 s>= 1)
            uint64_t x8_11
            int64_t x9_6
            
            if (var_cc0[0] != arg1.d)
                x8_11 = zx.q(x22_1)
                int64_t x10_4 = 1
                
                do
                    x9_6 = x10_4
                    
                    if (x8_11 == x10_4)
                        break
                    
                    x10_4 = x9_6 + 1
                while (var_cc0[x9_6] != arg1.d)
            
            if (var_cc0[0] == arg1.d || x9_6 u< x8_11)
                int64_t x8_13 = sx.q(*(x19 + 0xc80)) - 1
                *(x19 + 0xc80) = x8_13.d
                *(x19 + (sx.q(x21_2) << 2)) = *(x19 + (x8_13 << 2))
                
                if (x21_2 s>= *(x19 + 0xc80))
                    break
                
                continue
        
        var_cc0[sx.q(x22_1)] = arg1.d
        x22_1 += 1
        x21_2 += 1
        
        if (x21_2 s>= *(x19 + 0xc80))
            break
