// 函数: _Z22UIElementDrawTextFancyP6XAssetiRK11UITransformPKcPK15FancyStringData
// 地址: 0x1051c80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
float128 v0

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    float128 v1
    v0, v1 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t v8
v8.d = *(arg3 + 0xc)
void* x8_4 = **x8 + muls.dp.d(arg2, 0x178)
v0.q = *(x8_4 + 0x148)
v0:8.q = v0.q
float128 var_60 = vaddq_f32(*(x8_4 + 0x10), v0)
float128 v0_1 = *(x8_4 + 0x30)
float128 var_90 = *(x8_4 + 0x20)
float128 var_80 = v0_1
float128 v0_2
int128_t v1_1
float128 v2
float v3
float128 v6
int128_t v7
v0_2, v1_1, v2, v3, v6, v7 = UIRectAligned(&var_60, &var_90, arg3 + 0x4c, arg3 + 0x2c, arg3 + 0x3c)
v0_2:4.d = v1_1.d
v6.q = *arg3
v0_2:8.d = v2.d
v1_1.q = *(arg3 + 0x10)
v2.q = *(arg3 + 0x18)
v0_2:0xc.d = v3
float temp0 = vmax_f32(*(arg3 + 0xc), 0f)
float v4 = *V21
float v5 = *(V21 + 4)
v7.d = fconvert.s(1f)
v7:4.d = fconvert.s(1f)
float128 v1_2 = vadd_f32(v1_1, v7)
v0_2.d = v0_2.d f* temp0
v0_2:4.d = v0_2:4.d f* temp0
v0_2:8.d = v0_2:8.d f* temp0
v0_2:0xc.d = v0_2:0xc.d f* temp0
v7.d = *R2I
v3 = *(R2I + 4)
var_80:8.q = 0
v6:8.q = v6.q
v4 = v8.d f* v4
v5 = v8.d f* v5
float128 v0_3 = vaddq_f32(v6, v0_2)
v6.d = fneg(v7.d)
v7.d = v4 f* v7.d
v4 = v4 * v3
v6.d = v5 f* v6.d
v3 = v3 * v5
var_90.d = v4
var_90:4.d = v6.d
v4 = *V20
v5 = *(V20 + 4)
v2:8.q = v2.q
v1_2:8.q = v1_2.q
float128 v0_6 = vaddq_f32(v2, vmulq_f32(v1_2, vsubq_f32(v0_3, v2), 0))
var_90:8.d = v4
var_90:0xc.d = v7.d
var_80.d = v3
var_80:4.d = v5
float128 var_50 = v0_6
int32_t var_70 = 0x3f800000
XString::XString(&var_60)
float v0_7
v0_7.b = *(gRgbaIWhite + 3)
v0_7 = *(arg3 + 8) * float.s(v0_7)
float v1_3

if (v0_7 < 0f)
    v1_3 = fconvert.s(-0.5f)
else
    v1_3 = fconvert.s(0.5f)

DrawParentedStringFancy(&var_60, &var_90, &var_50, arg5, 
    (0xffffff & ((0xff00ffff & zx.q(*gRgbaIWhite)) | zx.q(zx.d(*(gRgbaIWhite + 2)) << 0x10)))
        | zx.q(zx.d(vcvts_s32_f32(v0_7 + v1_3)) << 0x18), 
    nullptr)
return XString::~XString()
