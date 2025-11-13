// 函数: _Z8PropEvalI10ColorRgbaIET_RK9PropGraphIS1_EfS5_fRK8BlendDeff
// 地址: 0x1046760
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = GraphEval<ColorRgbaI>(arg1, arg2)
int64_t x0_2
int128_t v0_1
uint128_t v1
uint128_t v2
uint128_t v3
int128_t v5
int128_t v6
x0_2, v0_1, v1, v2, v3, v5, v6 = GraphEval<ColorRgbaI>(arg3, arg4)
v2.d = *arg5
v0_1.d = *(arg5 + 4)
v1.d = arg6 f- v0_1.d
int32_t x8_8

if (not(v2.d f!= 0f))
    v0_1.d = fconvert.s(1f)
    
    if (v1.d f< 0f)
        x8_8 = x0.d & 0xffffffff
    else
    label_1046820:
        v2 = data_71c030
        v6.d = float.s((x0_2.d & 0xff) - zx.d((x0.d).b))
        v6.d = v0_1.d f* v6.d
        v1.q = x0
        v1:8.q = x0
        v3.q = x0_2
        v3:8.q = x0_2
        float v4_1 = fconvert.s(0.5f)
        v5.d = fconvert.s(-0.5f)
        uint128_t v7_1 = vnegq_s64(v2)
        uint128_t v1_1 = vshlq_u64(v1, v7_1)
        uint128_t v3_1 = vshlq_u64(v3, v7_1)
        
        if (v6.d f< 0f)
            v7_1.d = v5.d
        else
            v7_1.d = v4_1
        
        v6.d = v6.d f+ v7_1.d
        v7_1.d = float.s(zx.d((x0_2 u>> 8).b) - (zx.d((x0 u>> 8).b) & 0xff))
        v7_1.d = v0_1.d f* v7_1.d
        
        if (v7_1.d f< 0f)
            v4_1 = v5.d
        
        v4_1 = v7_1.d f+ v4_1
        v5.q = 0xff000000ff
        v7_1 = data_71c2a0
        int128_t v3_2 = vmovn_s64(v3_1)
        uint32_t temp0_1 = vcvts_s32_f32(v4_1)
        double v3_5 = vcvt_f32_s32((v3_2 & v5) - (vmovn_s64(v1_1) & v5))
        v0_1.d = v3_5.d f* v0_1.d
        v0_1:4.d = v3_5:4.d f* v0_1.d
        char temp0_2 = vcvts_s32_f32(v6.d)
        v6.d = 0x3f000000
        v6:4.d = 0x3f000000
        v5.d = 0xbf000000
        v5:4.d = 0xbf000000
        int96_t v0_7 = vshlq_u64(
            vaddw_u32(v1_1, vcvt_s32_f32(vadd_f32(v0_1, vbsl_s8(vcltz_f32(v0_1, 0), v5, v6)))), v2)
            & v7_1.12
        x8_8 = (((x0 u>> 8).d + temp0_1) << 8 & 0xff00) | zx.d(x0.b + temp0_2) | v0_7.d | v0_7:8.d
else if (v1.d f< 0f)
    x8_8 = x0.d & 0xffffffff
else
    v0_1.d = fconvert.s(1f)
    
    if (v1.d f>= v2.d)
        goto label_1046820
    
    v3.d = v1.d f/ v2.d
    
    if (v3.d f<= 0f)
        x8_8 = x0.d & 0xffffffff
    else
        uint64_t x0_3 = zx.q(*(arg5 + 8))
        v0_1.d = fconvert.s(1f)
        
        if (v3.d f>= v0_1.d)
            if (x0_3.d - 0xa u>= 6 && x0_3.d != 0x13)
                goto label_1046820
            
            x8_8 = x0.d & 0xffffffff
        else
            v1.d = 0f
            v2.d = fconvert.s(1f)
            v0_1, v1, v2, v3, v5, v6 = XCurveEvalNormal(x0_3, v3.d, v1.d, v2.d)
            
            if (not(v0_1.d f== 0f))
                goto label_1046820
            
            x8_8 = x0.d & 0xffffffff

return zx.q(x8_8)
