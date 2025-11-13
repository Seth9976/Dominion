// 函数: _Z20FontGetLetterSpacingP12DefFontGlyphPK7DefFontii
// 地址: 0xf6ab00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + 0x1c))

if (arg4 != 0)
    int64_t x8 = sx.q(*(arg1 + 0x20))
    
    if (x8.d != 0xffffffff)
        int64_t x9_1 = sx.q(*(arg2 + 0x28))
        
        if (x8.d s< x9_1.d)
            void* x10_3 = *(arg2 + 0x30) + x8 * 0xc + 8
            
            while (*(x10_3 - 8) == arg3)
                if (*(x10_3 - 4) == arg4)
                    return zx.q(*x10_3 + result.d)
                
                x8 += 1
                x10_3 += 0xc
                
                if (x8 s>= x9_1)
                    break

return result
