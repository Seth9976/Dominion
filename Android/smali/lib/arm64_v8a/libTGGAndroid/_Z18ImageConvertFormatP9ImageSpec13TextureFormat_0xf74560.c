// 函数: _Z18ImageConvertFormatP9ImageSpec13TextureFormat
// 地址: 0xf74560
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 8)
int32_t x21 = *(arg1 + 0xc)
int32_t x19 = arg2
int32_t x0_4

if (arg2 - 0xd u> 8 || (0x13f u>> (arg2 - 0xd) & 1) == 0)
    int32_t x8_2
    
    if (TextureFormatBytesPerPixel(zx.q(x19)) * x22 s>= 4)
        x8_2 = TextureFormatBytesPerPixel(zx.q(x19)) * x22
    else
        x8_2 = 4
    
    x0_4 = x8_2 * x21
else
    int32_t x9_3
    
    if (x22 + 3 s< 0)
        x9_3 = x22 + 6
    else
        x9_3 = x22 + 3
    
    int32_t x10_3
    
    if (x21 + 3 s< 0)
        x10_3 = x21 + 6
    else
        x10_3 = x21 + 3
    
    x0_4 = (x10_3 s>> 2) * (x9_3 s>> 2) * *(&data_8658a0 + (sx.q(arg2 - 0xd) << 2))
        + ((x19 == 0x15 ? 1 : 0) << 4)

int64_t x0_5 = XMalloc(x0_4)
int64_t var_48 = x0_5
int64_t v0 = *(arg1 + 8)
int32_t var_60 = v0.d
int64_t var_40 = v0
int32_t x22_2

if (TextureFormatBytesPerPixel(zx.q(x19)) * var_60 s>= 4)
    x22_2 = TextureFormatBytesPerPixel(zx.q(x19)) * var_60
else
    x22_2 = 4

int32_t var_38 = x22_2
int32_t var_34 = x19
ImageBufferCopyToNewFormat(arg1, &var_48)
int64_t result = XFree(*arg1)
*arg1 = x0_5
*(arg1 + 0x10) = x22_2
*(arg1 + 0x14) = x19
return result
