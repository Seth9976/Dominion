// 函数: sub_ff1908
// 地址: 0xff1908
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = -0x100000000
arg1[0x909] = -0x100000000
arg1[0x905].b = 0xff
void* x21 = *arg1
char* x8 = *(x21 + 0xb8)
char const* const x9_12
int128_t v1
int128_t v2
int128_t v3

if (x8 u>= *(x21 + 0xc0))
    if (*(x21 + 0x30) == 0)
        goto label_ff1a78
    
    int32_t x0_1
    x0_1, v0, v1, v2, v3 = (*(x21 + 0x10))(*(x21 + 0x28), x21 + 0x38, zx.q(*(x21 + 0x34)))
    
    if (x0_1 == 0)
        *(x21 + 0x30) = 0
        *(x21 + 0x38) = 0
        *(x21 + 0xb8) = x21 + 0x39
        *(x21 + 0xc0) = x21 + 0x39
    label_ff1a78:
        x9_12 = "no SOI"
    label_ff1a7c:
        data_2423720 = x9_12
        return 0
    
    uint32_t x8_4 = zx.d(*(x21 + 0x38))
    *(x21 + 0xb8) = x21 + 0x39
    *(x21 + 0xc0) = x21 + 0x38 + sx.q(x0_1)
    
    if (x8_4 != 0xff)
        goto label_ff1a78
else
    *(x21 + 0xb8) = &x8[1]
    
    if (zx.d(*x8) != 0xff)
        goto label_ff1a78

uint32_t x8_5

while (true)
    void* x21_1 = *arg1
    char* x8_6 = *(x21_1 + 0xb8)
    
    if (x8_6 u< *(x21_1 + 0xc0))
        *(x21_1 + 0xb8) = &x8_6[1]
        x8_5 = zx.d(*x8_6)
        
        if (x8_5 != 0xff)
            break
    else
        if (*(x21_1 + 0x30) == 0)
            goto label_ff1a78
        
        int32_t x0_3
        x0_3, v0, v1, v2, v3 =
            (*(x21_1 + 0x10))(*(x21_1 + 0x28), x21_1 + 0x38, zx.q(*(x21_1 + 0x34)))
        
        if (x0_3 == 0)
            x8_5 = 0
            *(x21_1 + 0x30) = 0
            *(x21_1 + 0x38) = 0
            *(x21_1 + 0xb8) = x21_1 + 0x39
            *(x21_1 + 0xc0) = x21_1 + 0x39
            break
        
        x8_5 = zx.d(*(x21_1 + 0x38))
        *(x21_1 + 0xb8) = x21_1 + 0x39
        *(x21_1 + 0xc0) = x21_1 + 0x38 + sx.q(x0_3)
        
        if (x8_5 != 0xff)
            break

if (x8_5 != 0xd8)
    goto label_ff1a78

if (arg2 != 1)
    uint32_t x1_2 = zx.d(arg1[0x905].b)
    
    if (x1_2 == 0xff)
        void* x21_2 = *arg1
        char* x8_9 = *(x21_2 + 0xb8)
        uint32_t x8_10
        
        if (x8_9 u>= *(x21_2 + 0xc0))
            if (*(x21_2 + 0x30) != 0)
                int32_t x0_5
                x0_5, v0, v1, v2, v3 =
                    (*(x21_2 + 0x10))(*(x21_2 + 0x28), x21_2 + 0x38, zx.q(*(x21_2 + 0x34)))
                void* x9_17
                
                if (x0_5 == 0)
                    x8_10 = 0
                    *(x21_2 + 0x30) = 0
                    x9_17 = x21_2 + 0x39
                    *(x21_2 + 0x38) = 0
                else
                    x8_10 = zx.d(*(x21_2 + 0x38))
                    x9_17 = &(x21_2 + 0x38)[sx.q(x0_5)]
                
                *(x21_2 + 0xb8) = x21_2 + 0x39
                *(x21_2 + 0xc0) = x9_17
                goto label_ff1b24
            
            x1_2 = 0xff
        else
            *(x21_2 + 0xb8) = &x8_9[1]
            x8_10 = zx.d(*x8_9)
        label_ff1b24:
            
            if (x8_10 == 0xff)
                while (true)
                    void* x21_3 = *arg1
                    char* x8_40 = *(x21_3 + 0xb8)
                    
                    if (x8_40 u< *(x21_3 + 0xc0))
                        *(x21_3 + 0xb8) = &x8_40[1]
                        x1_2 = zx.d(*x8_40)
                        
                        if (x1_2 != 0xff)
                            break
                    else
                        if (*(x21_3 + 0x30) == 0)
                            x1_2 = 0
                            break
                        
                        int32_t x0_18
                        x0_18, v0, v1, v2, v3 =
                            (*(x21_3 + 0x10))(*(x21_3 + 0x28), x21_3 + 0x38, zx.q(*(x21_3 + 0x34)))
                        void* x8_45
                        
                        if (x0_18 == 0)
                            x1_2 = 0
                            *(x21_3 + 0x30) = 0
                            x8_45 = x21_3 + 0x39
                            *(x21_3 + 0x38) = 0
                        else
                            x1_2 = zx.d(*(x21_3 + 0x38))
                            x8_45 = &(x21_3 + 0x38)[sx.q(x0_18)]
                        
                        *(x21_3 + 0xb8) = x21_3 + 0x39
                        *(x21_3 + 0xc0) = x8_45
                        
                        if (x1_2 != 0xff)
                            break
            else
                x1_2 = 0xff
    else
        arg1[0x905].b = 0xff
    
    int32_t x8_13 = x1_2 == 0xc2 ? 1 : 0
    int32_t result
    
    if (x1_2 != 0xc2 && (x1_2 & 0xfe) != 0xc0)
        while (true)
            result, v0, v1, v2, v3 = sub_ff2e9c(arg1, x1_2)
            
            if (result == 0)
                return result
            
            x1_2 = zx.d(arg1[0x905].b)
            
            if (x1_2 == 0xff)
                void* x23_1 = *arg1
                char* x8_14 = *(x23_1 + 0xb8)
                
                if (x8_14 u>= *(x23_1 + 0xc0))
                    if (*(x23_1 + 0x30) != 0)
                        int32_t x0_8
                        x0_8, v0, v1, v2, v3 =
                            (*(x23_1 + 0x10))(*(x23_1 + 0x28), x23_1 + 0x38, zx.q(*(x23_1 + 0x34)))
                        uint32_t x8_18
                        void* x9_24
                        
                        if (x0_8 == 0)
                            x8_18 = 0
                            *(x23_1 + 0x30) = 0
                            x9_24 = x23_1 + 0x39
                            *(x23_1 + 0x38) = 0
                        else
                            x8_18 = zx.d(*(x23_1 + 0x38))
                            x9_24 = x23_1 + 0x38 + sx.q(x0_8)
                        
                        *(x23_1 + 0xb8) = x23_1 + 0x39
                        *(x23_1 + 0xc0) = x9_24
                        
                        if (x8_18 != 0xff)
                            goto label_ff1c14
                        
                        goto label_ff1cc4
                    
                label_ff1c14:
                    
                    while (true)
                        void* x23_2 = *arg1
                        
                        if (*(x23_2 + 0x10) == 0)
                            if (*(x23_2 + 0xb8) u< *(x23_2 + 0xc0))
                                goto label_ff1c40
                            
                            x9_12 = "no SOF"
                            goto label_ff1a7c
                        
                        int32_t x0_10
                        x0_10, v0, v1, v2, v3 = (*(x23_2 + 0x20))(*(x23_2 + 0x28))
                        
                        if (x0_10 != 0
                                && (*(x23_2 + 0x30) == 0 || *(x23_2 + 0xb8) u>= *(x23_2 + 0xc0)))
                            x9_12 = "no SOF"
                            goto label_ff1a7c
                        
                    label_ff1c40:
                        x1_2 = zx.d(arg1[0x905].b)
                        
                        if (x1_2 != 0xff)
                            goto label_ff1b64
                        
                        void* x23_3 = *arg1
                        char* x8_24 = *(x23_3 + 0xb8)
                        
                        if (x8_24 u< *(x23_3 + 0xc0))
                            *(x23_3 + 0xb8) = &x8_24[1]
                            
                            if (zx.d(*x8_24) != 0xff)
                                continue
                        else if (*(x23_3 + 0x30) == 0)
                            continue
                        else
                            int32_t x0_12
                            x0_12, v0, v1, v2, v3 = (*(x23_3 + 0x10))(*(x23_3 + 0x28), 
                                x23_3 + 0x38, zx.q(*(x23_3 + 0x34)))
                            uint32_t x8_27
                            void* x9_30
                            
                            if (x0_12 == 0)
                                x8_27 = 0
                                *(x23_3 + 0x30) = 0
                                x9_30 = x23_3 + 0x39
                                *(x23_3 + 0x38) = 0
                            else
                                x8_27 = zx.d(*(x23_3 + 0x38))
                                x9_30 = x23_3 + 0x38 + sx.q(x0_12)
                            
                            *(x23_3 + 0xb8) = x23_3 + 0x39
                            *(x23_3 + 0xc0) = x9_30
                            
                            if (x8_27 != 0xff)
                                continue
                        
                        while (true)
                            void* x23_5 = *arg1
                            char* x8_34 = *(x23_5 + 0xb8)
                            
                            if (x8_34 u< *(x23_5 + 0xc0))
                                *(x23_5 + 0xb8) = &x8_34[1]
                                x1_2 = zx.d(*x8_34)
                                
                                if (x1_2 != 0xff)
                                    goto label_ff1b6c
                            else
                                if (*(x23_5 + 0x30) == 0)
                                    break
                                
                                int32_t x0_16
                                x0_16, v0, v1, v2, v3 = (*(x23_5 + 0x10))(*(x23_5 + 0x28), 
                                    x23_5 + 0x38, zx.q(*(x23_5 + 0x34)))
                                void* x8_39
                                
                                if (x0_16 == 0)
                                    x1_2 = 0
                                    *(x23_5 + 0x30) = 0
                                    x8_39 = x23_5 + 0x39
                                    *(x23_5 + 0x38) = 0
                                else
                                    x1_2 = zx.d(*(x23_5 + 0x38))
                                    x8_39 = &(x23_5 + 0x38)[sx.q(x0_16)]
                                
                                *(x23_5 + 0xb8) = x23_5 + 0x39
                                *(x23_5 + 0xc0) = x8_39
                                
                                if (x1_2 != 0xff)
                                    goto label_ff1b6c
                        
                        break
                else
                    *(x23_1 + 0xb8) = &x8_14[1]
                    
                    if (zx.d(*x8_14) != 0xff)
                        goto label_ff1c14
                    
                label_ff1cc4:
                    
                    while (true)
                        void* x23_4 = *arg1
                        char* x8_28 = *(x23_4 + 0xb8)
                        
                        if (x8_28 u< *(x23_4 + 0xc0))
                            *(x23_4 + 0xb8) = &x8_28[1]
                            x1_2 = zx.d(*x8_28)
                            
                            if (x1_2 != 0xff)
                                goto label_ff1b6c
                        else
                            if (*(x23_4 + 0x30) == 0)
                                break
                            
                            int32_t x0_14
                            x0_14, v0, v1, v2, v3 = (*(x23_4 + 0x10))(*(x23_4 + 0x28), 
                                x23_4 + 0x38, zx.q(*(x23_4 + 0x34)))
                            void* x8_33
                            
                            if (x0_14 == 0)
                                x1_2 = 0
                                *(x23_4 + 0x30) = 0
                                x8_33 = x23_4 + 0x39
                                *(x23_4 + 0x38) = 0
                            else
                                x1_2 = zx.d(*(x23_4 + 0x38))
                                x8_33 = &(x23_4 + 0x38)[sx.q(x0_14)]
                            
                            *(x23_4 + 0xb8) = x23_4 + 0x39
                            *(x23_4 + 0xc0) = x8_33
                            
                            if (x1_2 != 0xff)
                                goto label_ff1b6c
                
                x1_2 = 0
            else
            label_ff1b64:
                arg1[0x905].b = 0xff
            
        label_ff1b6c:
            x8_13 = x1_2 == 0xc2 ? 1 : 0
            
            if (x1_2 == 0xc2)
                break
            
            if ((x1_2 & 0xfe) == 0xc0)
                break
    
    arg1[0x906].d = x8_13
    int32_t* x23_6 = *arg1
    char* x10_8 = *(x23_6 + 0xb8)
    void* x8_46 = *(x23_6 + 0xc0)
    char x24_1
    
    if (x10_8 u< x8_46)
        *(x23_6 + 0xb8) = &x10_8[1]
        x24_1 = *x10_8
        x10_8 = &x10_8[1]
    else if (x23_6[0xc] == 0)
        x24_1 = 0
    else
        int32_t x0_20
        x0_20, v0, v1, v2, v3 = (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
        
        if (x0_20 == 0)
            x24_1 = 0
            x23_6[0xc] = 0
            x8_46 = x23_6 + 0x39
            x23_6[0xe].b = 0
        else
            x24_1 = x23_6[0xe].b
            x8_46 = &x23_6[0xe] + sx.q(x0_20)
        
        x10_8 = x23_6 + 0x39
        *(x23_6 + 0xb8) = x10_8
        *(x23_6 + 0xc0) = x8_46
    
    uint32_t x21_4
    
    if (x10_8 u< x8_46)
        *(x23_6 + 0xb8) = &x10_8[1]
        x21_4 = zx.d(*x10_8)
        x10_8 = &x10_8[1]
    else if (x23_6[0xc] == 0)
        x21_4 = 0
    else
        int32_t x0_22
        x0_22, v0, v1, v2, v3 = (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
        
        if (x0_22 == 0)
            x21_4 = 0
            x23_6[0xc] = 0
            x8_46 = x23_6 + 0x39
            x23_6[0xe].b = 0
        else
            x21_4 = zx.d(x23_6[0xe].b)
            x8_46 = &x23_6[0xe + sx.q(x0_22)]
        
        x10_8 = x23_6 + 0x39
        *(x23_6 + 0xb8) = x10_8
        *(x23_6 + 0xc0) = x8_46
    
    int32_t x21_5 = (0xffff00ff & x21_4) | zx.d(x24_1) << 8
    
    if (x21_5 u<= 0xa)
        x9_12 = "bad SOF len"
        goto label_ff1a7c
    
    void* x9_44
    uint32_t x10_9
    
    if (x10_8 u>= x8_46)
        if (x23_6[0xc] == 0)
            x9_12 = "only 8-bit"
            goto label_ff1a7c
        
        int32_t x0_24
        x0_24, v0, v1, v2, v3 = (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
        
        if (x0_24 == 0)
            x10_9 = 0
            x23_6[0xc] = 0
            x8_46 = x23_6 + 0x39
            x23_6[0xe].b = 0
        else
            x10_9 = zx.d(x23_6[0xe].b)
            x8_46 = &x23_6[0xe + sx.q(x0_24)]
        
        x9_44 = x23_6 + 0x39
        *(x23_6 + 0xb8) = x9_44
        *(x23_6 + 0xc0) = x8_46
    else
        x9_44 = &x10_8[1]
        *(x23_6 + 0xb8) = x9_44
        x10_9 = zx.d(*x10_8)
    
    if (x10_9 != 8)
        x9_12 = "only 8-bit"
        goto label_ff1a7c
    
    char x24_2
    
    if (x9_44 u< x8_46)
        *(x23_6 + 0xb8) = x9_44 + 1
        x24_2 = *x9_44
        x9_44 += 1
    else if (x23_6[0xc] == 0)
        x24_2 = 0
    else
        int32_t x0_26
        x0_26, v0, v1, v2, v3 = (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
        
        if (x0_26 == 0)
            x24_2 = 0
            x23_6[0xc] = 0
            x8_46 = x23_6 + 0x39
            x23_6[0xe].b = 0
        else
            x24_2 = x23_6[0xe].b
            x8_46 = &x23_6[0xe] + sx.q(x0_26)
        
        x9_44 = x23_6 + 0x39
        *(x23_6 + 0xb8) = x9_44
        *(x23_6 + 0xc0) = x8_46
    
    uint32_t x10_12
    
    if (x9_44 u>= x8_46)
        x10_12 = x23_6[0xc]
        
        if (x10_12 != 0)
            int32_t x0_28
            x0_28, v0, v1, v2, v3 =
                (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
            
            if (x0_28 == 0)
                x10_12 = 0
                x23_6[0xc] = 0
                x8_46 = x23_6 + 0x39
                x23_6[0xe].b = 0
            else
                x10_12 = zx.d(x23_6[0xe].b)
                x8_46 = &x23_6[0xe + sx.q(x0_28)]
            
            x9_44 = x23_6 + 0x39
            *(x23_6 + 0xb8) = x9_44
            *(x23_6 + 0xc0) = x8_46
    else
        *(x23_6 + 0xb8) = x9_44 + 1
        x10_12 = zx.d(*x9_44)
        x9_44 += 1
    
    int32_t x10_13 = (0xffff00ff & x10_12) | zx.d(x24_2) << 8
    x23_6[1] = x10_13
    
    if (x10_13 == 0)
        x9_12 = "no header height"
        goto label_ff1a7c
    
    char x24_3
    
    if (x9_44 u< x8_46)
        *(x23_6 + 0xb8) = x9_44 + 1
        x24_3 = *x9_44
        x9_44 += 1
    else if (x23_6[0xc] == 0)
        x24_3 = 0
    else
        int32_t x0_30
        x0_30, v0, v1, v2, v3 = (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
        
        if (x0_30 == 0)
            x24_3 = 0
            x23_6[0xc] = 0
            x8_46 = x23_6 + 0x39
            x23_6[0xe].b = 0
        else
            x24_3 = x23_6[0xe].b
            x8_46 = &x23_6[0xe] + sx.q(x0_30)
        
        x9_44 = x23_6 + 0x39
        *(x23_6 + 0xb8) = x9_44
        *(x23_6 + 0xc0) = x8_46
    
    uint32_t x10_16
    
    if (x9_44 u>= x8_46)
        x10_16 = x23_6[0xc]
        
        if (x10_16 != 0)
            int32_t x0_32
            x0_32, v0, v1, v2, v3 =
                (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
            
            if (x0_32 == 0)
                x10_16 = 0
                x23_6[0xc] = 0
                x8_46 = x23_6 + 0x39
                x23_6[0xe].b = 0
            else
                x10_16 = zx.d(x23_6[0xe].b)
                x8_46 = &x23_6[0xe + sx.q(x0_32)]
            
            x9_44 = x23_6 + 0x39
            *(x23_6 + 0xb8) = x9_44
            *(x23_6 + 0xc0) = x8_46
    else
        *(x23_6 + 0xb8) = x9_44 + 1
        x10_16 = zx.d(*x9_44)
        x9_44 += 1
    
    int32_t x10_17 = (0xffff00ff & x10_16) | zx.d(x24_3) << 8
    *x23_6 = x10_17
    
    if (x10_17 == 0)
        x9_12 = "0 width"
        goto label_ff1a7c
    
    uint32_t x8_70
    
    if (x9_44 u>= x8_46)
        if (x23_6[0xc] == 0)
            x9_12 = "bad component count"
            goto label_ff1a7c
        
        int32_t x0_34
        x0_34, v0, v1, v2, v3 = (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
        void* x9_47
        
        if (x0_34 == 0)
            x8_70 = 0
            x23_6[0xc] = 0
            x9_47 = x23_6 + 0x39
            x23_6[0xe].b = 0
        else
            x8_70 = zx.d(x23_6[0xe].b)
            x9_47 = &x23_6[0xe + sx.q(x0_34)]
        
        *(x23_6 + 0xb8) = x23_6 + 0x39
        *(x23_6 + 0xc0) = x9_47
    else
        *(x23_6 + 0xb8) = x9_44 + 1
        x8_70 = zx.d(*x9_44)
    
    if (x8_70 u> 4 || (1 << x8_70 & 0x1a) == 0)
        x9_12 = "bad component count"
        goto label_ff1a7c
    
    x23_6[2] = x8_70
    uint64_t x8_73 = zx.q(x8_70)
    int64_t i_12
    
    if (x8_70 u>= 2)
        i_12 = x8_73 & 0xfe
        void* x10_19 = &arg1[0x8e9]
        int64_t i_8 = i_12
        int64_t i
        
        do
            *(x10_19 - 0x78) = 0
            *(x10_19 - 0x18) = 0
            *(x10_19 - 0x60) = 0
            *x10_19 = 0
            x10_19 += 0xc0
            i = i_8
            i_8 -= 2
        while (i != 2)
        
        if (i_12 != x8_73)
            goto label_ff2260
    else
        i_12 = 0
    label_ff2260:
        int64_t i_6 = x8_73 - i_12
        int64_t* x9_50 = arg1 + i_12 * 0x60 + 0x46e8
        int64_t i_1
        
        do
            x9_50[-3] = 0
            *x9_50 = 0
            x9_50 = &x9_50[0xc]
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    if (x21_5 != x23_6[2] * 3 + 8)
        x9_12 = "bad SOF len"
        goto label_ff1a7c
    
    arg1[0x90a].d = 0
    int64_t x8_77 = zx.q(x23_6[2])
    
    if (x8_77.d s>= 1)
        int64_t x24_4 = 0
        void* x26_1 = arg1 + 0x46ac
        
        while (true)
            char* x8_79 = *(x23_6 + 0xb8)
            uint32_t x8_80
            
            if (x8_79 u>= *(x23_6 + 0xc0))
                x8_80 = x23_6[0xc]
                
                if (x8_80 != 0)
                    int32_t x0_36
                    x0_36, v0, v1, v2, v3 =
                        (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
                    void* x9_56
                    
                    if (x0_36 == 0)
                        x8_80 = 0
                        x23_6[0xc] = 0
                        x23_6[0xe].b = 0
                        x9_56 = x23_6 + 0x39
                    else
                        x8_80 = zx.d(x23_6[0xe].b)
                        x9_56 = &x23_6[0xe] + sx.q(x0_36)
                    
                    *(x23_6 + 0xb8) = x23_6 + 0x39
                    *(x23_6 + 0xc0) = x9_56
            else
                *(x23_6 + 0xb8) = &x8_79[1]
                x8_80 = zx.d(*x8_79)
            
            *(x26_1 - 0xc) = x8_80
            
            if (x23_6[2] == 3 && x8_80 == zx.d((*"RGB")[x24_4]))
                arg1[0x90a].d += 1
            
            char* x8_84 = *(x23_6 + 0xb8)
            uint32_t x8_85
            
            if (x8_84 u>= *(x23_6 + 0xc0))
                x8_85 = x23_6[0xc]
                
                if (x8_85 != 0)
                    int32_t x0_38
                    x0_38, v0, v1, v2, v3 =
                        (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
                    void* x9_63
                    
                    if (x0_38 == 0)
                        x8_85 = 0
                        x23_6[0xc] = 0
                        x23_6[0xe].b = 0
                        x9_63 = x23_6 + 0x39
                    else
                        x8_85 = zx.d(x23_6[0xe].b)
                        x9_63 = &x23_6[0xe] + sx.q(x0_38)
                    
                    *(x23_6 + 0xb8) = x23_6 + 0x39
                    *(x23_6 + 0xc0) = x9_63
            else
                *(x23_6 + 0xb8) = &x8_84[1]
                x8_85 = zx.d(*x8_84)
            
            uint32_t x9_64 = x8_85 u>> 4
            *(x26_1 - 8) = x9_64
            
            if (x8_85 u> 0x4f || x9_64 == 0)
                x9_12 = "bad H"
                goto label_ff1a7c
            
            int32_t x8_87 = x8_85 & 0xf
            *(x26_1 - 4) = x8_87
            
            if (x8_87 - 1 u>= 4)
                x9_12 = "bad V"
                goto label_ff1a7c
            
            char* x8_88 = *(x23_6 + 0xb8)
            
            if (x8_88 u< *(x23_6 + 0xc0))
                *(x23_6 + 0xb8) = &x8_88[1]
                uint32_t x8_78 = zx.d(*x8_88)
                *x26_1 = x8_78
                
                if (x8_78 u>= 4)
                    x9_12 = "bad TQ"
                    goto label_ff1a7c
            else if (x23_6[0xc] == 0)
                *x26_1 = 0
            else
                int32_t x0_40
                x0_40, v0, v1, v2, v3 =
                    (*(x23_6 + 0x10))(*(x23_6 + 0x28), &x23_6[0xe], zx.q(x23_6[0xd]))
                uint32_t x8_91
                void* x9_69
                
                if (x0_40 == 0)
                    x8_91 = 0
                    x23_6[0xc] = 0
                    x23_6[0xe].b = 0
                    x9_69 = x23_6 + 0x39
                else
                    x8_91 = zx.d(x23_6[0xe].b)
                    x9_69 = &x23_6[0xe] + sx.q(x0_40)
                
                *(x23_6 + 0xb8) = x23_6 + 0x39
                *(x23_6 + 0xc0) = x9_69
                *x26_1 = x8_91
                
                if (x8_91 u>= 4)
                    x9_12 = "bad TQ"
                    goto label_ff1a7c
            
            x8_77 = sx.q(x23_6[2])
            x24_4 += 1
            x26_1 += 0x60
            
            if (x24_4 s>= x8_77)
                break
            
            continue
    
    if (arg2 == 0)
        int32_t x9_70 = *x23_6
        int32_t x10_20 = x23_6[1]
        
        if (((x10_20 | x9_70) & 0x80000000) != 0 || (x10_20 != 0 && 0x7fffffff s/ x10_20 s< x9_70))
            x9_12 = "too large"
            goto label_ff1a7c
        
        int32_t x9_71 = x10_20 * x9_70
        
        if (((x9_71 | x8_77.d) & 0x80000000) != 0)
            x9_12 = "too large"
            goto label_ff1a7c
        
        v0.d = 1
        v0:4.d = 1
        
        if (x8_77.d != 0)
            if (0x7fffffff s/ x8_77.d s< x9_71)
                x9_12 = "too large"
                goto label_ff1a7c
            
            if (x8_77.d s>= 1)
                uint64_t x9_72 = zx.q(x8_77.d)
                int64_t i_11
                
                if (x8_77.d != 1)
                    i_11 = x9_72 & 0xfffffffe
                    v0.d = 1
                    v0:4.d = 1
                    void* x10_23 = arg1 + 0x4704
                    int64_t i_9 = i_11
                    v1.d = 1
                    v1:4.d = 1
                    int64_t i_2
                    
                    do
                        v2.q = *(x10_23 - 0x60)
                        v3.q = *x10_23
                        x10_23 += 0xc0
                        i_2 = i_9
                        i_9 -= 2
                        v0 = vmax_s32(v2, v0)
                        v1 = vmax_s32(v3, v1)
                    while (i_2 != 2)
                    v0 = vmax_s32(v0, v1)
                    
                    if (i_11 != x9_72)
                        goto label_ff254c
                else
                    i_11 = 0
                    v0.d = 1
                    v0:4.d = 1
                label_ff254c:
                    int64_t i_7 = x9_72 - i_11
                    int64_t* x8_93 = arg1 + i_11 * 0x60 + 0x46a4
                    int64_t i_3
                    
                    do
                        v1.q = *x8_93
                        x8_93 = &x8_93[0xc]
                        i_3 = i_7
                        i_7 -= 1
                        v0 = vmax_s32(v1, v0)
                    while (i_3 != 1)
        
        v1.d = v0.d << 3
        v1:4.d = v0:4.d << 3
        arg1[0x8d1] = v0.q
        arg1[0x8d3] = v1.q
        int32_t x9_73 = v1.d
        int32_t x10_24 = v1:4.d
        uint32_t x8_97 = (x9_73 + *x23_6 - 1) u/ x9_73
        arg1[0x8d2].d = x8_97
        uint32_t x21_7 = (x10_24 + x23_6[1] - 1) u/ x10_24
        *(arg1 + 0x4694) = x21_7
        
        if (x23_6[2] s>= 1)
            int32_t x9_78 = v0.d
            int32_t x26_2 = v0:4.d
            int64_t i_10 = 1
            void* x28_1 = arg1 + 0x46fc
            
            while (true)
                int32_t x9_81 = *(x28_1 - 0x58)
                int32_t x10_25 = *(x28_1 - 0x54)
                int32_t fp_1 = x10_25 * x21_7
                int32_t x27_1 = fp_1 << 3
                *(x28_1 - 0x40) = (x9_78 - 1 + x9_81 * *x23_6) u/ x9_78
                int32_t x8_103 = x23_6[1]
                *(x28_1 - 0x14) = 0
                int32_t x25_2 = x9_81 * (x8_97 << 3)
                *(x28_1 - 0x38) = x25_2
                *(x28_1 - 0x34) = x27_1
                *(x28_1 - 0xc) = 0
                *(x28_1 - 0x1c) = 0
                *(x28_1 - 0x3c) = (x26_2 - 1 + x10_25 * x8_103) u/ x26_2
                
                if (((x27_1 | x25_2) & 0x80000000) != 0
                        || (fp_1 != 0 && 0x7fffffff s/ x27_1 s< x25_2))
                    *(x28_1 - 0x24) = 0
                else
                    int32_t x24_5 = x27_1 * x25_2
                    int64_t x0_42 = malloc(sx.q(x24_5 | 0xf))
                    *(x28_1 - 0x24) = x0_42
                    
                    if (x0_42 != 0)
                        *(x28_1 - 0x2c) = (x0_42 + 0xf) & 0xfffffffffffffff0
                        
                        if (arg1[0x906].d != 0)
                            int32_t x8_112
                            
                            if (x25_2 s< 0)
                                x8_112 = x25_2 + 7
                            else
                                x8_112 = x25_2
                            
                            *(x28_1 - 4) = x8_112 s>> 3
                            *x28_1 = fp_1
                            
                            if (fp_1 == 0)
                                if (x24_5 u>> 0x1e != 0 || x24_5 s>= 0x3ffffff9)
                                    goto label_ff2764
                                
                                goto label_ff26e0
                            
                            if (0x7fffffff s/ x27_1 s< x25_2 || x24_5 u>> 0x1e != 0
                                || x24_5 s>= 0x3ffffff9)
                            label_ff2764:
                                *(x28_1 - 0x1c) = 0
                            label_ff2778:
                                void* x19_2 = &arg1[0x8de]
                                data_2423720 = "outofmem"
                                int64_t i_4
                                
                                do
                                    int64_t x0_48 = *(x19_2 - 0x18)
                                    
                                    if (x0_48 != 0)
                                        free(x0_48)
                                        *(x19_2 - 0x20) = 0
                                        *(x19_2 - 0x18) = 0
                                    
                                    int64_t x0_49 = *(x19_2 - 0x10)
                                    
                                    if (x0_49 != 0)
                                        free(x0_49)
                                        *(x19_2 - 0x10) = 0
                                        *x19_2 = 0
                                    
                                    int64_t x0_50 = *(x19_2 - 8)
                                    
                                    if (x0_50 != 0)
                                        free(x0_50)
                                        *(x19_2 - 8) = 0
                                    
                                    result = 0
                                    i_4 = i_10
                                    i_10 -= 1
                                    x19_2 += 0x60
                                while (i_4 != 1)
                                break
                            
                        label_ff26e0:
                            int64_t x0_44 = malloc(sx.q(x24_5 << 1 | 0xf))
                            *(x28_1 - 0x1c) = x0_44
                            
                            if (x0_44 == 0)
                                goto label_ff2778
                            
                            *(x28_1 - 0xc) = (x0_44 + 0xf) & 0xfffffffffffffff0
                        
                        x28_1 += 0x60
                        result = 1
                        bool cond:10_1 = i_10 s>= sx.q(x23_6[2])
                        i_10 += 1
                        
                        if (cond:10_1)
                            break
                        
                        continue
                
                void* x19_1 = &arg1[0x8de]
                data_2423720 = "outofmem"
                int64_t i_5
                
                do
                    int64_t x0_45 = *(x19_1 - 0x18)
                    
                    if (x0_45 != 0)
                        free(x0_45)
                        *(x19_1 - 0x20) = 0
                        *(x19_1 - 0x18) = 0
                    
                    int64_t x0_46 = *(x19_1 - 0x10)
                    
                    if (x0_46 != 0)
                        free(x0_46)
                        *(x19_1 - 0x10) = 0
                        *x19_1 = 0
                    
                    int64_t x0_47 = *(x19_1 - 8)
                    
                    if (x0_47 != 0)
                        free(x0_47)
                        *(x19_1 - 8) = 0
                    
                    result = 0
                    i_5 = i_10
                    i_10 -= 1
                    x19_1 += 0x60
                while (i_5 != 1)
                break
            
            return result

return 1
