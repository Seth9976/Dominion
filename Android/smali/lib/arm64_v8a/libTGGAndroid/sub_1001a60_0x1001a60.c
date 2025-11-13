// 函数: sub_1001a60
// 地址: 0x1001a60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
char* x8 = *(arg1 + 0xc0)
char x24

if (x9 u< x8)
    *(arg1 + 0xb8) = &x9[1]
    x24 = *x9
    x9 = &x9[1]
else if (*(arg1 + 0x30) == 0)
    x24 = 0
else
    int32_t x0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
    
    if (x0_1 == 0)
        x24 = 0
        *(arg1 + 0x30) = 0
        x8 = arg1 + 0x39
        *(arg1 + 0x38) = 0
    else
        x24 = *(arg1 + 0x38)
        x8 = arg1 + 0x38 + sx.q(x0_1)
    
    x9 = arg1 + 0x39
    *(arg1 + 0xb8) = x9
    *(arg1 + 0xc0) = x8

int64_t x22 = 0

while (true)
    int32_t x8_6
    
    if (*(arg1 + 0x10) == 0)
    label_1001b2c:
        x8_6 = x9 u>= x8 ? 1 : 0
        
        if (zx.d(x24) == 0xa)
            break
    else
        if ((*(arg1 + 0x20))(*(arg1 + 0x28)) != 0)
            if (*(arg1 + 0x30) == 0)
                break
            
            x9 = *(arg1 + 0xb8)
            x8 = *(arg1 + 0xc0)
            goto label_1001b2c
        
        x8_6 = 0
        
        if (zx.d(x24) == 0xa)
            break
    
    if (x8_6 != 0)
        break
    
    arg2[x22] = x24
    
    if (x22 == 0x3fe)
        x22 = 0x3ff
        uint32_t i
        
        do
            char* x8_10
            
            if (*(arg1 + 0x10) == 0)
            label_1001bf8:
                x8_10 = *(arg1 + 0xb8)
                int64_t x9_4 = *(arg1 + 0xc0)
                
                if (x8_10 u>= x9_4)
                    break
                
                if (x8_10 u>= x9_4)
                    goto label_1001c0c
                
                *(arg1 + 0xb8) = &x8_10[1]
                i = zx.d(*x8_10)
            else
                if ((*(arg1 + 0x20))(*(arg1 + 0x28)) != 0)
                    if (*(arg1 + 0x30) == 0)
                        break
                    
                    goto label_1001bf8
                
                x8_10 = *(arg1 + 0xb8)
                
                if (x8_10 u< *(arg1 + 0xc0))
                    *(arg1 + 0xb8) = &x8_10[1]
                    i = zx.d(*x8_10)
                else
                label_1001c0c:
                    i = *(arg1 + 0x30)
                    
                    if (i != 0)
                        int32_t x0_9 =
                            (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                        void* x9_7
                        
                        if (x0_9 == 0)
                            i = 0
                            *(arg1 + 0x30) = 0
                            *(arg1 + 0x38) = 0
                            x9_7 = arg1 + 0x39
                        else
                            i = zx.d(*(arg1 + 0x38))
                            x9_7 = arg1 + 0x38 + sx.q(x0_9)
                        
                        *(arg1 + 0xb8) = arg1 + 0x39
                        *(arg1 + 0xc0) = x9_7
        while (i != 0xa)
        break
    
    x9 = *(arg1 + 0xb8)
    x8 = *(arg1 + 0xc0)
    x22 += 1
    
    if (x9 u< x8)
        *(arg1 + 0xb8) = &x9[1]
        x24 = *x9
        x9 = &x9[1]
    else
        x24 = 0
        
        if (*(arg1 + 0x30) != 0)
            int32_t x0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            
            if (x0_5 == 0)
                x24 = 0
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
                x8 = arg1 + 0x39
            else
                x24 = *(arg1 + 0x38)
                x8 = arg1 + 0x38 + sx.q(x0_5)
            
            *(arg1 + 0xb8) = arg1 + 0x39
            *(arg1 + 0xc0) = x8
            x9 = arg1 + 0x39

arg2[x22] = 0
return arg2
