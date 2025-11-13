// 函数: stbtt_InitFont
// 地址: 0x1009d50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x40) = 0
void* x23 = arg2 + zx.q(arg3)
*(arg1 + 8) = arg2
*(arg1 + 0x10) = arg3
*(arg1 + 0x48) = 0
int32_t x22 = arg3 + 0xc
uint64_t i_9 = _byteswap(zx.q(*(x23 + 4)) << 0x30)
int32_t x21

if (i_9.d == 0)
    x21 = 0
else
    int32_t x10_1 = x22
    uint64_t i_16 = i_9
    
    while (true)
        char* x12_1 = arg2 + zx.q(x10_1)
        
        if (zx.d(*x12_1) == 0x63 && zx.d(x12_1[1]) == 0x6d && zx.d(x12_1[2]) == 0x61
                && zx.d(x12_1[3]) == 0x70)
            x21 = _byteswap(*(x12_1 + 8))
            break
        
        uint64_t i_17 = i_16
        i_16 -= 1
        x10_1 += 0x10
        
        if (i_17 == 1)
            x21 = 0
            break
    
    int32_t x10_3 = x22
    uint64_t i
    
    do
        char* x11_1 = arg2 + zx.q(x10_3)
        
        if (zx.d(*x11_1) == 0x6c && zx.d(x11_1[1]) == 0x6f && zx.d(x11_1[2]) == 0x63
                && zx.d(x11_1[3]) == 0x61)
            i_9 = zx.q(_byteswap(*(x11_1 + 8)))
            break
        
        i = i_9
        i_9 -= 1
        x10_3 += 0x10
    while (i != 1)

*(arg1 + 0x18) = i_9.d
uint64_t i_10 = _byteswap(zx.q(*(x23 + 4)) << 0x30)

if (i_10.d != 0)
    int32_t x11_2 = x22
    uint64_t i_1
    
    do
        char* x12_6 = arg2 + zx.q(x11_2)
        
        if (zx.d(*x12_6) == 0x68 && zx.d(x12_6[1]) == 0x65 && zx.d(x12_6[2]) == 0x61
                && zx.d(x12_6[3]) == 0x64)
            i_10 = zx.q(_byteswap(*(x12_6 + 8)))
            break
        
        i_1 = i_10
        i_10 -= 1
        x11_2 += 0x10
    while (i_1 != 1)

*(arg1 + 0x1c) = i_10.d
uint64_t i_11 = _byteswap(zx.q(*(x23 + 4)) << 0x30)

if (i_11.d != 0)
    int32_t x12_7 = x22
    uint64_t i_2
    
    do
        char* x13_9 = arg2 + zx.q(x12_7)
        
        if (zx.d(*x13_9) == 0x67 && zx.d(x13_9[1]) == 0x6c && zx.d(x13_9[2]) == 0x79
                && zx.d(x13_9[3]) == 0x66)
            i_11 = zx.q(_byteswap(*(x13_9 + 8)))
            break
        
        i_2 = i_11
        i_11 -= 1
        x12_7 += 0x10
    while (i_2 != 1)

*(arg1 + 0x20) = i_11.d
uint64_t i_12 = _byteswap(zx.q(*(x23 + 4)) << 0x30)

if (i_12.d != 0)
    int32_t x13_10 = x22
    uint64_t i_3
    
    do
        char* x14_5 = arg2 + zx.q(x13_10)
        
        if (zx.d(*x14_5) == 0x68 && zx.d(x14_5[1]) == 0x68 && zx.d(x14_5[2]) == 0x65
                && zx.d(x14_5[3]) == 0x61)
            i_12 = zx.q(_byteswap(*(x14_5 + 8)))
            break
        
        i_3 = i_12
        i_12 -= 1
        x13_10 += 0x10
    while (i_3 != 1)

*(arg1 + 0x24) = i_12.d
uint64_t i_13 = _byteswap(zx.q(*(x23 + 4)) << 0x30)

if (i_13.d != 0)
    int32_t x14_6 = x22
    uint64_t i_4
    
    do
        char* x15_5 = arg2 + zx.q(x14_6)
        
        if (zx.d(*x15_5) == 0x68 && zx.d(x15_5[1]) == 0x6d && zx.d(x15_5[2]) == 0x74
                && zx.d(x15_5[3]) == 0x78)
            i_13 = zx.q(_byteswap(*(x15_5 + 8)))
            break
        
        i_4 = i_13
        i_13 -= 1
        x14_6 += 0x10
    while (i_4 != 1)

*(arg1 + 0x28) = i_13.d
uint64_t i_14 = _byteswap(zx.q(*(x23 + 4)) << 0x30)

if (i_14.d != 0)
    int32_t x15_6 = x22
    uint64_t i_5
    
    do
        char* x16_5 = arg2 + zx.q(x15_6)
        
        if (zx.d(*x16_5) == 0x6b && zx.d(x16_5[1]) == 0x65 && zx.d(x16_5[2]) == 0x72
                && zx.d(x16_5[3]) == 0x6e)
            i_14 = zx.q(_byteswap(*(x16_5 + 8)))
            break
        
        i_5 = i_14
        i_14 -= 1
        x15_6 += 0x10
    while (i_5 != 1)

*(arg1 + 0x2c) = i_14.d
uint64_t i_15 = _byteswap(zx.q(*(x23 + 4)) << 0x30)

if (i_15.d != 0)
    int32_t x15_7 = x22
    uint64_t i_6
    
    do
        char* x16_6 = arg2 + zx.q(x15_7)
        
        if (zx.d(*x16_6) == 0x47 && zx.d(x16_6[1]) == 0x50 && zx.d(x16_6[2]) == 0x4f
                && zx.d(x16_6[3]) == 0x53)
            i_15 = zx.q(_byteswap(*(x16_6 + 8)))
            break
        
        i_6 = i_15
        i_15 -= 1
        x15_7 += 0x10
    while (i_6 != 1)

int64_t result = 0
*(arg1 + 0x30) = i_15.d

if (x21 != 0 && i_10.d != 0 && i_12.d != 0 && i_13.d != 0)
    int32_t x8_5
    uint64_t x8_4
    
    if (i_11.d == 0)
        int32_t var_68 = 0
        int32_t var_64 = 2
        int64_t var_70 = 0
        uint64_t x9_6 = _byteswap(zx.q(*(x23 + 4)) << 0x30)
        
        if (x9_6.d == 0)
            return 0
        
        int32_t x10_10 = x22
        void* x11_7
        
        while (true)
            x11_7 = arg2 + zx.q(x10_10)
            
            if (zx.d(*x11_7) == 0x43 && zx.d(*(x11_7 + 1)) == 0x46 && zx.d(*(x11_7 + 2)) == 0x46
                    && zx.d(*(x11_7 + 3)) == 0x20)
                break
            
            uint64_t temp8_1 = x9_6
            x9_6 -= 1
            x10_10 += 0x10
            
            if (temp8_1 == 1)
                return 0
        
        uint64_t x9_9 = _byteswap(zx.q(*(x11_7 + 8)) << 0x20)
        
        if (x9_9.d == 0)
            return 0
        
        int128_t v0
        v0.q = 0
        v0:8.q = 0
        __builtin_memset(arg1 + 0x80, 0, 0x20)
        *(arg1 + 0x40) = arg2 + x9_9
        *(arg1 + 0x48) = 0x2000000000000000
        int128_t var_50 = *(arg1 + 0x40)
        int32_t x9_11 = var_50:8.d
        char* x0_17
        int32_t x1_7
        
        if (x9_11 s< 0xfffffffe)
            x0_17, x1_7 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
            return stbtt_GetFontOffsetForIndex(x0_17, x1_7) __tailcall
        
        int32_t x8_9 = var_50:0xc.d
        
        if (x8_9 s< x9_11 + 2)
            x0_17, x1_7 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
            return stbtt_GetFontOffsetForIndex(x0_17, x1_7) __tailcall
        
        uint32_t x9_13
        
        if (x9_11 + 2 s>= x8_9)
            x9_13 = 0
        else
            x9_13 = zx.d(*(var_50.q + zx.q(x9_11 + 2)))
        
        if (x8_9 s< x9_13)
            x0_17, x1_7 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
            return stbtt_GetFontOffsetForIndex(x0_17, x1_7) __tailcall
        
        var_50:8.d = x9_13
        sub_100da24(&var_50)
        char* x0_2
        int64_t x1
        x0_2, x1 = sub_100da24(&var_50)
        void* x0_3
        int64_t x1_1
        x0_3, x1_1 = sub_100cec0(x0_2, x1, 0)
        void* var_60 = x0_3
        int64_t var_58_1 = x1_1
        sub_100da24(&var_50)
        int64_t x0_6
        int64_t x1_2
        x0_6, x1_2 = sub_100da24(&var_50)
        *(arg1 + 0x60) = x0_6
        *(arg1 + 0x68) = x1_2
        sub_100d7ec(&var_60, 0x11, 1, &var_68)
        sub_100d7ec(&var_60, 0x106, 1, &var_64)
        sub_100d7ec(&var_60, 0x124, 1, &var_70:4)
        sub_100d7ec(&var_60, 0x125, 1, &var_70)
        int64_t x0_12
        int64_t x1_4
        x0_12, x1_4 = sub_100d6e0(var_50.q, var_50:8.q, var_60)
        *(arg1 + 0x70) = x0_12
        *(arg1 + 0x78) = x1_4
        
        if (var_64 != 2)
            return 0
        
        int32_t x24_1 = var_68
        
        if (x24_1 == 0)
            return 0
        
        int32_t x8_16 = var_70:4.d
        int32_t x8_17
        
        if (x8_16 == 0)
            x8_17 = var_50:0xc.d
        else
            int64_t x25_1 = sx.q(var_70.d)
            
            if (x25_1.d == 0)
                return 0
            
            if ((x8_16 & 0x80000000) != 0 || var_50:0xc.d s< x8_16)
                x0_17, x1_7 = __assert2(
                    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                    0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
                return stbtt_GetFontOffsetForIndex(x0_17, x1_7) __tailcall
            
            var_50:8.d = x8_16
            int64_t x0_14
            int64_t x1_5
            x0_14, x1_5 = sub_100da24(&var_50)
            *(arg1 + 0x80) = x0_14
            *(arg1 + 0x88) = x1_5
            x8_17 = var_50:0xc.d
            uint64_t x10_12 = zx.q(x8_17 - x25_1.d)
            int32_t x11_10 = (x8_17 s< x25_1.d ? 1 : 0) | ((x10_12.d | x25_1.d) s< 0 ? 1 : 0)
            int64_t x9_17
            
            if (x11_10 != 0)
                x9_17 = 0
            else
                x9_17 = var_50.q + x25_1
            
            uint64_t x10_14
            
            if (x11_10 != 0)
                x10_14 = 0
            else
                x10_14 = x10_12 << 0x20
            
            *(arg1 + 0x90) = x9_17
            *(arg1 + 0x98) = x10_14
        
        if ((x24_1 & 0x80000000) != 0 || x8_17 s< x24_1)
            x0_17, x1_7 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
            return stbtt_GetFontOffsetForIndex(x0_17, x1_7) __tailcall
        
        var_50:8.d = x24_1
        int64_t x0_16
        int64_t x1_6
        x0_16, x1_6 = sub_100da24(&var_50)
        *(arg1 + 0x50) = x0_16
        *(arg1 + 0x58) = x1_6
        x8_4 = _byteswap(zx.q(*(x23 + 4)) << 0x30)
        
        if (x8_4.d != 0)
            goto label_100a3c0
        
    label_100a0d4:
        x8_5 = 0xffff
    else
        if (i_9.d == 0)
            return 0
        
        x8_4 = _byteswap(zx.q(*(x23 + 4)) << 0x30)
        
        if (x8_4.d != 0)
        label_100a3c0:
            void* x9_18
            
            while (true)
                x9_18 = arg2 + zx.q(x22)
                
                if (zx.d(*x9_18) == 0x6d && zx.d(*(x9_18 + 1)) == 0x61 && zx.d(*(x9_18 + 2)) == 0x78
                        && zx.d(*(x9_18 + 3)) == 0x70)
                    break
                
                uint64_t temp9_1 = x8_4
                x8_4 -= 1
                x22 += 0x10
                
                if (temp9_1 == 1)
                    goto label_100a0d4_2
            
            uint64_t x8_22 = _byteswap(zx.q(*(x9_18 + 8)) << 0x20)
            
            if (x8_22.d == 0)
            label_100a0d4_1:
                x8_5 = 0xffff
            else
                x8_5 = _byteswap(zx.d(*(arg2 + x8_22 + 4)) << 0x10)
        else
        label_100a0d4_2:
            x8_5 = 0xffff
    *(arg1 + 0x14) = x8_5
    *(arg1 + 0x34) = 0xffffffff
    uint64_t x8_7 = zx.q(*(arg2 + zx.q(x21) + 2))
    *(arg1 + 0x38) = 0
    uint64_t i_8 = _byteswap(x8_7 << 0x30)
    
    if (i_8.d == 0)
        return 0
    
    int32_t x10_7 = 0
    int32_t x9_3 = x21 + 4
    uint64_t i_7
    
    do
        int16_t* x11_6 = arg2 + zx.q(x9_3)
        int32_t temp0_10 = _byteswap(zx.d(*x11_6) << 0x10)
        
        if (temp0_10 == 0)
            x10_7 = _byteswap(*(x11_6 + 4)) + x21
            *(arg1 + 0x38) = x10_7
        else if (temp0_10 == 3)
            int32_t temp0_11 = _byteswap(zx.d(x11_6[1]) << 0x10)
            
            if (temp0_11 == 0xa || temp0_11 == 1)
                x10_7 = _byteswap(*(x11_6 + 4)) + x21
                *(arg1 + 0x38) = x10_7
        
        i_7 = i_8
        i_8 -= 1
        x9_3 += 8
    while (i_7 != 1)
    
    if (x10_7 == 0)
        return 0
    
    result = 1
    *(arg1 + 0x3c) = _byteswap(zx.d(*(arg2 + sx.q(*(arg1 + 0x1c)) + 0x32)) << 0x10)

return result
