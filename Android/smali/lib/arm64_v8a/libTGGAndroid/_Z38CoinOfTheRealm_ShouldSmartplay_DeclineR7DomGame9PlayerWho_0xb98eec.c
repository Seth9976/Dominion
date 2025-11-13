// 函数: _Z38CoinOfTheRealm_ShouldSmartplay_DeclineR7DomGame9PlayerWho
// 地址: 0xb98eec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x19d4) != arg2)
    return 0

int32_t x20 = arg2

if (*(arg1 + 0x19f4) != 1 && CountCardsWhereWhat(arg1, zx.q(x20), 0x3ea, 0x70f) != 0)
    return 0

int32_t x0_4 = CountCardsWhereType(arg1, zx.q(x20), 0x3ea, 4)

if (CountCardsWhereType(arg1, zx.q(x20), 0x3eb, 0x100000000000) + x0_4 s>= 1)
    int64_t result = CountResource(arg1, zx.q(x20), 1)
    
    if (result.d == 0)
        return result

return 1
