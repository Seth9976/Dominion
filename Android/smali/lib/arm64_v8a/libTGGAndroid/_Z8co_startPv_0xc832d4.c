// 函数: _Z8co_startPv
// 地址: 0xc832d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

pthread_mutex_lock(*(arg1 + 0x18))
(*(arg1 + 8))(*(arg1 + 0x10))
union pthread_mutex_t* mutex = *(arg1 + 0x20)
*arg1 = 2
pthread_mutex_unlock(mutex)
return 0
