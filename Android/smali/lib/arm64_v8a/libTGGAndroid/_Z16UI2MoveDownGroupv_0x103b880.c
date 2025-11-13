// 函数: _Z16UI2MoveDownGroupv
// 地址: 0x103b880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_3 = zx.q(*(gUI2Editor + 0x704c))

if (i_3.d == 0)
    return 

int32_t x2

if (i_3.d s< 1)
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
        
        i = i_3
        i_3 -= 1
    while (i != 1)

uint64_t x21 = zx.q(*(gUI2Editor + 0x6010))
void* x20 = *gUI2
void* x0_1 = UI2ElementByIndexRec(x20 + x21 * 0x19a8, *(gUI2Editor + 0x6008), x2)
uint64_t x8 = zx.q(*(gUI2 + 8))
int32_t i_1 = *(x0_1 + 0x19a0)
void* x1_1
void* x10_3

if (x8.d != 0)
    int64_t x12_1 = x20 + x8 * 0x19a8
    void* x10_2 = x20
    
    while (true)
        if (zx.d(*(x10_2 + 0x19a2)) == 0)
            x10_2 += 0x19a8
            
            if (x10_2 u>= x12_1)
                goto label_103b978
        else
            int32_t x13_2 = *(x10_2 + 0x1970)
            
            if (x13_2 != 0)
                uint64_t x14_1 = 0
                
                while (*(x10_2 + (x14_1 << 0x20 s>> 0x1e) + 0x1870) != i_1)
                    bool cond:1_1 = x13_2 != x14_1.d + 1
                    x14_1 = zx.q(x14_1.d + 1)
                    
                    if (not(cond:1_1))
                        goto label_103b96c
                
                if (*(x10_2 + 0x1688) == 0)
                    x1_1 = nullptr
                else
                    x1_1 = x10_2
                
                x10_3 = *(x0_1 + 0x17d0)
                
                if (x10_3 == 0)
                    break
                
                goto label_103b99c
            
        label_103b96c:
            x10_2 += 0x19a8
            
            if (x12_1 u<= x10_2)
                goto label_103b978
    
    goto label_103b9f4

label_103b978:
x1_1 = nullptr
x10_3 = *(x0_1 + 0x17d0)
int64_t x9_1

if (x10_3 != 0)
label_103b99c:
    int32_t x11_3 = *(x10_3 + 0x1970)
    
    if (x11_3 == 0)
        goto label_103b9f4
    
    int32_t x9
    
    if (*(x10_3 + 0x1870) != i_1)
        uint64_t x13_3 = 0
        int32_t x12_3
        
        do
            x12_3 = x13_3.d + 1
            
            if (x11_3 == x12_3)
                goto label_103b9f4
            
            x13_3 = zx.q(x12_3)
        while (*(x10_3 + (x13_3 << 0x20 s>> 0x1e) + 0x1870) != i_1)
        
        x9 = x12_3 + 1
        
        if (x9 == x11_3)
            goto label_103b9f4
    else
        x9 = 1
        
        if (1 == x11_3)
            goto label_103b9f4
    
    x9_1 = x20 + zx.q(*(x10_3 + (sx.q(x9) << 2) + 0x1870)) * 0x19a8
    
    if (x1_1 != 0)
        goto label_103b9fc
    
    goto label_103babc

label_103b9f4:
x9_1 = 0
int64_t x0_2
uint64_t* const x2_1

if (x1_1 == 0)
label_103babc:
    
    if (x20 == 0 || *(x20 + x21 * 0x19a8 + 0x1970) == 0)
        x2_1 = V20
        x0_2 = 0
        x1_1 = nullptr
    else
        x1_1 = x20 + zx.q(*(x20 + x21 * 0x19a8 + 0x1868)) * 0x19a8
        x2_1 = V20
        x0_2 = 2
else
label_103b9fc:
    
    if (x9_1 == 0)
        if (x8.d != 0)
            int32_t i_2 = *(x1_1 + 0x19a0)
            int64_t x8_3 = x20 + x8 * 0x19a8
            x1_1 = x20
            
            while (true)
                if (zx.d(*(x1_1 + 0x19a2)) == 0)
                    x1_1 += 0x19a8
                    
                    if (x1_1 u>= x8_3)
                        break
                else
                    int32_t x11_5 = *(x1_1 + 0x1970)
                    
                    if (x11_5 != 0)
                        uint64_t x12_4 = 0
                        
                        while (*(x1_1 + (x12_4 << 0x20 s>> 0x1e) + 0x1870) != i_2)
                            bool cond:2_1 = x11_5 != x12_4.d + 1
                            x12_4 = zx.q(x12_4.d + 1)
                            
                            if (not(cond:2_1))
                                goto label_103ba78
                        
                        if (*(x1_1 + 0x1688) == 0)
                            goto label_103babc
                        
                        if (x20 != 0)
                            goto label_103ba14
                        
                        goto label_103bab0
                    
                label_103ba78:
                    x1_1 += 0x19a8
                    
                    if (x8_3 u<= x1_1)
                        break
        
        goto label_103babc
    
    if (x20 == 0 || *(x1_1 + 0x1970) == 0)
    label_103bab0:
        x2_1 = V20
        x0_2 = 1
    else
    label_103ba14:
        x1_1 = x20 + zx.q(*(x1_1 + 0x1868)) * 0x19a8
        x2_1 = V20
        x0_2 = 2

UI2Move(x0_2, x1_1, x2_1)
UI2Free(gUI2Editor + 0x6010)
*(gUI2Editor + 0x6010) = 0
return UI2CreateUndoCheckpoint(true) __tailcall
