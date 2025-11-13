// 函数: _ZNSt6__ndk111timed_mutex6unlockEv
// 地址: 0x10df208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

union pthread_mutex_t* entry_mutex
int32_t x0 = pthread_mutex_lock(entry_mutex)

if (x0 != 0)
    sub_c776cc(std::__ndk1::__throw_system_error(x0, "mutex lock failed"))
    noreturn

entry_mutex->__offset(0x58).b = 0
std::__ndk1::condition_variable::notify_one()
return pthread_mutex_unlock(entry_mutex)
