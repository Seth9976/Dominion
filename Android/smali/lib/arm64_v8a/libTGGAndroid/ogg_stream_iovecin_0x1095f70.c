// 函数: ogg_stream_iovecin
// 地址: 0x1095f70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1

if (arg1 == 0)
    x8_1 = -1
else
    int64_t x0 = *arg1
    
    if (x0 == 0)
        x8_1 = -1
    else if (arg2 == 0)
        x8_1 = 0
    else
        int64_t x25_1
        int64_t x8_2
        
        if (arg3 s< 1)
            x25_1 = 0
            x8_2 = arg1[3]
            
            if (x8_2 != 0)
            label_1096014:
                int64_t x9_1 = arg1[2]
                size_t x2 = x9_1 - x8_2
                arg1[2] = x2
                
                if (x9_1 != x8_2)
                    memmove(x0, x0 + x8_2, x2)
                
                arg1[3] = 0
        else
            int64_t i = 0
            x25_1 = 0
            int64_t* x11_1 = arg2 + 8
            x8_1 = -1
            
            do
                int64_t x13_1 = *x11_1
                
                if ((x13_1 & 0xffffffff80000000) != 0)
                    return zx.q(x8_1)
                
                if (x25_1 s> 0x7fffffffffffffff - x13_1)
                    return zx.q(x8_1)
                
                i += 1
                x25_1 += x13_1
                x11_1 = &x11_1[2]
            while (i s< sx.q(arg3))
            
            x8_2 = arg1[3]
            
            if (x8_2 != 0)
                goto label_1096014
        int64_t x8_3 = arg1[1]
        
        if (x8_3 - x25_1 s> arg1[2])
            goto label_1096088
        
        int64_t x0_2
        size_t bytes
        
        if (x8_3 s<= 0x7fffffffffffffff - x25_1)
            size_t bytes_1 = x8_3 + x25_1
            
            if (bytes_1 s< 0x7ffffffffffffbff)
                bytes = bytes_1 + 0x400
            else
                bytes = bytes_1
            
            x0_2 = realloc(*arg1, bytes)
        
        if (x8_3 s> 0x7fffffffffffffff - x25_1 || x0_2 == 0)
            int64_t x0_6 = *arg1
            
            if (x0_6 != 0)
                free(x0_6)
            
            int64_t x0_7 = arg1[4]
            
            if (x0_7 != 0)
                free(x0_7)
            
            int64_t x0_8 = arg1[5]
            
            if (x0_8 != 0)
                free(x0_8)
            
            memset(arg1, 0, 0x198)
            x8_1 = -1
        else
            *arg1 = x0_2
            arg1[1] = bytes
        label_1096088:
            int64_t x26_1 = x25_1 s/ 0xff
            
            if (sub_10961e8(arg1, x26_1 + 1) == 0)
                if (arg3 s>= 1)
                    int64_t x8_6 = arg1[2]
                    uint64_t i_2 = zx.q(arg3)
                    void* x22_1 = arg2 + 8
                    uint64_t i_1
                    
                    do
                        memcpy(*arg1 + x8_6, *(x22_1 - 8), *x22_1)
                        int64_t x8_7 = sx.q(*x22_1)
                        i_1 = i_2
                        i_2 -= 1
                        x22_1 += 0x10
                        x8_6 = x8_7 + arg1[2]
                        arg1[2] = x8_6
                    while (i_1 != 1)
                
                int32_t* x8_8 = arg1[4]
                int64_t x9_8
                int64_t x10_4
                
                if (x25_1 s<= 0xfe)
                    x9_8 = arg1[5]
                    x10_4 = 0
                else
                    x9_8 = arg1[5]
                    int64_t x10_3 = 0
                    
                    do
                        int64_t x12_2 = x10_3 + arg1[7]
                        x8_8[x12_2] = 0xff
                        x10_3 += 1
                        *(x9_8 + (x12_2 << 3)) = arg1[0x32]
                    while (x26_1 != x10_3)
                    
                    x10_4 = x26_1 & 0xffffffff
                
                int64_t x10_5 = arg1[7] + x10_4
                x8_8[x10_5] = x25_1.d - x26_1.d * 0xff
                *(x9_8 + (x10_5 << 3)) = arg5
                int64_t x9_9 = arg1[7]
                arg1[0x32] = arg5
                x8_8[x9_9] |= 0x100
                int64_t x8_9 = arg1[0x31]
                arg1[7] = x9_9 + x26_1 + 1
                arg1[0x31] = x8_9 + 1
                x8_1 = 0
                
                if (arg4 != 0)
                    arg1[0x2e].d = 1
            else
                x8_1 = -1

return zx.q(x8_1)
