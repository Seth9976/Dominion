// 函数: sub_f03088
// 地址: 0xf03088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 == 0)
    return 

int64_t x8_1 = arg1[4]
int64_t x10_1 = arg1[5]
int64_t* x19_1 = arg1

if (x10_1 == x8_1)
label_f03180:
    int64_t var_40 = arg2
    int64_t var_38_1 = arg3
    Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&x19_1[1], &var_40)
    return 

int64_t i = 0
int32_t x9_1 = 1
label_f030bc:
int64_t x11_1 = x10_1 - x8_1
int64_t x12_1

x12_1 = x11_1 s>= 0 ? x11_1 : -1

int64_t x10_2 = x8_1 - x10_1
int64_t x12_2

x12_2 = x12_1 s< 1 ? x12_1 : 1

int64_t x10_3

x10_3 = x10_2 s> x11_1 ? x10_2 : x11_1

do
    arg1 = *(x8_1 + (i << 3))
    
    if (arg1 != 0)
        if (x19_1[2] != x19_1[1])
            (*(*arg1 + 8))()
            arg1 = *(x19_1[4] + (i << 3))
        
        (*(*arg1 + 8))(arg1, arg2, arg3)
        x8_1 = x19_1[4]
        x10_1 = x19_1[5]
        x9_1 = 0
        int64_t x11_2 = x10_1 - x8_1
        int64_t x13_1
        
        x13_1 = x11_2 s>= 0 ? x11_2 : -1
        
        int64_t x12_3 = x8_1 - x10_1
        int64_t x13_2
        
        x13_2 = x13_1 s< 1 ? x13_1 : 1
        
        int64_t x11_3
        
        x11_3 = x12_3 s> x11_2 ? x12_3 : x11_2
        
        bool cond:0_1 = x13_2 * (x11_3 u>> 3) - 1 != i
        i += 1
        
        if (cond:0_1)
            goto label_f030bc
        
        goto label_f03190
    
    i += 1
while (x12_2 * (x10_3 u>> 3) != i)

if ((x9_1 & 1) != 0)
    goto label_f03180

label_f03190:
x19_1[2] = x19_1[1]
