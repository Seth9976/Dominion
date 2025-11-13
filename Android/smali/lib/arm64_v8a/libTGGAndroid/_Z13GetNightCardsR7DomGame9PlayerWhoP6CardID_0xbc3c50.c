// 函数: _Z13GetNightCardsR7DomGame9PlayerWhoP6CardID
// 地址: 0xbc3c50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CardsWhere(arg1, arg2, 0x3ea, arg3)
int32_t x21

if (x0 s< 1)
    x21 = 0
else
    int64_t i = 0
    x21 = 0
    
    do
        uint64_t x25_1 = zx.q(*(arg3 + (i << 2)))
        
        if (x25_1.d u>= 0x320)
            void* x0_2 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_4 = x0_2 + sx.q(*(x0_2 + 0x13000)) * 0x98
            *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_5 = *(x8_4 - 0x90)
            *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        int32_t x25_2 = *(arg1 + x25_1 * 0x68 + 0x1a70)
        int32_t x26_1 = *(arg1 + 0xd50)
        int32_t x8_8 = (x25_2 + (x26_1 << 0x10)) s% 0x3e5
        int32_t* x9_7 = *(&data_1838a20 + (sx.q(x8_8) << 3))
        
        if (x9_7 != 0)
            while (*x9_7 != x25_2 || x9_7[1] != x26_1)
                x9_7 = *(x9_7 + 0x10)
                
                if (x9_7 == 0)
                    goto label_bc3d54
            
            if ((zx.d(*(*(x9_7 + 8) + 0xca)) & 4) != 0)
                *(arg3 + (sx.q(x21) << 2)) = *(arg3 + (i << 2))
                x21 += 1
        else
        label_bc3d54:
            DomDefGetSlow(zx.q(x25_2), zx.q(x26_1))
            int32_t* x0_4 = malloc(0x18)
            int64_t x8_9 = sx.q(x8_8) << 3
            int64_t x9_8 = *(&data_1838a20 + x8_9)
            *x0_4 = x25_2
            x0_4[1] = x26_1
            *(&data_1838a20 + x8_9) = x0_4
            *(x0_4 + 0x10) = x9_8
            void* x0_6 = DomDefGetSlow(zx.q(x25_2), zx.q(x26_1))
            *(x0_4 + 8) = x0_6
            
            if ((zx.d(*(x0_6 + 0xca)) & 4) != 0)
                *(arg3 + (sx.q(x21) << 2)) = *(arg3 + (i << 2))
                x21 += 1
        
        i += 1
    while (i != zx.q(x0))

return zx.q(x21)
