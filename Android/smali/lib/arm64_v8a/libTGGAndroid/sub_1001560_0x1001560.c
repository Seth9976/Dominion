// 函数: sub_1001560
// 地址: 0x1001560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xc8)
int64_t x8 = *(arg1 + 0xd0)
void var_44
int32_t* x23

x23 = arg2 == 0 ? &var_44 : arg2

int32_t* x21

x21 = arg3 == 0 ? &var_44 : arg3

int32_t* x20

x20 = arg4 == 0 ? &var_44 : arg4

*(arg1 + 0xb8) = x9
*(arg1 + 0xc0) = x8
uint32_t x22
int128_t v0

if (x9 u>= x8)
    if (*(arg1 + 0x30) == 0)
        x22 = 0
        
        if (x9 u< x8)
            goto label_1001650
        
        goto label_1001600
    
    int32_t x0_1
    x0_1, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    void* x8_4
    
    if (x0_1 == 0)
        x22 = 0
        *(arg1 + 0x30) = 0
        x8_4 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x22 = zx.d(*(arg1 + 0x38))
        x8_4 = &(arg1 + 0x38)[sx.q(x0_1)]
    
    x9 = arg1 + 0x39
    *(arg1 + 0xb8) = x9
    *(arg1 + 0xc0) = x8_4
    
    if (x9 u>= x8_4)
        goto label_1001600
    
    goto label_1001650

*(arg1 + 0xb8) = &x9[1]
x22 = zx.d(*x9)
x9 = &x9[1]
int64_t result
uint32_t x8_7

if (x9 u>= x8)
label_1001600:
    
    if (*(arg1 + 0x30) == 0)
        result = 0
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
    else
        int32_t x0_3
        x0_3, v0 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        void* x9_3
        
        if (x0_3 == 0)
            x8_7 = 0
            *(arg1 + 0x30) = 0
            x9_3 = arg1 + 0x39
            *(arg1 + 0x38) = 0
        else
            x8_7 = zx.d(*(arg1 + 0x38))
            x9_3 = &(arg1 + 0x38)[sx.q(x0_3)]
        
        *(arg1 + 0xb8) = arg1 + 0x39
        *(arg1 + 0xc0) = x9_3
        
        if (x22 == 0x50 && zx.d(x8_7.b - 0x35) u< 2)
            goto label_100169c
        
        result = 0
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
else
label_1001650:
    *(arg1 + 0xb8) = &x9[1]
    x8_7 = zx.d(*x9)
    
    if (x22 == 0x50 && zx.d(x8_7.b - 0x35) u< 2)
    label_100169c:
        int32_t x8_9
        
        x8_9 = x8_7 == 0x36 ? 3 : 1
        
        *x20 = x8_9
        char* x8_10 = *(arg1 + 0xb8)
        uint32_t x8_11
        
        if (x8_10 u>= *(arg1 + 0xc0))
            x8_11 = *(arg1 + 0x30)
            
            if (x8_11 != 0)
                int32_t x0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                void* x9_10
                
                if (x0_5 == 0)
                    x8_11 = 0
                    *(arg1 + 0x30) = 0
                    x9_10 = arg1 + 0x39
                    *(arg1 + 0x38) = 0
                else
                    x8_11 = zx.d(*(arg1 + 0x38))
                    x9_10 = arg1 + 0x38 + sx.q(x0_5)
                
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = x9_10
        else
            *(arg1 + 0xb8) = &x8_10[1]
            x8_11 = zx.d(*x8_10)
        
        uint8_t var_48 = x8_11.b
        sub_10019bc(arg1, &var_48)
        uint8_t x26_1 = var_48
        int32_t x24_1 = 0
        
        while (true)
            if (*(arg1 + 0x10) == 0)
            label_100176c:
                
                if (*(arg1 + 0xb8) u>= *(arg1 + 0xc0))
                    break
            else if ((*(arg1 + 0x20))(*(arg1 + 0x28)) != 0)
                if (*(arg1 + 0x30) == 0)
                    break
                
                goto label_100176c
            
            if (zx.d(x26_1 - 0x30) u> 9)
                break
            
            uint8_t* x8_19 = *(arg1 + 0xb8)
            x24_1 = x24_1 * 0xa + zx.d(x26_1) - 0x30
            
            if (x8_19 u< *(arg1 + 0xc0))
                *(arg1 + 0xb8) = &x8_19[1]
                x26_1 = *x8_19
            else
                x26_1 = 0
                
                if (*(arg1 + 0x30) != 0)
                    int32_t x0_10 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x8_24
                    
                    if (x0_10 == 0)
                        x26_1 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x8_24 = arg1 + 0x39
                    else
                        x26_1 = *(arg1 + 0x38)
                        x8_24 = arg1 + 0x38 + sx.q(x0_10)
                    
                    *(arg1 + 0xb8) = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_24
        
        var_48 = x26_1
        *x23 = x24_1
        sub_10019bc(arg1, &var_48)
        uint8_t x25_1 = var_48
        int32_t x23_1 = 0
        
        while (true)
            if (*(arg1 + 0x10) == 0)
            label_1001838:
                
                if (*(arg1 + 0xb8) u>= *(arg1 + 0xc0))
                    break
            else if ((*(arg1 + 0x20))(*(arg1 + 0x28)) != 0)
                if (*(arg1 + 0x30) == 0)
                    break
                
                goto label_1001838
            
            if (zx.d(x25_1 - 0x30) u> 9)
                break
            
            uint8_t* x8_31 = *(arg1 + 0xb8)
            x23_1 = x23_1 * 0xa + zx.d(x25_1) - 0x30
            
            if (x8_31 u< *(arg1 + 0xc0))
                *(arg1 + 0xb8) = &x8_31[1]
                x25_1 = *x8_31
            else
                x25_1 = 0
                
                if (*(arg1 + 0x30) != 0)
                    int32_t x0_15 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x8_36
                    
                    if (x0_15 == 0)
                        x25_1 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x8_36 = arg1 + 0x39
                    else
                        x25_1 = *(arg1 + 0x38)
                        x8_36 = arg1 + 0x38 + sx.q(x0_15)
                    
                    *(arg1 + 0xb8) = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_36
        
        var_48 = x25_1
        *x21 = x23_1
        sub_10019bc(arg1, &var_48)
        uint8_t x24_2 = var_48
        int32_t x21_1 = 0
        
        while (true)
            if (*(arg1 + 0x10) == 0)
            label_1001904:
                
                if (*(arg1 + 0xb8) u>= *(arg1 + 0xc0))
                    break
            else if ((*(arg1 + 0x20))(*(arg1 + 0x28)) != 0)
                if (*(arg1 + 0x30) == 0)
                    break
                
                goto label_1001904
            
            if (zx.d(x24_2 - 0x30) u> 9)
                break
            
            uint8_t* x8_43 = *(arg1 + 0xb8)
            x21_1 = x21_1 * 0xa + zx.d(x24_2) - 0x30
            
            if (x8_43 u< *(arg1 + 0xc0))
                *(arg1 + 0xb8) = &x8_43[1]
                x24_2 = *x8_43
            else
                x24_2 = 0
                
                if (*(arg1 + 0x30) != 0)
                    int32_t x0_20 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x8_48
                    
                    if (x0_20 == 0)
                        x24_2 = 0
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                        x8_48 = arg1 + 0x39
                    else
                        x24_2 = *(arg1 + 0x38)
                        x8_48 = arg1 + 0x38 + sx.q(x0_20)
                    
                    *(arg1 + 0xb8) = arg1 + 0x39
                    *(arg1 + 0xc0) = x8_48
        
        if (x21_1 s< 0x100)
            return 1
        
        result = 0
        data_2423720 = "max value > 255"
    else
        result = 0
        *(arg1 + 0xb8) = *(arg1 + 0xc8)
return result
