// 函数: _Z17UIElementDrawTextRK9UIElementRK11UITransformPKcRK10ColorRgbaIS9_fb
// 地址: 0x1051900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
v8.d = *(arg2 + 0xc)
arg6:8.q = (*(arg1 + 0x148)).d.q
float128 var_70 = vaddq_f32(*(arg1 + 0x10), arg6)
float128 v0 = *(arg1 + 0x30)
char const* x20 = arg3
float128 var_110 = *(arg1 + 0x20)
float128 var_100 = v0
float128 v0_1
float128 v1_1
int128_t v2
int128_t v3
float128 v5
v0_1, v1_1, v2, v3, v5 = UIRectAligned(&var_70, &var_110, arg2 + 0x4c, arg2 + 0x2c, arg2 + 0x3c)
v5.d = 0f
v0_1:4.d = v1_1.d
v1_1.q = *arg2
v0_1:8.d = v2.d
v0_1:0xc.d = v3.d
float temp0 = vmax_f32(*(arg2 + 0xc), v5.d)
v3.q = *(arg2 + 0x10)
v5.q = *(arg2 + 0x18)
v2.d = fconvert.s(1f)
v2:4.d = fconvert.s(1f)
v1_1:8.q = v1_1.q
v0_1.d = v0_1.d f* temp0
v0_1:4.d = v0_1:4.d f* temp0
v0_1:8.d = v0_1:8.d f* temp0
v0_1:0xc.d = v0_1:0xc.d f* temp0
v5:8.q = v5.q
float128 v2_1
v2_1:8.q = vadd_f32(v3, v2).q
float128 v0_5 = vaddq_f32(v5, vmulq_f32(v2_1, vsubq_f32(vaddq_f32(v1_1, v0_1), v5), 0))
float128 var_60 = v0_5

if ((arg7.d & 1) == 0)
    char* x8_1 = *(arg1 + 0x108)
    char* x1_1
    
    if (zx.d(*x8_1) == 0)
        x1_1 = nullptr
    else
        x1_1 = x8_1
    
    x20 = L(x20, x1_1)

int64_t x0_4
int128_t v0_6
int128_t v1_2

if (*gUIDefData != 0)
    x0_4, v0_6, v1_2 = strchr(x20, 0x7b)

if (*gUIDefData == 0 || x0_4 == 0)
    if (zx.d(*(arg1 + 0x100)) == 0)
        int64_t x0_8
        float v1_4
        x0_8, v1_4 = strchr(x20, 0xd)
        
        if (x0_8 == 0)
            v1_4.b = *(arg4 + 3)
            float v0_8 = *(arg2 + 8)
            v1_4 = v0_8 * float.s(v1_4)
            float v2_4 = fconvert.s(0.5f)
            float v3_2 = fconvert.s(-0.5f)
            float v4_1
            
            v4_1 = v1_4 < 0f ? v3_2 : v2_4
            
            int32_t x9_7 = (0xffffff & ((0xff00ffff & zx.d(*arg4)) | zx.d(*(arg4 + 2)) << 0x10))
                | zx.d(vcvts_s32_f32(v1_4 + v4_1)) << 0x18
            XAsset* x1_6 = *(arg1 + 0xe8)
            var_110.d = x9_7
            v1_4.b = *(arg5 + 3)
            v0_8 = v0_8 * float.s(v1_4)
            
            v1_4 = v0_8 < 0f ? v3_2 : v2_4
            
            var_70.d = (0xffffff & ((0xff00ffff & zx.d(*arg5)) | zx.d(*(arg5 + 2)) << 0x10))
                | zx.d(vcvts_s32_f32(v0_8 + v1_4)) << 0x18
            return DrawStringScaleAlignedOutline(x20, x1_6, &var_60, &var_110, &var_70, gRgbaINone, 
                zx.q(*(arg1 + 0xfc)), v8.d f* *(arg1 + 0xf8))
    
    float v1_5
    float v4_2
    v1_5, v4_2 = XString::XString(&var_110)
    v1_5.b = *(arg4 + 3)
    float v0_9 = *(arg2 + 8)
    v4_2.b = *(arg5 + 3)
    v1_5 = v0_9 * float.s(v1_5)
    float v2_5 = fconvert.s(0.5f)
    float v3_3 = fconvert.s(-0.5f)
    v0_9 = v0_9 * float.s(v4_2)
    
    v4_2 = v1_5 < 0f ? v3_3 : v2_5
    
    if (v0_9 < 0f)
        v2_5 = v3_3
    
    DrawStringScaleWrapped(&var_110, &var_60, *(arg1 + 0xe8), 
        (0xffffff & ((0xff00ffff & zx.q(*arg4)) | zx.q(zx.d(*(arg4 + 2)) << 0x10)))
            | zx.q(zx.d(vcvts_s32_f32(v1_5 + v4_2)) << 0x18), 
        (0xffffff & ((0xff00ffff & zx.q(*arg5)) | zx.q(zx.d(*(arg5 + 2)) << 0x10)))
        | zx.q(zx.d(vcvts_s32_f32(v0_9 + v2_5)) << 0x18), zx.q(*gRgbaINone), zx.q(*(arg1 + 0xfc)), 
        v8.d f* *(arg1 + 0xf8), 0f, 0f)
else
    v0_6.d = *(arg1 + 0xf8)
    v0_6.d = v8.d f* v0_6.d
    var_70 = var_60
    
    if (not(v0_6.d f<= float.s(0x3727c5ac)))
        v1_2.d = fconvert.s(1f)
        v0_6.d = v1_2.d f/ v0_6.d
        v1_2 = v0_5
        v0_6.d = v1_2.d f* v0_6.d
        v0_6:4.d = v1_2:4.d f* v0_6.d
        v0_6:8.d = v1_2:8.d f* v0_6.d
        v0_6:0xc.d = v1_2:0xc.d f* v0_6.d
        var_70 = v0_6
    
    __builtin_memset(&var_110, 0, 0x98)
    int128_t var_f0
    var_f0.d = *arg4
    var_f0:4.d = *arg5
    int64_t var_48
    var_110:8.q = &var_48
    var_48 = *(arg1 + 0xe8)
    var_f0:0xc.d = 0x3f800000
    int128_t var_100_1
    var_100_1:0xc.d = *(arg1 + 0xfc)
    char var_118
    XString::XString(&var_118)
    float v2_3
    v2_3.b = *(gRgbaIWhite + 3)
    float v1_3 = *(arg2 + 8) * float.s(v2_3)
    
    if (v1_3 < 0f)
        v2_3 = fconvert.s(-0.5f)
    else
        v2_3 = fconvert.s(0.5f)
    
    DrawStringFancyScaleColor(&var_118, &var_70, *gUIDefData, 
        (0xffffff & ((0xff00ffff & zx.q(*gRgbaIWhite)) | zx.q(zx.d(*(gRgbaIWhite + 2)) << 0x10)))
            | zx.q(zx.d(vcvts_s32_f32(v1_3 + v2_3)) << 0x18), 
        &var_110, v8.d f* *(arg1 + 0xf8))

return XString::~XString()
