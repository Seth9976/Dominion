// 函数: stbtt_GetKerningTableLength
// 地址: 0x10063f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_3 = sx.q(*(arg1 + 0x2c))

if (x8_3.d != 0)
    void* x8 = *(arg1 + 8) + x8_3
    
    if ((zx.d(*(x8 + 3)) | zx.d(*(x8 + 2))) != 0 && _byteswap(zx.d(*(x8 + 8))) u>> 0x10 == 1)
        return zx.q(_byteswap(zx.d(*(x8 + 0xa)) << 0x10))

return 0
