// 函数: _Z20DeferReducePlayCountR7DomGame6CardID
// 地址: 0xbe4798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2 & 0xffff
uint64_t x21_1

if (x21 u> 0x31f)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    
    if (*(arg1 + mulu.dp.d(x21, 0x68) + 0x1a74) == 0x3e9)
        x21_1 = zx.q(x21)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_10 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_10 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_11 = *(x8_10 - 0x90)
        *(x8_11 + 0x1a2c) = *(x8_11 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    label_be4894:
        int64_t x9_5 = sx.q(*(arg1 + 0x1a10))
        uint64_t x10_2 = zx.q(arg2) | zx.q(*(arg1 + x21_1 * 0x68 + 0x1a78)) << 0x20
        *(arg1 + 0x1a10) = x9_5.d + 1
        *(arg1 + (x9_5 << 3) + 0x3a908) = x10_2
else if (*(arg1 + mulu.dp.d(x21, 0x68) + 0x1a74) == 0x3e9)
    x21_1 = zx.q(x21)
    goto label_be4894
