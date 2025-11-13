// 函数: _Z20WrapperNextBreakCharR11WrapperData
// 地址: 0xf6d080
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
int64_t x10 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0xc)
char* x21 = x8 + x9
void* x22 = x8 + x10
char* x20 = x21

if (x9.d s< x10.d)
    do
        int32_t x11_1 = sx.d(*x20)
        int32_t x9_1 = x11_1 & 0xff
        
        if ((x11_1 & 0x80000000) != 0)
            int32_t x10_1 = x9_1 & 0xe0
            
            if (x10_1 != 0xc0)
                int32_t x11_2 = x11_1 & 0xf0
                int32_t x12_4
                
                if (x11_2 != 0xe0)
                    x12_4 = x9_1
                    
                    if ((x9_1 & 0xf8) == 0xf0)
                        x12_4 = (0xfffc0fff & (x9_1 & 7) << 0x12) | (0x3f & zx.d(x20[1])) << 0xc
                            | (zx.d(x20[2]) & 0x3f) << 6 | (zx.d(x20[3]) & 0x3f)
                else
                    x12_4 = (zx.d(x20[1]) & 0x3f) << 6 | (x9_1 & 0xf) << 0xc | (zx.d(x20[2]) & 0x3f)
                
                if (x12_4 != 0x20)
                    break
                
                if (x10_1 == 0xc0)
                    x20 = &x20[1]
                else if (x11_2 == 0xe0)
                    x20 = &x20[2]
                else if ((x9_1 & 0xf8) == 0xf0)
                    x20 = &x20[3]
            else
                if (((zx.d(x20[1]) & 0x3f) | (0x1f & x9_1) << 6) != 0x20)
                    break
                
                x20 = &x20[1]
        else if (x9_1 != 0x20)
            break
        
        x20 = &x20[1]
    while (x20 u< x22)

if (x20 u< x22)
    do
        int32_t x9_3 = sx.d(*x20)
        uint32_t x8_1 = x9_3 & 0xff
        uint32_t x0 = x8_1
        
        if ((x9_3 & 0x80000000) != 0)
            if ((x8_1 & 0xe0) == 0xc0)
                x0 = (zx.d(x20[1]) & 0x3f) | (0x1f & x8_1) << 6
            else if ((x9_3 & 0xf0) != 0xe0)
                x0 = x8_1
                
                if ((x8_1 & 0xf8) == 0xf0)
                    x0 = (((0xfffff03f
                        & ((0xfffc0fff & (x8_1 & 7) << 0x12) | (0x3f & zx.d(x20[1])) << 0xc))
                        | (0x3f & zx.d(x20[2])) << 6) & 0xffffffc0) | (zx.d(x20[3]) & 0x3f)
            else
                x0 = (((0xfffff03f & (x8_1 & 0xf) << 0xc) | (0x3f & zx.d(x20[1])) << 6)
                    & 0xffffffc0) | (zx.d(x20[2]) & 0x3f)
        
        if (*(arg1 + 0xc0) != 4)
            if (x20 != x21 && (CanBreak(x0) & 1) != 0)
                break
            
            x8_1 = zx.d(*x20)
            
            if ((x8_1 & 0x80) != 0)
            label_f6d260:
                
                if ((x8_1 & 0xe0) == 0xc0)
                    x20 = &x20[1]
                else if ((x8_1 & 0xf0) == 0xe0)
                    x20 = &x20[2]
                else if ((x8_1 & 0xf8) == 0xf0)
                    x20 = &x20[3]
        else
            if (x20 != x21 && x0 == 0x7b)
                break
            
            if ((x9_3 & 0x80) != 0)
                goto label_f6d260
        
        x20 = &x20[1]
    while (x20 u< x22)
    
    x8 = *arg1

return zx.q(x20.d - x8.d)
