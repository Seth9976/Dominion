// 函数: _Z9ToggleBitRii
// 地址: 0x9b8674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *arg1
int32_t x8

if ((x8_1 & arg2) == 0)
    x8 = x8_1 | arg2
else
    x8 = x8_1 & not.d(arg2)

*arg1 = x8
