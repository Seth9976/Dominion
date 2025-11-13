// 函数: _Z9GraphEvalI10ColorRgbaIET_RK9PropGraphIS1_Ef
// 地址: 0x1046910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_20 = v9
int64_t v8
int64_t var_18 = v8
int32_t x8 = *(arg1 + 0x30)

if (x8 == 2)
    goto label_1046944

if (x8 == 1)
    v8.d = *(arg1 + 0xc)
    float v0_1 = fmodf(arg2, v8.d)
    
    if (v8.d f== 0f)
        v9.d = 0f
    else
        v9.d = v0_1
    
    if (not(v9.d f<= 0f))
        uint64_t x0_2 = zx.q(*(arg1 + 8))
        v8.d = fconvert.s(1f)
        
        if (not(v9.d f>= v8.d))
            v8 = XCurveEvalNormal(x0_2, v9.d, 0f, fconvert.s(1f))
            XCurveEvalNormal(zx.q(*(arg1 + 8)), v9.d, 0f, fconvert.s(1f))
            
            if (not(v8.d f== 0f))
            label_1046ae8:
                v0_1 = v8.d f* 0f
                char x9_9 = *(arg1 + 1)
                char x10_4 = *(arg1 + 2)
                uint32_t x8_5 = zx.d(*arg1)
                char x11_4 = *(arg1 + 3)
                float v1_4
                
                if (v0_1 < 0f)
                    v1_4 = fconvert.s(-0.5f)
                else
                    v1_4 = fconvert.s(0.5f)
                
                uint32_t temp0_4 = vcvts_s32_f32(v0_1 + v1_4)
                return (0xffffff & ((0xff00ffff & ((0xffff00ff & zx.q(x8_5 + temp0_4))
                    | zx.q((zx.d(x9_9 + temp0_4.b) & 0xff) << 8)))
                    | zx.q((zx.d(x10_4 + temp0_4.b) & 0xff) << 0x10)))
                    | zx.q(zx.d(x11_4 + temp0_4.b) << 0x18)
        else if (x0_2.d - 0xa u>= 6 && x0_2.d != 0x13)
            goto label_1046ae8
else if (x8 != 0)
    pthread_kill(pthread_self(), 6)
    arg2 = XNoReturn()
label_1046944:
    v8.d = *(arg1 + 0xc)
    int64_t x0_1
    int64_t x1_1
    int32_t n
    float v0
    v0, x0_1, x1_1, n = fmodf(arg2, v8.d)
    float v1_2
    
    v1_2 = v8.d f== 0f ? 0f : v0
    
    if (not(v1_2 <= 0f))
        v0 = fconvert.s(1f)
        
        if (v1_2 >= v0)
        label_10469a4:
            uint32_t x8_1 = zx.d(*arg1)
            uint32_t x10 = zx.d(*(arg1 + 1))
            uint32_t x12 = zx.d(*(arg1 + 2))
            uint32_t x11_2 = zx.d(*(arg1 + 3))
            v1_2 = v0 * float.s(zx.d(*(arg1 + 0x10)) - x8_1)
            float v4_1 = fconvert.s(0.5f)
            float v5_1 = fconvert.s(-0.5f)
            float v2_1 = v0 * float.s(zx.d(*(arg1 + 0x11)) - x10)
            float v3_1 = v0 * float.s(zx.d(*(arg1 + 0x12)) - x12)
            v0 = v0 * float.s(zx.d(*(arg1 + 0x13)) - x11_2)
            float v6_1
            
            v6_1 = v1_2 < 0f ? v5_1 : v4_1
            
            uint32_t temp0 = vcvts_s32_f32(v1_2 + v6_1)
            
            v1_2 = v2_1 < 0f ? v5_1 : v4_1
            
            char temp0_1 = vcvts_s32_f32(v2_1 + v1_2)
            
            v1_2 = v3_1 < 0f ? v5_1 : v4_1
            
            v2_1 = v0 < 0f ? v5_1 : v4_1
            
            return (0xffffff & ((0xff00ffff
                & ((0xffff00ff & zx.q(x8_1 + temp0)) | zx.q(zx.d(x10.b + temp0_1) << 8)))
                | zx.q(zx.d(x12.b + vcvts_s32_f32(v3_1 + v1_2)) << 0x10)))
                | zx.q(zx.d(x11_2.b + vcvts_s32_f32(v0 + v2_1)) << 0x18)
        
        v0 = (fconvert.s(1f) - cosf(x0_1, x1_1, n, v1_2 * *CIRCLE_FULL)) * fconvert.s(0.5f) + 0f
        
        if (not(v0 == 0f))
            goto label_10469a4

return zx.q(*arg1)
