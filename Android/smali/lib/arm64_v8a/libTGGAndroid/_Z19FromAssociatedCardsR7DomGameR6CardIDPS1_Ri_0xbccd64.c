// 函数: _Z19FromAssociatedCardsR7DomGameR6CardIDPS1_Ri
// 地址: 0xbccd64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *arg2

if (i == 0)
    return 

CardID* x20_1 = arg3
CardID& x22_1 = arg2

do
    *x20_1 = i
    *arg4 += 1
    uint64_t x23_1 = zx.q(*x22_1)
    
    if (x23_1.d u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_5 = *(x8_4 - 0x90)
        *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    void* x9_1 = arg1 + x23_1 * 0x68
    *x22_1 = 0
    i = *(x9_1 + 0x1acc)
    x22_1 = x9_1 + 0x1acc
    x20_1 += 4
while (i != 0)
