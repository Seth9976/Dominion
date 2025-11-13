// 函数: _Z11HasHeirloom14DomGameVersion11DomCardEnumRS0_
// 地址: 0xbbadb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg2 + (arg1 << 0x10)) s% 0x3e5
int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_1) << 3))
int32_t x21 = arg2
int32_t x20 = arg1
void* x0_3
int32_t x8_3

if (x9_4 != 0)
    while (*x9_4 != x21 || x9_4[1] != x20)
        x9_4 = *(x9_4 + 0x10)
        
        if (x9_4 == 0)
            goto label_bbae14
    
    x0_3 = *(x9_4 + 8)
    x8_3 = *(x0_3 + 0xe0)
    
    if (x8_3 == 0)
        return 0
    
    goto label_bbae84

label_bbae14:
DomDefGetSlow(zx.q(x21), zx.q(x20))
int32_t* x0_1 = malloc(0x18)
int64_t x8_2 = sx.q(x8_1) << 3
int64_t x9_5 = *(&data_1838a20 + x8_2)
*x0_1 = x21
x0_1[1] = x20
*(&data_1838a20 + x8_2) = x0_1
*(x0_1 + 0x10) = x9_5
x0_3 = DomDefGetSlow(zx.q(x21), zx.q(x20))
*(x0_1 + 8) = x0_3
x8_3 = *(x0_3 + 0xe0)

if (x8_3 == 0)
    return 0

label_bbae84:
int64_t x8_4

if (x8_3 != 0xf)
    int32_t x8_5 = *(x0_3 + 0x1a0)
    
    if (x8_5 == 0xf)
        x8_4 = 1
    else
        if (x8_5 == 0)
            return 0
        
        int32_t x8_6 = *(x0_3 + 0x260)
        
        if (x8_6 == 0)
            return 0
        
        if (x8_6 != 0xf)
            int32_t x8_9 = *(x0_3 + 0x320)
            
            if (x8_9 == 0)
                return 0
            
            if (x8_9 != 0xf)
                int32_t x8_10 = *(x0_3 + 0x3e0)
                
                if (x8_10 == 0)
                    return 0
                
                if (x8_10 != 0xf)
                    int32_t x8_11 = *(x0_3 + 0x4a0)
                    
                    if (x8_11 == 0)
                        return 0
                    
                    if (x8_11 != 0xf)
                        int32_t x8_12 = *(x0_3 + 0x560)
                        
                        if (x8_12 == 0)
                            return 0
                        
                        if (x8_12 != 0xf)
                            if (*(x0_3 + 0x620) != 0xf)
                                return 0
                            
                            x8_4 = 7
                        else
                            x8_4 = 6
                    else
                        x8_4 = 5
                else
                    x8_4 = 4
            else
                x8_4 = 3
        else
            x8_4 = 2
else
    x8_4 = 0

*arg3 = *(x0_3 + x8_4 * 0xc0 + 0xf8)
return 1
