// 函数: _Z28TextureFormatLinearImageSizeii13TextureFormat
// 地址: 0xf73d90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3

if (arg3 - 0xd u> 8 || (0x13f u>> (arg3 - 0xd) & 1) == 0)
    if (TextureFormatBytesPerPixel(zx.q(x20)) * arg1 s>= 4)
        return zx.q(TextureFormatBytesPerPixel(zx.q(x20)) * arg1 * arg2)
    
    return zx.q(4 * arg2)

int32_t x9_3

if (arg1 + 3 s< 0)
    x9_3 = arg1 + 6
else
    x9_3 = arg1 + 3

int32_t x10_2

if (arg2 + 3 s< 0)
    x10_2 = arg2 + 6
else
    x10_2 = arg2 + 3

return zx.q((x10_2 s>> 2) * (x9_3 s>> 2) * *(&data_8658a0 + (sx.q(arg3 - 0xd) << 2))
    + ((x20 == 0x15 ? 1 : 0) << 4))
