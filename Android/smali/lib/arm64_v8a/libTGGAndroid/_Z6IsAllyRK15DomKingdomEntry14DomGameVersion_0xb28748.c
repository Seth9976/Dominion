// 函数: _Z6IsAllyRK15DomKingdomEntry14DomGameVersion
// 地址: 0xb28748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1

if (x8 == 3)
    return zx.q(*(arg1 + 8) == 0x4000000000 ? 1 : 0)

if (x8 != 1)
    return 0

return zx.q(zx.d(*(DomDefGet(zx.q(*(arg1 + 4)), arg2) + 0xcc)) u>> 6) & 1
