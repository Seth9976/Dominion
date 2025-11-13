// 函数: _ZNSt6__ndk111timed_mutex4lockEv
// 地址: 0x10df0ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char var_40 = 1
union pthread_mutex_t* entry_mutex
int32_t x0 = pthread_mutex_lock(entry_mutex)

if (x0 != 0)
    std::__ndk1::__throw_system_error(x0, "mutex lock failed")
else
    if (zx.d(entry_mutex->__offset(0x58).b) == 0)
        entry_mutex->__offset(0x58).b = 1
    else
        do
            std::__ndk1::condition_variable::wait(entry_mutex + 0x28)
        while (zx.d(entry_mutex->__offset(0x58).b) != 0)
        
        entry_mutex->__offset(0x58).b = 1
    
    int64_t result = pthread_mutex_unlock(entry_mutex)
    
    if (*(x21 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
