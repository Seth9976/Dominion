// 函数: sub_10012b4
// 地址: 0x10012b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = arg3

if ((arg2 & 0x80) == 0)
    goto label_100136c

char* x8_4

if (*(arg1 + 0x10) == 0)
label_10012f4:
    x8_4 = *(arg1 + 0xb8)
    int64_t x9_1 = *(arg1 + 0xc0)
    
    if (x8_4 u< x9_1)
        if (x8_4 u>= x9_1)
            goto label_1001324
        
        goto label_100130c
    
    result = nullptr
    data_2423720 = "bad file"
else if ((*(arg1 + 0x20))(*(arg1 + 0x28)) == 0)
    x8_4 = *(arg1 + 0xb8)
    uint32_t x8_5
    
    if (x8_4 u>= *(arg1 + 0xc0))
    label_1001324:
        x8_5 = *(arg1 + 0x30)
        
        if (x8_5 != 0)
            int32_t x0_3 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            void* x9_6
            
            if (x0_3 == 0)
                x8_5 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x9_6 = arg1 + 0x39
            else
                x8_5 = zx.d(*(arg1 + 0x38))
                x9_6 = &(arg1 + 0x38)[sx.q(x0_3)]
            
            *(arg1 + 0xb8) = arg1 + 0x39
            *(arg1 + 0xc0) = x9_6
        
        goto label_1001368
    
label_100130c:
    *(arg1 + 0xb8) = &x8_4[1]
    x8_5 = zx.d(*x8_4)
label_1001368:
    *result = x8_5.b
label_100136c:
    
    if ((arg2 & 0x40) == 0)
        goto label_1001404
    
    char* x8_10
    
    if (*(arg1 + 0x10) == 0)
    label_100138c:
        x8_10 = *(arg1 + 0xb8)
        int64_t x9_7 = *(arg1 + 0xc0)
        
        if (x8_10 u< x9_7)
            if (x8_10 u>= x9_7)
                goto label_10013bc
            
            goto label_10013a4
        
        result = nullptr
        data_2423720 = "bad file"
    else if ((*(arg1 + 0x20))(*(arg1 + 0x28)) == 0)
        x8_10 = *(arg1 + 0xb8)
        uint32_t x8_11
        
        if (x8_10 u>= *(arg1 + 0xc0))
        label_10013bc:
            x8_11 = *(arg1 + 0x30)
            
            if (x8_11 != 0)
                int32_t x0_7 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                void* x9_12
                
                if (x0_7 == 0)
                    x8_11 = 0
                    x9_12 = arg1 + 0x39
                    *(arg1 + 0x30) = 0
                    *(arg1 + 0x38) = 0
                else
                    x8_11 = zx.d(*(arg1 + 0x38))
                    x9_12 = arg1 + 0x38 + sx.q(x0_7)
                
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = x9_12
            
            goto label_1001400
        
    label_10013a4:
        *(arg1 + 0xb8) = &x8_10[1]
        x8_11 = zx.d(*x8_10)
    label_1001400:
        result[1] = x8_11.b
    label_1001404:
        
        if ((arg2 & 0x20) == 0)
            goto label_100149c
        
        char* x8_16
        
        if (*(arg1 + 0x10) == 0)
        label_1001424:
            x8_16 = *(arg1 + 0xb8)
            int64_t x9_13 = *(arg1 + 0xc0)
            
            if (x8_16 u< x9_13)
                if (x8_16 u>= x9_13)
                    goto label_1001454
                
                goto label_100143c
            
            result = nullptr
            data_2423720 = "bad file"
        else if ((*(arg1 + 0x20))(*(arg1 + 0x28)) == 0)
            x8_16 = *(arg1 + 0xb8)
            uint32_t x8_17
            
            if (x8_16 u>= *(arg1 + 0xc0))
            label_1001454:
                x8_17 = *(arg1 + 0x30)
                
                if (x8_17 != 0)
                    int32_t x0_11 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x9_18
                    
                    if (x0_11 == 0)
                        x8_17 = 0
                        x9_18 = arg1 + 0x39
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                    else
                        x8_17 = zx.d(*(arg1 + 0x38))
                        x9_18 = arg1 + 0x38 + sx.q(x0_11)
                    
                    *(arg1 + 0xb8) = arg1 + 0x39
                    *(arg1 + 0xc0) = x9_18
                
                goto label_1001498
            
        label_100143c:
            *(arg1 + 0xb8) = &x8_16[1]
            x8_17 = zx.d(*x8_16)
        label_1001498:
            result[2] = x8_17.b
        label_100149c:
            
            if ((arg2 & 0x10) != 0)
                char* x8_22
                int64_t x9_19
                
                if (*(arg1 + 0x10) == 0)
                label_10014bc:
                    x8_22 = *(arg1 + 0xb8)
                    x9_19 = *(arg1 + 0xc0)
                    
                    if (x8_22 u< x9_19)
                        goto label_10014f4
                    
                    result = nullptr
                    data_2423720 = "bad file"
                else if ((*(arg1 + 0x20))(*(arg1 + 0x28)) == 0)
                    x8_22 = *(arg1 + 0xb8)
                    x9_19 = *(arg1 + 0xc0)
                label_10014f4:
                    
                    if (x8_22 u>= x9_19)
                        uint32_t x8_23 = *(arg1 + 0x30)
                        
                        if (x8_23 == 0)
                            result[3] = x8_23.b
                        else
                            int32_t x0_16 =
                                (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                            char x8_25
                            void* x9_23
                            
                            if (x0_16 == 0)
                                x8_25 = 0
                                x9_23 = arg1 + 0x39
                                *(arg1 + 0x30) = 0
                                *(arg1 + 0x38) = 0
                            else
                                x8_25 = *(arg1 + 0x38)
                                x9_23 = arg1 + 0x38 + sx.q(x0_16)
                            
                            *(arg1 + 0xb8) = arg1 + 0x39
                            *(arg1 + 0xc0) = x9_23
                            result[3] = x8_25
                    else
                        *(arg1 + 0xb8) = &x8_22[1]
                        result[3] = *x8_22
                else
                    if (*(arg1 + 0x30) != 0)
                        goto label_10014bc
                    
                    result = nullptr
                    data_2423720 = "bad file"
        else
            if (*(arg1 + 0x30) != 0)
                goto label_1001424
            
            result = nullptr
            data_2423720 = "bad file"
    else
        if (*(arg1 + 0x30) != 0)
            goto label_100138c
        
        result = nullptr
        data_2423720 = "bad file"
else
    if (*(arg1 + 0x30) != 0)
        goto label_10012f4
    
    result = nullptr
    data_2423720 = "bad file"
return result
