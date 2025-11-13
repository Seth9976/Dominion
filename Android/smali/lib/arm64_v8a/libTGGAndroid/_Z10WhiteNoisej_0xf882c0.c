// 函数: _Z10WhiteNoisej
// 地址: 0xf882c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = not.d(arg1) + (arg1 << 0xf)
uint32_t x8_2 = (x8 ^ x8 u>> 0xc) * 5
int32_t x8_4 = (x8_2 ^ x8_2 u>> 4) * 0x809
return zx.q(x8_4) ^ zx.q(x8_4 u>> 0x10)
