// 函数: _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE9__get_dayERiRS4_S4_RjRKNS_5ctypeIcEE
// 地址: 0x10bd9c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x5
uint64_t result = sub_10be170(arg3, arg4, arg5, entry_x5, 2)
int32_t x8 = *arg5

if (result.d - 1 u> 0x1e || (x8 & 4) != 0)
    *arg5 = x8 | 4
else
    *arg2 = result.d

return result
