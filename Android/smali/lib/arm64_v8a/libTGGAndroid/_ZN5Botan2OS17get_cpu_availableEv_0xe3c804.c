// 函数: _ZN5Botan2OS17get_cpu_availableEv
// 地址: 0xe3c804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = sysconf(0x61)

if (result s<= 0)
    result = sysconf(0x60)
    
    if (result s<= 0)
        return zx.q(std::__ndk1::thread::hardware_concurrency())

return result
