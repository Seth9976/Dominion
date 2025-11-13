// 函数: _ZN5Botan9ASN1_TimeC1ERKNSt6__ndk16chrono10time_pointINS2_12system_clockENS2_8durationIxNS1_5ratioILl1ELl1000000EEEEEEE
// 地址: 0xcb611c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::ASN1_Time + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x20) = 0xff00
std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<int64_t, std::__ndk1::ratio<1l, 1000000l> > >
    * entry_x1
time_t t = std::__ndk1::chrono::system_clock::to_time_t(entry_x1)
struct tm tp
struct tm* result
int128_t v0
uint128_t v1
int128_t v2
result, v0, v1, v2 = gmtime_r(&t, &tp)
v0.d = tp.tm_mon
v0:4.d = tp.tm_year
v2.q = 0x76c00000001
v1.d = tp.tm_sec
v1:4.d = tp.tm_min
v1:8.d = tp.tm_hour
v1:0xc.d = tp.tm_mday
int128_t v0_1 = v0 + v2
uint128_t v1_1 = vrev64q_s32(v1)
uint128_t v1_2 = vextq_s8(v1_1, v1_1, 8)
uint64_t v2_1 = vrev64_s32(v0_1)
int32_t x8_2

if (v0_1:4.d u> 0x801)
    x8_2 = 0x18
else
    x8_2 = 0x17

*(arg1 + 0x10) = v1_2
*(arg1 + 8) = v2_1
*(arg1 + 0x20) = x8_2
return result
