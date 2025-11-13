// 函数: _Z16GameHasStoreItemRK7GameDlc
// 地址: 0x9c4df8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DLC* x0 = GameSepcific_TryGetDlcDef(arg1)
int32_t x8_1

if (x0 == 0)
    x8_1 = 3
else if (*arg1 != 1)
    if ((GameCenterHasDLC(x0) & 1) != 0)
        x8_1 = 0
    else
        x8_1 = *(x0 + 4)
else
    x8_1 = *(x0 + 4)

return zx.q(x8_1 == 0 ? 1 : 0)
