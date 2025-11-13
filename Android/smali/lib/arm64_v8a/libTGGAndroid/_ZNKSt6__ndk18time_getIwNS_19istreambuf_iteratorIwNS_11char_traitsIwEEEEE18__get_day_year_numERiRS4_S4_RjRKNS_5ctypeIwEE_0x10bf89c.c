// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE18__get_day_year_numERiRS4_S4_RjRKNS_5ctypeIwEE
// 地址: 0x10bf89c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x5
uint64_t result = sub_10bff9c(arg3, arg4, arg5, entry_x5, 3)
int32_t x8 = *arg5

if (result.d s> 0x16d || (x8 & 4) != 0)
    *arg5 = x8 | 4
else
    *arg2 = result.d

return result
