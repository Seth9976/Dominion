// 函数: _Z21IsFirstTreasurePlayedR7DomGame9PlayerWho6CardID
// 地址: 0xbfd760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = 0x181cc
int32_t x8_11

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc) s< 1)
label_bfd858:
    x8_11 = 0
else
    int64_t x25_1 = 0
    
    while (true)
        int32_t x20_1 = *(arg1 + sx.q(arg2) * 0x5a30 + 0x19b18 + (x25_1 << 2))
        uint64_t x21_1 = zx.q(x20_1.w)
        
        if (x21_1.d u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_6 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_6 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_7 = *(x8_6 - 0x90)
            *(x8_7 + 0x1a2c) = *(x8_7 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x0_3
        x0_3, x9 = CardIsFast(arg1, zx.q(*(arg1 + x21_1 * 0x68 + 0x1a70)), 2)
        
        if ((x0_3 & 1) != 0)
            x9 = x20_1 == arg3 ? 1 : 0
            x8_11 = 1
            break
        
        x25_1 += 1
        
        if (x25_1 s>= sx.q(*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181cc)))
            goto label_bfd858

return zx.q(x8_11) & zx.q(x9)
