// 函数: _Z17GetStoreItemStateRK7GameDlc
// 地址: 0x9ba6f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DLC* x0 = GameSepcific_TryGetDlcDef(arg1)

if (x0 == 0)
    return 3

if (*arg1 == 1)
    return zx.q(*(x0 + 4))

if ((GameCenterHasDLC(x0) & 1) != 0)
    return 0

return zx.q(*(x0 + 4))
