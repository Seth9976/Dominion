// 函数: _Z15UIStateDrawTextRK9UIElementR14UIStateElementRK11UITransformPK10ColorRgbaIS9_
// 地址: 0x1057130
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float128 v0
v0.q = *(arg1 + 0x148)
int64_t v8
v8.d = *(arg3 + 0xc)
v0:8.q = v0.q
float128 var_70 = vaddq_f32(*(arg1 + 0x10), v0)
float128 v0_1 = *(arg1 + 0x30)
ColorRgbaI const* x20 = arg5
ColorRgbaI const* x22 = arg4
float128 var_110 = *(arg1 + 0x20)
float128 var_100 = v0_1
float128 v0_2
float128 v1_1
int128_t v2
int128_t v3
float128 v5
v0_2, v1_1, v2, v3, v5 = UIRectAligned(&var_70, &var_110, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
v5.d = 0f
v0_2:4.d = v1_1.d
v1_1.q = *arg3
v0_2:8.d = v2.d
v0_2:0xc.d = v3.d
float temp0 = vmax_f32(*(arg3 + 0xc), v5.d)
v3.q = *(arg3 + 0x10)
v5.q = *(arg3 + 0x18)
v2.d = fconvert.s(1f)
v2:4.d = fconvert.s(1f)
v1_1:8.q = v1_1.q
v0_2.d = v0_2.d f* temp0
v0_2:4.d = v0_2:4.d f* temp0
v0_2:8.d = v0_2:8.d f* temp0
v0_2:0xc.d = v0_2:0xc.d f* temp0
v5:8.q = v5.q
float128 v2_1
v2_1:8.q = vadd_f32(v3, v2).q
float128 v1_2 = vaddq_f32(v5, vmulq_f32(v2_1, vsubq_f32(vaddq_f32(v1_1, v0_2), v5), 0))
float128 var_60 = v1_2

if (zx.d(*(arg2 + 0x188)) != 0)
    double v0_7 = vsub_f32(vextq_s8(v1_2, v1_2, 8), v1_2)
    *(arg2 + 0x1a4) = v1_2.q
    *(arg2 + 0x1ac) = v0_7
    *(arg2 + 0x1b4) = *V20
    v0_7.d = *(arg3 + 0xc)
    v1_2.d = *(arg1 + 0xf8)
    v0_7.d = v0_7.d f* v1_2.d
    *(arg2 + 0x1e8) = v0_7.d
    v0_7.d = *(arg1 + 0x118)
    *(arg2 + 0x204) = v0_7.d
    return UITextBox::Draw()

uint64_t x8_2 = *gAppInterface
char* result

if (zx.d(*(x8_2 + 0x3c)) != 0 || zx.d(*(x8_2 + 0x4d)) != 0)
label_10572b4:
    result = UIStateElementText(arg2, arg1)
    
    if (zx.d(*result) != 0)
        if (x22 == 0)
            if (*(arg2 + 0x88) s<= *arg2)
                x22 = arg1 + 0xf0
                
                if (x20 != 0)
                    goto label_10572d8
                
                goto label_105740c
            
            x22 = arg2 + 0x8c
            
            if (x20 != 0)
                goto label_10572d8
            
            goto label_105740c
        
        if (x20 == 0)
        label_105740c:
            
            if (*(arg2 + 0x90) s<= *arg2)
                x20 = arg1 + 0xf4
                
                if (*gUIDefData != 0)
                    goto label_10572e4
            else
                x20 = arg2 + 0x94
                
                if (*gUIDefData != 0)
                    goto label_10572e4
        else
        label_10572d8:
            
            if (*gUIDefData != 0)
            label_10572e4:
                int64_t x0_4
                int128_t v0_9
                int128_t v1_4
                x0_4, v0_9, v1_4 = strchr(result, 0x7b)
                
                if (x0_4 != 0)
                    v0_9.d = *(arg1 + 0xf8)
                    v0_9.d = v8.d f* v0_9.d
                    var_70 = var_60
                    
                    if (not(v0_9.d f<= float.s(0x3727c5ac)))
                        v1_4.d = fconvert.s(1f)
                        v0_9.d = v1_4.d f/ v0_9.d
                        v1_4 = v1_2
                        v0_9.d = v1_4.d f* v0_9.d
                        v0_9:4.d = v1_4:4.d f* v0_9.d
                        v0_9:8.d = v1_4:8.d f* v0_9.d
                        v0_9:0xc.d = v1_4:0xc.d f* v0_9.d
                        var_70 = v0_9
                    
                    __builtin_memset(&var_110, 0, 0x98)
                    int128_t var_f0
                    var_f0.d = *x22
                    var_f0:4.d = *x20
                    int64_t var_48
                    var_110:8.q = &var_48
                    var_48 = *(arg1 + 0xe8)
                    var_f0:0xc.d = 0x3f800000
                    int128_t var_100_1
                    var_100_1:0xc.d = *(arg1 + 0xfc)
                    char var_118
                    XString::XString(&var_118)
                    float v2_4
                    v2_4.b = *(gRgbaIWhite + 3)
                    float v1_5 = *(arg3 + 8) * float.s(v2_4)
                    
                    if (v1_5 < 0f)
                        v2_4 = fconvert.s(-0.5f)
                    else
                        v2_4 = fconvert.s(0.5f)
                    
                    DrawStringFancyScaleColor(&var_118, &var_70, *gUIDefData, 
                        (0xffffff & ((0xff00ffff & zx.q(*gRgbaIWhite))
                            | zx.q(zx.d(*(gRgbaIWhite + 2)) << 0x10)))
                            | zx.q(zx.d(vcvts_s32_f32(v1_5 + v2_4)) << 0x18), 
                        &var_110, v8.d f* *(arg1 + 0xf8))
                    return XString::~XString()
        
        if (zx.d(*(arg1 + 0x100)) == 0)
            int64_t x0_8
            float v1_6
            x0_8, v1_6 = strchr(result, 0xd)
            
            if (x0_8 == 0)
                v1_6.b = *(x22 + 3)
                float v0_11 = *(arg3 + 8)
                v1_6 = v0_11 * float.s(v1_6)
                float v2_5 = fconvert.s(0.5f)
                float v3_3 = fconvert.s(-0.5f)
                float v4_2
                
                v4_2 = v1_6 < 0f ? v3_3 : v2_5
                
                int32_t x9_10 = (0xffffff & ((0xff00ffff & zx.d(*x22)) | zx.d(*(x22 + 2)) << 0x10))
                    | zx.d(vcvts_s32_f32(v1_6 + v4_2)) << 0x18
                XAsset* x1_6 = *(arg1 + 0xe8)
                var_110.d = x9_10
                v1_6.b = *(x20 + 3)
                v0_11 = v0_11 * float.s(v1_6)
                
                v1_6 = v0_11 < 0f ? v3_3 : v2_5
                
                var_70.d = (0xffffff & ((0xff00ffff & zx.d(*x20)) | zx.d(*(x20 + 2)) << 0x10))
                    | zx.d(vcvts_s32_f32(v0_11 + v1_6)) << 0x18
                return DrawStringScaleAlignedOutline(result, x1_6, &var_60, &var_110, &var_70, 
                    gRgbaINone, zx.q(*(arg1 + 0xfc)), v8.d f* *(arg1 + 0xf8))
        
        float v1_7
        float v4_3
        v1_7, v4_3 = XString::XString(&var_110)
        v1_7.b = *(x22 + 3)
        float v0_12 = *(arg3 + 8)
        v4_3.b = *(x20 + 3)
        v1_7 = v0_12 * float.s(v1_7)
        float v2_6 = fconvert.s(0.5f)
        float v3_4 = fconvert.s(-0.5f)
        v0_12 = v0_12 * float.s(v4_3)
        
        v4_3 = v1_7 < 0f ? v3_4 : v2_6
        
        if (v0_12 < 0f)
            v2_6 = v3_4
        
        DrawStringScaleWrapped(&var_110, &var_60, *(arg1 + 0xe8), 
            (0xffffff & ((0xff00ffff & zx.q(*x22)) | zx.q(zx.d(*(x22 + 2)) << 0x10)))
                | zx.q(zx.d(vcvts_s32_f32(v1_7 + v4_3)) << 0x18), 
            (0xffffff & ((0xff00ffff & zx.q(*x20)) | zx.q(zx.d(*(x20 + 2)) << 0x10)))
            | zx.q(zx.d(vcvts_s32_f32(v0_12 + v2_6)) << 0x18), zx.q(*(arg1 + 0xfc)), 
            v8.d f* *(arg1 + 0xf8), 0f, 0f)
        return XString::~XString()
else
    int128_t v0_8
    int32_t v1_3
    int32_t v2_2
    int32_t v3_1
    result, v0_8, v1_3, v2_2, v3_1 = RectScreen()
    int96_t v4_1
    v4_1.d = v1_2.12:8.d
    
    if (not(v4_1.d f< v0_8.d) && not(v1_2.d f> v2_2))
        v0_8.d = v1_2:0xc.d
        
        if (not(v0_8.d f< v1_3))
            v0_8.d = v1_2:4.d
            
            if (not(v0_8.d f> v3_1))
                goto label_10572b4

return result
