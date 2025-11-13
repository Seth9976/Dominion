// 函数: _ZN5Botan5Timer5startEv
// 地址: 0xe90ce0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Timer::stop()
struct timespec tp
int64_t result = clock_gettime(0, &tp)
int64_t x8

if (result.d == 0)
    x8 = tp.tv_nsec + tp.tv_sec * 0x3b9aca00
else
    result = std::__ndk1::chrono::system_clock::now()
    x8 = result * 0x3e8

void* entry_x0
*(entry_x0 + 0x70) = x8
*(entry_x0 + 0x90) = 0
return result
