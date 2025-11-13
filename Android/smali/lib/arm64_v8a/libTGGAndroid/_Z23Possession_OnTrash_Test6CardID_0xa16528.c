// 函数: _Z23Possession_OnTrash_Test6CardID
// 地址: 0xa16528
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CardWhere(arg1) != 2)
    return 0

return zx.q(CardLastOwner(zx.q(arg1.d)) == CurrentTurnWho() ? 1 : 0)
