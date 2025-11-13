// 函数: sub_1101b80
// 地址: 0x1101b80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1

if (x8 != 0)
    *arg1 = x8 - 1
    return pthread_setspecific(zx.q(data_24bc024), arg1) __tailcall

int64_t x8_3 = arg1[1]

if (x8_3 != 0)
    int64_t x20_1 = 0
    
    do
        void* x9_2 = arg1[2 + x20_1]
        
        if (x9_2 != 0)
            free(*(x9_2 - 8))
            x8_3 = arg1[1]
        
        x20_1 += 1
    while (x20_1 u< x8_3)

return free(arg1) __tailcall
