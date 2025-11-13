// 函数: _Z32FlanimGetUncompressedConstantIntP19DefFlanimVertexListP23DefFlanimCompressedDatai
// 地址: 0xf652fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_6 = sx.q(*(arg2 + 8))
int64_t x8 = *arg2
int64_t x9

if (x9_6.d - 6 u>= 6)
    int64_t x9_2 = x9_6 * 0x2aaaaaab
    uint64_t x10_2 = zx.q((x9_2 u>> 0x20).d + (x9_2 u>> 0x3f).d)
    x9 = 1
    
    while (zx.d(*(x8 + (sx.q(x10_2.d) << 2) + (x9 << 1))) s<= arg3)
        x9 += 1
        
        if (x10_2 == x9)
            return zx.q(*(x8 + (sx.q(x10_2.d - 1) << 2)))
else
    x9 = 1

return zx.q(*(x8 + (sx.q(x9.d - 1) << 2)))
