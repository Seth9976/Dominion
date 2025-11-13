// 函数: _ZN6SoLoud6Thread4PoolD1Ev
// 地址: 0x1072f8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x0
entry_x0[0x808] = 0

if (*entry_x0 s>= 1)
    int64_t i = 0
    
    do
        pthread_join(**(*(entry_x0 + 8) + (i << 3)), 0)
        void* x0_1 = *(*(entry_x0 + 8) + (i << 3))
        
        if (x0_1 != 0)
            operator delete(x0_1)
        
        i += 1
    while (i s< sx.q(*entry_x0))

void* result = *(entry_x0 + 8)

if (result != 0)
    result = operator delete[](result)

union pthread_mutex_t* mutex = *(entry_x0 + 0x10)

if (mutex == 0)
    return result

pthread_mutex_destroy(mutex)
return operator delete(mutex) __tailcall
