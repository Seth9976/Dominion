// 函数: _Z17IsBannedThemeCard11DomCardEnum
// 地址: 0xa450a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1

if (arg1 s> 0x918)
    if (x8 != 0x919 && x8 != 0x91f)
        return 0
else if ((x8 - 0x501 u> 0xb || (1 << (x8 - 0x501) & 0x901) == 0) && x8 != 0x208)
    return 0

return 1
