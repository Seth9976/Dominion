// 函数: _Z19Citadel_OnPlay_Test6CardID
// 地址: 0xabb50c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CurrentTurnWho() == CurrentWho() && (SnapshotIsType(4) & 1) != 0
        && (IsFirstActionPlayed(zx.q(arg1)) & 1) != 0)
    return (zx.q(HasOccuredProject()) ^ 1) & 1

return 0
