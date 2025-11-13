// 函数: sub_a0a828
// 地址: 0xa0a828
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

double v8
double var_60 = v8
uint64_t x26
uint64_t var_40 = x26
int64_t x21 = sx.q(*(arg2 + 0xb4))
void* x20 = arg2
DomGame* x19 = arg1
void var_15448
memset(&var_15448, 0, 0xd20)
data_14a71b1 = 1
void var_14728
int64_t result = DeclareWinner(x19, &var_14728)
uint64_t x9 = zx.q(*(x19 + 0xd40))
void var_15460

if (x9.d s>= 1)
    int64_t x8_1 = sx.q(x9.d)
    int32_t x11_1
    int64_t i_14
    
    if (x8_1.d != 1)
        i_14 = x9 & 0xfffffffe
        int32_t x11_2 = 0
        int32_t x12_1 = 0
        char* x13_1 = &var_14728 | 1
        int64_t i_11 = i_14
        int64_t i
        
        do
            uint32_t x15_1 = zx.d(x13_1[-1])
            uint32_t x16_1 = zx.d(*x13_1)
            x13_1 = &x13_1[2]
            i = i_11
            i_11 -= 2
            x11_2 += x15_1
            x12_1 += x16_1
        while (i != 2)
        x11_1 = x12_1 + x11_2
        
        if (i_14 != x9)
            goto label_a0a8e0
    else
        i_14 = 0
        x11_1 = 0
    label_a0a8e0:
        int64_t i_9 = x9 - i_14
        void* x10_1 = &var_14728 + i_14
        int64_t i_1
        
        do
            uint32_t x13_2 = zx.d(*x10_1)
            x10_1 += 1
            i_1 = i_9
            i_9 -= 1
            x11_1 += x13_2
        while (i_1 != 1)
    float v0_1 = fconvert.s(1f) / float.s(x11_1)
    int64_t i_13
    float v2_1
    
    if (x9.d u>= 2)
        i_13 = x8_1 & 0xfffffffffffffffe
        char* x10_2 = &var_14728 | 1
        void var_1545c
        void* x11_3 = &var_1545c
        float v1_1 = 0f
        int64_t i_10 = i_13
        int64_t i_2
        
        do
            uint32_t x13_3 = zx.d(x10_2[-1])
            uint32_t x14_1 = zx.d(*x10_2)
            x10_2 = &x10_2[2]
            
            v2_1 = x13_3 == 0 ? v1_1 : v0_1
            
            float v3_1
            
            v3_1 = x14_1 == 0 ? v1_1 : v0_1
            
            *(x11_3 - 4) = v2_1
            *x11_3 = v3_1
            i_2 = i_10
            i_10 -= 2
            x11_3 += 8
        while (i_2 != 2)
        
        if (i_13 != x8_1)
            goto label_a0a968
    else
        i_13 = 0
    label_a0a968:
        int64_t i_7 = x8_1 - i_13
        void* x10_3 = &var_15460 + (i_13 << 2)
        void* x9_1 = &var_14728 + i_13
        int64_t i_3
        
        do
            uint32_t x11_4 = zx.d(*x9_1)
            x9_1 += 1
            
            v2_1 = x11_4 == 0 ? 0f : v0_1
            
            i_3 = i_7
            i_7 -= 1
            *x10_3 = v2_1
            x10_3 += 4
        while (i_3 != 1)

int32_t x8_2 = *(x20 + 0xb0)

if (x8_2 s< 1)
    int64_t* x8_4 = &data_14a71c8
    data_14a71d0 += 1
    
    if (not(*(&var_15460 + (sx.q(*(x20 + 0xb4)) << 2)) != fconvert.s(1f)))
        *(x20 + 0xe0) = 1
        x8_4 = &data_14a71c8:4
    
    *x8_4 += 1
    *(x20 + 0xb0) = 1
    PlayerScores(x19, &var_14728)
    uint64_t x22_1 = zx.q(*(x19 + 0xd40))
    int32_t var_78
    
    if (x22_1.d s>= 1)
        memcpy(&var_78, &var_14728, x22_1 << 2)
    
    int32_t var_15478[0x4]
    uint128_t v0_2
    uint128_t v1_2
    uint128_t v2_2
    uint128_t v3_2
    uint128_t v4_1
    uint128_t v5_1
    result, v0_2, v1_2, v2_2, v3_2, v4_1, v5_1 =
        std::__ndk1::__sort<std::__ndk1::greater<int32_t>&, int32_t*>(&var_78, 
        &(&var_78)[sx.q(x22_1.d)], &var_15478)
    int64_t x8_5 = zx.q(*(x19 + 0xd40))
    
    if (x8_5.d s> 0)
        int32_t x9_7 = var_78
        int32_t var_74
        int32_t x10_5 = x9_7 - var_74
        int64_t i_15
        
        if (x8_5.d u>= 8)
            i_15 = x8_5 & 0xfffffff8
            v0_2.d = x9_7
            v0_2:4.d = x9_7
            v0_2:8.d = x9_7
            v0_2:0xc.d = x9_7
            v1_2.d = x10_5
            v1_2:4.d = x10_5
            v1_2:8.d = x10_5
            v1_2:0xc.d = x10_5
            void var_14718
            void* x12_2 = &var_14718
            void var_15468
            void* x13_4 = &var_15468
            int64_t i_12 = i_15
            int64_t i_4
            
            do
                v2_2 = *(x12_2 - 0x10)
                v3_2 = *x12_2
                x12_2 += 0x20
                i_4 = i_12
                i_12 -= 8
                v4_1 = vceqq_u32(v2_2, v0_2)
                v5_1 = vceqq_u32(v3_2, v0_2)
                v2_2 = vbslq_s8(v4_1, v1_2, v2_2 - v0_2)
                v3_2 = vbslq_s8(v5_1, v1_2, v3_2 - v0_2)
                *(x13_4 - 0x10) = v2_2
                *x13_4 = v3_2
                x13_4 += 0x20
            while (i_4 != 8)
            
            if (i_15 != x8_5)
                goto label_a0aac4
        else
            i_15 = 0
        label_a0aac4:
            int64_t i_8 = x8_5 - i_15
            void* x12_3 = &var_15478[i_15]
            void* x13_6 = &var_14728 + (i_15 << 2)
            int64_t i_5
            
            do
                int32_t x14_2 = *x13_6
                x13_6 += 4
                int32_t x14_4
                
                if (x14_2 == x9_7)
                    x14_4 = x10_5
                else
                    x14_4 = x14_2 - x9_7
                
                i_5 = i_8
                i_8 -= 1
                *x12_3 = x14_4
                x12_3 += 4
            while (i_5 != 1)
        
        if (x8_5.d s>= 1)
            int64_t x8_6 = 0
            void* x9_8 = x20 + 0x60
            v0_2.d = fconvert.s(1f)
            int64_t x15_2
            
            do
                v1_2.d = *(&var_15460 + (x8_6 << 2))
                *(x9_8 - 0x60) = v1_2.d
                *(x9_8 - 0x30) = v1_2.d
                v2_2.d = var_15478[x8_6]
                v2_2.d = float.s(v2_2.d)
                (&var_78)[x8_6] = v2_2.d
                
                if (v1_2.d f== 0f)
                    *x9_8 = 0xc0a00000
                else if (v1_2.d f!= v0_2.d)
                    *x9_8 = 0
                else
                    *x9_8 = 0x40a00000
                
                x15_2 = sx.q(*(x19 + 0xd40))
                x8_6 += 1
                x9_8 += 4
            while (x8_6 s< x15_2)
            
            x8_5 = zx.q(x15_2.d)
            
            if (x15_2.d s>= 1)
                int64_t x22_2 = 0
                
                do
                    x26 = x22_2 << 2
                    v0_2.d = (&var_78)[x22_2]
                    v0_2.q = fconvert.d(v0_2.d)
                    v0_2.q = v0_2.q f/ fconvert.d(10.0)
                    result, v0_2, v1_2, v2_2, v3_2, v4_1, v5_1 = asinh(v0_2.q)
                    v1_2.q = float.d(0x3fc3333333333333)
                    v0_2.q = v0_2.q f* v1_2.q
                    v0_2.d = fconvert.s(v0_2.q)
                    *(x20 + 0x48 + x26) = v0_2.d
                    x8_5 = sx.q(*(x19 + 0xd40))
                    x22_2 += 1
                while (x22_2 s< x8_5)
    
    int64_t x2_3 = sx.q(*(x20 + 0xb4))
    char* x22_3 = &data_14a71b0
    
    if (zx.d(*(x2_3 * 0x84 + 0x14a76cc)) == 0)
        int64_t x19_1
        void* x20_1
        x19_1, x20_1, x22_3 = sub_9fa200(x19, &var_15448, x2_3.d, &var_14728)
        x19, x20, x21 = sub_a05c90(x19_1, &var_14728, x20_1)
        v0_2, result, v1_2, v2_2, v3_2, v4_1, v5_1 = sub_a06048(x19, &var_14728, x20, x26)
        x8_5 = zx.q(*(x19 + 0xd40))
    
    if (x8_5.d s>= 1)
        v0_2.d = *(x20 + 0x78)
        void* x14_5 = x22_3 + x21 * 0x84
        int64_t i_6 = 0
        void* x9_11 = x20 + 0x60
        v1_2.d = fconvert.s(1f)
        
        do
            v4_1.d = *(x14_5 + 0x538)
            v5_1.d = *(x9_11 - 0x30)
            v2_2.d = *(x14_5 + 0x530)
            v3_2.d = *(x9_11 - 0x48)
            v4_1.d = v4_1.d f* v5_1.d
            v5_1.d = *(x9_11 - 0x60)
            v2_2.d = v2_2.d f* v3_2.d
            v3_2.d = *x9_11
            v2_2.d = v5_1.d f+ v2_2.d
            v2_2.d = v2_2.d f+ v4_1.d
            bool cond:8_1 = v5_1.d f== v1_2.d
            v2_2.d = v2_2.d f+ *(x14_5 + 0x53c) * *(x9_11 - 0x18)
            v5_1.d = *(x14_5 + 0x534) f* v0_2.d
            v3_2.d = *(x14_5 + 0x540) f* v3_2.d
            v2_2.d = v2_2.d f+ v5_1.d
            v4_1.d = float.s(0x3dcccccd)
            v2_2.d = v2_2.d f+ v3_2.d
            v3_2.d = v2_2.d f+ v4_1.d
            
            if (cond:8_1)
                v2_2.d = v3_2.d
            else
                v2_2.d = v2_2.d
            
            *(x9_11 + 0x1c) = v2_2.d
            *(x9_11 + 0x34) = v2_2.d
            i_6 += 1
            x9_11 += 4
        while (i_6 s< sx.q(*(x19 + 0xd40)))
else
    *(x20 + 0xb0) = x8_2 + 1

return result
