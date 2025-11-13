// 函数: _ZNSt6__ndk121recursive_timed_mutex6unlockEv
// 地址: 0x10df4b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

union pthread_mutex_t* entry_mutex
int32_t x0 = pthread_mutex_lock(entry_mutex)

if (x0 != 0)
    sub_c776cc(std::__ndk1::__throw_system_error(x0, "mutex lock failed"))
    noreturn

int64_t x8 = entry_mutex->__offset(0x58).q
entry_mutex->__offset(0x58).q = x8 - 1

if (x8 != 1)
    return pthread_mutex_unlock(entry_mutex)

entry_mutex->__offset(0x60).q = 0
pthread_mutex_unlock(entry_mutex)
return std::__ndk1::condition_variable::notify_one() __tailcall
