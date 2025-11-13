// 函数: _Z29Aqueduct_OnGain_Treasure_Test6CardID
// 地址: 0xa6d85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GetBoardPile(CardWhat(arg1), false)

if ((CardIs(zx.q(arg1.d), 2) & 1) != 0 && CountTokensWhereType(zx.q(x0_1), 0x601) != 0)
    return 1

return 0
