// 函数: _Z16Draw3DQuadParamsPK4Vec3PK4Vec2PK11SpriteColorbP6XAssetS9_
// 地址: 0xc972e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = *arg1
int128_t v1
v1.q = *(arg1 + 0x24)
float v2 = *(arg1 + 8)
float v3 = *(arg1 + 0x2c)
int128_t v4
v4.d = 0x3f000000
v4:4.d = 0x3f000000
int64_t var_50 = vmul_f32(vadd_f32(v0, v1), v4, 0).q
float var_48 = (v2 + v3) * fconvert.s(0.5f)
int128_t v1_2
v1_2.q = *(arg1 + 0x18)
v3 = *(arg1 + 0x20)
v4.q = *(arg1 + 0xc)
float v5 = *(arg1 + 0x14)
int128_t v6 = vsub_f32(v1_2, v0)
v1_2.d = v3 - v2
int128_t v0_1 = vsub_f32(v4, v0)
v2 = v5 - v2
int128_t v3_1 = vrev64_s32(v0_1)
v4.d = v2 f* v6:4.d
v5 = v1_2.d f* v0_1:4.d
v0_1.d = v1_2.d f* v0_1.d
v0_1.d = v0_1.d f- v2 f* v6.d
uint128_t v2_1 = vmul_f32(v6, v3_1, 0)
v1_2.d = v4.d f- v5
v4.d = v1_2.d f* v1_2.d
int128_t v2_2 = vsub_f32(v2_1, vdup_laneq_s32(v2_1, 1))
int128_t v3_2
v3_2.d = v4.d f+ v0_1.d f* v0_1.d
v3_2.d = vmul_f32(v2_2, v2_2, 0) f+ v3_2.d
v3_2.d = sqrt(v3_2.d)
XAsset* x23 = arg5

if (v3_2.d f>= float.s(0x3727c5ac))
    float v4_1 = fconvert.s(1f)
    v3_2.d = v3_2.d f+ float.s(0x3727c5ac)
    v3_2.d = v4_1 f/ v3_2.d
    v1_2.d = v1_2.d f* v3_2.d
    v5 = v0_1.d f* v3_2.d
    v2_2.d = v3_2.d f* v2_2.d
    v0_1.d = v1_2.d f* v1_2.d
    v3_2.d = v5 * v5
    v0_1.d = v0_1.d f+ v3_2.d
    v3_2.d = v2_2.d f* v2_2.d
    v0_1.d = v3_2.d f+ v0_1.d
    v0_1.d = sqrt(v0_1.d)
    v3_2.d = v4_1 f/ v0_1.d
    v0_1.d = v1_2.d f* v3_2.d
    v1_2.d = v5 f* v3_2.d
    v2_2.d = v2_2.d f* v3_2.d
else
    v0_1.d = *V0
    v1_2.d = *(V0 + 4)
    v2_2.d = *(V0 + 8)

int32_t var_60 = v0_1.d
int32_t var_5c = v1_2.d
int32_t var_58 = v2_2.d

if (x23 == 0)
    XAsset* x0_3 = AttribMapGetAssetPtr(*gMaterialAttribTable, MaterialGetAttribMap(arg6), 0x53)
    
    if (x0_3 == 0)
        x23 = data_23e4f78
    else
        x23 = x0_3

XAsset* var_70 = arg6
int64_t var_68 = 0
return Draw3DQuadFullComplete(arg1, arg2, arg3, zx.q(arg4.d) & 1, &var_50, &var_60, x23, 
    AttribMapGetAssetPtr(*gMaterialAttribTable, MaterialGetAttribMap(arg6), 0x54))
