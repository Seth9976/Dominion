// 函数: _Z19FlanimGetOrAddImageP9DefFlanimP6XAsset
// 地址: 0xf66d18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(arg1 + 0x48))
int64_t x9 = *(arg1 + 0x40)
int64_t x10 = sx.q(result.d)

if (result.d s>= 1)
    int64_t x11_1 = 0
    
    do
        if (*(x9 + (x11_1 << 3)) == arg2)
            return zx.q(x11_1.d)
        
        x11_1 += 1
    while (x11_1 s< x10)

*(x9 + (x10 << 3)) = arg2
*(arg1 + 0x48) += 1
return result
