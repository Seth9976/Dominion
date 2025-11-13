// 函数: _Z24Innovation22_OnGain_Test6CardID
// 地址: 0xabb5a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1

if ((HasOccuredProject() & 1) == 0 && (SnapshotIsType(4) & 1) != 0 && (IsYourTurn() & 1) != 0
        && (CardIsWhere(zx.q(x19), zx.q(CardGainedToWhere(zx.q(x19)))) & 1) != 0)
    int32_t x0_8 = CardIsWhere(zx.q(x19), 0x3ea)
    int32_t x0_10
    
    if ((x0_8 & 1) != 0)
        x0_10 = LimitPlayableCards(zx.q(x19))
    
    if ((x0_8 & 1) == 0 || (x0_10 & 1) == 0)
        return 1

return 0
