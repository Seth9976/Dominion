// 函数: sub_ff8bac
// 地址: 0xff8bac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
void* x8 = *(arg1 + 0xc0)
void* x10_1

if (x9 u< x8)
    x10_1 = &x9[1]
    *(arg1 + 0xb8) = x10_1
    
    if (zx.d(*x9) == 0x89)
    label_ff8c34:
        void* x11_1
        
        if (x10_1 u< x8)
            x11_1 = x10_1 + 1
            *(arg1 + 0xb8) = x11_1
            
            if (zx.d(*x10_1) == 0x50)
            label_ff8ca4:
                void* x10_2
                
                if (x11_1 u< x8)
                    x10_2 = x11_1 + 1
                    *(arg1 + 0xb8) = x10_2
                    
                    if (zx.d(*x11_1) == 0x4e)
                    label_ff8d14:
                        void* x11_2
                        
                        if (x10_2 u< x8)
                            x11_2 = x10_2 + 1
                            *(arg1 + 0xb8) = x11_2
                            
                            if (zx.d(*x10_2) == 0x47)
                            label_ff8d84:
                                uint32_t x9_9
                                void* x10_3
                                
                                if (x11_2 u< x8)
                                    x10_3 = x11_2 + 1
                                    *(arg1 + 0xb8) = x10_3
                                    x9_9 = zx.d(*x11_2)
                                label_ff8de4:
                                    
                                    if (x9_9 == 0xd)
                                        uint32_t x9_10
                                        void* x11_3
                                        
                                        if (x10_3 u< x8)
                                            x11_3 = x10_3 + 1
                                            *(arg1 + 0xb8) = x11_3
                                            x9_10 = zx.d(*x10_3)
                                        label_ff8e4c:
                                            
                                            if (x9_10 == 0xa)
                                                uint32_t x9_11
                                                void* x10_4
                                                
                                                if (x11_3 u< x8)
                                                    x10_4 = x11_3 + 1
                                                    *(arg1 + 0xb8) = x10_4
                                                    x9_11 = zx.d(*x11_3)
                                                label_ff8eb4:
                                                    
                                                    if (x9_11 == 0x1a)
                                                        uint32_t x8_30
                                                        
                                                        if (x10_4 u< x8)
                                                            *(arg1 + 0xb8) = x10_4 + 1
                                                            x8_30 = zx.d(*x10_4)
                                                        label_ff8f18:
                                                            
                                                            if (x8_30 == 0xa)
                                                                return 1
                                                        else if (*(arg1 + 0x30) != 0)
                                                            int32_t x0_15 = (*(arg1 + 0x10))(
                                                                *(arg1 + 0x28), arg1 + 0x38, 
                                                                zx.q(*(arg1 + 0x34)))
                                                            void* x9_14
                                                            
                                                            if (x0_15 == 0)
                                                                x8_30 = 0
                                                                x9_14 = arg1 + 0x39
                                                                *(arg1 + 0x30) = 0
                                                                *(arg1 + 0x38) = 0
                                                            else
                                                                x8_30 = zx.d(*(arg1 + 0x38))
                                                                x9_14 = &(arg1 + 0x38)[sx.q(x0_15)]
                                                            
                                                            *(arg1 + 0xb8) = arg1 + 0x39
                                                            *(arg1 + 0xc0) = x9_14
                                                            goto label_ff8f18
                                                else if (*(arg1 + 0x30) != 0)
                                                    int32_t x0_13 = (*(arg1 + 0x10))(
                                                        *(arg1 + 0x28), arg1 + 0x38, 
                                                        zx.q(*(arg1 + 0x34)))
                                                    
                                                    if (x0_13 == 0)
                                                        x9_11 = 0
                                                        x8 = arg1 + 0x39
                                                        *(arg1 + 0x30) = 0
                                                        *(arg1 + 0x38) = 0
                                                    else
                                                        x9_11 = zx.d(*(arg1 + 0x38))
                                                        x8 = &(arg1 + 0x38)[sx.q(x0_13)]
                                                    
                                                    *(arg1 + 0xb8) = arg1 + 0x39
                                                    *(arg1 + 0xc0) = x8
                                                    x10_4 = arg1 + 0x39
                                                    goto label_ff8eb4
                                        else if (*(arg1 + 0x30) != 0)
                                            int32_t x0_11 = (*(arg1 + 0x10))(*(arg1 + 0x28), 
                                                arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                                            
                                            if (x0_11 == 0)
                                                x9_10 = 0
                                                x8 = arg1 + 0x39
                                                *(arg1 + 0x30) = 0
                                                *(arg1 + 0x38) = 0
                                            else
                                                x9_10 = zx.d(*(arg1 + 0x38))
                                                x8 = &(arg1 + 0x38)[sx.q(x0_11)]
                                            
                                            *(arg1 + 0xb8) = arg1 + 0x39
                                            *(arg1 + 0xc0) = x8
                                            x11_3 = arg1 + 0x39
                                            goto label_ff8e4c
                                else if (*(arg1 + 0x30) != 0)
                                    int32_t x0_9 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, 
                                        zx.q(*(arg1 + 0x34)))
                                    
                                    if (x0_9 == 0)
                                        x9_9 = 0
                                        x8 = arg1 + 0x39
                                        *(arg1 + 0x30) = 0
                                        *(arg1 + 0x38) = 0
                                    else
                                        x9_9 = zx.d(*(arg1 + 0x38))
                                        x8 = &(arg1 + 0x38)[sx.q(x0_9)]
                                    
                                    *(arg1 + 0xb8) = arg1 + 0x39
                                    *(arg1 + 0xc0) = x8
                                    x10_3 = arg1 + 0x39
                                    goto label_ff8de4
                        else if (*(arg1 + 0x30) != 0)
                            int32_t x0_7 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                            uint32_t x9_8
                            
                            if (x0_7 == 0)
                                x9_8 = 0
                                x8 = arg1 + 0x39
                                *(arg1 + 0x30) = 0
                                *(arg1 + 0x38) = 0
                            else
                                x9_8 = zx.d(*(arg1 + 0x38))
                                x8 = arg1 + 0x38 + sx.q(x0_7)
                            
                            *(arg1 + 0xb8) = arg1 + 0x39
                            *(arg1 + 0xc0) = x8
                            x11_2 = arg1 + 0x39
                            
                            if (x9_8 == 0x47)
                                goto label_ff8d84
                else if (*(arg1 + 0x30) != 0)
                    int32_t x0_5 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    uint32_t x9_6
                    
                    if (x0_5 == 0)
                        x9_6 = 0
                        x8 = arg1 + 0x39
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                    else
                        x9_6 = zx.d(*(arg1 + 0x38))
                        x8 = arg1 + 0x38 + sx.q(x0_5)
                    
                    *(arg1 + 0xb8) = arg1 + 0x39
                    *(arg1 + 0xc0) = x8
                    x10_2 = arg1 + 0x39
                    
                    if (x9_6 == 0x4e)
                        goto label_ff8d14
        else if (*(arg1 + 0x30) != 0)
            int32_t x0_3 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            uint32_t x9_4
            
            if (x0_3 == 0)
                x9_4 = 0
                x8 = arg1 + 0x39
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
            else
                x9_4 = zx.d(*(arg1 + 0x38))
                x8 = arg1 + 0x38 + sx.q(x0_3)
            
            *(arg1 + 0xb8) = arg1 + 0x39
            *(arg1 + 0xc0) = x8
            x11_1 = arg1 + 0x39
            
            if (x9_4 == 0x50)
                goto label_ff8ca4
else if (*(arg1 + 0x30) != 0)
    int32_t x0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    uint32_t x9_2
    
    if (x0_1 == 0)
        x9_2 = 0
        *(arg1 + 0x30) = 0
        *(arg1 + 0x38) = 0
        x8 = arg1 + 0x39
    else
        x9_2 = zx.d(*(arg1 + 0x38))
        x8 = arg1 + 0x38 + sx.q(x0_1)
    
    x10_1 = arg1 + 0x39
    *(arg1 + 0xb8) = arg1 + 0x39
    *(arg1 + 0xc0) = x8
    
    if (x9_2 == 0x89)
        goto label_ff8c34
data_2423720 = "bad png sig"
return 0
