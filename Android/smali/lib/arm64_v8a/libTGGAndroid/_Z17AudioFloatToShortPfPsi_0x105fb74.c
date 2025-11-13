// 函数: _Z17AudioFloatToShortPfPsi
// 地址: 0x105fb74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

uint64_t x8_1 = zx.q(arg3)
int64_t i_4
float128 v0
uint128_t v1
uint128_t v2
uint128_t v3

if (arg3 u< 4 || (&arg1[x8_1] u> arg2 && &arg2[x8_1] u> arg1))
    i_4 = 0
label_105fba4:
    void* x10_1 = &arg2[i_4]
    void* x11_1 = &arg1[i_4]
    int64_t i_2 = x8_1 - i_4
    v0.d = fconvert.s(0.5f)
    v1.d = fconvert.s(-0.5f)
    int64_t i
    
    do
        v2.d = *x11_1
        x11_1 += 4
        v3.d = float.s(0x47000000)
        v2.d = v2.d f* v3.d
        
        if (v2.d f< 0f)
            v3.d = v1.d
        else
            v3.d = v0.d
        
        v2.d = v2.d f+ v3.d
        uint32_t temp0_1 = vcvts_s32_f32(v2.d)
        uint32_t x14_2
        
        x14_2 = temp0_1 s< 0x7fff ? temp0_1 : 0x7fff
        
        int16_t x14_3
        
        x14_3 = x14_2 s> 0xffff8000 ? x14_2.w : -0x8000
        
        i = i_2
        i_2 -= 1
        *x10_1 = x14_3
        x10_1 += 2
    while (i != 1)
else
    i_4 = x8_1 & 0xfffffffc
    v0.d = 0x47000000
    v0:4.d = 0x47000000
    v0:8.d = 0x47000000
    v0:0xc.d = 0x47000000
    v1.d = 0x3f000000
    v1:4.d = 0x3f000000
    v1:8.d = 0x3f000000
    v1:0xc.d = 0x3f000000
    v2.d = 0xbf000000
    v2:4.d = 0xbf000000
    v2:8.d = 0xbf000000
    v2:0xc.d = 0xbf000000
    v3.d = 0x7fff
    v3:4.d = 0x7fff
    v3:8.d = 0x7fff
    v3:0xc.d = 0x7fff
    int64_t i_3 = i_4
    int16_t* x11_2 = arg2
    float* x12_1 = arg1
    int64_t i_1
    
    do
        float128 v5 = *x12_1
        x12_1 = &x12_1[4]
        i_1 = i_3
        i_3 -= 4
        float128 v5_1 = vmulq_f32(v5, v0, 0)
        *x11_2 = vmovn_s32(vmaxq_s32(
            vminq_s32(vcvtq_s32_f32(vaddq_f32(v5_1, vbslq_s8(vcltzq_f32(v5_1, 0), v2, v1))), v3), 
            not.o(zx.o(0x7f00)))).q
        x11_2 = &x11_2[4]
    while (i_1 != 4)
    
    if (i_4 != x8_1)
        goto label_105fba4
