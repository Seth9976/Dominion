// 函数: _Z10HasSetupFnR7DomGame11DomCardEnumRPFvvE
// 地址: 0xbbba7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x21 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x20 = arg2
void* x0_3
int32_t x9_2

if (x9 != 0)
    while (*x9 != x20 || x9[1] != x21)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bbbadc
    
    x0_3 = *(x9 + 8)
    x9_2 = *(x0_3 + 0xe0)
    
    if (x9_2 != 0)
        goto label_bbbb4c
else
label_bbbadc:
    DomDefGetSlow(zx.q(x20), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x20
    x0_1[1] = x21
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    x0_3 = DomDefGetSlow(zx.q(x20), zx.q(x21))
    *(x0_1 + 8) = x0_3
    x9_2 = *(x0_3 + 0xe0)
    
    if (x9_2 != 0)
    label_bbbb4c:
        int64_t x8_6 = 0
        
        if (x9_2 == 0xd || x9_2 == 1)
        label_bbbc28:
            *arg3 = *(x0_3 + x8_6 * 0xc0 + 0xf0)
            return 1
        
        int32_t x9_3 = *(x0_3 + 0x1a0)
        x8_6 = 1
        
        if (x9_3 == 0xd || x9_3 == 1)
            goto label_bbbc28
        
        if (x9_3 != 0)
            int32_t x9_4 = *(x0_3 + 0x260)
            
            if (x9_4 != 0)
                x8_6 = 2
                
                if (x9_4 == 1 || x9_4 == 0xd)
                    goto label_bbbc28
                
                int32_t x9_5 = *(x0_3 + 0x320)
                
                if (x9_5 != 0)
                    x8_6 = 3
                    
                    if (x9_5 == 1 || x9_5 == 0xd)
                        goto label_bbbc28
                    
                    int32_t x9_6 = *(x0_3 + 0x3e0)
                    
                    if (x9_6 != 0)
                        x8_6 = 4
                        
                        if (x9_6 == 1 || x9_6 == 0xd)
                            goto label_bbbc28
                        
                        int32_t x9_7 = *(x0_3 + 0x4a0)
                        
                        if (x9_7 != 0)
                            x8_6 = 5
                            
                            if (x9_7 == 1 || x9_7 == 0xd)
                                goto label_bbbc28
                            
                            int32_t x9_8 = *(x0_3 + 0x560)
                            
                            if (x9_8 != 0)
                                x8_6 = 6
                                
                                if (x9_8 == 1 || x9_8 == 0xd)
                                    goto label_bbbc28
                                
                                int32_t x9_9 = *(x0_3 + 0x620)
                                x8_6 = 7
                                
                                if (x9_9 == 1 || x9_9 == 0xd)
                                    goto label_bbbc28
return 0
