// 函数: __cxa_uncaught_exceptions
// 地址: 0x10e9e84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = __cxa_get_globals_fast()

if (result == 0)
    return result

return zx.q(*(result + 8))
