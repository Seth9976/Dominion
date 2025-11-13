// 函数: _Z15CheckStopMovingR7DomGame6CardID8DomWhere
// 地址: 0xbddeec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg2 & 0xffff
int32_t x19 = arg3

if (x22 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x8_6 = *(arg1 + mulu.dp.d(x22, 0x68) + 0x1a74)

if (x8_6 != 0x3eb || *(arg1 + sx.q(*(arg1 + zx.q(x22) * 0x68 + 0x1a94)) * 0x5a30 + 0x17f74) == arg2)
    if (x19 != 7)
        if (x19 == 0x451 && x8_6 == 0x3e9)
            return 0
        
        if (x8_6 == x19 || ((x19 == 0x3e9 ? 1 : 0) & (x8_6 == 0x451 ? 1 : 0) & 1) != 0)
            return 0
    else if (x8_6 - 7 u< 0x41)
        return 0

return 1
