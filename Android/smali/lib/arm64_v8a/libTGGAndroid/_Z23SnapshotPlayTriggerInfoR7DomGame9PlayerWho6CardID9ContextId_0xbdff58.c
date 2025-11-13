// 函数: _Z23SnapshotPlayTriggerInfoR7DomGame9PlayerWho6CardID9ContextId
// 地址: 0xbdff58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x8
*entry_x8 = 1
entry_x8[2] = arg2
*(entry_x8 + 0x10) = arg4
uint32_t x21 = zx.d(arg3)
entry_x8[8] = *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x181c8)

if (x21 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int64_t result = CardTypeQuery(arg1, zx.q(*(arg1 + mulu.dp.d(x21, 0x68) + 0x1a70)), false, -1)
*(entry_x8 + 0x18) = result
return result
