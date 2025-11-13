// 函数: _Z18SetCardPlayedFlagsR7DomGame6CardID11DomCardFlag
// 地址: 0xbe4c8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x21 = zx.d(arg2)

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x8_5 = arg1 + mulu.dp.d(x21, 0x68)
*(x8_5 + 0x1a90) = (*(x8_5 + 0x1a90) & 0xfffffff3) | arg3
