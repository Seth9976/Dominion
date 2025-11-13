// 函数: _Z21CardSetReveal_ShuffleR7DomGame6CardID9PlayerWho
// 地址: 0xbbaa38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xd40) s< 1)
    return 

uint64_t x8_1 = zx.q(arg2) & 0xffff
void* x26_1 = arg1 + mulu.dp.d(x8_1.d, 0x68) + 0x1aa8 + (sx.q(arg3) << 2)
void* x9_3 = arg1 + mulu.dp.d(x8_1.d, 0x68) + 0x1aa8 + (zx.q(arg3) << 2)
int32_t x20_1 = arg2
uint64_t x21_1 = zx.q(arg3)
int64_t i = 0

if (x8_1.d u>= 0x320)
    do
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_12 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_12 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_13 = *(x8_12 - 0x90)
        *(x8_13 + 0x1a2c) = *(x8_13 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
        
        if (x21_1 != i || *x26_1 == 0)
            void* x0_7 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_23 = x0_7 + sx.q(*(x0_7 + 0x13000)) * 0x98
            *(*(x8_23 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_24 = *(x8_23 - 0x90)
            *(x8_24 + 0x1a2c) = *(x8_24 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            *(arg1 + x8_1 * 0x68 + 0x1aa8 + (i << 2)) = 0
            int32_t x8_25 = *(arg1 + 0x150c)
            
            if (x8_25 - 3 u>= 4)
                int64_t var_78_4 = 0
                int32_t var_80_4 = 0
                int32_t var_88_4 = 0
                int32_t var_90_4 = 0
                DomNotifyEffect(zx.q(x8_25 == 2 ? 1 : 0), 0x28, zx.q(i.d), zx.q(x20_1), 0, 0, 0, 0)
        else
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_17 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_17 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_18 = *(x8_17 - 0x90)
            *(x8_18 + 0x1a2c) = *(x8_18 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            *x9_3 = 2
            int32_t x8_20 = *(arg1 + 0x150c)
            
            if (x8_20 - 3 u>= 4)
                int64_t var_78_3 = 0
                int32_t var_80_3 = 0
                int32_t var_88_3 = 0
                int32_t var_90_3 = 0
                DomNotifyEffect(zx.q(x8_20 == 2 ? 1 : 0), 0x28, zx.q(x21_1.d), zx.q(x20_1), 2, 0, 
                    0, 0)
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xd40)))
else
    do
        if (x21_1 != i || *x26_1 == 0)
            *(arg1 + x8_1 * 0x68 + 0x1aa8 + (i << 2)) = 0
            int32_t x8_7 = *(arg1 + 0x150c)
            
            if (x8_7 - 3 u>= 4)
                int64_t var_78_2 = 0
                int32_t var_80_2 = 0
                int32_t var_88_2 = 0
                int32_t var_90_2 = 0
                DomNotifyEffect(zx.q(x8_7 == 2 ? 1 : 0), 0x28, zx.q(i.d), zx.q(x20_1), 0, 0, 0, 0)
        else
            *x9_3 = 2
            int32_t x8_6 = *(arg1 + 0x150c)
            
            if (x8_6 - 3 u>= 4)
                int64_t var_78_1 = 0
                int32_t var_80_1 = 0
                int32_t var_88_1 = 0
                int32_t var_90_1 = 0
                DomNotifyEffect(zx.q(x8_6 == 2 ? 1 : 0), 0x28, zx.q(x21_1.d), zx.q(x20_1), 2, 0, 0, 
                    0)
        
        i += 1
    while (i s< sx.q(*(arg1 + 0xd40)))
