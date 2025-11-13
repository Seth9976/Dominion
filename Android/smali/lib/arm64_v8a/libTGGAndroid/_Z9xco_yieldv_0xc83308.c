// 函数: _Z9xco_yieldv
// 地址: 0xc83308
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x19 = *g_current_coroutine

if (*x19 != 3)
    pthread_mutex_unlock(*(x19 + 0x20))
    int64_t result = pthread_mutex_lock(*(x19 + 0x18))
    
    if (*x19 != 3)
        return result

thread_exit()
return IsAndroid10() __tailcall
