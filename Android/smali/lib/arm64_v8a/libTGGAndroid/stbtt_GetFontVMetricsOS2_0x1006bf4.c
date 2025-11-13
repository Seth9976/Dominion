// 函数: stbtt_GetFontVMetricsOS2
// 地址: 0x1006bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_11 = *(arg1 + 8)
uint64_t x10 = zx.q(*(arg1 + 0x10))
uint64_t i_1 = _byteswap(zx.q(*(x8_11 + x10 + 4)) << 0x30)

if (i_1.d != 0)
    int32_t x10_1 = x10.d + 0xc
    uint64_t i
    
    do
        char* x11_1 = x8_11 + zx.q(x10_1)
        
        if (zx.d(*x11_1) == 0x4f && zx.d(x11_1[1]) == 0x53 && zx.d(x11_1[2]) == 0x2f
                && zx.d(x11_1[3]) == 0x32)
            int64_t x9_8 = (-0xff01
                & ((-0xff0001 & sx.q(zx.d(x11_1[8]) << 0x18)) | zx.q(x11_1[9]) << 0x10))
                | zx.q(x11_1[0xa]) << 8 | zx.q(x11_1[0xb])
            
            if (x9_8.d == 0)
                break
            
            if (arg2 != 0)
                void* x8 = x8_11 + x9_8
                *arg2 = sx.d((zx.d(*(x8 + 0x44)) << 8).w) | zx.d(*(x8 + 0x45))
            
            if (arg3 != 0)
                void* x8_4 = *(arg1 + 8) + sx.q(x9_8.d)
                *arg3 = sx.d((zx.d(*(x8_4 + 0x46)) << 8).w) | zx.d(*(x8_4 + 0x47))
            
            if (arg4 != 0)
                void* x8_8 = *(arg1 + 8) + sx.q(x9_8.d)
                *arg4 = sx.d((zx.d(*(x8_8 + 0x48)) << 8).w) | zx.d(*(x8_8 + 0x49))
            
            return 1
        
        i = i_1
        i_1 -= 1
        x10_1 += 0x10
    while (i != 1)

return 0
