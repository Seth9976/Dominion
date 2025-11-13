// 函数: sub_10010b8
// 地址: 0x10010b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0xb8)
void* x8 = *(arg1 + 0xc0)
uint32_t x10

if (x9 u>= x8)
    x10 = *(arg1 + 0x30)
    
    if (x10 != 0)
        int32_t x0_1 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
        
        if (x0_1 == 0)
            x10 = 0
            *(arg1 + 0x30) = 0
            *(arg1 + 0x38) = 0
            x8 = arg1 + 0x39
        else
            x10 = zx.d(*(arg1 + 0x38))
            x8 = &(arg1 + 0x38)[sx.q(x0_1)]
        
        x9 = arg1 + 0x39
        *(arg1 + 0xb8) = arg1 + 0x39
        *(arg1 + 0xc0) = x8
else
    *(arg1 + 0xb8) = &x9[1]
    x10 = zx.d(*x9)
    x9 = &x9[1]

if (x10 == zx.d(*arg2))
    uint32_t x10_1
    
    if (x9 u>= x8)
        x10_1 = *(arg1 + 0x30)
        
        if (x10_1 != 0)
            int32_t x0_3 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
            
            if (x0_3 == 0)
                x10_1 = 0
                x8 = arg1 + 0x39
                *(arg1 + 0x30) = 0
                *(arg1 + 0x38) = 0
            else
                x10_1 = zx.d(*(arg1 + 0x38))
                x8 = &(arg1 + 0x38)[sx.q(x0_3)]
            
            *(arg1 + 0xb8) = arg1 + 0x39
            *(arg1 + 0xc0) = x8
            x9 = arg1 + 0x39
    else
        *(arg1 + 0xb8) = &x9[1]
        x10_1 = zx.d(*x9)
        x9 = &x9[1]
    
    if (x10_1 == zx.d(arg2[1]))
        uint32_t x10_2
        
        if (x9 u>= x8)
            x10_2 = *(arg1 + 0x30)
            
            if (x10_2 != 0)
                int32_t x0_5 = (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                
                if (x0_5 == 0)
                    x10_2 = 0
                    x8 = arg1 + 0x39
                    *(arg1 + 0x30) = 0
                    *(arg1 + 0x38) = 0
                else
                    x10_2 = zx.d(*(arg1 + 0x38))
                    x8 = &(arg1 + 0x38)[sx.q(x0_5)]
                
                *(arg1 + 0xb8) = arg1 + 0x39
                *(arg1 + 0xc0) = x8
                x9 = arg1 + 0x39
        else
            *(arg1 + 0xb8) = &x9[1]
            x10_2 = zx.d(*x9)
            x9 = &x9[1]
        
        if (x10_2 == zx.d(arg2[2]))
            uint32_t x8_11
            
            if (x9 u>= x8)
                x8_11 = *(arg1 + 0x30)
                
                if (x8_11 != 0)
                    int32_t x0_8 =
                        (*(arg1 + 0x10))(*(arg1 + 0x28), arg1 + 0x38, zx.q(*(arg1 + 0x34)))
                    void* x9_3
                    
                    if (x0_8 == 0)
                        x8_11 = 0
                        x9_3 = arg1 + 0x39
                        *(arg1 + 0x30) = 0
                        *(arg1 + 0x38) = 0
                    else
                        x8_11 = zx.d(*(arg1 + 0x38))
                        x9_3 = &(arg1 + 0x38)[sx.q(x0_8)]
                    
                    *(arg1 + 0xb8) = arg1 + 0x39
                    *(arg1 + 0xc0) = x9_3
            else
                *(arg1 + 0xb8) = &x9[1]
                x8_11 = zx.d(*x9)
            
            return zx.q(x8_11 == zx.d(arg2[3]) ? 1 : 0)

return 0
