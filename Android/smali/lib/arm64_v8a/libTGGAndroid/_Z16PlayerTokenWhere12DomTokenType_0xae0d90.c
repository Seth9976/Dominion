// 函数: _Z16PlayerTokenWhere12DomTokenType
// 地址: 0xae0d90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = FindTokenAnywhere(*(x0 + 8), zx.q(*(x0 + 0x18)), zx.q(arg1))

if (x0_2 == 0xffffffff)
    return 0

void* x0_3 = DomGetContext()
GameAssert((not.d(x0_2) u>> 0x1f).b)
GameAssert((*(*(x0_3 + 8) + 0x19ac) s> x0_2 ? 1 : 0).b)
return zx.q(*(*(x0_3 + 8) + (sx.q(x0_2) << 5) + 0x15f70))
