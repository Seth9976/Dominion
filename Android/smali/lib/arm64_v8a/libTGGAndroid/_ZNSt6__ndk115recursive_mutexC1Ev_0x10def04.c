// 函数: _ZNSt6__ndk115recursive_mutexC1Ev
// 地址: 0x10def04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
union pthread_mutexattr_t mutexattr
int32_t x0_1 = pthread_mutexattr_init(&mutexattr)

if (x0_1 != 0)
    std::__ndk1::__throw_system_error(x0_1, "recursive_mutex constructor failed")
else
    int32_t x0_3 = pthread_mutexattr_settype(&mutexattr, 1)
    
    if (x0_3 != 0)
        pthread_mutexattr_destroy(&mutexattr)
        std::__ndk1::__throw_system_error(x0_3, "recursive_mutex constructor failed")
    else
        union pthread_mutex_t* entry_mutex
        int32_t x0_5 = pthread_mutex_init(entry_mutex, &mutexattr)
        int32_t result = pthread_mutexattr_destroy(&mutexattr)
        
        if (x0_5 != 0)
            std::__ndk1::__throw_system_error(x0_5, "recursive_mutex constructor failed")
        else if (result != 0)
            pthread_mutex_destroy(entry_mutex)
            std::__ndk1::__throw_system_error(result, "recursive_mutex constructor failed")
        else if (*(x21 + 0x28) == x8)
            return result

__stack_chk_fail()
noreturn
