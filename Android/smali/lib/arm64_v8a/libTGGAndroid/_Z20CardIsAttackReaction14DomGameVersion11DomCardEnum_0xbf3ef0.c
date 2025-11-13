// 函数: _Z20CardIsAttackReaction14DomGameVersion11DomCardEnum
// 地址: 0xbf3ef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg2 + (arg1 << 0x10)) s% 0x3e5
int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_1) << 3))
int32_t x20 = arg2
int32_t x19 = arg1
void* x0_3

if (x9_4 != 0)
    while (*x9_4 != x20 || x9_4[1] != x19)
        x9_4 = *(x9_4 + 0x10)
        
        if (x9_4 == 0)
            goto label_bf3f48
    
    x0_3 = *(x9_4 + 8)
    
    if ((zx.d(*(x0_3 + 0xc8)) & 0x40) != 0)
        goto label_bf3fb4
else
label_bf3f48:
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
    
    if ((zx.d(*(x0_3 + 0xc8)) & 0x40) != 0)
    label_bf3fb4:
        int32_t x8_5 = *(x0_3 + 0xe0)
        
        if (x8_5 != 0)
            if (x8_5 == 6 && *(x0_3 + 0xe4) == 0 && *(x0_3 + 0xec) == 5)
                return 1
            
            int32_t x8_8 = *(x0_3 + 0x1a0)
            
            if (x8_8 == 6)
                if (*(x0_3 + 0x1a4) == 0 && *(x0_3 + 0x1ac) == 5)
                    return 1
                
            label_bf4000:
                int32_t x8_11 = *(x0_3 + 0x260)
                
                if (x8_11 != 0)
                    if (x8_11 == 6 && *(x0_3 + 0x264) == 0 && *(x0_3 + 0x26c) == 5)
                        return 1
                    
                    int32_t x8_14 = *(x0_3 + 0x320)
                    
                    if (x8_14 != 0)
                        if (x8_14 == 6 && *(x0_3 + 0x324) == 0 && *(x0_3 + 0x32c) == 5)
                            return 1
                        
                        int32_t x8_17 = *(x0_3 + 0x3e0)
                        
                        if (x8_17 != 0)
                            if (x8_17 == 6 && *(x0_3 + 0x3e4) == 0 && *(x0_3 + 0x3ec) == 5)
                                return 1
                            
                            int32_t x8_20 = *(x0_3 + 0x4a0)
                            
                            if (x8_20 != 0)
                                if (x8_20 == 6 && *(x0_3 + 0x4a4) == 0 && *(x0_3 + 0x4ac) == 5)
                                    return 1
                                
                                int32_t x8_23 = *(x0_3 + 0x560)
                                
                                if (x8_23 != 0)
                                    if (x8_23 == 6 && *(x0_3 + 0x564) == 0 && *(x0_3 + 0x56c) == 5)
                                        return 1
                                    
                                    int32_t x8_26 = *(x0_3 + 0x620)
                                    
                                    if (x8_26 != 0 && x8_26 == 6 && *(x0_3 + 0x624) == 0
                                            && *(x0_3 + 0x62c) == 5)
                                        return 1
            else if (x8_8 != 0)
                goto label_bf4000
return 0
