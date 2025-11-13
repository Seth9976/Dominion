// 函数: sub_10953b0
// 地址: 0x10953b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x8 + 0x28)
int64_t x10 = sx.q(arg2)
void var_20
void* x9_2 = &var_20 - (((zx.q(arg2) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
float128 result
float128 v1

if (arg2 s>= 1)
    int64_t i_10 = 0
    uint64_t x12_1 = zx.q(arg2)
    
    if (arg2 u> 3)
        i_10 = x12_1 & 0xfffffffc
        void* x13_1 = arg3 + 8
        void* x14_1 = x9_2 + 0x10
        int64_t i_8 = i_10
        int64_t i
        
        do
            result.q = *(x13_1 - 8)
            v1.q = *x13_1
            x13_1 += 0x10
            i = i_8
            i_8 -= 4
            result = vcvt_f64_f32(result)
            v1 = vcvt_f64_f32(v1)
            *(x14_1 - 0x10) = result
            *x14_1 = v1
            x14_1 += 0x20
        while (i != 4)
    
    if (arg2 u<= 3 || i_10 != x12_1)
        void* x13_2 = x9_2 + (i_10 << 3)
        void* x14_2 = arg3 + (i_10 << 2)
        int64_t i_6 = x12_1 - i_10
        int64_t i_1
        
        do
            result.d = *x14_2
            x14_2 += 4
            i_1 = i_6
            i_6 -= 1
            result.q = fconvert.d(result.d)
            *x13_2 = result.q
            x13_2 += 8
        while (i_1 != 1)

result.q = 0x3bc79ca10c924223
int32_t x12_2 = 0
uint64_t x11_2 = zx.q(arg2)

while (true)
    if (arg2 s< 1)
        v1.q = 0.0
        
        if (x12_2 u> 0x28)
            break
    else
        v1.d = *(arg1 + (x10 << 2))
        int64_t x14_3 = 0
        double v2 = fconvert.d(v1.d)
        v1.q = 0.0
        
        do
            double v3 = *(x9_2 + (x14_3 << 3))
            int64_t x15_1 = x10 - 1
            double v4_1 = v2
            double v5 = 0.0
            int64_t i_2
            
            do
                double v6
                v6.d = *(arg1 + (x15_1 << 2))
                i_2 = x15_1 + 1
                v5 = vfma_f64(v4_1, v5, v3)
                x15_1 -= 1
                v4_1 = vfma_f64(fconvert.d(v6.d), v4_1, v3)
            while (i_2 s> 1)
            v4_1 = v4_1 / v5
            *(x9_2 + (x14_3 << 3)) = v3 - v4_1
            x14_3 += 1
            v1.q = vfma_f64(v1.q, v4_1, v4_1)
        while (x14_3 != x11_2)
        
        if (x12_2 u> 0x28)
            break
    
    x12_2 += 1
    
    if (not(v1.q f> 9.9999999999999995e-21))
        if (arg2 s>= 1)
            int64_t i_9 = 0
            
            if (arg2 u> 3)
                i_9 = x11_2 & 0xfffffffc
                void* x12_3 = x9_2 + 0x10
                int64_t* x13_4 = arg3 + 8
                int64_t i_7 = i_9
                int64_t i_3
                
                do
                    result = *(x12_3 - 0x10)
                    v1 = *x12_3
                    x12_3 += 0x20
                    i_3 = i_7
                    i_7 -= 4
                    result = vcvt_f32_f64(result, result)
                    v1 = vcvt_f32_f64(v1, v1)
                    x13_4[-1] = result.q
                    *x13_4 = v1.q
                    x13_4 = &x13_4[2]
                while (i_3 != 4)
            
            if (arg2 u<= 3 || i_9 != x11_2)
                void* x12_4 = arg3 + (i_9 << 2)
                int64_t* x9_3 = x9_2 + (i_9 << 3)
                int64_t i_5 = x11_2 - i_9
                int64_t i_4
                
                do
                    result.q = *x9_3
                    x9_3 = &x9_3[1]
                    i_4 = i_5
                    i_5 -= 1
                    result.d = fconvert.s(result.q)
                    *x12_4 = result.d
                    x12_4 += 4
                while (i_4 != 1)
        
        break

if (*(x8 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
