// 函数: _Z26TextureSourceRectFromStripP6XAssetiiii
// 地址: 0xfd7cc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int128_t v0
uint128_t v1
float128 v2
int128_t v3

if (x8 == 0)
    XAsset* x23_1 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x23_1, false, true)
    x8 = *x23_1

v1.d = float.s(arg2)
v1:4.d = arg3
int64_t* x8_3 = **x8
v0.d = float.s(arg4)
v1:8.d = arg2 + 1
v3.d = x8_3[1].d
v2.d = *(x8_3 + 0xc)
v0:4.d = arg5
v1:0xc.d = arg3 + 1
float128 v0_1 = vcvt_f32_s32(v0)
v2.d = v2.d f* v3.d
v3.q = *x8_3
float128 v1_1 = vcvtq_f32_s32(v1)
double v3_1 = vcvt_f32_u32(v3)
v2.d = v3_1.d f* v2.d
v2:4.d = v3_1:4.d f* v2.d
v2:8.q = v2.q
v0_1:8.q = v0_1.q
float128 v0_2 = vdivq_f32(vmulq_f32(v2, v1_1, 0), v0_1)
float128 v1_2
v1_2.d = v0_2:4.d
v2.d = v0_2:8.d
v3_1.d = v0_2:0xc.d
