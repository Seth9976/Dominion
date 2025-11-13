// 函数: _ZNSt6__ndk121recursive_timed_mutexD1Ev
// 地址: 0x10df278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

union pthread_mutex_t* entry_mutex
int32_t x0 = pthread_mutex_lock(entry_mutex)

if (x0 != 0)
    sub_c776cc(std::__ndk1::__throw_system_error(x0, "mutex lock failed"))
    noreturn

pthread_mutex_unlock(entry_mutex)
std::__ndk1::condition_variable::~condition_variable()
return std::__ndk1::mutex::~mutex() __tailcall
