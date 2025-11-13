// 函数: _Z7AllSameR7DomGameP6CardIDi
// 地址: 0xbe6b68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 1

uint64_t x22 = zx.q(*arg2)

if (x22.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x21_1

if (arg3 s< 2)
    x21_1 = 0
else
    int32_t x28_1 = *(arg1 + x22 * 0x68 + 0x1a70)
    uint64_t x24_1 = zx.q(arg3)
    int64_t x25_1 = 1
    x21_1 = 1
    
    do
        uint64_t x27_1 = zx.q(*(arg2 + (x25_1 << 2)))
        
        if (x27_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(arg1 + x27_1 * 0x68 + 0x1a70) != x28_1)
            break
        
        x25_1 += 1
        x21_1 = x25_1 u< x24_1 ? 1 : 0
    while (x24_1 != x25_1)

return (zx.q(x21_1) ^ 1) & 1
