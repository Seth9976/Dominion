// 函数: _ZN6SoLoud6Thread11createMutexEv
// 地址: 0x1072dfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

union pthread_mutex_t* mutex = operator new(0x28)
union pthread_mutexattr_t mutexattr
pthread_mutexattr_init(&mutexattr)
pthread_mutex_init(mutex, &mutexattr)
return mutex
