// 函数: _Z14AllocBoardPileR7DomGame8DomWhere11DomCardEnum12DomPileFlags
// 地址: 0xbb9bac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int32_t x20 = arg2

if (arg2 s>= 0x48)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

void* x9_3 = arg1 + (sx.q(x20) << 4)
*(x9_3 + 0x152c) = x19
*(x9_3 + 0x1530) = 0
*(x9_3 + 0x1538) = arg4
int32_t x8_5 = *(arg1 + 0x150c)

if (x8_5 - 3 u>= 4)
    int64_t var_38_1 = 0
    int32_t var_40_1 = 0
    int32_t var_48_1 = 0
    int32_t var_50_1 = 0
    DomNotifyEffect(zx.q(x8_5 == 2 ? 1 : 0), 1, 0xffffffff, 0, zx.q(x20), zx.q(x19), 0, 0)

return x9_3 + 0x152c
