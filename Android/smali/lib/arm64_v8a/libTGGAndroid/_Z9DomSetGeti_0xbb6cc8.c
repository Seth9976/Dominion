// 函数: _Z9DomSetGeti
// 地址: 0xbb6cc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10

x10 = arg1 s>= 0 ? arg1 : 1

int32_t x8_1

if (x10 s> *EXP_BASE_SET_COUNT)
    x8_1 = 0
else
    x8_1 = x10 - 1

return *EXP_BASE_SETS + muls.dp.d(x8_1, 0x68)
