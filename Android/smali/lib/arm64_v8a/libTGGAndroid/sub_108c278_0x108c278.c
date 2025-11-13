// 函数: sub_108c278
// 地址: 0x108c278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
void* x25 = *(arg1 + 8)
void var_70
void* b = &var_70 - (((zx.q(arg8) << 0x20 s>> 0x1d) + 0xf) & 0xfffffffffffffff0)
int32_t i_5 = arg8

if (*(x25 + 0x1f4) != 0)
    i_5 = *(x25 + 0x1f8) - arg7

int32_t i_7

i_7 = i_5 s> arg8 ? arg8 : i_5

int32_t i_3
double v0
double v1
double v2

if (i_7 s< 1)
    i_3 = 0
else
    int64_t i = 0
    
    i_3 = i_5 s> arg8 ? arg8 : i_5
    
    do
        if (arg6 == 0 || *(arg6 + (i << 2)) == 0)
            v0.d = arg4[i]
            v1.d = arg5[i]
            v2.d = arg3[i]
            v0.d = v0.d f/ v1.d
            double temp0_1 = vrndx_f64(sqrt(fconvert.d(v0.d)))
            
            if (v2.d f< 0f)
                v0 = fneg(temp0_1)
            else
                v0 = temp0_1
            
            arg9[i] = vcvtd_s32_f64(v0)
        
        i += 1
    while (i s< sx.q(i_7))

int128_t result
result.d = 0f

if (i_3 s< arg8)
    uint64_t i_1 = zx.q(i_3)
    int32_t i_6 = 0
    result.d = 0f
    uint64_t x11_3 = i_1 << 2
    v0.d = fconvert.s(0.25f)
    
    do
        if (arg6 == 0 || *(arg6 + (i_1 << 2)) == 0)
            v2.d = arg4[i_1]
            v1.d = arg5[i_1]
            v2.d = v2.d f/ v1.d
            
            if (v2.d f>= v0.d
                    || ((arg6 != 0 ? 1 : 0) & (i_1 s< sx.q(arg2 - arg7) ? 1 : 0) & 1) != 0)
                int32_t v3 = arg3[i_1]
                double temp0_3 = vrndx_f64(sqrt(fconvert.d(v2.d)))
                
                if (v3 f< 0f)
                    v2 = fneg(temp0_3)
                else
                    v2 = temp0_3
                
                uint32_t temp0_4 = vcvtd_s32_f64(v2)
                arg9[i_1] = temp0_4
                v2.d = float.s(temp0_4 * temp0_4)
                v1.d = v1.d f* v2.d
                arg4[i_1] = v1.d
            else
                *(b + (sx.q(i_6) << 3)) = arg4 + x11_3
                result.d = v2.d f+ result.d
                i_6 += 1
        
        i_1 += 1
        x11_3 += 4
    while (zx.q(arg8) != i_1)
    
    if (i_6 != 0)
        qsort(b, sx.q(i_6), 8, sub_108c6b0)
        
        if (i_6 s>= 1)
            double v0_1 = *(x25 + 0x200)
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_2
            
            do
                int64_t x9_4 = ((*b - arg4) & 0x3fffffffc) << 0x1e s>> 0x20
                uint32_t x10_3
                
                if (v0_1 <= fconvert.d(result.d))
                    int32_t x12_6 = arg5[x9_4]
                    result.d = result.d f+ fconvert.s(-1f)
                    double v2_1
                    v2_1.d = float.s((arg3[x9_4] & 0x80000000) | 0x3f800000)
                    x10_3 = vcvts_s32_f32(v2_1.d)
                    arg4[x9_4] = x12_6
                else
                    x10_3 = 0
                    arg4[x9_4] = 0
                
                i_2 = i_4
                i_4 -= 1
                b += 8
                arg9[x9_4] = x10_3
            while (i_2 != 1)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
