// 函数: _Z18CountActionsGainedR7DomGame9PlayerWho
// 地址: 0xbe4f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181a4) s< 1)
    x20 = 0
else
    int64_t i = 0
    x20 = 0
    
    do
        uint64_t x21_1 = zx.q(*(arg1 + sx.q(arg2) * 0x5a30 + 0x18218 + (i << 2)))
        
        if (x21_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i += 1
        x20 += CardIsFast(arg1, zx.q(*(arg1 + x21_1 * 0x68 + 0x1a70)), 4) & 1
    while (i s< sx.q(*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181a4)))

return zx.q(x20)
