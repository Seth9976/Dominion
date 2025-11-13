// 函数: _ZN5Botan2OS23get_system_timestamp_nsEv
// 地址: 0xe037f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct timespec tp

if (clock_gettime(0, &tp) == 0)
    return tp.tv_nsec + tp.tv_sec * 0x3b9aca00

return std::__ndk1::chrono::system_clock::now() * 0x3e8
