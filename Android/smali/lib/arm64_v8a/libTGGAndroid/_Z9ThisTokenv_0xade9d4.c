// 函数: _Z9ThisTokenv
// 地址: 0xade9d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = DomGetContext()
int32_t x8 = *x0

if (x8 != 3)
    GameAssert((x8 == 1 ? 1 : 0).b)
    return zx.q(x0[7])

GameAssert(((0x30 & not.d(x0[7])) == 0 ? 1 : 0).b)
return zx.q(x0[7] u>> 0x12)
