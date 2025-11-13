// 函数: _Z12UI2DumpStatsv
// 地址: 0x1029e24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gUI2 + 0x14)
int64_t result = XTrace("ui2 %d")
uint64_t x9 = zx.q(*(gUI2 + 8))

if (x9.d != 0)
    void* x21_1 = *gUI2
    int64_t x9_1 = x21_1 + x9 * 0x19a8
    
    while (true)
        if (zx.d(*(x21_1 + 0x19a2)) != 0)
            if (x21_1 != 0xffffffff)
                int32_t i_2 = 0
                
                while (true)
                    result = operator==(x21_1 + 0x1650, "tbl_logEntries")
                    int64_t var_250[0x40]
                    bool cond:0_1
                    
                    if ((result.d & 1) != 0)
                        cond:0_1 = i_2 == 0x3f
                        var_250[sx.q(i_2)] = x21_1
                        i_2 += 1
                    
                    if ((result.d & 1) == 0 || not(cond:0_1))
                        void* x8_2 = *gUI2
                        
                        if (x21_1 == 0)
                            x21_1 = x8_2
                        else
                            x21_1 += 0x19a8
                        
                        int64_t x8_3 = x8_2 + zx.q(*(gUI2 + 8)) * 0x19a8
                        
                        if (x21_1 u< x8_3)
                            while (zx.d(*(x21_1 + 0x19a2)) == 0)
                                x21_1 += 0x19a8
                                
                                if (x21_1 u>= x8_3)
                                    goto label_1029f0c
                            
                            if (x21_1 != 0xffffffff)
                                continue
                        
                    label_1029f0c:
                        
                        if (i_2 s< 1)
                            break
                    
                    uint64_t i_1 = zx.q(i_2)
                    int64_t (* x21_2)[0x40] = &var_250
                    uint64_t i
                    
                    do
                        void* x8_4 = *x21_2
                        x21_2 = &(*x21_2)[1]
                        *(x8_4 + 0x1970)
                        result = XTrace("ui2 tbl_logEntries %d")
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                    break
            
            break
        
        x21_1 += 0x19a8
        
        if (x21_1 u>= x9_1)
            break

return result
