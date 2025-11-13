// 函数: _Z14HasSetupHandFnR7DomGame11DomCardEnumRPFvvE
// 地址: 0xbbb8d0
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
            goto label_bbb930
    
    x0_3 = *(x9 + 8)
    x8_6 = *(x0_3 + 0xe0)
    
    if (x8_6 == 0)
        return 0
    
    goto label_bbb9a0

label_bbb930:
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

label_bbb9a0:
int64_t x8_7

if (x8_6 != 2)
    int32_t x8_8 = *(x0_3 + 0x1a0)
    
    if (x8_8 == 2)
        x8_7 = 1
    else
        if (x8_8 == 0)
            return 0
        
        int32_t x8_9 = *(x0_3 + 0x260)
        
        if (x8_9 == 0)
            return 0
        
        if (x8_9 != 2)
            int32_t x8_12 = *(x0_3 + 0x320)
            
            if (x8_12 == 0)
                return 0
            
            if (x8_12 != 2)
                int32_t x8_13 = *(x0_3 + 0x3e0)
                
                if (x8_13 == 0)
                    return 0
                
                if (x8_13 != 2)
                    int32_t x8_14 = *(x0_3 + 0x4a0)
                    
                    if (x8_14 == 0)
                        return 0
                    
                    if (x8_14 != 2)
                        int32_t x8_15 = *(x0_3 + 0x560)
                        
                        if (x8_15 == 0)
                            return 0
                        
                        if (x8_15 != 2)
                            if (*(x0_3 + 0x620) != 2)
                                return 0
                            
                            x8_7 = 7
                        else
                            x8_7 = 6
                    else
                        x8_7 = 5
                else
                    x8_7 = 4
            else
                x8_7 = 3
        else
            x8_7 = 2
else
    x8_7 = 0

*arg3 = *(x0_3 + x8_7 * 0xc0 + 0xf0)
return 1
