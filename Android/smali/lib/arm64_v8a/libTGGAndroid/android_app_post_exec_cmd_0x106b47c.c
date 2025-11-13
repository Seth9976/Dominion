// 函数: android_app_post_exec_cmd
// 地址: 0x106b47c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* mutex

if (zx.d(arg2) == 0xc)
    mutex = arg1 + 0x68
    pthread_mutex_lock(mutex)
    *(arg1 + 0x104) = 1
    pthread_cond_broadcast(arg1 + 0x90)
else
    int32_t x8_1 = sx.d(arg2)
    
    if (x8_1 == 0xb)
        mutex = arg1 + 0x68
        pthread_mutex_lock(mutex)
        int64_t x0_6 = *(arg1 + 0x28)
        
        if (x0_6 != 0)
            free(x0_6)
            *(arg1 + 0x28) = 0
            *(arg1 + 0x30) = 0
            return pthread_mutex_unlock(mutex) __tailcall
    else
        if (x8_1 != 2)
            return 
        
        mutex = arg1 + 0x68
        pthread_mutex_lock(mutex)
        *(arg1 + 0x48) = 0
        pthread_cond_broadcast(arg1 + 0x90)

return pthread_mutex_unlock(mutex) __tailcall
