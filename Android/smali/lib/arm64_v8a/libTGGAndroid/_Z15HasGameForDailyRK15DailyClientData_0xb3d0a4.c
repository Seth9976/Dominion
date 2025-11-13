// 函数: _Z15HasGameForDailyRK15DailyClientData
// 地址: 0xb3d0a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = GetDailyGameIndex(zx.q(*arg1))

if (x0_1 != 0)
    int32_t var_8 = 1
    int32_t var_4_1 = x0_1
    x0_1 = LocalGameExists(&var_8)

return zx.q(x0_1) & 1
