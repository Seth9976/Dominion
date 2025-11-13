// 函数: sub_10951b8
// 地址: 0x10951b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x8 + 0x28)
void var_20
void* x9_2 = &var_20 - (((zx.q(arg2 + 1) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
float128 v0

if ((arg2 & 0x80000000) == 0)
    int64_t i_4 = 0
    uint64_t x11_1 = zx.q(arg2 + 1)
    
    if (arg2 + 1 u> 3)
        i_4 = x11_1 & 0xfffffffc
        int64_t* x12_1 = arg1 + 8
        void* x13_1 = x9_2 + 0x10
        int64_t i_3 = i_4
        int64_t i
        
        do
            v0.q = x12_1[-1]
            float128 v1
            v1.q = *x12_1
            x12_1 = &x12_1[2]
            i = i_3
            i_3 -= 4
            v0 = vcvt_f64_f32(v0)
            v1 = vcvt_f64_f32(v1)
            *(x13_1 - 0x10) = v0
            *x13_1 = v1
            x13_1 += 0x20
        while (i != 4)
    
    if (arg2 + 1 u<= 3 || i_4 != x11_1)
        void* x12_2 = x9_2 + (i_4 << 3)
        int32_t* x13_2 = arg1 + (i_4 << 2)
        int64_t i_2 = x11_1 - i_4
        int64_t i_1
        
        do
            v0.d = *x13_2
            x13_2 = &x13_2[1]
            i_1 = i_2
            i_2 -= 1
            v0.q = fconvert.d(v0.d)
            *x12_2 = v0.q
            x12_2 += 8
        while (i_1 != 1)

int64_t result

if ((arg2 & 0x80000000) != 0 || arg2 s< 1)
    result = 0
else
    v0.q = 0x3eb0c6f7a0b5ed8d
    int64_t x10_2 = sx.q(arg2)
    void* x11_2 = x9_2 + (sx.q(arg2) << 3)
    int64_t x12_3 = x10_2
    void* x13_3 = x9_2
    bool cond:6_1
    
    do
        double v4 = *(x9_2 + (x10_2 << 3))
        double v3 = 0.0
        double v7
        
        do
            int64_t x15_1 = -1
            double v17 = 0.0
            v7 = 0.0
            double v16_1 = v4
            
            do
                double v18 = *(x11_2 + (x15_1 << 3))
                x15_1 -= 1
                v17 = vfma_f64(v7, v17, v3)
                v7 = vfma_f64(v16_1, v7, v3)
                v16_1 = vfma_f64(v18, v16_1, v3)
            while (x12_3 + x15_1 + 2 s> 1)
            
            v16_1 = v16_1 * float.d(sx.q(x12_3.d))
            unimplemented  {fnmsub d17, d18, d5, d17}
            v17 = v17 * v16_1 * float.d(sx.q((x12_3 - 1).d))
            
            if (v17 < 0.0)
                result = 0xffffffff
                goto label_1095398
            
            v17 = sqrt(v17)
            
            if (v7 <= 0.0)
                v7 = v7 - v17
                
                if (not(v7 <= -9.9999999999999995e-07))
                    v7 = -9.9999999999999995e-07
            else
                v7 = v17 + v7
                
                if (not(v7 >= 9.9999999999999995e-07))
                    v7 = v0.q
            
            v7 = v16_1 / v7
            v3 = v3 - v7
        while (fabs(fabs(v7) / v3) >= 9.9999999999999994e-12)
        v4.d = fconvert.s(v3)
        *(arg3 + ((x12_3 - 1) << 2)) = v4.d
        v4 = *(x13_3 + (x12_3 << 3))
        int64_t x15_2 = -1
        
        do
            int64_t x16_3 = x15_2 << 3
            x15_2 -= 1
            v4 = vfma_f64(*(x11_2 + x16_3), v4, v3)
            *(x11_2 + x16_3) = v4
        while (x12_3 + x15_2 + 2 s> 1)
        
        result = 0
        cond:6_1 = x12_3 s> 1
        x13_3 += 8
        x12_3 -= 1
    while (cond:6_1)

label_1095398:

if (*(x8 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
