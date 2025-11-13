// 函数: _Z20Tunnel_Reaction_Test6CardID
// 地址: 0xa7ca4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CardWhere(arg1) != 0x3ec)
    return 0

return zx.q(ThisCard(false, nullptr) == arg1.d ? 1 : 0)
