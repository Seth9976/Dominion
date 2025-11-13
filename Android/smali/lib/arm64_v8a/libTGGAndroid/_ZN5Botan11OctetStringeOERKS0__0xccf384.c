// 函数: _ZN5Botan11OctetStringeOERKS0_
// 地址: 0xccf384
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1

if (entry_x1 == arg1)
    int64_t x0_1 = *entry_x1
    int64_t x8_1 = entry_x1[1]
    
    if (x8_1 != x0_1)
        memset(x0_1, 0, x8_1 - x0_1)
else
    void* x8 = *arg1
    void* x9_1 = *entry_x1
    void* x10_2 = *(arg1 + 8) - x8
    void* x11_2 = entry_x1[1] - x9_1
    void* x11_3
    
    x11_3 = x11_2 u< x10_2 ? x11_2 : x10_2
    
    void* x10_3 = x11_3 & 0xffffffffffffffe0
    int128_t v0
    int128_t v1
    
    if (x10_3 != 0)
        int64_t x12_1 = 0
        
        if (x10_3 == 0x20 || x8 + 0x18 + x10_3 - 0x20 u< x8 + 0x18
                || x8 + 0x10 + x10_3 - 0x20 u< x8 + 0x10 || x8 + 8 + x10_3 - 0x20 u< x8 + 8
                || x8 + x10_3 - 0x20 u< x8)
            goto label_ccf480
        
        int128_t v2
        int128_t v3
        
        if (x8 u>= x9_1 + x10_3 || x9_1 u>= x8 + x10_3)
            int64_t i_8 = (((x10_3 - 0x20) u>> 5) + 1) & 0xffffffffffffffe
            x12_1 = i_8 << 5
            int64_t i_6 = i_8
            void* x16_2 = x9_1
            void* x17_2 = x8
            int64_t i
            
            do
                v0.q = *x17_2
                v1.q = *(x17_2 + 8)
                v2.q = *(x17_2 + 0x10)
                v3.q = *(x17_2 + 0x18)
                v0:8.q = *(x17_2 + 0x20)
                v1:8.q = *(x17_2 + 0x28)
                v2:8.q = *(x17_2 + 0x30)
                v3:8.q = *(x17_2 + 0x38)
                int128_t v4
                v4.q = *x16_2
                int128_t v5
                v5.q = *(x16_2 + 8)
                int128_t v6
                v6.q = *(x16_2 + 0x10)
                int128_t v7
                v7.q = *(x16_2 + 0x18)
                v4:8.q = *(x16_2 + 0x20)
                v5:8.q = *(x16_2 + 0x28)
                v6:8.q = *(x16_2 + 0x30)
                v7:8.q = *(x16_2 + 0x38)
                x16_2 += 0x40
                i = i_6
                i_6 -= 2
                int128_t v16_1 = v4 ^ v0
                int128_t v17_1 = v5 ^ v1
                int128_t v18_1 = v6 ^ v2
                int128_t v19_1 = v7 ^ v3
                *x17_2 = v16_1.q
                *(x17_2 + 8) = v17_1.q
                *(x17_2 + 0x10) = v18_1.q
                *(x17_2 + 0x18) = v19_1.q
                *(x17_2 + 0x20) = v16_1:8.q
                *(x17_2 + 0x28) = v17_1:8.q
                *(x17_2 + 0x30) = v18_1:8.q
                *(x17_2 + 0x38) = v19_1:8.q
                x17_2 += 0x40
            while (i != 2)
            
            if (((x10_3 - 0x20) u>> 5) + 1 != i_8)
                goto label_ccf480
        else
            x12_1 = 0
        label_ccf480:
            void* i_5 = x12_1 - x10_3
            void* x12_5 = x9_1 + x12_1 + 0x10
            void* x14_4 = x8 + x12_1 + 0x10
            void* i_1
            
            do
                v2 = *(x12_5 - 0x10)
                v3 = *x12_5
                i_1 = i_5
                i_5 += 0x20
                x12_5 += 0x20
                v1 = v3 ^ *x14_4
                *(x14_4 - 0x10) ^= v2
                *x14_4 = v1
                x14_4 += 0x20
            while (i_1 != -0x20)
    
    if (x11_3 != x10_3)
        if ((x11_3 & 0x18) == 0)
        label_ccf50c:
            void* i_4 = x11_3 - x10_3
            void* x8_2 = x8 + x10_3
            void* x9_2 = x9_1 + x10_3
            void* i_2
            
            do
                char x10_4 = *x9_2
                x9_2 += 1
                i_2 = i_4
                i_4 -= 1
                *x8_2 ^= x10_4
                x8_2 += 1
            while (i_2 != 1)
        else
            int64_t* x12_6 = x8 + x10_3
            void* x13_4 = x9_1 + x10_3
            
            if (x12_6 u< x9_1 + x11_3 && x13_4 u< x8 + x11_3)
                goto label_ccf50c
            
            void* x14_6 = x11_3 & 7
            void* i_7 = (x11_3 & 0x1f) - x14_6
            x10_3 += i_7
            void* i_3
            
            do
                v0.q = *x13_4
                x13_4 += 8
                v1.q = *x12_6
                i_3 = i_7
                i_7 -= 8
                *x12_6 = (v1 ^ v0).q
                x12_6 = &x12_6[1]
            while (i_3 != 8)
            
            if (x14_6 != 0)
                goto label_ccf50c

return arg1
