// 函数: _Z15LeaderboardSortRK16LeaderboardEntryS1_
// 地址: 0xb3d954
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0x10)
int32_t x9 = *(arg2 + 0x10)

if (x8 s> x9)
    return 1

if (x8 s< x9)
    return 0

if (*arg1 == *(GetActiveProfile() + 0x42ac))
    return 1

if (*arg2 == *(GetActiveProfile() + 0x42ac))
    return 0

int32_t x0_11 = strcmp(XString::operator char const*(), XString::operator char const*())

if (x0_11 s> 0)
    return 1

if ((x0_11 & 0x80000000) == 0)
    return zx.q(*arg1 s> *arg2 ? 1 : 0)

return 0
