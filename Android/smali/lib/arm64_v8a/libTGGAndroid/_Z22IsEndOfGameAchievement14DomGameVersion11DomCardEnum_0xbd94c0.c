// 函数: _Z22IsEndOfGameAchievement14DomGameVersion11DomCardEnum
// 地址: 0xbd94c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg2 + (arg1 << 0x10)) s% 0x3e5
int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_1) << 3))
int32_t x20 = arg2
int32_t x19 = arg1
void* x0_3
int32_t x8_3

if (x9_4 != 0)
    while (*x9_4 != x20 || x9_4[1] != x19)
        x9_4 = *(x9_4 + 0x10)
        
        if (x9_4 == 0)
            goto label_bd9518
    
    x0_3 = *(x9_4 + 8)
    x8_3 = *(x0_3 + 0xe0)
    
    if (x8_3 != 0)
        goto label_bd9584
else
label_bd9518:
    DomDefGetSlow(zx.q(x20), zx.q(x19))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_2 = sx.q(x8_1) << 3
    int64_t x9_5 = *(&data_1838a20 + x8_2)
    *x0_1 = x20
    x0_1[1] = x19
    *(&data_1838a20 + x8_2) = x0_1
    *(x0_1 + 0x10) = x9_5
    x0_3 = DomDefGetSlow(zx.q(x20), zx.q(x19))
    *(x0_1 + 8) = x0_3
    x8_3 = *(x0_3 + 0xe0)
    
    if (x8_3 != 0)
    label_bd9584:
        
        if (x8_3 == 0x13 && *(x0_3 + 0xec) == 0x15)
            return 1
        
        int32_t x8_5 = *(x0_3 + 0x1a0)
        
        if (x8_5 == 0x13)
            if (*(x0_3 + 0x1ac) == 0x15)
                return 1
            
        label_bd95b8:
            int32_t x8_7 = *(x0_3 + 0x260)
            
            if (x8_7 != 0)
                if (x8_7 == 0x13 && *(x0_3 + 0x26c) == 0x15)
                    return 1
                
                int32_t x8_9 = *(x0_3 + 0x320)
                
                if (x8_9 != 0)
                    if (x8_9 == 0x13 && *(x0_3 + 0x32c) == 0x15)
                        return 1
                    
                    int32_t x8_11 = *(x0_3 + 0x3e0)
                    
                    if (x8_11 != 0)
                        if (x8_11 == 0x13 && *(x0_3 + 0x3ec) == 0x15)
                            return 1
                        
                        int32_t x8_13 = *(x0_3 + 0x4a0)
                        
                        if (x8_13 != 0)
                            if (x8_13 == 0x13 && *(x0_3 + 0x4ac) == 0x15)
                                return 1
                            
                            int32_t x8_15 = *(x0_3 + 0x560)
                            
                            if (x8_15 != 0)
                                if (x8_15 == 0x13 && *(x0_3 + 0x56c) == 0x15)
                                    return 1
                                
                                int32_t x8_17 = *(x0_3 + 0x620)
                                
                                if (x8_17 != 0 && x8_17 == 0x13 && *(x0_3 + 0x62c) == 0x15)
                                    return 1
        else if (x8_5 != 0)
            goto label_bd95b8
return 0
