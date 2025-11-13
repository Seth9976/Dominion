// 函数: _Z11AddCardTailR7DomGame6CardID8DomWhere9PlayerWho
// 地址: 0xbba09c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2
int32_t x20 = arg4
int32_t* result = GetPileTail(arg1, zx.q(arg3), zx.q(arg4))
int32_t x23 = x22 & 0xffff
*result = x22

if (x23 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    result = XTrace("game thread resume (error)")

void* x8_5 = arg1 + mulu.dp.d(x23, 0x68)
*(x8_5 + 0x1a94) = x20
*(x8_5 + 0x1a9c) = x20
*(x8_5 + 0x1a74) = arg3
*(x8_5 + 0x1ac8) = 0
return result
