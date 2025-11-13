// 函数: _Z22AbilityAllocRegisteredR7DomGame
// 地址: 0xbc5144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = sx.q(*(arg1 + 0x19c0))
*(arg1 + 0x19c0) = x8_2.d + 1
__builtin_memset(arg1 + x8_2 * 0xb8 + 0x3c208, 0, 0xb8)
int32_t x9_1 = *(arg1 + 0x19c4)
*(arg1 + 0x19c4) = x9_1 + 1
*(arg1 + x8_2 * 0xb8 + 0x3c234) = x9_1
int32_t x9_2 = *(arg1 + 0x19c8)
*(arg1 + 0x19c8) = x9_2 + 1
*(arg1 + x8_2 * 0xb8 + 0x3c248) = x9_2
return arg1 + x8_2 * 0xb8 + 0x3c208
