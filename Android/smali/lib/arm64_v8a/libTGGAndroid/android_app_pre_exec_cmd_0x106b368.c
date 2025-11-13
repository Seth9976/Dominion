// 函数: android_app_pre_exec_cmd
// 地址: 0x106b368
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = zx.q(sx.d(arg2))

if (x21.d u> 0xf)
    return 

void* mutex

switch (x21)
    case 0
        mutex = arg1 + 0x68
        pthread_mutex_lock(mutex)
        int64_t x0_5 = *(arg1 + 0x40)
        
        if (x0_5 != 0)
            AInputQueue_detachLooper(x0_5)
        
        int64_t x0_6 = *(arg1 + 0x110)
        *(arg1 + 0x40) = x0_6
        
        if (x0_6 != 0)
            AInputQueue_attachLooper(x0_6, *(arg1 + 0x38), 2, 0, arg1 + 0xe8)
        
        pthread_cond_broadcast(arg1 + 0x90)
        return pthread_mutex_unlock(mutex) __tailcall
    case 1
        mutex = arg1 + 0x68
        pthread_mutex_lock(mutex)
        *(arg1 + 0x48) = *(arg1 + 0x118)
        pthread_cond_broadcast(arg1 + 0x90)
        return pthread_mutex_unlock(mutex) __tailcall
    case 2
        return pthread_cond_broadcast(arg1 + 0x90) __tailcall
    case 8
        AConfiguration_fromAssetManager(*(arg1 + 0x20), *(*(arg1 + 0x18) + 0x40))
        void var_24
        AConfiguration_getLanguage(*(arg1 + 0x20), &var_24)
        void var_28
        AConfiguration_getCountry(*(arg1 + 0x20), &var_28)
    case 0xa, 0xb, 0xd, 0xe
        mutex = arg1 + 0x68
        pthread_mutex_lock(mutex)
        *(arg1 + 0x60) = x21.d
        pthread_cond_broadcast(arg1 + 0x90)
        return pthread_mutex_unlock(mutex) __tailcall
    case 0xf
        *(arg1 + 0x64) = 1
