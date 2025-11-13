// 函数: _Z7ToArrayR7DomGame8DomWhereP6CardID
// 地址: 0xa316d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1 = zx.q(*GetPileHead(arg1, arg2, 0xffffffff))

if (x1.d == 0)
    return 0

int64_t x21 = 0

do
    *(arg3 + (x21 << 2)) = x1.d
    x21 += 1
    x1 = zx.q(*(CardGet(arg1, x1) + 0x60))
while (x1.d != 0)

return zx.q(x21.d)
