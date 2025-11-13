// 函数: _Z23GetCubeEncodingFromSizeP9ImageSpec
// 地址: 0xfd92d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)
int32_t x9_1 = *(arg1 + 0xc)

if (x9_1 * 3 == x8 << 1)
    return 1

int32_t x9 = x9_1 << 2

if (x8 * 3 == x9)
    return 2

if (x8 == x9)
    return 3

return 0
