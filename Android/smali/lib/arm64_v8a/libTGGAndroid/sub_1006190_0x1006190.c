// 函数: sub_1006190
// 地址: 0x1006190
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x4c) != 0)
    int64_t x0_2
    int64_t x1
    int64_t x2
    int64_t x3
    int64_t x4
    int64_t x5
    x0_2, x1, x2, x3, x4, x5 = __assert2(
        "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0x642, 
        "int stbtt__GetGlyfOffset(const stbtt_fontinfo *, int)", "!info->cff.size")
    return stbtt_GetCodepointBox(x0_2, x1, x2, x3, x4, x5) __tailcall

if (*(arg1 + 0x14) s> arg2)
    int32_t x9_1 = *(arg1 + 0x3c)
    
    if (x9_1 s<= 1)
        int32_t x8_2 = *(arg1 + 0x20)
        int64_t x10_1 = *(arg1 + 8) + sx.q(*(arg1 + 0x18))
        int32_t x9_3
        int32_t x10_3
        
        if (x9_1 == 0)
            char* x9_4 = x10_1 + (sx.q(arg2) << 1)
            x9_3 = (0xfffffe01 & zx.d(*x9_4) << 9) | zx.d(x9_4[1]) << 1
            x10_3 = (0xfffffe01 & zx.d(x9_4[2]) << 9) | zx.d(x9_4[3]) << 1
        else
            int32_t* x9_2 = x10_1 + (sx.q(arg2) << 2)
            int32_t x11_1 = x9_2[1]
            x9_3 = _byteswap(*x9_2)
            x10_3 = _byteswap(x11_1)
        
        if (x9_3 != x10_3)
            return zx.q(x9_3 + x8_2)

return 0xffffffff
