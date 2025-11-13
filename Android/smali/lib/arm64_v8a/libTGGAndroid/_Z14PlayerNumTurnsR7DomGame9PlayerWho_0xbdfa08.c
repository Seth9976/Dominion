// 函数: _Z14PlayerNumTurnsR7DomGame9PlayerWho
// 地址: 0xbdfa08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + 0xd40)
int32_t x8 = *(arg1 + 0x19e8) - 1
int32_t x10 = x8 s/ x9

if (x8 s% x9 s>= arg2)
    return zx.q(x10 + 1)

return zx.q(x10)
