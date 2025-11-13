// 函数: _Z14UI2MoveDownOnev
// 地址: 0x103bb30
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
        
        if (x2 s>= x11_1)
            z_1 = x2 == 0xffffffff
        else
            z_1 = true
        
        if (z_1)
            x2 = x11_1
        
        i = i_2
        i_2 -= 1
    while (i != 1)

uint64_t x21 = zx.q(*(gUI2Editor + 0x6010))
void* x20 = *gUI2
void* x0_1 = UI2ElementByIndexRec(x20 + x21 * 0x19a8, *(gUI2Editor + 0x6008), x2)
uint64_t x9 = zx.q(*(gUI2 + 8))
int32_t i_1 = *(x0_1 + 0x19a0)
UI2* x1_1
void* x9_2

if (x9.d != 0)
    int64_t x11_2 = x20 + x9 * 0x19a8
    void* x9_1 = x20
    
    while (true)
        if (zx.d(*(x9_1 + 0x19a2)) == 0)
            x9_1 += 0x19a8
            
            if (x9_1 u>= x11_2)
                goto label_103bc28
        else
            int32_t x12_2 = *(x9_1 + 0x1970)
            
            if (x12_2 != 0)
                uint64_t x13_1 = 0
                
                while (*(x9_1 + (x13_1 << 0x20 s>> 0x1e) + 0x1870) != i_1)
                    bool cond:1_1 = x12_2 != x13_1.d + 1
                    x13_1 = zx.q(x13_1.d + 1)
                    
                    if (not(cond:1_1))
                        goto label_103bc1c
                
                if (*(x9_1 + 0x1688) == 0)
                    x1_1 = nullptr
                else
                    x1_1 = x9_1
                
                x9_2 = *(x0_1 + 0x17d0)
                
                if (x9_2 == 0)
                    break
                
                goto label_103bc4c
            
        label_103bc1c:
            x9_1 += 0x19a8
            
            if (x11_2 u<= x9_1)
                goto label_103bc28
    
    goto label_103bcf4

label_103bc28:
x1_1 = nullptr
x9_2 = *(x0_1 + 0x17d0)
int64_t x0_2
Vec2* x2_1

if (x9_2 != 0)
label_103bc4c:
    int32_t x10_3 = *(x9_2 + 0x1970)
    
    if (x10_3 == 0)
        goto label_103bcf4
    
    int32_t x8
    
    if (*(x9_2 + 0x1870) != i_1)
        uint64_t x12_3 = 0
        
        while (true)
            int32_t x11_4 = x12_3.d + 1
            
            if (x10_3 == x11_4)
                break
            
            x12_3 = zx.q(x11_4)
            
            if (*(x9_2 + (x12_3 << 0x20 s>> 0x1e) + 0x1870) == i_1)
                x8 = x11_4 + 1
                
                if (x8 == x10_3)
                    goto label_103bcf4
                
                goto label_103bca4
        
        goto label_103bcf4
    
    x8 = 1
    
    if (1 == x10_3)
        goto label_103bcf4
    
label_103bca4:
    
    if (x20 == 0)
        goto label_103bcf4
    
    uint64_t x8_2 = zx.q(*(x9_2 + (sx.q(x8) << 2) + 0x1870))
    x1_1 = x20 + x8_2 * 0x19a8
    
    if (*(x20 + x8_2 * 0x19a8 + 0x167c) != 6 || zx.d(*(x20 + x8_2 * 0x19a8 + 0x17)) != 0)
        x2_1 = V20
        x0_2 = 2
    else
        x2_1 = V20
        x0_2 = 1
else
label_103bcf4:
    
    if (*(x1_1 + 0x17d0) != 0)
        x2_1 = V20
        x0_2 = 2
    else if (x20 == 0 || *(x20 + x21 * 0x19a8 + 0x1970) == 0)
        x2_1 = V20
        x0_2 = 0
        x1_1 = nullptr
    else
        x1_1 = x20 + zx.q(*(x20 + x21 * 0x19a8 + 0x1868)) * 0x19a8
        x2_1 = V20
        x0_2 = 2

UI2Move(x0_2, x1_1, x2_1)
UI2Free(gUI2Editor + 0x6010)
*(gUI2Editor + 0x6010) = 0
return UI2CreateUndoCheckpoint(true) __tailcall
