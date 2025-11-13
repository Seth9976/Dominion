// 函数: _Z17RevealObscureHandR7DomGame9PlayerWho
// 地址: 0xbdc160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x23 = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f70)

if (x23 == 0)
    return 

uint64_t x21_1 = zx.q(x23.w)
uint64_t x25_1 = zx.q(arg2)

if (x21_1.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

uint64_t fp_1 = zx.q(*(arg1 + x21_1 * 0x68 + 0x1ac8)) << 0x20

while (true)
    int32_t x8_8 = *(arg1 + 0xd40)
    
    if (x8_8 s>= 1)
        uint64_t x9_5 = zx.q(x23) & 0xffff
        
        if (x9_5.d u>= 0x320)
            int64_t i = 0
            
            do
                if (x25_1 != i && (*(arg1 + 0x19d4) != x25_1.d || i != zx.q(*(arg1 + 0x19d8))))
                    void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
                    void* x8_14 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
                    *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
                    void* x8_15 = *(x8_14 - 0x90)
                    *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
                    XTrace("game thread yield (error)")
                    xco_yield()
                    XTrace("game thread resume (error)")
                    *(arg1 + 0x1aa8 + x9_5 * 0x68 + (i << 2)) = 0
                    int32_t x8_16 = *(arg1 + 0x150c)
                    
                    if (x8_16 - 3 u>= 4)
                        int64_t var_78_2 = 0
                        int32_t var_80_2 = 0
                        int32_t var_88_2 = 0
                        int32_t var_90_2 = 0
                        DomNotifyEffect(zx.q(x8_16 == 2 ? 1 : 0), 0x28, zx.q(i.d), zx.q(x23), 0, 0, 
                            0, 0)
                
                i += 1
            while (i s< sx.q(*(arg1 + 0xd40)))
        else
            int64_t i_1 = 0
            
            do
                if (x25_1 != i_1 && (*(arg1 + 0x19d4) != x25_1.d || i_1 != zx.q(*(arg1 + 0x19d8))))
                    *(arg1 + 0x1aa8 + x9_5 * 0x68 + (i_1 << 2)) = 0
                    int32_t x9_8 = *(arg1 + 0x150c)
                    
                    if (x9_8 - 3 u>= 4)
                        int64_t var_78_1 = 0
                        int32_t var_80_1 = 0
                        int32_t var_88_1 = 0
                        int32_t var_90_1 = 0
                        DomNotifyEffect(zx.q(x9_8 == 2 ? 1 : 0), 0x28, zx.q(i_1.d), zx.q(x23), 0, 
                            0, 0, 0)
                        x8_8 = *(arg1 + 0xd40)
                
                i_1 += 1
            while (i_1 s< sx.q(x8_8))
    
    x23 = (fp_1 u>> 0x20).d
    
    if (x23 == 0)
        break
    
    int32_t x24_1 = x23 & 0xffff
    
    if (x24_1 u>= 0x320)
        void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_19 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
        *(*(x8_19 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_20 = *(x8_19 - 0x90)
        *(x8_20 + 0x1a2c) = *(x8_20 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    fp_1 = zx.q(x23) | zx.q(*(arg1 + mulu.dp.d(x24_1, 0x68) + 0x1ac8)) << 0x20
