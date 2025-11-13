// 函数: sub_10ff5ec
// 地址: 0x10ff5ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

pthread_mutex_lock(0x24bbde8)
int16_t* x9 = data_24bbe10

if (x9 != 0 && x9 != &data_24bc020)
    int16_t* x10_1 = nullptr
    int16_t* x11_1 = x9
    uint64_t i
    
    do
        uint64_t x13_1 = zx.q(x11_1[1])
        
        if (&x11_1[x13_1 * 2] == arg1 - 4)
            x11_1[1] = *(arg1 - 2) + x13_1.w
            return pthread_mutex_unlock(0x24bbde8)
        
        uint64_t x14_2 = zx.q(*(arg1 - 2))
        
        if (&(arg1 - 4)[x14_2 * 2] == x11_1)
            *(arg1 - 2) = x14_2.w + x13_1.w
            
            if (x10_1 == 0)
                data_24bbe10 = arg1 - 4
                *(arg1 - 4) = *x11_1
            else
                *x10_1 = (((arg1 - 4).d - &data_24bbe20) u>> 2).w
            
            return pthread_mutex_unlock(0x24bbde8)
        
        i = zx.q(*x11_1) << 2
        x10_1 = x11_1
        x11_1 = &(&data_24bbe20)[zx.q(*x11_1)]
    while (i != 0x200)

*(arg1 - 4) = ((x9.d - &data_24bbe20) u>> 2).w
data_24bbe10 = arg1 - 4
return pthread_mutex_unlock(0x24bbde8)
