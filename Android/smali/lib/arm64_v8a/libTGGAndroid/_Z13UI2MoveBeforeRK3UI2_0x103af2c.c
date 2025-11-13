// 函数: _Z13UI2MoveBeforeRK3UI2
// 地址: 0x103af2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*(gUI2 + 8))
UI2* x1
UI2* x8_2

if (x10.d == 0)
    x1 = nullptr
label_103b058:
    x8_2 = nullptr
else
    void* x8_1 = *gUI2
    int32_t i = *(arg1 + 0x19a0)
    int64_t x13_1 = x8_1 + x10 * 0x19a8
    void* x11_1 = x8_1
    
    while (true)
        if (zx.d(*(x11_1 + 0x19a2)) == 0)
            x11_1 += 0x19a8
            
            if (x11_1 u>= x13_1)
                break
        else
            int32_t x14_2 = *(x11_1 + 0x1970)
            
            if (x14_2 != 0)
                uint64_t x15_1 = 0
                
                while (*(x11_1 + (x15_1 << 0x20 s>> 0x1e) + 0x1870) != i)
                    bool cond:0_1 = x14_2 != x15_1.d + 1
                    x15_1 = zx.q(x15_1.d + 1)
                    
                    if (not(cond:0_1))
                        goto label_103af98
                
                if (*(x11_1 + 0x1688) == 0)
                    x1 = nullptr
                else
                    x1 = x11_1
                
                if (x10.d == 0)
                    goto label_103b058_1
                
                goto label_103afc4
            
        label_103af98:
            x11_1 += 0x19a8
            
            if (x13_1 u<= x11_1)
                break
    
    x1 = nullptr
    
    if (x10.d != 0)
    label_103afc4:
        int64_t x10_1 = x8_1 + x10 * 0x19a8
        void* x12_2 = x8_1
        
        while (true)
            if (zx.d(*(x12_2 + 0x19a2)) == 0)
                x12_2 += 0x19a8
                
                if (x12_2 u>= x10_1)
                    goto label_103b058_1
            else
                int32_t x13_3 = *(x12_2 + 0x1970)
                
                if (x13_3 != 0)
                    int32_t x14_3 = *(x12_2 + 0x1870)
                    
                    if (x14_3 == i)
                        goto label_103b058_1
                    
                    uint64_t x16_4 = 0
                    int32_t x15_3
                    
                    do
                        if (x13_3 == x16_4.d + 1)
                            goto label_103b02c
                        
                        x16_4 = zx.q(x16_4.d + 1)
                        x15_3 = x14_3
                        x14_3 = *(x12_2 + (x16_4 << 0x20 s>> 0x1e) + 0x1870)
                    while (x14_3 != i)
                    
                    if (x15_3 == 0)
                        goto label_103b058_1
                    
                    x8_2 = x8_1 + mulu.dp.d(x15_3 & 0xffff, 0x19a8)
                    break
                
            label_103b02c:
                x12_2 += 0x19a8
                
                if (x10_1 u<= x12_2)
                    goto label_103b058_1
    else
    label_103b058_1:
        x8_2 = nullptr

Vec2* x2 = V20

if ((x8_2 | *(x1 + 0x17d0)) == 0)
    return UI2Move(0, nullptr, x2) __tailcall

if (x8_2 == 0)
    return UI2Move(1, x1, x2) __tailcall

return UI2Move(2, x8_2, x2) __tailcall
