// 函数: _Z12IsRealPlayeri
// 地址: 0x9b98a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = GetActiveGameSetup()
int32_t x8_1 = *(x0 + muls.dp.d(arg1, 0x22c) + 0x60)

if (x8_1 != 0 && (x8_1 != 2 || *(x0 + sx.q(arg1) * 0x22c + 0x64) != 1))
    return 1

return 0
