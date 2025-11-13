// 函数: _Z16HasArtifactSetupR7DomGame11DomCardEnumPS1_
// 地址: 0xbbd4f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x21 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x20 = arg2
uint64_t result
void* x8_6

if (x9 != 0)
    while (*x9 != x20 || x9[1] != x21)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bbd554
    
    x8_6 = *(x9 + 8)
    result = zx.q(*(x8_6 + 0xe0))
    
    if (result.d != 0)
        goto label_bbd5c4
else
label_bbd554:
    DomDefGetSlow(zx.q(x20), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x20
    x0_1[1] = x21
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    void* x0_3 = DomDefGetSlow(zx.q(x20), zx.q(x21))
    x8_6 = x0_3
    *(x0_1 + 8) = x0_3
    result = zx.q(*(x8_6 + 0xe0))
    
    if (result.d != 0)
    label_bbd5c4:
        int32_t x9_3
        
        if (result.d == 0x10)
            result = 1
            *arg3 = *(x8_6 + 0xf8)
            x9_3 = *(x8_6 + 0x1a0)
            
            if (x9_3 == 0x10)
                goto label_bbd60c
            
            goto label_bbd5e4
        
        result = 0
        x9_3 = *(x8_6 + 0x1a0)
        int32_t x9_4
        
        if (x9_3 != 0x10)
        label_bbd5e4:
            
            if (x9_3 != 0)
                x9_4 = *(x8_6 + 0x260)
                
                if (x9_4 != 0)
                    goto label_bbd620
        else
        label_bbd60c:
            *(arg3 + (zx.q(result.d) << 2)) = *(x8_6 + 0x1b8)
            result = zx.q(result.d + 1)
            x9_4 = *(x8_6 + 0x260)
            
            if (x9_4 != 0)
            label_bbd620:
                
                if (x9_4 == 0x10)
                    *(arg3 + (zx.q(result.d) << 2)) = *(x8_6 + 0x278)
                    result = zx.q(result.d + 1)
                
                int32_t x9_7 = *(x8_6 + 0x320)
                
                if (x9_7 != 0)
                    if (x9_7 == 0x10)
                        *(arg3 + (zx.q(result.d) << 2)) = *(x8_6 + 0x338)
                        result = zx.q(result.d + 1)
                    
                    int32_t x9_9 = *(x8_6 + 0x3e0)
                    
                    if (x9_9 != 0)
                        if (x9_9 == 0x10)
                            *(arg3 + (zx.q(result.d) << 2)) = *(x8_6 + 0x3f8)
                            result = zx.q(result.d + 1)
                        
                        int32_t x9_11 = *(x8_6 + 0x4a0)
                        
                        if (x9_11 != 0)
                            if (x9_11 == 0x10)
                                *(arg3 + (zx.q(result.d) << 2)) = *(x8_6 + 0x4b8)
                                result = zx.q(result.d + 1)
                            
                            int32_t x9_13 = *(x8_6 + 0x560)
                            
                            if (x9_13 != 0)
                                if (x9_13 == 0x10)
                                    *(arg3 + (zx.q(result.d) << 2)) = *(x8_6 + 0x578)
                                    result = zx.q(result.d + 1)
                                
                                if (*(x8_6 + 0x620) == 0x10)
                                    *(arg3 + (zx.q(result.d) << 2)) = *(x8_6 + 0x638)
                                    return zx.q(result.d + 1)
return result
