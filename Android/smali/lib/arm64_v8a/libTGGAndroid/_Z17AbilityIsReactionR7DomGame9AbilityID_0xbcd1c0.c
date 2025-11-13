// 函数: _Z17AbilityIsReactionR7DomGame9AbilityID
// 地址: 0xbcd1c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg2

if ((x20.d & 0x30) == 0x10)
    if (x20.d u>> 0x17 u>= 0x19)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if ((CardIsFast(arg1, zx.q(*(arg1 + (x20 u>> 0x12 & 0x3fff) * 0x68 + 0x1a70)), 0x40) & 1) != 0)
        return 1

return 0
