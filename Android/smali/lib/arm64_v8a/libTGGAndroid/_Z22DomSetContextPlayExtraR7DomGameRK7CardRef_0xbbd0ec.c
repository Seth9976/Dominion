// 函数: _Z22DomSetContextPlayExtraR7DomGameRK7CardRef
// 地址: 0xbbd0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)

if (x20 s<= 0)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_1 = x0_3 + muls.dp.d(x20 - 1, 0x98)
    *(*(x8_1 + 8) + 0x1a28) = 0xffffffff
    void* x8_2 = *(x8_1 + 8)
    *(x8_2 + 0x1a2c) = *(x8_2 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x20 = *(x0_3 + 0x13000)

int64_t result = __emutls_get_address(__emutls_v.gContextStack_tl)
*(result + muls.dp.d(x20, 0x98) - 0x68) = *arg2
return result
