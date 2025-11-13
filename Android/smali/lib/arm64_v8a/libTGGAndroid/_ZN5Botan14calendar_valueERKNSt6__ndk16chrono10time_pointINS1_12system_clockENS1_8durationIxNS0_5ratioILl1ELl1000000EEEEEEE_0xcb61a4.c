// 函数: _ZN5Botan14calendar_valueERKNSt6__ndk16chrono10time_pointINS1_12system_clockENS1_8durationIxNS0_5ratioILl1ELl1000000EEEEEEE
// 地址: 0xcb61a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

time_t t = std::__ndk1::chrono::system_clock::to_time_t(arg1)
struct tm tp
struct tm* result
int128_t v0
uint128_t v1
int128_t v2
result, v0, v1, v2 = gmtime_r(&t, &tp)
v0.d = tp.tm_mon
v0:4.d = tp.tm_year
v1.d = tp.tm_sec
v1:4.d = tp.tm_min
v1:8.d = tp.tm_hour
v1:0xc.d = tp.tm_mday
v2.q = 0x76c00000001
uint128_t v1_1 = vrev64q_s32(v1)
uint128_t v1_2 = vextq_s8(v1_1, v1_1, 8)
uint64_t* entry_x8
*entry_x8 = vrev64_s32(v0 + v2)
*(entry_x8 + 8) = v1_2
return result
