// 函数: _Z14UI2MoveUpGroupv
// 地址: 0x103b604
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

void* x19 = *gUI2
void* x0_1 =
    UI2ElementByIndexRec(x19 + zx.q(*(gUI2Editor + 0x6010)) * 0x19a8, *(gUI2Editor + 0x6008), x2)
uint64_t x8_1 = zx.q(*(gUI2 + 8))
int64_t x0_2
UI2* x1_1
Vec2* x2_1

if (x8_1.d == 0)
label_103b84c:
    x2_1 = V20
    x0_2 = 0
    x1_1 = nullptr
else
    int32_t i_1 = *(x0_1 + 0x19a0)
    int64_t x12_1 = x19 + x8_1 * 0x19a8
    void* x9_1 = x19
    int64_t x9_2
    
    while (true)
        if (zx.d(*(x9_1 + 0x19a2)) == 0)
            x9_1 += 0x19a8
            
            if (x9_1 u>= x12_1)
                break
        else
            int32_t x13_2 = *(x9_1 + 0x1970)
            
            if (x13_2 != 0)
                uint64_t x14_1 = 0
                
                while (*(x9_1 + (x14_1 << 0x20 s>> 0x1e) + 0x1870) != i_1)
                    bool cond:1_1 = x13_2 != x14_1.d + 1
                    x14_1 = zx.q(x14_1.d + 1)
                    
                    if (not(cond:1_1))
                        goto label_103b6e8
                
                if (*(x9_1 + 0x1688) == 0)
                    x1_1 = nullptr
                else
                    x1_1 = x9_1
                
                x9_2 = x19 + x8_1 * 0x19a8
                
                if (x8_1.d == 0)
                    goto label_103b7ac
                
                goto label_103b724
            
        label_103b6e8:
            x9_1 += 0x19a8
            
            if (x12_1 u<= x9_1)
                break
    
    x1_1 = nullptr
    x9_2 = x19 + x8_1 * 0x19a8
    void* x10_3
    
    if (x8_1.d != 0)
    label_103b724:
        void* x12_2 = x19
        int32_t x13_4
        
        while (true)
            if (zx.d(*(x12_2 + 0x19a2)) == 0)
                x12_2 += 0x19a8
                
                if (x12_2 u>= x9_2)
                    goto label_103b7ac
            else
                x13_4 = *(x12_2 + 0x1970)
                
                if (x13_4 != 0)
                    break
                
            label_103b784:
                x12_2 += 0x19a8
                
                if (x9_2 u<= x12_2)
                    goto label_103b7ac
        
        int32_t x14_3 = *(x12_2 + 0x1870)
        
        if (x14_3 == i_1)
            goto label_103b7ac
        
        uint64_t x16_1 = 0
        int32_t x15_4
        
        do
            if (x13_4 == x16_1.d + 1)
                goto label_103b784
            
            x16_1 = zx.q(x16_1.d + 1)
            x15_4 = x14_3
            x14_3 = *(x12_2 + (x16_1 << 0x20 s>> 0x1e) + 0x1870)
        while (x14_3 != i_1)
        
        if (x15_4 == 0)
            goto label_103b7ac
        
        x10_3 = x19 + mulu.dp.d(x15_4 & 0xffff, 0x19a8)
        
        if (x1_1 == 0)
            goto label_103b84c
    else
    label_103b7ac:
        x10_3 = nullptr
        
        if (x1_1 == 0)
            goto label_103b84c
    
    if (x10_3 == 0)
        if (x8_1.d != 0)
            while (true)
                if (zx.d(*(x19 + 0x19a2)) == 0)
                    x19 += 0x19a8
                    
                    if (x19 u>= x9_2)
                        goto label_103b84c
                else
                    int32_t x11_4 = *(x19 + 0x1970)
                    
                    if (x11_4 != 0)
                        uint64_t x12_3 = 0
                        
                        while (*(x19 + (x12_3 << 0x20 s>> 0x1e) + 0x1870) != *(x1_1 + 0x19a0))
                            bool cond:2_1 = x11_4 != x12_3.d + 1
                            x12_3 = zx.q(x12_3.d + 1)
                            
                            if (not(cond:2_1))
                                goto label_103b81c
                        
                        if (*(x19 + 0x1688) == 0)
                            break
                        
                        x2_1 = V20
                        x0_2 = 1
                        x1_1 = x19
                        goto label_103b858
                    
                label_103b81c:
                    x19 += 0x19a8
                    
                    if (x9_2 u<= x19)
                        goto label_103b84c
        
        goto label_103b84c
    
    x2_1 = V20
    x0_2 = 1

label_103b858:
UI2Move(x0_2, x1_1, x2_1)
UI2Free(gUI2Editor + 0x6010)
*(gUI2Editor + 0x6010) = 0
return UI2CreateUndoCheckpoint(true) __tailcall
