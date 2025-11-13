// 函数: _Z21HumbleCastle_VPBannerR7DomGame9PlayerWhoRiS2_S2_
// 地址: 0xbff610
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x28

if (*(arg1 + 0x1528) s< 2)
    x28 = 0
else
    DomGame& x20_1 = arg1
    x28 = 0
    int32_t i = 1
    
    do
        int32_t x25_1 = i & 0xffff
        
        if (x25_1 u>= 0x320)
            void* x0_4 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_7 = x0_4 + sx.q(*(x0_4 + 0x13000)) * 0x98
            *(*(x8_7 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_8 = *(x8_7 - 0x90)
            *(x8_8 + 0x1a2c) = *(x8_8 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
        
        if (*(x20_1 + mulu.dp.d(x25_1, 0x68) + 0x1a94) == arg2)
            int32_t x25_2 = *(x20_1 + zx.q(x25_1) * 0x68 + 0x1a70)
            
            if (x25_2 != 0)
                int32_t x26_1 = *(x20_1 + 0xd50)
                int32_t x8_14 = (x25_2 + (x26_1 << 0x10)) s% 0x3e5
                int32_t* x9_8 = *(&data_1838a20 + (sx.q(x8_14) << 3))
                
                if (x9_8 != 0)
                    while (*x9_8 != x25_2 || x9_8[1] != x26_1)
                        x9_8 = *(x9_8 + 0x10)
                        
                        if (x9_8 == 0)
                            goto label_bff67c
                    
                    arg1 = *(x9_8 + 8)
                else
                label_bff67c:
                    DomDefGetSlow(zx.q(x25_2), zx.q(x26_1))
                    int32_t* x0_1 = malloc(0x18)
                    int64_t x8_1 = sx.q(x8_14) << 3
                    int64_t x9_1 = *(&data_1838a20 + x8_1)
                    *x0_1 = x25_2
                    x0_1[1] = x26_1
                    *(&data_1838a20 + x8_1) = x0_1
                    *(x0_1 + 0x10) = x9_1
                    arg1 = DomDefGetSlow(zx.q(x25_2), zx.q(x26_1))
                    *(x0_1 + 8) = arg1
                
                x28 += *(arg1 + 0xc8) u>> 0x10 & 1
        
        i += 1
    while (i s< *(x20_1 + 0x1528))

*arg3 = x28
