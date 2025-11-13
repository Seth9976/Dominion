// 函数: _Z16HasWhileExistsFnR7DomGame11DomCardEnumRPFvvE
// 地址: 0xbbbc4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x21 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x20 = arg2
void* x0_3
int32_t x8_6

if (x9 != 0)
    while (*x9 != x20 || x9[1] != x21)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bbbcac
    
    x0_3 = *(x9 + 8)
    x8_6 = *(x0_3 + 0xe0)
    
    if (x8_6 == 0)
        return 0
    
    goto label_bbbd28

label_bbbcac:
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
x8_6 = *(x0_3 + 0xe0)

if (x8_6 == 0)
    return 0

label_bbbd28:
int64_t x8_8

if (x8_6 == 6 || *(x0_3 + 0xe4) == 2)
    x8_8 = 0
else
    int32_t x8_11 = *(x0_3 + 0x1a0)
    
    if (x8_11 == 0)
        return 0
    
    if (x8_11 == 6 || *(x0_3 + 0x1a4) == 2)
        x8_8 = 1
    else
        int32_t x8_13 = *(x0_3 + 0x260)
        
        if (x8_13 == 0)
            return 0
        
        if (x8_13 == 6 || *(x0_3 + 0x264) == 2)
            x8_8 = 2
        else
            int32_t x8_15 = *(x0_3 + 0x320)
            
            if (x8_15 == 0)
                return 0
            
            if (x8_15 == 6 || *(x0_3 + 0x324) == 2)
                x8_8 = 3
            else
                int32_t x8_17 = *(x0_3 + 0x3e0)
                
                if (x8_17 == 0)
                    return 0
                
                if (x8_17 == 6 || *(x0_3 + 0x3e4) == 2)
                    x8_8 = 4
                else
                    int32_t x8_19 = *(x0_3 + 0x4a0)
                    
                    if (x8_19 == 0)
                        return 0
                    
                    if (x8_19 == 6 || *(x0_3 + 0x4a4) == 2)
                        x8_8 = 5
                    else
                        int32_t x8_21 = *(x0_3 + 0x560)
                        
                        if (x8_21 == 0)
                            return 0
                        
                        if (x8_21 == 6 || *(x0_3 + 0x564) == 2)
                            x8_8 = 6
                        else
                            int32_t x8_23 = *(x0_3 + 0x620)
                            
                            if (x8_23 == 0 || (x8_23 != 6 && *(x0_3 + 0x624) != 2))
                                return 0
                            
                            x8_8 = 7

*arg3 = *(x0_3 + x8_8 * 0xc0 + 0xf8)
return 1
