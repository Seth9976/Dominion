// 函数: _vp_offset_and_mix
// 地址: 0x108b57c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_1 = zx.q(*arg1)

if (i_1.d s< 1)
    return 

void* x9_1 = *(arg1 + 8)
float* x10_2 = *(*(arg1 + 0x18) + (sx.q(arg4) << 3))
double v6 = fconvert.d(arg1[0x16])
float v2 = *(x9_1 + (sx.q(arg4) << 2) + 0xc)
double v3
v3.d = 0x38d1b717
double v4 = v6 * 0.0050000000000000001
double v5 = v6 * 0.00029999999999999997
v6 = fconvert.d(1.0)
uint64_t i

do
    double v7
    v7.d = *arg2
    v7.d = *x10_2 f+ v7.d
    float v16 = *arg3 + v2
    v7.d = vminnm_f32(v7.d, *(x9_1 + 0x6c))
    *arg5 = vmaxnm_f32(v7.d, v16)
    
    if (arg4 == 1)
        v7.d = v7.d f- *arg7
        bool cond:1_1 = v7.d f<= -17.2000008f
        v7 = fconvert.d(v7.d f+ 17.2000008f)
        
        if (cond:1_1)
            v7.d = fconvert.s(vfms_f64(v6, v5, v7))
        else
            v7.d = fconvert.s(vfms_f64(v6, v4, v7))
            
            if (not(v7.d f>= 0f))
                v7 = v3
        
        v7.d = *arg6 f* v7.d
        *arg6 = v7.d
    
    arg6 = &arg6[1]
    arg7 = &arg7[1]
    arg5 = &arg5[1]
    arg3 = &arg3[1]
    x10_2 = &x10_2[1]
    i = i_1
    i_1 -= 1
    arg2 = &arg2[1]
while (i != 1)
