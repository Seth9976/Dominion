// 函数: _ZNSt6__ndk111timed_mutex8try_lockEv
// 地址: 0x10df1a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (pthread_mutex_trylock() == 0)
    union pthread_mutex_t* entry_mutex
    uint32_t x8_1 = zx.d(entry_mutex->__offset(0x58).b)
    x20 = x8_1 == 0 ? 1 : 0
    
    if (x8_1 == 0)
        entry_mutex->__offset(0x58).b = 1
    
    pthread_mutex_unlock(entry_mutex)
else
    x20 = 0

return zx.q(x20)
