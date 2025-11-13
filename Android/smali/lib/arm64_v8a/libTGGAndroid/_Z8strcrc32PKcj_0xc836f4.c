// 函数: _Z8strcrc32PKcj
// 地址: 0xc836f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i = zx.d(*arg1)
uint64_t result = zx.q(arg2)

if (i != 0)
    void* x8_1 = &arg1[1]
    
    do
        int32_t x11 = i & 0xff
        int32_t x11_1
        
        if (x11 - 0x41 u< 0x1a)
            x11_1 = x11 | 0x20
        else
            x11_1 = x11
        
        int32_t x11_2
        
        x11_2 = x11_1 == 0x5c ? 0x2f : x11_1
        
        i = zx.d(*x8_1)
        x8_1 += 1
        result = zx.q(*(&data_827cfc + ((zx.q(x11_2) ^ (zx.q(result.d) & 0xff)) << 2)))
            ^ zx.q(result.d u>> 8)
    while (i != 0)

return result
