// 函数: sub_fe4534
// 地址: 0xfe4534
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_48 = arg1
int32_t x0_1
int128_t v0
x0_1, v0 = sub_ff8f48(&var_48, 2, 0)
int32_t var_28

if (x0_1 == 0 || var_28 != 0x10)
    void* x8_2 = var_48
    *(x8_2 + 0xb8) = *(x8_2 + 0xc8)
    int32_t x0_4
    int128_t v0_1
    x0_4, v0_1 = sub_ffc330(arg1)
    
    if (x0_4 != 0x38425053)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0
    
    char* x9_1 = *(arg1 + 0xb8)
    void* x8_3 = *(arg1 + 0xc0)
    char x20_1
    
    if (x9_1 u>= x8_3)
        if (*(arg1 + 0x30) == 0)
            x20_1 = 0
            
            if (x9_1 u< x8_3)
                goto label_fe45c8
            
            goto label_fe4648
        
        int32_t x0_6
        x0_6, v0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_6 != 0)
            x20_1 = *(arg1 + 0x38)
            x8_3 = arg1 + 0x38 + sx.q(x0_6)
            x9_1 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_1
            *(arg1 + 0xc0) = x8_3
            
            if (x9_1 u>= x8_3)
                goto label_fe4648
            
            goto label_fe45c8
        
        x20_1 = 0
        *(arg1 + 0x30) = 0
        x8_3 = arg1 + 0x39
        *(arg1 + 0x38) = 0
        x9_1 = arg1 + 0x39
        *(arg1 + 0xb8) = x9_1
        *(arg1 + 0xc0) = x8_3
        
        if (x9_1 u< x8_3)
            goto label_fe45c8
        
        goto label_fe4648
    
    *(arg1 + 0xb8) = &x9_1[1]
    x20_1 = *x9_1
    x9_1 = &x9_1[1]
    uint32_t x10_2
    
    if (x9_1 u>= x8_3)
    label_fe4648:
        x10_2 = *(arg1 + 0x30)
        
        if (x10_2 == 0)
            goto label_fe467c
        
        int32_t x0_8
        x0_8, v0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        uint32_t x10_4
        
        if (x0_8 == 0)
            x10_4 = 0
            *(arg1 + 0x30) = 0
            x8_3 = arg1 + 0x39
            *(arg1 + 0x38) = 0
        else
            x10_4 = zx.d(*(arg1 + 0x38))
            x8_3 = arg1 + 0x38 + sx.q(x0_8)
        
        x9_1 = arg1 + 0x39
        *(arg1 + 0xc0) = x8_3
        
        if (((0xffff00ff & x10_4) | zx.d(x20_1) << 8) != 1)
            *(arg1 + 0xb8) = *(arg1 + 0xc8)
            return 0
    else
    label_fe45c8:
        *(arg1 + 0xb8) = &x9_1[1]
        x10_2 = zx.d(*x9_1)
        x9_1 = &x9_1[1]
    label_fe467c:
        
        if (((0xffff00ff & x10_2) | zx.d(x20_1) << 8) != 1)
            *(arg1 + 0xb8) = *(arg1 + 0xc8)
            return 0
    int32_t x10_8
    
    if (*(arg1 + 0x10) != 0)
        x10_8 = x8_3.d - x9_1.d
    
    void* x9_3
    
    if (*(arg1 + 0x10) != 0 && x10_8 s<= 5)
        int64_t x9_2 = *(arg1 + 0x18)
        int64_t x0_9 = *(arg1 + 0x28)
        *(arg1 + 0xb8) = x8_3
        x9_2(x0_9, zx.q(6 - x10_8))
        x9_3 = *(arg1 + 0xb8)
        x8_3 = *(arg1 + 0xc0)
        
        if (x9_3 u< x8_3)
            goto label_fe4764
        
        goto label_fe46e8
    
    x9_3 = &x9_1[6]
    *(arg1 + 0xb8) = x9_3
    char x20_2
    
    if (x9_3 u>= x8_3)
    label_fe46e8:
        
        if (*(arg1 + 0x30) == 0)
            x20_2 = 0
            
            if (x9_3 u< x8_3)
                goto label_fe477c
            
            goto label_fe4720
        
        int32_t x0_11
        x0_11, v0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_11 != 0)
            x20_2 = *(arg1 + 0x38)
            void* x8_13 = arg1 + 0x38 + sx.q(x0_11)
            x9_3 = arg1 + 0x39
            *(arg1 + 0xb8) = x9_3
            *(arg1 + 0xc0) = x8_13
            
            if (x9_3 u< x8_13)
                goto label_fe477c
            
            goto label_fe4720
        
        x20_2 = 0
        *(arg1 + 0x30) = 0
        *(arg1 + 0x38) = 0
        x9_3 = arg1 + 0x39
        *(arg1 + 0xb8) = x9_3
        *(arg1 + 0xc0) = arg1 + 0x39
        
        if (x9_3 u>= arg1 + 0x39)
            goto label_fe4720
        
        goto label_fe477c
    
label_fe4764:
    *(arg1 + 0xb8) = x9_3 + 1
    x20_2 = *x9_3
    x9_3 += 1
    uint32_t x8_17
    
    if (x9_3 u>= x8_3)
    label_fe4720:
        x8_17 = *(arg1 + 0x30)
        
        if (x8_17 == 0)
            goto label_fe4788
        
        int32_t x0_13
        x0_13, v0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        uint32_t x8_15
        void* x9_6
        
        if (x0_13 == 0)
            x8_15 = 0
            *(arg1 + 0x30) = 0
            x9_6 = arg1 + 0x39
            *(arg1 + 0x38) = 0
        else
            x8_15 = zx.d(*(arg1 + 0x38))
            x9_6 = arg1 + 0x38 + sx.q(x0_13)
        
        *(arg1 + 0xb8) = arg1 + 0x39
        *(arg1 + 0xc0) = x9_6
        
        if (((0xffff00ff & x8_15) | zx.d(x20_2) << 8) u>= 0x11)
            *(arg1 + 0xb8) = *(arg1 + 0xc8)
            return 0
    else
    label_fe477c:
        *(arg1 + 0xb8) = x9_3 + 1
        x8_17 = zx.d(*x9_3)
    label_fe4788:
        
        if (((0xffff00ff & x8_17) | zx.d(x20_2) << 8) u>= 0x11)
            *(arg1 + 0xb8) = *(arg1 + 0xc8)
            return 0
    sub_ffc330(arg1)
    sub_ffc330(arg1)
    char* x9_7 = *(arg1 + 0xb8)
    void* x8_21 = *(arg1 + 0xc0)
    char x20_3
    
    if (x9_7 u< x8_21)
        *(arg1 + 0xb8) = &x9_7[1]
        x20_3 = *x9_7
        x9_7 = &x9_7[1]
    else if (*(arg1 + 0x30) == 0)
        x20_3 = 0
    else
        int32_t x0_17
        x0_17, v0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_17 == 0)
            x20_3 = 0
            *(arg1 + 0x30) = 0
            x8_21 = arg1 + 0x39
            *(arg1 + 0x38) = 0
        else
            x20_3 = *(arg1 + 0x38)
            x8_21 = arg1 + 0x38 + sx.q(x0_17)
        
        x9_7 = arg1 + 0x39
        *(arg1 + 0xb8) = x9_7
        *(arg1 + 0xc0) = x8_21
    
    uint32_t x8_26
    
    if (x9_7 u>= x8_21)
        x8_26 = *(arg1 + 0x30)
        
        if (x8_26 != 0)
            int32_t x0_19
            x0_19, v0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            void* x9_10
            
            if (x0_19 == 0)
                x8_26 = 0
                *(arg1 + 0x30) = 0
                x9_10 = arg1 + 0x39
                *(arg1 + 0x38) = 0
            else
                x8_26 = zx.d(*(arg1 + 0x38))
                x9_10 = arg1 + 0x38 + sx.q(x0_19)
            
            *(arg1 + 0xb8) = arg1 + 0x39
            *(arg1 + 0xc0) = x9_10
    else
        *(arg1 + 0xb8) = &x9_7[1]
        x8_26 = zx.d(*x9_7)
    
    if (((0xffff00ff & x8_26) | zx.d(x20_3) << 8) != 0x10)
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
        return 0

return 1
