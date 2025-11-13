// 函数: _Z19DailyResultIsBetterRK20DailySeedStatusEntry23DailySeedGameResult_New
// 地址: 0x9ed314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2 = *(arg1 + 8)
int32_t x9 = *(arg1 + 0xc)
int32_t x10 = *(arg1 + 0x10)
int32_t x8

x8 = x8_2 s> x9 ? x8_2 : x9

int32_t x8_1

x8_1 = x8 s> x10 ? x8 : x10

return zx.q(x8_1 s< arg2 ? 1 : 0)
