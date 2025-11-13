// 函数: _Z12UI2MoveUpOnev
// 地址: 0x103b2d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(gUI2Editor + 0x704c))

if (i_2.d == 0)
    return 

int32_t x2

if (i_2.d s< 1)
    x2 = -1
else
    int64_t (* x10_1)() = gUI2Editor + 0x604c
    x2 = -1
    uint64_t i
    
    do
        int32_t x11_1 = *x10_1
        x10_1 += 4
        bool z_1
        
        if (x2 s<= x11_1)
            z_1 = x2 == 0xffffffff
        else
            z_1 = true
        
        if (z_1)
            x2 = x11_1
        
        i = i_2
        i_2 -= 1
    while (i != 1)

void* x20 = *gUI2
void* x0_1 =
    UI2ElementByIndexRec(x20 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8, *(gUI2Editor + 0x6008), x2)
uint64_t x9 = zx.q(*(gUI2 + 8))
UI2* x0_2
int64_t x0_3
UI2* x1_1
Vec2* x2_1

if (x9.d == 0)
    x0_2 = nullptr
else
    int32_t i_1 = *(x0_1 + 0x19a0)
    int64_t x12_1 = x20 + x9 * 0x19a8
    void* x10_2 = x20
    
    while (true)
        if (zx.d(*(x10_2 + 0x19a2)) == 0)
            x10_2 += 0x19a8
            
            if (x10_2 u< x12_1)
                continue
            
        label_103b3c0:
            x0_2 = nullptr
            
            if (x9.d == 0)
                break
        else
            int32_t x13_2 = *(x10_2 + 0x1970)
            
            if (x13_2 == 0)
            label_103b3b4:
                x10_2 += 0x19a8
                
                if (x12_1 u> x10_2)
                    continue
                
                goto label_103b3c0
            
            uint64_t x14_1 = 0
            
            while (*(x10_2 + (x14_1 << 0x20 s>> 0x1e) + 0x1870) != i_1)
                bool cond:1_1 = x13_2 != x14_1.d + 1
                x14_1 = zx.q(x14_1.d + 1)
                
                if (not(cond:1_1))
                    goto label_103b3b4
            
            if (*(x10_2 + 0x1688) == 0)
                x0_2 = nullptr
            else
                x0_2 = x10_2
            
            if (x9.d == 0)
                break
        
        int64_t x9_1 = x20 + x9 * 0x19a8
        void* x11_3 = x20
        
        while (true)
            if (zx.d(*(x11_3 + 0x19a2)) == 0)
                x11_3 += 0x19a8
                
                if (x11_3 u>= x9_1)
                    break
            else
                int32_t x12_3 = *(x11_3 + 0x1970)
                
                if (x12_3 != 0)
                    int32_t x13_3 = *(x11_3 + 0x1870)
                    
                    if (x13_3 == i_1)
                        goto label_103b4a4
                    
                    uint64_t x15_4 = 0
                    int32_t x14_3
                    
                    do
                        if (x12_3 == x15_4.d + 1)
                            goto label_103b448
                        
                        x15_4 = zx.q(x15_4.d + 1)
                        x14_3 = x13_3
                        x13_3 = *(x11_3 + (x15_4 << 0x20 s>> 0x1e) + 0x1870)
                    while (x13_3 != i_1)
                    
                    if (x14_3 == 0)
                        goto label_103b4a4
                    
                    if (x20 == 0)
                        goto label_103b4a4
                    
                    uint64_t x8_1 = zx.q(x14_3) & 0xffff
                    x1_1 = x20 + mulu.dp.d(x8_1.d, 0x19a8)
                    
                    if (*(x20 + x8_1 * 0x19a8 + 0x167c) != 6
                            || zx.d(*(x20 + x8_1 * 0x19a8 + 0x17)) != 0)
                        x0_2 = x1_1
                        goto label_103b4a8
                    
                    if (*(x20 + x8_1 * 0x19a8 + 0x1970) == 0)
                        x2_1 = V20
                        x0_3 = 1
                    else
                        x2_1 = V20
                        x0_3 = 2
                        x1_1 = x20 + zx.q(*(x20 + x8_1 * 0x19a8 + 0x1868)) * 0x19a8
                    
                    goto label_103b4c0
                
            label_103b448:
                x11_3 += 0x19a8
                
                if (x9_1 u<= x11_3)
                    break
        
        break

label_103b4a4:

if (*(x0_2 + 0x17d0) == 0)
    x2_1 = V20
    x0_3 = 0
    x1_1 = nullptr
label_103b4c0:
    UI2Move(x0_3, x1_1, x2_1)
else
label_103b4a8:
    UI2MoveBefore(x0_2)

UI2Free(gUI2Editor + 0x6010)
*(gUI2Editor + 0x6010) = 0
return UI2CreateUndoCheckpoint(true) __tailcall
