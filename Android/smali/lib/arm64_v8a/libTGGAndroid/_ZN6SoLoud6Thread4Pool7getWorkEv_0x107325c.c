// 函数: _ZN6SoLoud6Thread4Pool7getWorkEv
// 地址: 0x107325c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
union pthread_mutex_t* mutex = *(entry_x0 + 0x10)

if (mutex != 0)
    pthread_mutex_lock(mutex)

int32_t x8 = *(entry_x0 + 0x2018)
int64_t result
union pthread_mutex_t* mutex_1

if (x8 s< 1)
    result = 0
    mutex_1 = *(entry_x0 + 0x10)
    
    if (mutex_1 != 0)
        pthread_mutex_unlock(mutex_1)
else
    int32_t x10_1 = *(entry_x0 + 0x201c)
    *(entry_x0 + 0x201c) = x10_1 + 1
    int64_t x8_2 = zx.q(x10_1 s% x8) << 0x20 s>> 0x1d
    result = *(entry_x0 + 0x18 + x8_2)
    *(entry_x0 + 0x18 + x8_2) = *(entry_x0 + 0x18 + (sx.q(x8 - 1) << 3))
    *(entry_x0 + 0x2018) -= 1
    mutex_1 = *(entry_x0 + 0x10)
    
    if (mutex_1 != 0)
        pthread_mutex_unlock(mutex_1)
return result
