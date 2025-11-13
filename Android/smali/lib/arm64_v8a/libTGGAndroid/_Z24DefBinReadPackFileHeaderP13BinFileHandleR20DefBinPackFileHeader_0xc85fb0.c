// 函数: _Z24DefBinReadPackFileHeaderP13BinFileHandleR20DefBinPackFileHeader
// 地址: 0xc85fb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = HalGetFileSize(arg1)

if (x0 u>= 0xc && (HalRead(arg1, 0xc, arg2) & 1) != 0 && *arg2 == 0x5850434b && *(arg2 + 4) == 7)
    return zx.q(x0 s>= *(arg2 + 8) * 0xa8 ? 1 : 0)

return 0
