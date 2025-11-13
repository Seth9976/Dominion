// 函数: sub_108e8fc
// 地址: 0x108e8fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = calloc(1, 0xc88)
int32_t x8 = *(arg1 + 4)
int32_t x0_1
void* x23_1

if (x8 s>= 1)
    x23_1 = *(arg1 + 0x30)
    x0_1 = oggpack_read(arg2, 1)

if (x8 s< 1 || (x0_1 & 0x80000000) != 0)
    if (result == 0)
        return result
else
    int32_t x24_1
    
    if (x0_1 == 0)
        x24_1 = 1
        *result = 1
    label_108e98c:
        int32_t x0_5 = oggpack_read(arg2, 1)
        
        if ((x0_5 & 0x80000000) == 0)
            if (x0_5 == 0)
            label_108ea34:
                
                if (oggpack_read(arg2, 2) == 0)
                    if (x24_1 s<= 1)
                    label_108eab0:
                        
                        if (x24_1 s< 1)
                            return result
                    else if (*(arg1 + 4) s>= 1)
                        int64_t i = 0
                        
                        do
                            int32_t x0_21 = oggpack_read(arg2, 4)
                            result[1 + i] = x0_21
                            
                            if (x24_1 s<= x0_21)
                                goto label_108ea40
                            
                            if ((x0_21 & 0x80000000) != 0)
                                goto label_108ea40
                            
                            i += 1
                        while (i s< sx.q(*(arg1 + 4)))
                        
                        goto label_108eab0
                    
                    int64_t x21_1 = 0
                    
                    while (true)
                        oggpack_read(arg2, 8)
                        int32_t x0_24 = oggpack_read(arg2, 8)
                        result[x21_1 + 0x101] = x0_24
                        
                        if ((x0_24 & 0x80000000) != 0)
                            break
                        
                        if (*(x23_1 + 0x18) s<= x0_24)
                            break
                        
                        int32_t x0_26 = oggpack_read(arg2, 8)
                        result[x21_1 + 0x111] = x0_26
                        
                        if ((x0_26 & 0x80000000) != 0)
                            break
                        
                        if (*(x23_1 + 0x1c) s<= x0_26)
                            break
                        
                        x21_1 += 1
                        
                        if (x21_1 s>= sx.q(x24_1))
                            return result
            else
                int32_t x9_1 = oggpack_read(arg2, 8) + 1
                result[0x121] = x9_1
                
                if (x9_1 s>= 1)
                    int32_t x8_1 = *(arg1 + 4)
                    int64_t i_1 = 0
                    
                    do
                        int32_t x0_11 = oggpack_read(arg2, zx.q(ov_ilog(zx.q(x8_1 - 1))))
                        void* x27_1 = &result[i_1]
                        *(x27_1 + 0x488) = x0_11
                        int32_t x0_15 = oggpack_read(arg2, zx.q(ov_ilog(zx.q(*(arg1 + 4) - 1))))
                        *(x27_1 + 0x888) = x0_15
                        
                        if (x0_11 == x0_15)
                            goto label_108ea40
                        
                        if (((x0_15 | x0_11) & 0x80000000) != 0)
                            goto label_108ea40
                        
                        x8_1 = *(arg1 + 4)
                        
                        if (x8_1 s<= x0_11)
                            goto label_108ea40
                        
                        if (x8_1 s<= x0_15)
                            goto label_108ea40
                        
                        i_1 += 1
                    while (i_1 s< sx.q(x9_1))
                    
                    goto label_108ea34
    else
        x24_1 = oggpack_read(arg2, 4) + 1
        *result = x24_1
        
        if (x24_1 s>= 1)
            goto label_108e98c

label_108ea40:
free(result)
return nullptr
