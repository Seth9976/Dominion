// 函数: sub_9ff34c
// 地址: 0x9ff34c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0xd8))

if (x8.d s>= 1)
    void* x10_1 = *(arg1 + 0xd0)
    int32_t x9_1
    int64_t i_12
    
    if (x8.d != 1)
        i_12 = x8 & 0xfffffffe
        int32_t x9_2 = 0
        int32_t x12_1 = 0
        int32_t* x13_1 = x10_1 + 0xd4
        int64_t i_9 = i_12
        int64_t i
        
        do
            int32_t x15_1 = x13_1[-0x1c]
            int32_t x16_1 = *x13_1
            x13_1 = &x13_1[0x38]
            x9_2 |= x15_1 s> 0 ? 1 : 0
            i = i_9
            i_9 -= 2
            x12_1 |= x16_1 s> 0 ? 1 : 0
        while (i != 2)
        x9_1 = x12_1 | x9_2
        
        if (i_12 != x8)
            goto label_9ff3c0
    else
        i_12 = 0
        x9_1 = 0
    label_9ff3c0:
        int32_t* x10_3 = x10_1 + i_12 * 0x70 + 0x64
        int64_t i_6 = x8 - i_12
        int64_t i_1
        
        do
            int32_t x12_2 = *x10_3
            x10_3 = &x10_3[0x1c]
            i_1 = i_6
            i_6 -= 1
            x9_1 |= x12_2 s> 0 ? 1 : 0
        while (i_1 != 1)
    
    if (x8.d s>= 1)
        void* x11_1 = *(arg1 + 0xd0)
        int32_t x10_4
        
        if ((x9_1 & 1) == 0)
            int64_t i_14
            
            if (x8.d != 1)
                i_14 = x8 & 0xfffffffe
                void* x13_3 = x11_1 + 0xc0
                int32_t x10_6 = -1
                int64_t i_11 = i_14
                int32_t x15_4 = -1
                int64_t i_2
                
                do
                    int32_t x16_4 = *(x13_3 - 0x70)
                    int32_t x17 = *x13_3
                    x13_3 += 0xe0
                    
                    if (x16_4 s> x10_6)
                        x10_6 = x16_4
                    
                    if (x17 s> x15_4)
                        x15_4 = x17
                    
                    i_2 = i_11
                    i_11 -= 2
                while (i_2 != 2)
                
                x10_4 = x10_6 s> x15_4 ? x10_6 : x15_4
                
                if (i_14 != x8)
                    goto label_9ff4d0
            else
                i_14 = 0
                x10_4 = -1
            label_9ff4d0:
                int32_t* x11_3 = x11_1 + i_14 * 0x70 + 0x50
                int64_t i_7 = x8 - i_14
                int64_t i_3
                
                do
                    int32_t x13_4 = *x11_3
                    x11_3 = &x11_3[0x1c]
                    
                    if (x13_4 s> x10_4)
                        x10_4 = x13_4
                    
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
        else
            int64_t i_13
            
            if (x8.d != 1)
                i_13 = x8 & 0xfffffffe
                void* x13_2 = x11_1 + 0xc0
                int32_t x10_5 = -1
                int64_t i_10 = i_13
                int32_t x15_3 = -1
                int64_t i_4
                
                do
                    int32_t x16_3 = *(x13_2 - 0x5c)
                    
                    if (x16_3 != 0)
                        arg6 = *(x13_2 - 0x70)
                    
                    int32_t x3 = *(x13_2 + 0x14)
                    
                    if (x3 != 0)
                        arg5 = *x13_2
                    
                    if (arg6 s<= x10_5)
                        arg6 = x10_5
                    
                    if (arg5 s<= x15_3)
                        arg5 = x15_3
                    
                    if (x16_3 != 0)
                        x10_5 = arg6
                    
                    if (x3 != 0)
                        x15_3 = arg5
                    
                    i_4 = i_10
                    i_10 -= 2
                    x13_2 += 0xe0
                while (i_4 != 2)
                
                x10_4 = x10_5 s> x15_3 ? x10_5 : x15_3
                
                if (i_13 != x8)
                    goto label_9ff578
            else
                i_13 = 0
                x10_4 = -1
            label_9ff578:
                int32_t* x11_6 = x11_1 + i_13 * 0x70 + 0x50
                int64_t i_8 = x8 - i_13
                int64_t i_5
                
                do
                    if (x11_6[5] != 0)
                        int32_t x13_8 = *x11_6
                        
                        if (x13_8 s> x10_4)
                            x10_4 = x13_8
                    
                    i_5 = i_8
                    i_8 -= 1
                    x11_6 = &x11_6[0x1c]
                while (i_5 != 1)
        
        if (x8.d s< 1)
            *arg3 = x10_4
            return 0xffffffff
        
        float* x11_4 = *(arg1 + 0xd0)
        int64_t x12_4 = sx.q(arg2)
        uint64_t result
        float v0
        float v1
        
        if ((x9_1 & 1) == 0)
            int64_t x9_4 = 0
            void* x11_7 = &x11_4[0xb]
            result = 0xffffffff
            v0 = float.s(0xc479c000)
            
            do
                if (*(x11_7 + 0x24) s>= x10_4)
                    v1 = *(x11_7 + (x12_4 << 2))
                    
                    if (not(v1 <= v0))
                        result = zx.q(x9_4.d)
                        v0 = v1
                
                x9_4 += 1
                x11_7 += 0x70
            while (x8 != x9_4)
        else
            int64_t x9_3 = 0
            result = 0xffffffff
            v0 = float.s(0xc479c000)
            
            do
                if (x11_4[0x19] != 0 && x11_4[0x14] s>= x10_4)
                    v1 = *(x11_4 + (x12_4 << 2) + 0x2c)
                    
                    if (not(v1 <= v0))
                        result = zx.q(x9_3.d)
                        v0 = v1
                
                x9_3 += 1
                x11_4 = &x11_4[0x1c]
            while (x8 != x9_3)
        *arg3 = x10_4
        return result

*arg3 = 0xffffffff
return 0xffffffff
