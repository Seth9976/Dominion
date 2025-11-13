// 函数: _Z28TokenRemoveDisplayIncrements6CardID12DomTokenType
// 地址: 0xae291c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
uint64_t x3 = zx.q(*(CardGet(*(DomGetContext() + 8), zx.q(arg1)) + 0xc))
int32_t x0_5 = FindToken(*(x0 + 8), zx.q(*(x0 + 0x18)), 0xe01, x3, 0, 0)
void* x0_6 = DomGetContext()
GameAssert((not.d(x0_5) u>> 0x1f).b)
GameAssert((*(*(x0_6 + 8) + 0x19ac) s> x0_5 ? 1 : 0).b)
void* x8_4 = *(x0_6 + 8) + (sx.q(x0_5) << 5)
int32_t x9_1 = *(x8_4 + 0x15f7c)
*(x8_4 + 0x15f7c) = 1
int64_t var_28 = *(x8_4 + 0x15f80)
int32_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
NotifyEffect(*(x0 + 8), 0x14, zx.q(*(x0 + 0x18)), zx.q(x0_5), 0, 0, 0, 0)
return zx.q(x9_1 - 1)
