// 函数: sub_10909ac
// 地址: 0x10909ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = *(arg1 + 0x30)
int32_t* result = malloc(0x70)
int32_t x0_2 = oggpack_read(arg2, 8)
*result = x0_2
int64_t x0_4 = oggpack_read(arg2, 0x10)
*(result + 8) = x0_4
int64_t x0_6 = oggpack_read(arg2, 0x10)
*(result + 0x10) = x0_6
result[6] = oggpack_read(arg2, 6)
result[7] = oggpack_read(arg2, 8)
int32_t x8 = oggpack_read(arg2, 4) + 1
result[8] = x8

if (x0_2 s>= 1 && x0_4 s>= 1 && x0_6 s>= 1 && x8 s>= 1)
    int64_t x22_1 = 9
    
    while (true)
        int64_t x0_14 = oggpack_read(arg2, 8)
        result[x22_1] = x0_14.d
        
        if ((x0_14.d & 0x80000000) != 0)
            break
        
        if (*(x24 + 0x20) s<= x0_14.d)
            break
        
        int64_t* x8_4 = *(x24 + (x0_14 << 0x20 s>> 0x1d) + 0xb28)
        
        if (x8_4[3].d == 0)
            break
        
        if (*x8_4 s< 1)
            break
        
        int64_t x8_6 = x22_1 - 8
        x22_1 += 1
        
        if (x8_6 s>= sx.q(x8))
            return result
else if (result == 0)
    return result

free(result)
return nullptr
