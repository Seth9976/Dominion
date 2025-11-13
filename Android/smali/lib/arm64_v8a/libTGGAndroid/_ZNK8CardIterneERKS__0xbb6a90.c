// 函数: _ZNK8CardIterneERKS_
// 地址: 0xbb6a90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(arg1 + 8)
int64_t* entry_x1
int32_t x20 = entry_x1[1].d

if (x19 == x20 && *entry_x1 != *arg1)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_4 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_4 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_5 = *(x8_4 - 0x90)
    *(x8_5 + 0x1a2c) = *(x8_5 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

return zx.q(x19 != x20 ? 1 : 0)
