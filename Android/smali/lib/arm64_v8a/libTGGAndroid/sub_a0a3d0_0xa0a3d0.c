// 函数: sub_a0a3d0
// 地址: 0xa0a3d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg3 + 0x48)
int64_t x22 = sx.q(*(arg2 + 0xb4))

if (x8 == 2)
    if (*(arg3 + 0x64) s>= 3 && *(arg1 + 0x19e4) s>= 3)
        int32_t x8_3 = *(arg3 + 0x58)
        
        if (x8_3 == x22.d && x8_3 == *(arg3 + 0x54)
                && RandomInt(&data_14a71e8, 0x64).d s< *(x22 * 0x84 + 0x14a76c4))
            int32_t x10_1 = *(arg2 + 0xd8)
            
            if (x10_1 s>= 1)
                int64_t x8_6 = 0
                int64_t i = 0
                
                do
                    void* x12_2 = *(arg2 + 0xd0) + x8_6
                    
                    if (*(x12_2 + 0x18) == *(arg3 + 0x64))
                        *(x12_2 + 0x54) = *(x12_2 + 0x54) + float.s(0xc479c000)
                        x10_1 = *(arg2 + 0xd8)
                    
                    i += 1
                    x8_6 += 0x70
                while (i s< sx.q(x10_1))
    
    x8 = *(arg3 + 0x48)

if (x8 == 0xc || x8 == 3)
    int32_t x9_2 = *(arg3 + 0x58)
    
    if (x9_2 == *(arg3 + 0x54) && x9_2 == *(arg2 + 0xb4) && *(x22 * 0x84 + 0x14a76c8) s>= 1)
        int32_t x10_4 = *(arg2 + 0xd8)
        
        if (x10_4 s>= 1)
            int64_t x8_7 = 0
            int64_t i_1 = 0
            
            do
                void* x12_3 = *(arg2 + 0xd0)
                void* x13_2 = x12_3 + x8_7
                
                if (*(x13_2 + 0x18) != 0 && **(x13_2 + 0x10) == 0x100)
                    void* x10_5 = x12_3 + x8_7
                    *(x10_5 + 0x54) = *(x10_5 + 0x54) + float.s(0xc479c000)
                    x10_4 = *(arg2 + 0xd8)
                
                i_1 += 1
                x8_7 += 0x70
            while (i_1 s< sx.q(x10_4))
            
            x8 = *(arg3 + 0x48)

if (x8 == 0xc || x8 == 3)
    int32_t x9_5 = *(arg3 + 0x58)
    
    if (x9_5 == *(arg3 + 0x54) && x9_5 == *(arg2 + 0xb4)
            && *(arg1 + 0x19e4) s<= *(x22 * 0x84 + 0x14a771c))
        int32_t x9_7 = *(arg2 + 0xd8)
        
        if (x9_7 s>= 1)
            int64_t x8_8 = 0
            int64_t i_2 = 0
            
            do
                void* x11_1 = *(arg2 + 0xd0)
                void* x12_4 = x11_1 + x8_8
                
                if (*(x12_4 + 0x18) != 0)
                    int32_t x12_6 = **(x12_4 + 0x10)
                    
                    if (x12_6 - 0x101 u< 3 || x12_6 == 0x601)
                        void* x9_8 = x11_1 + x8_8
                        *(x9_8 + 0x54) = *(x9_8 + 0x54) + fconvert.s(-10f)
                        x9_7 = *(arg2 + 0xd8)
                
                i_2 += 1
                x8_8 += 0x70
            while (i_2 s< sx.q(x9_7))
            
            x8 = *(arg3 + 0x48)

if (x8 == 0xc || x8 == 3)
    int32_t x9_9 = *(arg3 + 0x58)
    
    if (x9_9 == *(arg3 + 0x54) && x9_9 == *(arg2 + 0xb4) && zx.d(*(x22 * 0x84 + 0x14a7720)) != 0)
        int32_t x9_12 = *(arg2 + 0xd8)
        
        if (x9_12 s>= 1)
            int64_t i_3 = 0
            
            do
                int64_t x14_3 = *(arg2 + 0xd0)
                
                if (*(x14_3 + i_3 * 0x70 + 0x18) != 0)
                    int64_t x1 = sx.q(**(x14_3 + i_3 * 0x70 + 0x10))
                    int64_t x15_5 = x1 * 0x68c8c4ad
                    int32_t* x15_9 = *(&data_13db978
                        + (sx.q(x1.d - ((x15_5 s>> 0x2c).d + (x15_5 u>> 0x3f).d) * 0x2717) << 3))
                    
                    if (x15_9 == 0)
                    label_a0a7d8:
                        return sub_a0a7dc(printf("Couldn't lookup %d\n")) __tailcall
                    
                    while (*x15_9 != x1.d)
                        x15_9 = *(x15_9 + 0x1b8)
                        
                        if (x15_9 == 0)
                            goto label_a0a7d8
                    
                    if ((zx.d(x15_9[2].b) & 2) != 0)
                        void* x9_13 = x14_3 + i_3 * 0x70
                        *(x9_13 + 0x54) = *(x9_13 + 0x54) + fconvert.s(-4f)
                        x9_12 = *(arg2 + 0xd8)
                
                i_3 += 1
            while (i_3 s< sx.q(x9_12))
            
            x8 = *(arg3 + 0x48)

if (x8 != 0xc && x8 != 3)
    return 

int32_t x8_9 = *(arg3 + 0x58)

if (x8_9 != *(arg3 + 0x54) || x8_9 != *(arg2 + 0xb4) || zx.d(*(x22 * 0x84 + 0x14a7721)) == 0)
    return 

int32_t x10_12 = *(arg2 + 0xd8)

if (x10_12 s< 1)
    return 

int64_t x8_12 = 0
int64_t i_4 = 0

do
    void* x11_2 = *(arg2 + 0xd0)
    void* x12_7 = x11_2 + x8_12
    
    if (*(x12_7 + 0x18) != 0 && **(x12_7 + 0x10) - 0x100 u<= 6)
        void* x10_13 = x11_2 + x8_12
        *(x10_13 + 0x54) = *(x10_13 + 0x54) + fconvert.s(-5f)
        x10_12 = *(arg2 + 0xd8)
    
    i_4 += 1
    x8_12 += 0x70
while (i_4 s< sx.q(x10_12))
