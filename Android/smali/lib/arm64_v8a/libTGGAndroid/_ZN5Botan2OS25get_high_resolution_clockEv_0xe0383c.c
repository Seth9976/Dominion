// 函数: _ZN5Botan2OS25get_high_resolution_clockEv
// 地址: 0xe0383c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct timespec tp

if (clock_gettime(4, &tp) != 0 && clock_gettime(1, &tp) != 0 && clock_gettime(2, &tp) != 0
        && clock_gettime(3, &tp) != 0)
    return std::__ndk1::chrono::steady_clock::now()

return tp.tv_nsec + tp.tv_sec * 0x3b9aca00
