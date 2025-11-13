// 函数: stbtt_PackFontRanges
// 地址: 0x1009a80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1

if (arg5 s>= 1)
    int64_t x9_1 = 0
    x8_1 = zx.q(arg5)
    
    do
        if (*(arg4 + x9_1 * 0x28 + 0x10) s>= 1)
            int64_t x12_2 = 0
            int64_t i = 0
            
            do
                i += 1
                *(*(arg4 + x9_1 * 0x28 + 0x18) + x12_2 + 6) = 0
                *(*(arg4 + x9_1 * 0x28 + 0x18) + x12_2 + 4) = 0
                *(*(arg4 + x9_1 * 0x28 + 0x18) + x12_2 + 2) = 0
                *(*(arg4 + x9_1 * 0x28 + 0x18) + x12_2) = 0
                x12_2 += 0x1c
            while (i s< sx.q(*(arg4 + x9_1 * 0x28 + 0x10)))
        
        x9_1 += 1
    while (x9_1 != x8_1)

int32_t x19_1
void* x0

if (arg5 s< 1 || arg5 s< 1)
    x0 = malloc(0)
    
    if (x0 == 0)
        x19_1 = 0
    else
    label_1009b68:
        int64_t var_e0 = *arg1
        stbtt_InitFont(&var_e0, arg2, zx.q(stbtt_GetFontOffsetForIndex(arg2, zx.q(arg3))))
        int32_t x0_5 = stbtt_PackFontRangesGatherRects(arg1, &var_e0, arg4, zx.q(arg5), x0)
        int64_t x8_3
        
        if (x0_5 s< 1)
            x8_3 = 0
        else
            int32_t* x9_2 = arg1[1]
            x8_3 = 0
            void* x13_1 = x0 + 0x14
            int32_t x10_2 = x9_2[2]
            int32_t x11_3 = *x9_2
            
            while (true)
                int32_t x15_9 = *(x13_1 - 8)
                int32_t x16_2
                
                if (x15_9 + x10_2 s<= x11_3)
                    x16_2 = x9_2[3]
                else
                    x16_2 = x9_2[4]
                    x10_2 = 0
                    x9_2[2] = 0
                    x9_2[3] = x16_2
                
                int32_t x17_2 = *(x13_1 - 4) + x16_2
                
                if (x17_2 s> x9_2[1])
                    break
                
                *(x13_1 - 0x14) = x10_2
                *(x13_1 - 0x10) = x16_2
                *x13_1 = 1
                int32_t x16_3 = x9_2[4]
                x10_2 += x15_9
                x9_2[2] = x10_2
                
                if (x17_2 s> x16_3)
                    x9_2[4] = x17_2
                
                x8_3 += 1
                x13_1 += 0x18
                
                if (zx.q(x0_5) == x8_3)
                    goto label_1009d28
        
        if (x8_3.d s< x0_5)
            uint64_t x12_4 = zx.q(x8_3.d)
            uint64_t x8_4 = zx.q(x0_5)
            uint64_t x10_3 = x8_4 - x12_4
            uint64_t x9_3
            
            if (x10_3 u>= 2)
                int64_t i_10 = x10_3 & 0xfffffffffffffffe
                x9_3 = i_10 + x12_4
                int32_t* x12_7 = x0 + x12_4 * 0x18 + 0x2c
                int64_t i_8 = i_10
                int64_t i_1
                
                do
                    x12_7[-6] = 0
                    *x12_7 = 0
                    x12_7 = &x12_7[0xc]
                    i_1 = i_8
                    i_8 -= 2
                while (i_1 != 2)
                
                if (x10_3 != i_10)
                    goto label_1009cf8
            else
                x9_3 = x12_4
            label_1009cf8:
                uint64_t i_6 = x8_4 - x9_3
                int32_t* x9_6 = x0 + x9_3 * 0x18 + 0x14
                uint64_t i_2
                
                do
                    i_2 = i_6
                    i_6 -= 1
                    *x9_6 = 0
                    x9_6 = &x9_6[6]
                while (i_2 != 1)
        
    label_1009d28:
        x19_1 = stbtt_PackFontRangesRenderIntoRects(arg1, &var_e0, arg4, zx.q(arg5), x0)
        free(x0)
else
    int32_t x10_1
    int64_t i_9
    
    if (arg5 != 1)
        i_9 = x8_1 & 0xfffffffe
        int32_t x10_4 = 0
        int32_t x11_4 = 0
        int32_t* x12_5 = arg4 + 0x38
        int64_t i_7 = i_9
        int64_t i_3
        
        do
            int32_t x14_3 = x12_5[-0xa]
            int32_t x15_10 = *x12_5
            x12_5 = &x12_5[0x14]
            i_3 = i_7
            i_7 -= 2
            x10_4 += x14_3
            x11_4 += x15_10
        while (i_3 != 2)
        x10_1 = x11_4 + x10_4
        
        if (i_9 != x8_1)
            goto label_1009c94
    else
        i_9 = 0
        x10_1 = 0
    label_1009c94:
        int32_t* x11_6 = arg4 + i_9 * 0x28 + 0x10
        int64_t i_5 = x8_1 - i_9
        int64_t i_4
        
        do
            int32_t x9_4 = *x11_6
            x11_6 = &x11_6[0xa]
            i_4 = i_5
            i_5 -= 1
            x10_1 += x9_4
        while (i_4 != 1)
    x0 = malloc(muls.dp.d(x10_1, 0x18))
    
    if (x0 != 0)
        goto label_1009b68
    
    x19_1 = 0
return zx.q(x19_1)
