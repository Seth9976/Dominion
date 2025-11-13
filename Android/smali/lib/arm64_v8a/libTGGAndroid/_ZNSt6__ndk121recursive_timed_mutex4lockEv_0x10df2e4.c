// 函数: _ZNSt6__ndk121recursive_timed_mutex4lockEv
// 地址: 0x10df2e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
pthread_t x0 = pthread_self()
char var_40 = 1
union pthread_mutex_t* entry_mutex
int64_t result = pthread_mutex_lock(entry_mutex)

if (result.d != 0)
    std::__ndk1::__throw_system_error(result.d, "mutex lock failed")
    std::__ndk1::__throw_system_error(0xb, "recursive_timed_mutex lock limit reached")
else
    pthread_t thread2 = entry_mutex->__offset(0x60).q
    
    if (x0 != 0)
        if (thread2 == 0)
            goto label_10df36c
        
        if (pthread_equal(x0, thread2).d == 0)
            goto label_10df36c
        
        goto label_10df344
    
    if (thread2 != 0)
    label_10df36c:
        
        while (entry_mutex->__offset(0x58).q != 0)
            std::__ndk1::condition_variable::wait(entry_mutex + 0x28)
        
        entry_mutex->__offset(0x58).q = 1
        entry_mutex->__offset(0x60).q = x0
        goto label_10df39c
    
label_10df344:
    int64_t x8_1 = entry_mutex->__offset(0x58).q
    
    if (x8_1 == -1)
        std::__ndk1::__throw_system_error(0xb, "recursive_timed_mutex lock limit reached")
    else
        entry_mutex->__offset(0x58).q = x8_1 + 1
    label_10df39c:
        result = pthread_mutex_unlock(entry_mutex)
        
        if (*(x22 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
