// 函数: _Z15ContrabandedAdd9PlayerWho11DomCardEnum
// 地址: 0xb0fbe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg1.d == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg1.d, 0x4d48)

int64_t x9_1 = sx.q(*(x8_1 + 0x4d20))
*(x8_1 + 0x4d20) = x9_1.d + 1
*(x8_1 + (x9_1 << 2) + 0x40a0) = arg2
