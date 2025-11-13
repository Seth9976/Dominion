// 函数: _Z17Fountain_VPBannerR7DomGame9PlayerWhoRiS2_S2_
// 地址: 0xbffec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1528)
int32_t x25

if (x8 s< 2)
    x25 = 0
else
    x25 = 0
    int32_t x26_1 = 1
    
    do
        int32_t x19_1 = x26_1 & 0xffff
        
        if (x19_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_4 = *(x8_3 - 0x90)
            *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            x8 = *(arg1 + 0x1528)
        
        void* x9_1 = arg1 + mulu.dp.d(x19_1, 0x68)
        x26_1 += 1
        x25 += (*(x9_1 + 0x1a94) == arg2 ? 1 : 0) & (*(x9_1 + 0x1a70) == 0x104 ? 1 : 0)
    while (x26_1 s< x8)

*arg3 = x25
