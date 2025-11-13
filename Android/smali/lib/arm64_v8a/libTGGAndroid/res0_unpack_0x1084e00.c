// 函数: res0_unpack
// 地址: 0x1084e00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = calloc(1, 0xb20)
void* x23 = *(arg1 + 0x30)
*result = oggpack_read(arg2, 0x18)
result[1] = oggpack_read(arg2, 0x18)
result[2].d = oggpack_read(arg2, 0x18) + 1
int32_t x24 = oggpack_read(arg2, 6) + 1
*(result + 0x14) = x24
int64_t x0_9 = oggpack_read(arg2, 8)
*(result + 0x1c) = x0_9.d

if ((x0_9.d & 0x80000000) == 0)
    int32_t x22_1
    int32_t x25_1
    
    if (x24 s< 1)
        x22_1 = 0
        x25_1 = 0
    label_1084f68:
        int32_t x8_4 = *(x23 + 0x20)
        
        if (x8_4 s> x0_9.d)
            if (x22_1 != 0)
                int64_t i = 0
                
                do
                    int64_t x12_1 = sx.q(*(&result[0x24] + (i << 2)))
                    
                    if (x12_1.d s>= x8_4)
                        goto label_1084ff8
                    
                    if (*(*(x23 + (x12_1 << 3) + 0xb28) + 0x18) == 0)
                        goto label_1084ff8
                    
                    i += 1
                while (i s< sx.q(x25_1))
            
            int32_t* x8_7 = *(x23 + (x0_9 << 0x20 s>> 0x1d) + 0xb28)
            int32_t x9_2 = *x8_7
            
            if (x9_2 s>= 1)
                int32_t x10_2 = x9_2 + 1
                int32_t x9_3 = 1
                
                while (true)
                    x9_3 *= x24
                    
                    if (x9_3 s> x8_7[2])
                        break
                    
                    x10_2 -= 1
                    
                    if (x10_2 s< 2)
                        result[3].d = x9_3
                        goto label_108501c
    else
        int64_t x26_1 = 0
        x25_1 = 0
        
        while (true)
            uint32_t i_1 = oggpack_read(arg2, 3)
            int32_t x0_13 = oggpack_read(arg2, 1)
            
            if ((x0_13 & 0x80000000) != 0)
                break
            
            if (x0_13 != 0)
                int32_t x0_15 = oggpack_read(arg2, 5)
                int32_t x8_2
                
                if (x0_15 s< 0)
                    x8_2 = 0
                else
                    x8_2 = x0_15 << 3
                
                if ((x0_15 & 0x80000000) != 0)
                    break
                
                i_1 |= x8_2
            
            int32_t x8_3 = 0
            *(&result[4] + (x26_1 << 2)) = i_1
            
            while (i_1 != 0)
                int32_t x9_1 = i_1 & 1
                i_1 u>>= 1
                x8_3 += x9_1
            
            x26_1 += 1
            x25_1 += x8_3
            
            if (x26_1 s>= sx.q(x24))
                x22_1 = x25_1 s> 0 ? 1 : 0
                
                if (x25_1 s< 1)
                    x22_1 = 0
                    goto label_1084f68
                
                int64_t x26_2 = 0
                
                while (true)
                    int32_t x0_17 = oggpack_read(arg2, 8)
                    
                    if ((x0_17 & 0x80000000) != 0)
                        break
                    
                    *(&result[0x24] + (x26_2 << 2)) = x0_17
                    x26_2 += 1
                    
                    if (x26_2 s>= sx.q(x25_1))
                        goto label_1084f68
                
                goto label_1084ff0

label_1084ff0:

if (result == 0)
label_108501c:
    return result

label_1084ff8:
free(result)
return nullptr
