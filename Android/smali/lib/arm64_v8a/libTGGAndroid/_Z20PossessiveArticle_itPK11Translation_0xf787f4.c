// 函数: _Z20PossessiveArticle_itPK11Translation
// 地址: 0xf787f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x9_1 = zx.d(*(arg1 + 0x24))
char const* const x9

if (x9_1 == 0)
    x9 = "i loro"
else
    x9 = "il loro"

char const* const x10

if (x9_1 == 0)
    x10 = "le loro"
else
    x10 = "la loro"

if (*(arg1 + 0x18) == 2)
    return x9

return x10
