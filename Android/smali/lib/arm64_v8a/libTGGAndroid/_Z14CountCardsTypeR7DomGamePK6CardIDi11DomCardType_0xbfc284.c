// 函数: _Z14CountCardsTypeR7DomGamePK6CardIDi11DomCardType
// 地址: 0xbfc284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21

if (arg3 s< 1)
    x21 = 0
else
    CardID const* x20_1 = arg2
    x21 = 0
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        uint64_t x23_1 = zx.q(*x20_1)
        
        if (x23_1.d u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_5 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_6 = *(x8_5 - 0x90)
            *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        i = i_1
        i_1 -= 1
        x21 += CardIsFast(arg1, zx.q(*(arg1 + x23_1 * 0x68 + 0x1a70)), arg4) & 1
        x20_1 += 4
    while (i != 1)

return zx.q(x21)
