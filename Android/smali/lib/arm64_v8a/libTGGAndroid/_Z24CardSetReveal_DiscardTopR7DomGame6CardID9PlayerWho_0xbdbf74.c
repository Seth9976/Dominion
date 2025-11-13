// 函数: _Z24CardSetReveal_DiscardTopR7DomGame6CardID9PlayerWho
// 地址: 0xbdbf74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xd40)

if (x8 s< 1)
    return 

uint64_t x9_1 = zx.q(arg2) & 0xffff
int32_t x20_1 = arg2

if (x9_1.d u>= 0x320)
    int64_t i = 0
    
    do
        void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_5 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
        *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_6 = *(x8_5 - 0x90)
        *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        *(arg1 + x9_1 * 0x68 + 0x1aa8 + (i << 2)) = 6
        int32_t x8_7 = *(arg1 + 0x150c)
        
        if (x8_7 - 3 u>= 4)
            int64_t var_68_2 = 0
            int32_t var_70_2 = 0
            int32_t var_78_2 = 0
            int32_t var_80_2 = 0
            DomNotifyEffect(zx.q(x8_7 == 2 ? 1 : 0), 0x28, zx.q(i.d), zx.q(x20_1), 6, 0, 0, 0)
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xd40)))
else
    int64_t i_1 = 0
    
    do
        *(arg1 + x9_1 * 0x68 + 0x1aa8 + (i_1 << 2)) = 6
        int32_t x9_3 = *(arg1 + 0x150c)
        
        if (x9_3 - 3 u>= 4)
            int64_t var_68_1 = 0
            int32_t var_70_1 = 0
            int32_t var_78_1 = 0
            int32_t var_80_1 = 0
            DomNotifyEffect(zx.q(x9_3 == 2 ? 1 : 0), 0x28, zx.q(i_1.d), zx.q(x20_1), 6, 0, 0, 0)
            x8 = *(arg1 + 0xd40)
        
        i_1 += 1
    while (i_1 s< sx.q(x8))
