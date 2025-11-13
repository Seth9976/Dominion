// 函数: readFloat
// 地址: 0xfc0748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8_2 = *arg1
*arg1 = &x8_2[1]
uint32_t x9_1 = zx.d(*x8_2)
*arg1 = &x8_2[2]
char x10_1 = x8_2[1]
*arg1 = &x8_2[3]
uint32_t x11_1 = zx.d(x8_2[2])
*arg1 = &x8_2[4]
int128_t result
result.d = float.s(zx.d(x8_2[3])
    | (0xffffff & ((0xffff00ff & x9_1 << 0x10) | zx.d(x10_1) << 8 | x11_1)) << 8)
return result
