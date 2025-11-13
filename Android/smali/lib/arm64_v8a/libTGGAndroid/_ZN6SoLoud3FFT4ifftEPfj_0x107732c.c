// 函数: _ZN6SoLoud3FFT4ifftEPfj
// 地址: 0x107732c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
uint128_t v0
uint128_t v1
float128 v2
float128 v3
result, v0, v1, v2, v3 = fftimpl::cftfsub(arg2, arg1)

if (arg2 != 0)
    v0.d = fconvert.s(1f)
    v1.d = float.s(arg2 u>> 1)
    v0.d = v0.d f/ v1.d
    uint64_t x8_2 = zx.q(arg2)
    int64_t i_4
    
    if (arg2 u>= 8)
        i_4 = x8_2 & 0xfffffff8
        v1 = vdupq_laneq_s32(v0, 0)
        void* x10_1 = &arg1[4]
        int64_t i_3 = i_4
        int64_t i
        
        do
            v3 = *x10_1
            i = i_3
            i_3 -= 8
            v2 = vmulq_f32(v1, *(x10_1 - 0x10), 0)
            v3 = vmulq_f32(v1, v3, 0)
            *(x10_1 - 0x10) = v2
            *x10_1 = v3
            x10_1 += 0x20
        while (i != 8)
        
        if (i_4 != x8_2)
            goto label_10773a4
    else
        i_4 = 0
    label_10773a4:
        void* x10_2 = &arg1[i_4]
        int64_t i_2 = x8_2 - i_4
        int64_t i_1
        
        do
            v1.d = *x10_2
            i_1 = i_2
            i_2 -= 1
            v1.d = v0.d f* v1.d
            *x10_2 = v1.d
            x10_2 += 4
        while (i_1 != 1)

return result
