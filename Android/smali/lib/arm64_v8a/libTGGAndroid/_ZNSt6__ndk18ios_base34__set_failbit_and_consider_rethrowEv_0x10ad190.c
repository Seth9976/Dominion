// 函数: _ZNSt6__ndk18ios_base34__set_failbit_and_consider_rethrowEv
// 地址: 0x10ad190
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
uint32_t x9 = zx.d(*(entry_x0 + 0x24))
*(entry_x0 + 0x20) |= 4

if ((x9 & 4) == 0)
    return 

__cxa_rethrow()
noreturn
