// 函数: sub_fe1748
// 地址: 0xfe1748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
void* x8 = *(arg1 + 0xc0)
int64_t x22 = 0
void* x21 = arg1 + 0x39
uint64_t result

while (true)
    uint32_t x10_1
    int128_t v0
    
    if (x9 u>= x8)
        x10_1 = *(arg1 + 0x30)
        
        if (x10_1 != 0)
            int32_t x0_1
            x0_1, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            
            if (x0_1 == 0)
                x10_1 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x8 = x21
            else
                x10_1 = zx.d(*(arg1 + 0x38))
                x8 = &(arg1 + 0x38)[sx.q(x0_1)]
            
            x9 = x21
            *(arg1 + 0xb8) = x21
            *(arg1 + 0xc0) = x8
    else
        *(arg1 + 0xb8) = &x9[1]
        x10_1 = zx.d(*x9)
        x9 = &x9[1]
    
    if (x10_1 != zx.d((*"#?RADIANCE\n")[x22]))
        char* x9_1 = *(arg1 + 0xc8)
        void* x8_4 = *(arg1 + 0xd0)
        *(arg1 + 0xb8) = x9_1
        *(arg1 + 0xc0) = x8_4
        void* x10_2
        
        if (x9_1 u< x8_4)
            x10_2 = &x9_1[1]
            *(arg1 + 0xb8) = x10_2
            
            if (zx.d(*x9_1) == 0x23)
            label_fe186c:
                void* x11_3
                
                if (x10_2 u< x8_4)
                    x11_3 = x10_2 + 1
                    *(arg1 + 0xb8) = x11_3
                    
                    if (zx.d(*x10_2) == 0x3f)
                    label_fe18dc:
                        char* x10_3
                        
                        if (x11_3 u< x8_4)
                            x10_3 = x11_3 + 1
                            *(arg1 + 0xb8) = x10_3
                            
                            if (zx.d(*x11_3) == 0x52)
                            label_fe194c:
                                uint32_t x9_8
                                char* x11_4
                                
                                if (x10_3 u>= x8_4)
                                    if (*(arg1 + 0x30) != 0)
                                        int32_t x0_9
                                        x0_9, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, 
                                            zx.q(*(arg1 + 0x34)))
                                        
                                        if (x0_9 == 0)
                                            x9_8 = 0
                                            x8_4 = x21
                                            *(arg1 + 0x30) = 0
                                            *(arg1 + 0x38) = 0
                                        else
                                            x9_8 = zx.d(*(arg1 + 0x38))
                                            x8_4 = &(arg1 + 0x38)[sx.q(x0_9)]
                                        
                                        *(arg1 + 0xb8) = x21
                                        *(arg1 + 0xc0) = x8_4
                                        x11_4 = x21
                                        goto label_fe19ac
                                    
                                    result = 0
                                else
                                    x11_4 = &x10_3[1]
                                    *(arg1 + 0xb8) = x11_4
                                    x9_8 = zx.d(*x10_3)
                                label_fe19ac:
                                    
                                    if (x9_8 != 0x47)
                                        result = 0
                                    else
                                        uint32_t x9_9
                                        void* x10_4
                                        
                                        if (x11_4 u>= x8_4)
                                            if (*(arg1 + 0x30) != 0)
                                                int32_t x0_11
                                                x0_11, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), 
                                                    arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                                                
                                                if (x0_11 == 0)
                                                    x9_9 = 0
                                                    x8_4 = x21
                                                    *(arg1 + 0x30) = 0
                                                    *(arg1 + 0x38) = 0
                                                else
                                                    x9_9 = zx.d(*(arg1 + 0x38))
                                                    x8_4 = &(arg1 + 0x38)[sx.q(x0_11)]
                                                
                                                *(arg1 + 0xb8) = x21
                                                *(arg1 + 0xc0) = x8_4
                                                x10_4 = x21
                                                goto label_fe1a14
                                            
                                            result = 0
                                        else
                                            x10_4 = &x11_4[1]
                                            *(arg1 + 0xb8) = x10_4
                                            x9_9 = zx.d(*x11_4)
                                        label_fe1a14:
                                            
                                            if (x9_9 != 0x42)
                                                result = 0
                                            else
                                                uint32_t x9_10
                                                
                                                if (x10_4 u>= x8_4)
                                                    if (*(arg1 + 0x30) != 0)
                                                        int32_t x0_13
                                                        x0_13, v0 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x28), arg1 + 0x38, 
                                                            zx.q(*(arg1 + 0x34)))
                                                        
                                                        if (x0_13 == 0)
                                                            x9_10 = 0
                                                            x8_4 = x21
                                                            *(arg1 + 0x30) = 0
                                                            *(arg1 + 0x38) = 0
                                                        else
                                                            x9_10 = zx.d(*(arg1 + 0x38))
                                                            x8_4 = &(arg1 + 0x38)[sx.q(x0_13)]
                                                        
                                                        *(arg1 + 0xb8) = x21
                                                        *(arg1 + 0xc0) = x8_4
                                                        goto label_fe1a78
                                                    
                                                    result = 0
                                                else
                                                    x21 = x10_4 + 1
                                                    *(arg1 + 0xb8) = x21
                                                    x9_10 = zx.d(*x10_4)
                                                label_fe1a78:
                                                    
                                                    if (x9_10 != 0x45)
                                                        result = 0
                                                    else if (x21 u< x8_4)
                                                        *(arg1 + 0xb8) = x21 + 1
                                                        result = zx.q(zx.d(*x21) == 0xa ? 1 : 0)
                                                    else if (*(arg1 + 0x30) == 0)
                                                        result = 0
                                                    else
                                                        int32_t x0_15
                                                        x0_15, v0 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x28), arg1 + 0x38, 
                                                            zx.q(*(arg1 + 0x34)))
                                                        uint32_t x8_30
                                                        
                                                        if (x0_15 == 0)
                                                            x8_30 = 0
                                                            *(arg1 + 0x30) = 0
                                                            *(arg1 + 0x38) = 0
                                                        else
                                                            x8_30 = zx.d(*(arg1 + 0x38))
                                                        
                                                        result = zx.q(x8_30 == 0xa ? 1 : 0)
                            else
                                result = 0
                        else if (*(arg1 + 0x30) == 0)
                            result = 0
                        else
                            int32_t x0_7
                            x0_7, v0 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                            uint32_t x9_7
                            
                            if (x0_7 == 0)
                                x9_7 = 0
                                x8_4 = x21
                                *(arg1 + 0x30) = 0
                                *(arg1 + 0x38) = 0
                            else
                                x9_7 = zx.d(*(arg1 + 0x38))
                                x8_4 = arg1 + 0x38 + sx.q(x0_7)
                            
                            *(arg1 + 0xb8) = x21
                            *(arg1 + 0xc0) = x8_4
                            x10_3 = x21
                            
                            if (x9_7 == 0x52)
                                goto label_fe194c
                            
                            result = 0
                    else
                        result = 0
                else if (*(arg1 + 0x30) == 0)
                    result = 0
                else
                    int32_t x0_5
                    x0_5, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    uint32_t x9_5
                    
                    if (x0_5 == 0)
                        x9_5 = 0
                        x8_4 = x21
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                    else
                        x9_5 = zx.d(*(arg1 + 0x38))
                        x8_4 = arg1 + 0x38 + sx.q(x0_5)
                    
                    *(arg1 + 0xb8) = x21
                    *(arg1 + 0xc0) = x8_4
                    x11_3 = x21
                    
                    if (x9_5 == 0x3f)
                        goto label_fe18dc
                    
                    result = 0
            else
                result = 0
        else if (*(arg1 + 0x30) == 0)
            result = 0
        else
            int32_t x0_3
            x0_3, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            uint32_t x9_3
            
            if (x0_3 == 0)
                x9_3 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x8_4 = x21
            else
                x9_3 = zx.d(*(arg1 + 0x38))
                x8_4 = arg1 + 0x38 + sx.q(x0_3)
            
            x10_2 = x21
            *(arg1 + 0xb8) = x21
            *(arg1 + 0xc0) = x8_4
            
            if (x9_3 == 0x23)
                goto label_fe186c
            
            result = 0
        break
    
    x22 += 1
    
    if (x22 == 0xb)
        result = 1
        break

*(arg1 + 0xb8) = *(arg1 + 0xc8)
return result
