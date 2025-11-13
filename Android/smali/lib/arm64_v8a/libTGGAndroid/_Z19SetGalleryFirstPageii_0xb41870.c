// 函数: _Z19SetGalleryFirstPageii
// 地址: 0xb41870
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9

x9 = arg2 s> 8 ? arg2 : 8

int32_t x8

if (arg1 - 4 s> x9 - 8)
    x8 = x9 - 8
else
    x8 = arg1 - 4

if (arg1 s< 4)
    return 0

return zx.q(x8)
