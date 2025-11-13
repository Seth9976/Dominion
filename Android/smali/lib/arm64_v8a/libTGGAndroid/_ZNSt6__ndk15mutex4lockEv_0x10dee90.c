// 函数: _ZNSt6__ndk15mutex4lockEv
// 地址: 0x10dee90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

union pthread_mutex_t* entry_mutex
int64_t result = pthread_mutex_lock(entry_mutex)

if (result.d == 0)
    return result

std::__ndk1::__throw_system_error(result.d, "mutex lock failed")
return std::__ndk1::mutex::try_lock() __tailcall
