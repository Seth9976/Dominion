// 函数: stbtt_FindGlyphIndex
// 地址: 0x10051f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = *(arg1 + 8)
uint64_t x9 = zx.q(*(arg1 + 0x38))
int16_t* x8 = x10 + x9
uint64_t x11_2 = zx.q(_byteswap(zx.d(*x8) << 0x10))
int64_t x0_7
int64_t x1
int64_t x2

if (x11_2.d u> 6)
label_1005260:
    
    if ((x11_2.d & 0xfffe) != 0xc)
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x62c, "int stbtt_FindGlyphIndex(const stbtt_fontinfo *, int)", &data_75c628)
    label_10054ec:
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x5e5, "int stbtt_FindGlyphIndex(const stbtt_fontinfo *, int)", &data_75c628)
        x0_7, x1, x2 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x609, "int stbtt_FindGlyphIndex(const stbtt_fontinfo *, int)", 
            "unicode_codepoint <= ttUSHORT(data + endCount + 2*item)")
        return stbtt_GetCodepointShape(x0_7, x1, x2) __tailcall
    
    int32_t x9_7 = _byteswap(*(x8 + 0xc))
    
    if (x9_7 s>= 1)
        int32_t x12_1 = 0
        int32_t x13_2
        
        do
            x13_2 = x12_1 + ((x9_7 - x12_1) s>> 1)
            void* x14_2 = &x8[8] + muls.dp.d(x13_2, 0xc)
            int32_t temp0_3 = _byteswap(*x14_2)
            
            if (temp0_3 u<= arg2)
                if (_byteswap(*(x14_2 + 4)) u>= arg2)
                    int32_t x9_9
                    
                    if (x11_2.d == 0xc)
                        x9_9 = arg2 - temp0_3
                    else
                        x9_9 = 0
                    
                    return zx.q(_byteswap(*(x14_2 + 8)) + x9_9)
                
                x12_1 = x13_2 + 1
                x13_2 = x9_7
            
            x9_7 = x13_2
        while (x13_2 s> x12_1)
else
    switch (x11_2)
        case 0
            if (_byteswap(zx.d(x8[1]) << 0x10) - 6 s> arg2)
                return zx.q(*(x8 + sx.q(arg2) + 6))
        case 1, 3, 5
            goto label_1005260
        case 2
            goto label_10054ec
        case 4
            if (arg2 s< 0x10000)
                int64_t x15_4 = (zx.q(*(x8 + 0xd)) & 0xfe) | zx.q(x8[6].b) << 8
                void* x11_4 = x10 + zx.q(x9.d + 0xe)
                uint32_t x13_5 = zx.d(*(x11_4 + x15_4))
                uint32_t x12_6 = _byteswap(zx.d(x8[5])) u>> 0x10
                int32_t x13_8
                
                if (_byteswap(x13_5 << 0x10) s> arg2)
                    x13_8 = 0
                else
                    x13_8 = x15_4.d
                
                int32_t x13_10 = x9.d + x13_8 + 0xc
                
                if (x12_6 != 0)
                    uint32_t x14_6 = _byteswap(zx.d(x8[4])) u>> 0x10
                    
                    do
                        int64_t x15_6 = zx.q(x14_6 u>> 1) & 0x7ffe
                        x12_6 -= 1
                        x14_6 = x14_6 u>> 1 & 0x7fff
                        int32_t x15_7
                        
                        if (_byteswap(zx.d(*(x10 + zx.q(x13_10) + x15_6)) << 0x10) s< arg2)
                            x15_7 = x15_6.d
                        else
                            x15_7 = 0
                        
                        x13_10 += x15_7
                    while ((x12_6 & 0xffff) != 0)
                
                int64_t x12_9 = zx.q(x13_10 - x9.d + 0x1fff4) & 0x1fffe
                
                if (_byteswap(zx.d(*(x11_4 + x12_9)) << 0x10) s< arg2)
                    x0_7, x1, x2 = __assert2(
                        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                        0x609, "int stbtt_FindGlyphIndex(const stbtt_fontinfo *, int)", 
                        "unicode_codepoint <= ttUSHORT(data + endCount + 2*item)")
                    return stbtt_GetCodepointShape(x0_7, x1, x2) __tailcall
                
                uint64_t x13_11 = _byteswap(zx.q(x8[3]) << 0x30)
                int32_t temp0_11 =
                    _byteswap(zx.d(*(&x8[7] + (x13_11 & 0xfffe) + x12_9 + 2)) << 0x10)
                
                if (temp0_11 s> arg2)
                    return 0
                
                int32_t x14_7 = (x13_11 u>> 1).d & 0x7fffffff
                uint64_t x13_13 = zx.q(x14_7 * 6)
                uint64_t x15_12 = _byteswap(zx.q(*(&x8[7] + x13_13 + x12_9 + 2)) << 0x30)
                
                if (x15_12.d == 0)
                    return zx.q(_byteswap(zx.d(*(&x8[7] + zx.q(x14_7 << 2) + x12_9 + 2)) << 0x10)
                        + arg2.w)
                
                return zx.q(_byteswap(zx.d(
                    *(x10 + x15_12 + sx.q((arg2 - temp0_11) << 1) + x9 + x13_13 + x12_9 + 0x10))
                    << 0x10))
        case 6
            int32_t temp0_12 = _byteswap(zx.d(x8[3]) << 0x10)
            
            if (temp0_12 u<= arg2 && _byteswap(zx.d(x8[4]) << 0x10) + temp0_12 u> arg2)
                return zx.q(_byteswap(zx.d(*(x8 + zx.q((arg2 - temp0_12) << 1) + 0xa)) << 0x10))
return 0
