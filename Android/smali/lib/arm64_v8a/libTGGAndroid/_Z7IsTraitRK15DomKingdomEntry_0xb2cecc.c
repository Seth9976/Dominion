// 函数: _Z7IsTraitRK15DomKingdomEntry
// 地址: 0xb2cecc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 == 1)
    int32_t x19_1 = *(arg1 + 4)
    
    if (*(GetClient() + 0x5068) == 0)
        if ((zx.d(*(DomDefGet(zx.q(x19_1), 0x18) + 0xcd)) & 1) != 0)
            return 1
    else if ((zx.d(*(DomDefGet(zx.q(x19_1), zx.q(*(ActiveGame() + 0x30))) + 0xcd)) & 1) != 0)
        return 1

return 0
