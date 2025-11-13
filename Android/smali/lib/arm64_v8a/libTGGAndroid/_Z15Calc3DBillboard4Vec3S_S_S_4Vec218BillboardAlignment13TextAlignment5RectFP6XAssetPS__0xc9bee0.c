// 函数: _Z15Calc3DBillboard4Vec3S_S_S_4Vec218BillboardAlignment13TextAlignment5RectFP6XAssetPS_
// 地址: 0xc9bee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 u> 4)
    pthread_kill(pthread_self(), 6)
    int64_t x0_6
    int64_t x1_2
    int64_t x2_1
    int64_t x3_1
    int64_t x4
    int64_t x5
    int64_t x6
    int64_t x7
    x0_6, x1_2, x2_1, x3_1, x4, x5, x6, x7 = XNoReturn()
    return Draw3DBillboard(x0_6, x1_2, x2_1, x3_1, x4, x5, x6, x7) __tailcall

float v16 = arg9.d
float v17 = arg9:4.d
float v18 = arg10.d
float arg_10
float v20 = arg_10
float arg_14
float v6 = arg_14
float arg_18
float v7 = arg_18
float entry_v0
float var_8c = entry_v0
float entry_v1
float var_88 = entry_v1
int32_t* x19 = arg4
int64_t* x20 = arg3
float entry_v3
float v19 = entry_v0 - entry_v3
float entry_v4 = entry_v1 - entry_v4
float entry_v2
float entry_v5 = entry_v2 - entry_v5
float var_80
float var_70

switch (arg1)
    case 0
        v20 = entry_v4 * v18 - entry_v5 * v17
        v6 = entry_v5 * v16 - v18 * v19
        v7 = v17 * v19 - entry_v4 * v16
        entry_v0 = fneg(entry_v5 * v6 - entry_v4 * v7)
        entry_v3 = fneg(v19 * v7 - entry_v5 * v20)
        entry_v1 = fneg(entry_v4 * v20 - v19 * v6)
    case 1
        entry_v3 = fneg(v17)
        entry_v0 = fneg(v16)
        entry_v1 = fneg(v18)
        v20 = entry_v4 * v18 - entry_v5 * v17
        v6 = entry_v5 * v16 - v18 * v19
        v7 = v17 * v19 - entry_v4 * v16
    case 2
        entry_v0 = entry_v5 * v6 - entry_v4 * v7
        entry_v3 = entry_v5 * v20
        entry_v5 = entry_v4 * v20
        entry_v4 = v19 * v7 - entry_v3
        entry_v3 = fneg(entry_v4)
        entry_v1 = entry_v5 - v19 * v6
        
        if (v17 * entry_v3 - v16 * entry_v0 - v18 * entry_v1 <= 0f)
            entry_v0 = fneg(entry_v0)
            entry_v1 = fneg(entry_v1)
        else
            var_80 = entry_v0
            entry_v3 = entry_v4
    case 3
        entry_v0 = fneg(v17 * v7 - v18 * v6)
        var_70 = v20
        entry_v3 = fneg(v18 * v20 - v16 * v7)
        entry_v1 = fneg(v16 * v6 - v17 * v20)
        var_80 = entry_v0
    case 4
        entry_v4 = v17 * v7 - v18 * v6
        entry_v5 = v18 * v20 - v16 * v7
        entry_v0 = fneg(v16)
        entry_v3 = fneg(v17)
        v7 = v16 * v6 - v17 * v20
        v20 = fneg(entry_v4)
        v6 = fneg(entry_v5)
        entry_v1 = fneg(v18)
        v7 = fneg(v7)
        var_70 = v20
        float var_6c_1 = v6
        var_80 = entry_v0
        float var_7c_1 = entry_v3

entry_v4 = sqrt(v20 * v20 + v6 * v6 + v7 * v7)

if (entry_v4 >= float.s(0x3727c5ac))
    entry_v5 = fconvert.s(1f)
    entry_v4 = entry_v5 / (entry_v4 + float.s(0x3727c5ac))
    v17 = v20 * entry_v4
    v6 = v6 * entry_v4
    v7 = v7 * entry_v4
    v16 = entry_v5 / sqrt(v7 * v7 + v17 * v17 + v6 * v6)
    entry_v4 = v17 * v16
    entry_v5 = v6 * v16
    v7 = v7 * v16
else
    entry_v4 = *V0
    entry_v5 = *(V0 + 4)
    v7 = *(V0 + 8)

var_70 = entry_v4
entry_v4 = sqrt(entry_v0 * entry_v0 + entry_v3 * entry_v3 + entry_v1 * entry_v1)
float var_84 = entry_v2

if (entry_v4 >= float.s(0x3727c5ac))
    entry_v2 = fconvert.s(1f)
    entry_v4 = entry_v2 / (entry_v4 + float.s(0x3727c5ac))
    entry_v0 = entry_v0 * entry_v4
    entry_v3 = entry_v3 * entry_v4
    entry_v4 = entry_v1 * entry_v4
    entry_v2 = entry_v2 / sqrt(entry_v4 * entry_v4 + entry_v0 * entry_v0 + entry_v3 * entry_v3)
    entry_v0 = entry_v0 * entry_v2
    entry_v1 = entry_v3 * entry_v2
    entry_v2 = entry_v4 * entry_v2
else
    entry_v0 = *V0
    entry_v1 = *(V0 + 4)
    entry_v2 = *(V0 + 8)

var_80 = entry_v0
int32_t arg_30
int64_t v8
v8.d = arg_30
int32_t arg_34
int64_t v9
v9.d = arg_34
int32_t arg_28
int64_t v10
v10.d = arg_28
int32_t arg_2c
int64_t v15
v15.d = arg_2c
int32_t arg_20
int64_t v14
v14.d = arg_20
int32_t arg_24
int64_t v13
v13.d = arg_24
QuatFromBasisChange(VX, VY, &var_70, &var_80)
int64_t result
float v0
float v1
result, v0, v1 = AlignmentGetOffsetPercent(zx.q(arg2))
float*** x8_1 = *x20
float v11 = v0
float v12 = v1

if (x8_1 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result = AssetCatalogLoadAsset(x20, false, true)
    x8_1 = *x20

float v4 = var_70
float v7_1 = var_80
float* x8_4 = **x8_1
float v19_1 = x8_4[3] * x8_4[2]
float v17_1 = v14.d f* v19_1 * float.s(*x8_4)
float v18_1 = v13.d f* v19_1 * float.s(x8_4[1])
v0 = v17_1 * (v10.d f- v11)
v1 = v18_1 * (v9.d f- v12)
float v2 = v17_1 * (v8.d f- v11)
float v3 = v18_1 * (v15.d f- v12)
v17_1 = v0 * v4
v18_1 = v0 * entry_v5
v0 = v0 * v7
v19_1 = v1 * v7_1
float v20_1 = v1 * entry_v1
v1 = v1 * entry_v2
v4 = v2 * v4
float v5 = v2 * entry_v5
v2 = v2 * v7
float v6_1 = v3 * v7_1
v7_1 = v3 * entry_v1
v3 = v3 * entry_v2
float v22 = float.s(0x3c23d70a)
*x19 = var_8c + (v17_1 + v19_1) * v22
x19[1] = var_88 + (v18_1 + v20_1) * v22
x19[2] = var_84 + (v0 + v1) * v22
x19[3] = var_8c + (v4 + v19_1) * v22
x19[4] = var_88 + (v5 + v20_1) * v22
x19[5] = var_84 + (v2 + v1) * v22
x19[6] = var_8c + (v17_1 + v6_1) * v22
x19[7] = var_88 + (v18_1 + v7_1) * v22
x19[8] = var_84 + (v0 + v3) * v22
x19[9] = var_8c + (v4 + v6_1) * v22
x19[0xa] = var_88 + (v5 + v7_1) * v22
x19[0xb] = var_84 + (v2 + v3) * v22
return result
