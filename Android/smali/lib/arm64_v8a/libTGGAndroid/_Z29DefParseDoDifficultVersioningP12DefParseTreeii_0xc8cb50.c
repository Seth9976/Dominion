// 函数: _Z29DefParseDoDifficultVersioningP12DefParseTreeii
// 地址: 0xc8cb50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 0x20)
int64_t x8 = x19[4]

if (x8 != 0 && (x8() & 1) == 0)
    *x19
    XTrace("Difficult versioning function failed on '%s'")
    return 0

return 1
