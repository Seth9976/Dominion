// 函数: sub_9fe6ec
// 地址: 0x9fe6ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(data_14a71b4)

if (x9.d s< 1)
    return 

int64_t x10_1 = sx.q(x9.d)
int64_t x11_1 = 0

do
    uint64_t x14_3 = arg1
    
    if (x11_1 s< x10_1 - 1)
        x14_3 = *((x11_1 << 4) + 0x11d5220)
    
    void* x17_1 = *(&data_11d5210 + (x11_1 << 4))
    int64_t x15_3 = sx.q(*((x11_1 << 4) + &data_11d5218))
    int64_t* x16_3 = *(x17_1 + 0xd0)
    void* x2_1 = x16_3 + x15_3 * 0x70
    *(x17_1 + 0xb0) += 1
    int32_t x1_3 = *(x2_1 + 0x50)
    int64_t x17_2 = sx.q(*(x2_1 + 0xc))
    *(x2_1 + 0x68) = 0
    *(x2_1 + 0x50) = x1_3 + 1
    
    if (x17_2.d s>= 1)
        int64_t x1_6 = 0
        
        do
            if (*(x16_3[x15_3 * 0xe] + (x1_6 << 3)) == x14_3)
                int32_t* x14_2 = *(x16_3 + x15_3 * 0x70 + 0x48)
                x14_2[x1_6] += 1
                break
            
            x1_6 += 1
        while (x1_6 s< x17_2)
    
    x11_1 += 1
while (x11_1 != x9)

if (x9.d s< 1)
    return 

int64_t x9_1 = x10_1 & 0xffffffff

while (true)
    void* x13_2 = *(&data_11d5210 + ((x9_1 - 1) << 4))
    
    if (zx.d(*(x13_2 + 0xe4)) == 0)
        int32_t i_4 = *(x13_2 + 0xd8)
        int32_t x15_5
        int32_t x16_6
        int32_t x17_7
        
        if (i_4 s< 1)
        label_9fe8f4:
            x16_6 = 0
            x17_7 = 0
            x15_5 = 1
        else
            int64_t i = 0
            
            do
                int64_t* x16_4 = *(x13_2 + 0xd0)
                
                if (*(x16_4 + i * 0x70 + 0x50) != 0)
                    uint64_t j_2 = zx.q(*(x16_4 + i * 0x70 + 0xc))
                    int32_t x17_3
                    
                    if (j_2.d s< 1)
                    label_9fe81c:
                        x17_3 = 0
                    else
                        int64_t* x0 = x16_4[i * 0xe]
                        x17_3 = 0
                        uint64_t j
                        
                        do
                            int32_t x1_8 = *(*x0 + 0xe0)
                            
                            if (x1_8 == 0)
                                goto label_9fe81c
                            
                            if (x1_8 s> x17_3)
                                x17_3 = x1_8
                            
                            j = j_2
                            j_2 -= 1
                            x0 = &x0[1]
                        while (j != 1)
                    
                    *(x16_4 + i * 0x70 + 0x64) = x17_3
                    i_4 = *(x13_2 + 0xd8)
                
                i += 1
            while (i s< sx.q(i_4))
            
            if (i_4 s< 1)
                goto label_9fe8f4
            
            uint64_t i_5 = zx.q(i_4)
            int32_t x16_5 = 0x270f
            void* x0_1 = *(x13_2 + 0xd0) + 0x64
            x15_5 = 1
            
            while (true)
                if (*(x0_1 - 0x14) != 0)
                    int32_t x1_10 = *x0_1
                    
                    if (x1_10 s>= 1)
                        if (x1_10 s< x16_5)
                            x16_5 = x1_10
                        
                        uint64_t i_7 = i_5
                        i_5 -= 1
                        x0_1 += 0x70
                        
                        if (i_7 == 1)
                            break
                        
                        continue
                
                x15_5 = 0
                uint64_t i_6 = i_5
                i_5 -= 1
                x0_1 += 0x70
                
                if (i_6 == 1)
                    break
            
            if (x16_5 s>= 0x270f)
                x17_7 = 0
            else
                x17_7 = x16_5 + 1
            
            x16_6 = 1
        
        bool z_1
        
        if (*(x13_2 + 0xb8) != *(x13_2 + 0xb4))
            z_1 = x15_5 == 0
        else
            z_1 = false
        
        int32_t x15_6
        
        x15_6 = not(z_1) ? x17_7 : 0
        
        *(x13_2 + 0xe0) = x15_6
        float128 v0
        float128 v1
        float128 v2
        uint128_t v3
        float v4
        
        if (x16_6 != 0)
            int64_t i_1 = 0
            
            do
                int64_t x16_7 = *(x13_2 + 0xd0)
                
                if (*(x16_7 + i_1 * 0x70 + 0x50) != 0)
                    uint64_t j_3 = zx.q(*(x16_7 + i_1 * 0x70 + 0xc))
                    int32_t x14_8
                    
                    if (j_3.d s< 1)
                        x14_8 = 0
                        v0.q = 0
                        v1.q = 0
                        v1:8.q = 0
                    else
                        uint64_t* x1_12 = x16_7 + i_1 * 0x70
                        arg1 = *x1_12
                        int32_t* x1_13 = x1_12[9]
                        x14_8 = 0
                        v0.q = 0
                        v1.q = 0
                        v1:8.q = 0
                        uint64_t j_1
                        
                        do
                            void* x2_3 = *arg1
                            arg1 += 8
                            int32_t x3_2 = *x1_13
                            x1_13 = &x1_13[1]
                            j_1 = j_3
                            j_3 -= 1
                            v3.q = *(x2_3 + 0xa4)
                            v4 = float.s(x3_2)
                            x14_8 += x3_2
                            v2.d = (*(x2_3 + 0x94)).d f* v4
                            v2:4.d = v2:4.d f* v4
                            v2:8.d = v2:8.d f* v4
                            v2:0xc.d = v2:0xc.d f* v4
                            v3.d = v3.d f* v4
                            v3:4.d = v3:4.d f* v4
                            v1 = vaddq_f32(v1, v2)
                            v0 = vadd_f32(v0, v3)
                        while (j_1 != 1)
                    
                    v2.d = float.s(x14_8)
                    v3 = vdupq_laneq_s32(v2, 0)
                    v2 = vdup_laneq_s32(v2, 0)
                    void* x14_9 = x16_7 + i_1 * 0x70
                    v1 = vdivq_f32(v1, v3)
                    v0 = vdiv_f32(v0, v2)
                    *(x14_9 + 0x2c) = v1
                    *(x14_9 + 0x3c) = v0.q
                    i_4 = *(x13_2 + 0xd8)
                
                i_1 += 1
            while (i_1 s< sx.q(i_4))
        
        v0 = *(x13_2 + 0x7c)
        v1.q = *(x13_2 + 0x8c)
        int32_t x14_4
        
        if (i_4 s< 1)
            x14_4 = 1
        else
            uint64_t i_3 = zx.q(i_4)
            x14_4 = 1
            void* x16_9 = *(x13_2 + 0xd0) + 0x50
            uint64_t i_2
            
            do
                int32_t x17_10 = *x16_9
                
                if (x17_10 != 0)
                    v3.q = *(x16_9 - 0x14)
                    v4 = float.s(x17_10)
                    x14_4 += x17_10
                    v2.d = (*(x16_9 - 0x24)).d f* v4
                    v2:4.d = v2:4.d f* v4
                    v2:8.d = v2:8.d f* v4
                    v2:0xc.d = v2:0xc.d f* v4
                    v3.d = v3.d f* v4
                    v3:4.d = v3:4.d f* v4
                    v0 = vaddq_f32(v0, v2)
                    v1 = vadd_f32(v1, v3)
                
                i_2 = i_3
                i_3 -= 1
                x16_9 += 0x70
            while (i_2 != 1)
        
        v2.d = float.s(x14_4)
        v3 = vdupq_laneq_s32(v2, 0)
        v2 = vdup_laneq_s32(v2, 0)
        v0 = vdivq_f32(v0, v3)
        v1 = vdiv_f32(v1, v2)
        *(x13_2 + 0x94) = v0
        *(x13_2 + 0xa4) = v1.q
    
    bool cond:2_1 = x9_1 s<= 1
    x9_1 -= 1
    
    if (cond:2_1)
        break
