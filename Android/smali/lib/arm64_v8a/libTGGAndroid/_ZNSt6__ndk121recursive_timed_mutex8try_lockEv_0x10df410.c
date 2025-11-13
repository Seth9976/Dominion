// 函数: _ZNSt6__ndk121recursive_timed_mutex8try_lockEv
// 地址: 0x10df410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

pthread_t x0 = pthread_self()
union pthread_mutex_t* entry_mutex
int32_t x20_1

if (pthread_mutex_trylock(entry_mutex) == 0)
    int64_t x8_1 = entry_mutex->__offset(0x58).q
    
    if (x8_1 == 0)
    label_10df478:
        entry_mutex->__offset(0x58).q = x8_1 + 1
        entry_mutex->__offset(0x60).q = x0
        x20_1 = 1
    else
        pthread_t thread2 = entry_mutex->__offset(0x60).q
        
        if (x0 == 0)
            if (thread2 == 0 && x8_1 != -1)
                goto label_10df478
            
            x20_1 = 0
        else if (thread2 == 0)
            x20_1 = 0
        else if (pthread_equal(x0, thread2) == 0)
            x20_1 = 0
        else
            x8_1 = entry_mutex->__offset(0x58).q
            
            if (x8_1 != -1)
                goto label_10df478
            
            x20_1 = 0
    
    pthread_mutex_unlock(entry_mutex)
else
    x20_1 = 0

return zx.q(x20_1)
