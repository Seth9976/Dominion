// 函数: _Z13UI2TextboxSet9UI2HandleRK7XString
// 地址: 0x1042b34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

int32_t x9_1 = arg1.d & 0xffff

if (x9_1 u>= *(gUI2 + 8))
    return 

int64_t x8_1 = *gUI2

if (*(x8_1 + mulu.dp.d(x9_1, 0x19a8) + 0x19a0) != arg1.d)
    return 

uint64_t x9_2 = zx.q(x9_1)

if (*(x8_1 + x9_2 * 0x19a8 + 0x167c) == 3)
    XString::operator=(x8_1 + x9_2 * 0x19a8 + 0x17e0)
