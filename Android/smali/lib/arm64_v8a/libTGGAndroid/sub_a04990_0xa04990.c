// 函数: sub_a04990
// 地址: 0xa04990
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t x9 = arg2[1]
int32_t x11 = *arg1
int32_t x12 = *arg3
int32_t x10_2

if (x8 == x11)
    x10_2 = x9 s< arg1[1] ? 1 : 0
else
    x10_2 = x8 s< x11 ? 1 : 0

int32_t x8_2

if (x12 == x8)
    x8_2 = arg3[1] s< x9 ? 1 : 0
else
    x8_2 = x12 s< x8 ? 1 : 0

if ((x10_2 & 1) == 0)
    if (x8_2 == 0)
        return 0
    
    int32_t x8_6 = arg2[2]
    int64_t x9_5 = *arg2
    int64_t x9_6 = *arg3
    arg2[2] = arg3[2]
    *arg2 = x9_6
    arg3[2] = x8_6
    *arg3 = x9_5
    int32_t x10_3 = *arg2
    int32_t x11_2 = *arg1
    int32_t x8_11
    
    if (x10_3 == x11_2)
        x8_11 = arg2[1] s< arg1[1] ? 1 : 0
    else
        x8_11 = x10_3 s< x11_2 ? 1 : 0
    
    if (x8_11 == 1)
        int32_t x8_12 = arg1[2]
        int64_t x9_10 = *arg1
        int64_t x9_11 = *arg2
        arg1[2] = arg2[2]
        *arg1 = x9_11
        arg2[2] = x8_12
        *arg2 = x9_10
        return 2
else
    if (x8_2 != 0)
        int32_t x8_3 = arg1[2]
        int64_t x9_2 = *arg1
        int64_t x9_3 = *arg3
        arg1[2] = arg3[2]
        *arg1 = x9_3
        arg3[2] = x8_3
        *arg3 = x9_2
        return 1
    
    int32_t x8_15 = arg1[2]
    int64_t x9_13 = *arg1
    int64_t x9_14 = *arg2
    arg1[2] = arg2[2]
    *arg1 = x9_14
    arg2[2] = x8_15
    *arg2 = x9_13
    int32_t x10_4 = *arg3
    int32_t x11_3 = x9_13.d & 0xffffffff
    int32_t x8_20
    
    if (x10_4 == x11_3)
        x8_20 = arg3[1] s< (x9_13 u>> 0x20).d ? 1 : 0
    else
        x8_20 = x10_4 s< x11_3 ? 1 : 0
    
    if (x8_20 == 1)
        int32_t x8_21 = arg2[2]
        int64_t x9_18 = *arg2
        int64_t x9_19 = *arg3
        arg2[2] = arg3[2]
        *arg2 = x9_19
        arg3[2] = x8_21
        *arg3 = x9_18
        return 2

return 1
