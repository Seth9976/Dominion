// 函数: _Z16PNGExportTexturePKc13TextureFormatPhjjj
// 地址: 0xfda524
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t var_28 = arg4
int32_t var_24 = arg2
uint32_t var_30 = arg5
uint32_t var_2c = arg6
uint8_t* var_38 = arg3
int32_t x0_1 = PngWriteImageSpecToFile(&var_38, arg1)

if ((x0_1 & 1) == 0)
    XTrace("PNGExportTexture: Failed to write %s")
    XFree(var_38)

return zx.q(x0_1) & 1
