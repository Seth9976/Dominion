// 函数: _vp_tonemask
// 地址: 0x108b0c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t x2 = sx.q(arg1[0x13])
uint64_t x9 = zx.q(*arg1)
int64_t x8_1 = sx.q(x9.d)
void var_50
void* result = &var_50 - (((x2 << 2) + 0xf) & 0xfffffffffffffff0)
void* x10 = *(arg1 + 8)
uint128_t v2
v2.d = *(x10 + 4)
float128 v3

if (x2.d s>= 1)
    int64_t i_15 = 0
    int64_t x12_1 = x2 & 0xffffffff
    
    if (x2.d u>= 8)
        i_15 = x12_1 & 0xfffffff8
        void* x13_1 = result + 0x10
        v3.d = 0xc61c3c00
        v3:4.d = 0xc61c3c00
        v3:8.d = 0xc61c3c00
        v3:0xc.d = 0xc61c3c00
        int64_t i_12 = i_15
        int64_t i
        
        do
            *(x13_1 - 0x10) = v3
            *x13_1 = v3
            i = i_12
            i_12 -= 8
            x13_1 += 0x20
        while (i != 8)
    
    if (x2.d u< 8 || i_15 != x12_1)
        void* x13_2 = result + (i_15 << 2)
        int64_t i_9 = x12_1 - i_15
        int32_t i_1
        
        do
            i_1 = i_9
            i_9 -= 1
            *x13_2 = 0xc61c3c00
            x13_2 += 4
        while (i_1 != 1)

if (x8_1.d s>= 1)
    v3.d = *(x10 + 8)
    void* x11_3 = *(arg1 + 0x20)
    arg5.d = v2.d f+ arg5.d
    int64_t i_17 = 0
    arg5.d = vmaxnm_f32(arg5.d, v3.d)
    float128 v4
    
    if (x8_1.d u< 8)
    label_108b204:
        int64_t x14_2 = i_17 << 2
        void* x13_5 = arg3 + x14_2
        int32_t* x11_4 = x11_3 + x14_2
        int64_t i_10 = x9 - i_17
        int64_t i_2
        
        do
            v2.d = *x11_4
            x11_4 = &x11_4[1]
            i_2 = i_10
            i_10 -= 1
            v2.d = v2.d f+ arg5.d
            *x13_5 = v2.d
            x13_5 += 4
        while (i_2 != 1)
    else
        uint64_t x12_2 = x9 << 2
        
        if (x11_3 + x12_2 u> arg3)
            i_17 = 0
        
        if (x11_3 + x12_2 u> arg3 && x11_3 u< arg3 + x12_2)
            goto label_108b204
        
        i_17 = x9 & 0xfffffff8
        v2 = vdupq_laneq_s32(arg5, 0)
        void* x13_4 = x11_3 + 0x10
        float128* x14_1 = arg3 + 0x10
        int64_t i_13 = i_17
        int64_t i_3
        
        do
            v3 = *(x13_4 - 0x10)
            v4 = *x13_4
            x13_4 += 0x20
            i_3 = i_13
            i_13 -= 8
            v3 = vaddq_f32(v3, v2)
            v4 = vaddq_f32(v4, v2)
            x14_1[-1] = v3
            *x14_1 = v4
            x14_1 = &x14_1[2]
        while (i_3 != 8)
        
        if (i_17 != x9)
            goto label_108b204
    
    if (x9.d s> 0)
        v4.d = *(x10 + 0x1f0)
        int64_t x9_1 = *(arg1 + 0x10)
        int64_t x10_1 = *(arg1 + 0x28)
        v3.q = 0x3fb99999a0000000
        int64_t x13_6 = 0
        arg5.d = fconvert.s(6f)
        arg4 = v4.d f- arg4
        v4.d = fconvert.s(-16f)
        
        do
            float v5 = *(arg2 + (x13_6 << 2))
            int64_t i_4 = *(x10_1 + (x13_6 << 3))
            int64_t x15_1 = x13_6 + 1
            int64_t x16_1
            double v6
            
            if (x15_1 s>= x8_1)
                x16_1 = x13_6
            else
                while (*(x10_1 + (x15_1 << 3)) == i_4)
                    v6.d = *(arg2 + (x15_1 << 2))
                    x15_1 += 1
                    v5 = vmaxnm_f32(v6.d, v5)
                    
                    if (x15_1 s>= x8_1)
                        break
                
                x16_1 = x15_1 - 1
            
            v6.d = *(arg3 + (x16_1 << 2))
            x13_6 = x15_1
            
            if (not(v5 f+ arg5.d f<= v6.d))
                int64_t x15_2 = *(arg1 + 0x40)
                v6.d = arg4 + v5
                v6 = vfma_f64(-3.0000000447034836, fconvert.d(v6.d), 0.10000000149011612)
                int64_t x14_3 = i_4 s>> x15_2
                int64_t x14_4
                
                x14_4 = x14_3 s< 0x10 ? x14_3 : 0x10
                
                uint32_t temp0_4 = vcvtd_s32_f64(v6)
                int32_t x15_3 = temp0_4 & not.d(temp0_4 s>> 0x1f)
                int32_t x15_4
                
                x15_4 = x15_3 s< 7 ? x15_3 : 7
                
                int32_t* x14_7 =
                    *(*(x9_1 + ((x14_4 & not.q(x14_4 s>> 0x3f)) << 3)) + (zx.q(x15_4) << 3))
                v6.d = *x14_7
                uint32_t temp0_5 = vcvts_s32_f32(x14_7[1])
                uint32_t temp0_6 = vcvts_s32_f32(v6.d)
                
                if (temp0_6 s< temp0_5)
                    int64_t x15_5 = sx.q(arg1[0x12])
                    v6.d = v6.d f+ v4.d
                    int128_t v17
                    v17.d = float.s(x15_5.d s>> 1)
                    unimplemented  {fnmsub s6, s6, s7, s17}
                    v6.d = v6.d f+ float.s((*(x10_1 + (x16_1 << 3))).d - arg1[0xe])
                    int64_t x17_5 = sx.q(vcvts_s32_f32(v6.d))
                    int64_t x18_3 = sx.q(temp0_6) + 2
                    bool cond:14_1
                    
                    do
                        if (x17_5 s>= 1)
                            v6.d = x14_7[x18_3]
                            v6.d = v6.d f+ v5
                            
                            if (not(*(result + (x17_5 << 2)) f>= v6.d))
                                *(result + (x17_5 << 2)) = v6.d
                        
                        x17_5 += x15_5
                        
                        if (x17_5 s>= x2)
                            break
                        
                        cond:14_1 = x18_3 - 1 s< sx.q(temp0_5)
                        x18_3 += 1
                    while (cond:14_1)
        while (x13_6 s< x8_1)

int32_t x22 = arg1[0x12]
uint128_t v0
int128_t v1
int128_t v2_1
v0, v1, v2_1 = sub_108c4dc(result, x22, x2)
int64_t x8_2 = sx.q(*arg1)
int64_t x9_2 = 0

if (x8_2.d s> 1)
    int64_t* x10_2 = *(arg1 + 0x28)
    int64_t x11_5 = *(arg1 + 0x38)
    void* x12_4 = *(arg1 + 8)
    int64_t x15_6 = *x10_2
    v0.d = 0xc61c3c00
    x9_2 = 0
    int64_t x16_4 = x15_6 - (x11_5 + sx.q(x22 s>> 1))
    int64_t x17_6 = 1
    
    while (true)
        v1.d = *(result + (x16_4 << 2))
        v2_1.d = *(x12_4 + 0x20)
        int64_t x18_4 = (x10_2[x17_6] + x15_6) s>> 1
        int64_t x17_9 = x18_4 - x11_5
        v1.d = vminnm_f32(v1.d, v2_1.d)
        
        if (x16_4 s< x17_9)
            int64_t i_14 = neg.q(x11_5) + x18_4 - x16_4
            void* x16_5 = result + 4 + (x16_4 << 2)
            int64_t i_5
            
            do
                v2_1.d = *x16_5
                
                if (v2_1.d f<= -9999f)
                    if (not(v1.d f!= -9999f))
                        v1 = v2_1
                else if (v1.d f== -9999f || not(v2_1.d f>= v1.d))
                    v1 = v2_1
                
                i_5 = i_14
                i_14 -= 1
                x16_5 += 4
            while (i_5 != 1)
            x16_4 = x17_9
        
        if (x9_2 s< x8_2)
            int64_t x17_10 = x16_4 + x11_5
            
            if (x15_6 s<= x17_10)
                int64_t x15_7
                bool cond:13_1
                
                do
                    v2_1.d = *(arg3 + (x9_2 << 2))
                    
                    if (not(v2_1.d f>= v1.d))
                        *(arg3 + (x9_2 << 2)) = v1.d
                    
                    x15_7 = x9_2 + 1
                    
                    if (x15_7 s>= x8_2)
                        break
                    
                    cond:13_1 = x10_2[x9_2 + 1] s<= x17_10
                    x9_2 = x15_7
                while (cond:13_1)
                x9_2 = x15_7
        
        x17_6 = x9_2 + 1
        
        if (x17_6 s>= x8_2)
            break
        
        x15_6 = x10_2[x9_2]

if (x9_2 s< x8_2)
    v0.d = *(result + (sx.q(arg1[0x13]) << 2) - 4)
    int64_t x10_5 = x8_2 - x9_2
    int64_t i_16
    
    if (x10_5 u>= 4)
        i_16 = x10_5 & 0xfffffffffffffffc
        void* x12_5 = arg3 + (x9_2 << 2)
        v1 = vdup_laneq_s32(v0, 0)
        x9_2 += i_16
        void* x12_6 = x12_5 + 8
        int64_t i_11 = i_16
        int64_t i_6
        
        do
            v3.q = *(x12_6 - 8)
            v2_1.q = *x12_6
            v3 = vcgt_f32(v1, v3)
            
            if ((v3.d & 1) != 0)
                *(x12_6 - 8) = v0.d
            
            if ((v3:4.d & 1) != 0)
                *(x12_6 - 4) = v0.d
            
            v2_1 = vcgt_f32(v1, v2_1)
            
            if ((v2_1.d & 1) != 0)
                *x12_6 = v0.d
            
            if ((v2_1:4.d & 1) != 0)
                *(x12_6 + 4) = v0.d
            
            i_6 = i_11
            i_11 -= 4
            x12_6 += 0x10
        while (i_6 != 4)
    
    if (x10_5 u< 4 || x10_5 != i_16)
        int64_t i_8 = x8_2 - x9_2
        void* x9_5 = arg3 + (x9_2 << 2)
        int64_t i_7
        
        do
            v1.d = *x9_5
            
            if (not(v1.d f>= v0.d))
                *x9_5 = v0.d
            
            i_7 = i_8
            i_8 -= 1
            x9_5 += 4
        while (i_7 != 1)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
