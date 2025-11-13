// 函数: _Z11DateAdd_DayRK4Datei
// 地址: 0x1066754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_3
int32_t x10

if (arg2 == 0)
    x10 = *arg1
    x8_3 = *(arg1 + 4)
    *(arg1 + 8)
else
    int128_t v0
    v0.q = 0
    v0:8.q = 0
    struct tm tp
    tp.tm_zone = 0
    tp.tm_mon = 0
    tp.tm_year = 0
    tp.tm_wday = 0
    tp.tm_yday = 0
    tp.tm_isdst = 0
    tp.tm_gmtoff = 0
    tp.tm_sec = 0
    tp.tm_min = 0
    tp.tm_hour = 0
    tp.tm_mday = 0
    v0.q = *arg1
    int128_t v1
    v1.q = -0x76c
    uint64_t v0_2 = vrev64_s32(v0 + v1)
    tp.tm_mon = v0_2.d
    tp.tm_year = v0_2:4.d
    tp.tm_mday = *(arg1 + 8) + arg2
    mktime(&tp)
    x10 = tp.tm_year + 0x76c
    x8_3 = tp.tm_mon + 1

return zx.q(x10) | zx.q(x8_3) << 0x20
