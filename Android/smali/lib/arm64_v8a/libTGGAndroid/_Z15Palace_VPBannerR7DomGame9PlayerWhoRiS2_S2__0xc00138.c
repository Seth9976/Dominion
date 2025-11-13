// 函数: _Z15Palace_VPBannerR7DomGame9PlayerWhoRiS2_S2_
// 地址: 0xc00138
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x1528)
int32_t x21 = arg2
int32_t x27 = 0

if (x8 s>= 2)
    int32_t x28_1 = 1
    
    do
        int32_t x23_1 = x28_1 & 0xffff
        
        if (x23_1 u>= 0x320)
            void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
            *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_4 = *(x8_3 - 0x90)
            *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            x8 = *(arg1 + 0x1528)
        
        void* x9_1 = arg1 + mulu.dp.d(x23_1, 0x68)
        x28_1 += 1
        x27 += (*(x9_1 + 0x1a94) == x21 ? 1 : 0) & (*(x9_1 + 0x1a70) == 0x106 ? 1 : 0)
    while (x28_1 s< x8)

*arg3 = x27
int32_t x8_6 = *(arg1 + 0x1528)
int32_t x26

if (x8_6 s< 2)
    x26 = 0
else
    x26 = 0
    int32_t x27_1 = 1
    
    do
        int32_t fp_1 = x27_1 & 0xffff
        
        if (fp_1 u>= 0x320)
            void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_9 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
            *(*(x8_9 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_10 = *(x8_9 - 0x90)
            *(x8_10 + 0x1a2c) = *(x8_10 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            x8_6 = *(arg1 + 0x1528)
        
        void* x9_7 = arg1 + mulu.dp.d(fp_1, 0x68)
        x27_1 += 1
        x26 += (*(x9_7 + 0x1a94) == x21 ? 1 : 0) & (*(x9_7 + 0x1a70) == 0x105 ? 1 : 0)
    while (x27_1 s< x8_6)

*arg4 = x26
int32_t x8_12 = *(arg1 + 0x1528)
int32_t x25

if (x8_12 s< 2)
    x25 = 0
else
    x25 = 0
    int32_t x26_1 = 1
    
    do
        int32_t fp_2 = x26_1 & 0xffff
        
        if (fp_2 u>= 0x320)
            void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
            void* x8_15 = x0_5 + sx.q(*(x0_5 + 0x13000)) * 0x98
            *(*(x8_15 - 0x90) + 0x1a28) = 0xffffffff
            void* x8_16 = *(x8_15 - 0x90)
            *(x8_16 + 0x1a2c) = *(x8_16 + 0x1a24)
            XTrace("game thread yield (error)")
            xco_yield()
            XTrace("game thread resume (error)")
            x8_12 = *(arg1 + 0x1528)
        
        void* x9_13 = arg1 + mulu.dp.d(fp_2, 0x68)
        x26_1 += 1
        x25 += (*(x9_13 + 0x1a94) == x21 ? 1 : 0) & (*(x9_13 + 0x1a70) == 0x104 ? 1 : 0)
    while (x26_1 s< x8_12)

*arg5 = x25
