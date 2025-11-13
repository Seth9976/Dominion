// 函数: sub_10ff468
// 地址: 0x10ff468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

pthread_mutex_lock(0x24bbde8)
int32_t* x12 = data_24bbe10

if (x12 == 0)
    x12 = &data_24bbe20
    data_24bbe10 = &data_24bbe20
    data_24bbe20 = 0x800080

void* result

if (x12 != &data_24bc020)
    int32_t* x11_1 = nullptr
    int32_t* x19_1
    
    do
        x19_1 = x12
        uint64_t x12_1 = zx.q(*(x12 + 2))
        
        if (((arg1 + 3) u>> 2) + 1 u< x12_1)
            int16_t x8_1 = x12_1.w - (((arg1 + 3) u>> 2) + 1).w
            *(x19_1 + 2) = x8_1
            int16_t* x8_2 = &x19_1[zx.q(x8_1)]
            *x8_2 = 0
            x8_2[1] = ((((arg1 + 3) u>> 2) + 1).d).w
            result = &x8_2[2]
            goto label_10ff540
        
        if (((arg1 + 3) u>> 2) + 1 == x12_1)
            uint64_t x10_4 = zx.q(*x19_1)
            
            if (x11_1 == 0)
                data_24bbe10 = &(&data_24bbe20)[x10_4]
            else
                *x11_1 = (x10_4.d).w
            
            *x19_1 = 0
            result = &x19_1[1]
            goto label_10ff540
        
        x12 = &(&data_24bbe20)[zx.q(*x19_1)]
        x11_1 = x19_1
    while (zx.q(*x19_1) << 2 != 0x200)

result = nullptr
label_10ff540:
pthread_mutex_unlock(0x24bbde8)
return result
