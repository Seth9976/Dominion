// 函数: _Z19SetGalleryIdxToPageiii
// 地址: 0xb41898
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9

x9 = arg3 s> 8 ? arg3 : 8

int32_t x8

if (arg2 - 4 s> x9 - 8)
    x8 = x9 - 8
else
    x8 = arg2 - 4

int32_t x8_1

x8_1 = arg2 s< 4 ? 0 : x8

return zx.q(x8_1 + arg1)
