// 函数: sub_1083954
// 地址: 0x1083954
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_3 = *(*(*(*(arg1 + 0x68) + 8) + 0x30) + (*(arg1 + 0x38) << 3))
int64_t x8_4

if (x8_3 s< 0)
    x8_4 = x8_3 + 1
else
    x8_4 = x8_3

int32_t x8_5 = (x8_4 s>> 1).d

if (arg3 == 0)
    memset(arg4, 0, zx.q(x8_5) << 0x20 s>> 0x1e)
    return 0

void* x9_1 = *(arg2 + 0x510)
int64_t x13_1 = sx.q(*(arg2 + 0x504))
int32_t x10_1 = *(x9_1 + 0x340)
int32_t x12_2 = x10_1 * *arg3
int32_t x12_3

x12_3 = x12_2 s< 0xff ? x12_2 : 0xff

int32_t x18_1 = x12_3 & not.d(x12_3 s>> 0x1f)
int32_t x12_4
int32_t x17_4
uint128_t v0
uint128_t v1

if (x13_1.d s< 2)
    x12_4 = 0
    x17_4 = x18_1
    
    if (0 s< x8_5)
    label_1083aec:
        v0.d = *(&data_869a7c + (sx.q(x17_4) << 2))
        int64_t x12_6 = sx.q(x12_4)
        int64_t x8_6 = sx.q(x8_5)
        int64_t x9_2 = x8_6 - x12_6
        int64_t x10_2 = x12_6
        int64_t i_5
        
        if (x9_2 u> 7)
            i_5 = x9_2 & 0xfffffffffffffff8
            v1 = vdupq_laneq_s32(v0, 0)
            x10_2 = i_5 + x12_6
            void* x12_7 = &arg4[x12_6 + 4]
            int64_t i_4 = i_5
            int64_t i
            
            do
                float128 v3 = *x12_7
                i = i_4
                i_4 -= 8
                float128 v2 = vmulq_f32(*(x12_7 - 0x10), v1, 0)
                v3 = vmulq_f32(v3, v1, 0)
                *(x12_7 - 0x10) = v2
                *x12_7 = v3
                x12_7 += 0x20
            while (i != 8)
        
        if (x9_2 u<= 7 || x9_2 != i_5)
            void* x9_3 = &arg4[x10_2]
            int64_t i_3 = x8_6 - x10_2
            int64_t i_1
            
            do
                v1.d = *x9_3
                i_1 = i_3
                i_3 -= 1
                v1.d = v1.d f* v0.d
                *x9_3 = v1.d
                x9_3 += 4
            while (i_1 != 1)
else
    int32_t x0 = 0
    x12_4 = 0
    int64_t x15_1 = 1
    
    do
        int64_t x1 = sx.q(*(arg2 + 0x104 + (x15_1 << 2)))
        int32_t x17_1 = arg3[x1]
        
        if ((x17_1 & 0xffff8000) != 0)
            x17_4 = x18_1
        else
            int32_t x17_2 = x17_1 * x10_1
            x12_4 = *(x9_1 + (x1 << 2) + 0x344)
            int32_t x17_3
            
            x17_3 = x17_2 s< 0xff ? x17_2 : 0xff
            
            x17_4 = x17_3 & not.d(x17_3 s>> 0x1f)
            int32_t x6_1 = x17_4 - x18_1
            int32_t x1_1 = x12_4 - x0
            int32_t x4_1 = x6_1 s/ x1_1
            int32_t x7_1 = x4_1 * x1_1
            int32_t x5_1
            
            if (x17_4 - x18_1 s< 0)
                x5_1 = neg.d(x6_1)
            else
                x5_1 = x6_1
            
            int32_t x20_1
            
            if (x7_1 s< 0)
                x20_1 = neg.d(x7_1)
            else
                x20_1 = x7_1
            
            int32_t x7_2
            
            x7_2 = x12_4 s< x8_5 ? x12_4 : x8_5
            
            if (x7_2 s> x0)
                int64_t x19_1 = zx.q(x0) << 0x20 s>> 0x1e
                v0.d = *(&data_869a7c + (sx.q(x18_1) << 2))
                v1.d = *(arg4 + x19_1)
                v0.d = v1.d f* v0.d
                *(arg4 + x19_1) = v0.d
            
            if (x0 + 1 s< x7_2)
                int32_t x19_2 = 0
                int64_t i_2 = sx.q(x0 + 1)
                
                do
                    int32_t x19_3 = x19_2 + x5_1 - x20_1
                    int32_t x21_2
                    
                    if (x19_3 s< x1_1)
                        x21_2 = 0
                    else
                        x21_2 = x6_1 s>> 0x1f | 1
                    
                    x18_1 = x18_1 + x4_1 + x21_2
                    v0.d = arg4[i_2]
                    v1.d = *(&data_869a7c + (sx.q(x18_1) << 2))
                    i_2 += 1
                    int32_t x21_3
                    
                    x21_3 = x19_3 s< x1_1 ? 0 : x1_1
                    
                    x19_2 = x19_3 - x21_3
                    v0.d = v0.d f* v1.d
                    arg4[i_2] = v0.d
                while (i_2 s< sx.q(x7_2))
            
            x0 = x12_4
        
        x15_1 += 1
        x18_1 = x17_4
    while (x15_1 s< x13_1)
    
    if (x12_4 s< x8_5)
        goto label_1083aec
return 1
