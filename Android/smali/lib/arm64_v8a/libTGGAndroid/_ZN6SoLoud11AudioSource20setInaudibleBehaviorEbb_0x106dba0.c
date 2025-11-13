// 函数: _ZN6SoLoud11AudioSource20setInaudibleBehaviorEbb
// 地址: 0x106dba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8) & 0xffffff3f
int32_t x8_1

if ((arg2.d & 1) != 0)
    x8_1 = x8 | 0x80
else
    x8_1 = x8

int32_t entry_x2
int32_t x8_2

if ((entry_x2 & 1) != 0)
    x8_2 = x8_1 | 0x40
else
    x8_2 = x8_1

*(arg1 + 8) = x8_2
