// 函数: sub_10fe200
// 地址: 0x10fe200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t* x0 = *(arg1 + 0x10)
uint32_t x8 = zx.d(*(x0 + 9))

if (x8 != 2)
    return zx.q(x8 == 0 ? 1 : 0)

jump(**x0)
