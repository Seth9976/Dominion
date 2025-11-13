// 函数: stbtt_GetKerningTable
// 地址: 0x1006444
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10_2 = sx.q(*(arg1 + 0x2c))

if (x10_2.d != 0)
    void* x11_1 = *(arg1 + 8)
    void* x8_1 = x11_1 + x10_2
    
    if ((zx.d(*(x8_1 + 3)) | zx.d(*(x8_1 + 2))) != 0 && _byteswap(zx.d(*(x8_1 + 8))) u>> 0x10 == 1)
        int32_t result_1 = _byteswap(zx.d(*(x8_1 + 0xa)) << 0x10)
        int32_t result
        
        result = result_1 s> arg3 ? arg3 : result_1
        
        if (result s>= 1)
            uint64_t x8_5 = zx.q(result)
            void* x9_6 = arg2 + 4
            void* x10_1 = x10_2 + x11_1 + 0x17
            uint64_t i
            
            do
                i = x8_5
                x8_5 -= 1
                *(x9_6 - 4) = _byteswap(zx.d(*(x10_1 - 5)) << 0x10)
                *x9_6 = _byteswap(zx.d(*(x10_1 - 3)) << 0x10)
                uint32_t x11_8 = zx.d(*(x10_1 - 1))
                uint32_t x12_2 = zx.d(*x10_1)
                x10_1 += 6
                *(x9_6 + 4) = sx.d((x11_8 << 8).w) | x12_2
                x9_6 += 0xc
            while (i != 1)
        
        return result

return 0
