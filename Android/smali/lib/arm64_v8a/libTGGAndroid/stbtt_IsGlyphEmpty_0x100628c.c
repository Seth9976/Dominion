// 函数: stbtt_IsGlyphEmpty
// 地址: 0x100628c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x4c) != 0)
    int128_t var_50
    __builtin_memset(&var_50, 0, 0x34)
    var_50.d = 1
    int32_t var_20
    int128_t v8
    int128_t v9
    int128_t v10
    return zx.q(sub_100bc78(arg1, arg2, &var_50, v8, v9, v10) == 0 ? 1 : 0)
        | zx.q(var_20 == 0 ? 1 : 0)

int32_t x0_4 = sub_1006190(arg1, arg2)

if ((x0_4 & 0x80000000) != 0)
    return 1

char* x8_4 = *(arg1 + 8) + zx.q(x0_4)
return zx.q((zx.d(x8_4[1]) | zx.d(*x8_4)) == 0 ? 1 : 0)
