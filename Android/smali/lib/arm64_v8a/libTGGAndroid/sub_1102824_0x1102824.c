// 函数: sub_1102824
// 地址: 0x1102824
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
v0, v1 = pthread_rwlock_wrlock(0x24bc064)
void* x9 = data_11c1ac8
void* x11 = data_11c1ad0
void* x10

if (x9 u>= x11)
    x10 = x9
else
    x10 = x9
    
    do
        if (*x9 != arg1)
            if (x9 != x10)
                v0 = *(x9 + 0x10)
                *x10 = *x9
                *(x10 + 0x10) = v0
            
            x10 += 0x20
        
        x9 += 0x20
    while (x9 u< x11)

data_11c1ad0 = x10
return pthread_rwlock_unlock(0x24bc064) __tailcall
