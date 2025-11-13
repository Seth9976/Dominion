// 函数: sub_a57b60
// 地址: 0xa57b60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x20 = *(*(x0 + 0x80) + 8)

if (CountWhere(0x3ea) s< x20)
    x20 = CountWhere(0x3ea)

DiscardUpTo(x20, 0x134, 7, 5)
int32_t var_28

if (var_28 != 0)
    RemoveDebt(*(x0 + 8), zx.q(*(x0 + 0x18)), var_28)
