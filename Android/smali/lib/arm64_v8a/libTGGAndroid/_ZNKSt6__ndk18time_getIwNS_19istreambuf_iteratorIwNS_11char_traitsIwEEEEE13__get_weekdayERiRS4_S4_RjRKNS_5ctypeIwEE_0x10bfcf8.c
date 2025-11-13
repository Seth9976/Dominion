// 函数: _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_weekdayERiRS4_S4_RjRKNS_5ctypeIwEE
// 地址: 0x10bfcf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x5
uint64_t result = sub_10bff9c(arg3, arg4, arg5, entry_x5, 1)
int32_t x8 = *arg5

if (result.d s> 6 || (x8 & 4) != 0)
    *arg5 = x8 | 4
else
    *arg2 = result.d

return result
