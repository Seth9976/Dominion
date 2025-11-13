// 函数: _Z24SnapshotTrashTriggerInfoR7DomGame9PlayerWho6CardID
// 地址: 0xbe001c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x24 = zx.d(arg3)
int32_t* entry_x8
*entry_x8 = 2
uint64_t x21
int32_t x25

if (x24 u> 0x31f)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_2 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_2 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_3 = *(x8_2 - 0x90)
    *(x8_3 + 0x1a2c) = *(x8_3 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x25 = *(arg1 + mulu.dp.d(x24, 0x68) + 0x1a94)
    void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    x21 = zx.q(x24)
    *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_6 = *(x8_5 - 0x90)
    *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
else
    x25 = *(arg1 + mulu.dp.d(x24, 0x68) + 0x1a94)
    x21 = zx.q(x24)

entry_x8[3] = *(arg1 + x21 * 0x68 + 0x1a74)
entry_x8[4] = x25
entry_x8[2] = *(arg1 + 0x19f4)
