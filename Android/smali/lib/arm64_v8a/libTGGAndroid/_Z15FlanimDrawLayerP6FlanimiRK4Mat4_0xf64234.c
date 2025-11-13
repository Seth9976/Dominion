// 函数: _Z15FlanimDrawLayerP6FlanimiRK4Mat4
// 地址: 0xf64234
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float var_78
int64_t result = FlanimGetCurrentTransform(arg1, arg2, &var_78)
XAsset* var_30

if (var_30 != 0)
    int64_t x9_1 = *(arg1 + 0x70)
    XAsset* x8_2 = *(x9_1 + muls.dp.d(arg2, 0x70) + 0x58)
    
    if (x8_2 != 0)
        var_30 = x8_2
    
    void* x9_2 = x9_1 + sx.q(arg2) * 0x70
    char var_38
    uint32_t x11_5 = zx.d(0x80 + zx.w(*(arg1 + 0x64)) * zx.w(var_38)) u/ 0xff
    char var_37
    int16_t x13_8 = 0x80 + (((x11_5
        | (mulu.dp.d(zx.d(0x80 + zx.w(*(arg1 + 0x65)) * zx.w(var_37)), 0x80808081) u>> 0x20).d
        << 1) u>> 8).w & 0xff) * zx.w(*(x9_2 + 0x65))
    char var_36
    uint32_t x10_6 = zx.d(0x80 + zx.w(*(arg1 + 0x66)) * zx.w(var_36)) u/ 0xff
    int32_t x11_11 = (0xfe00ffff & (((mulu.dp.d(zx.d(x13_8), 0x80808081) u>> 0x20).d << 1 & 0xff00)
        | (zx.d(0x80 + x11_5.w * zx.w(*(x9_2 + 0x64))) u/ 0xff)))
        | (0x1ff & (zx.d(0x80 + x10_6.w * zx.w(*(x9_2 + 0x66))) u/ 0xff)) << 0x10
    char var_35
    int32_t x8_7 = x11_11 | (zx.d(0x80 + ((
        (zx.d(0x80 + zx.w(*(arg1 + 0x67)) * zx.w(var_35)) u/ 0xff) << 0x18 | x10_6 << 0x10) u>> 0x18).w
        * zx.w(*(x9_2 + 0x67))) u/ 0xff) << 0x18
    int32_t var_80 = x8_7
    char var_34
    uint32_t x11_13 = zx.d(*(arg1 + 0x68)) + zx.d(var_34)
    char var_33
    uint32_t x13_15 = zx.d(*(arg1 + 0x69)) + zx.d(var_33)
    uint32_t x11_14
    
    x11_14 = x11_13 u< 0xff ? x11_13 : 0xff
    
    char var_32
    uint32_t x9_5 = zx.d(*(arg1 + 0x6a)) + zx.d(var_32)
    char x13_16
    
    x13_16 = x13_15 u< 0xff ? x13_15.b : -1
    
    char var_31
    uint32_t x10_10 = zx.d(*(arg1 + 0x6b)) + zx.d(var_31)
    char x9_6
    
    x9_6 = x9_5 u< 0xff ? x9_5.b : -1
    
    char x10_11
    
    x10_11 = x10_10 u< 0xff ? x10_10.b : -1
    
    int32_t var_7c_1 = (0xffffff
        & ((0xff00ffff & (zx.d(x13_16) << 8 | x11_14)) | zx.d(x9_6) << 0x10)) | zx.d(x10_11) << 0x18
    
    if (x8_7 u>> 0x18 != 0)
        float v0_1 = *arg3
        float v1_1 = *(arg3 + 4)
        float v2_1 = *(arg3 + 0xc)
        float v3_1 = *(arg3 + 0x10)
        float v4_1 = *(arg3 + 0x14)
        float v5_1 = var_78
        float v21_1 = v0_1 * v5_1
        float var_74
        float v22_1 = v1_1 * var_74
        v5_1 = v5_1 * v3_1
        float var_68
        float v23_1 = v0_1 * var_68
        float var_64
        float v24_1 = v1_1 * var_64
        float v7_1 = var_68 * v3_1
        float var_58
        float v25_1 = v0_1 * var_58
        float v17_1 = var_58 * v3_1
        float var_54
        float v19_1 = v1_1 * var_54
        float var_48
        float var_44
        v0_1 = v0_1 * var_48 + v1_1 * var_44
        v1_1 = var_48 * v3_1 + var_44 * v4_1
        v3_1 = *(arg3 + 0x1c)
        int64_t var_70
        int64_t var_c0 = var_70
        int64_t var_60
        int64_t var_b8_1 = var_60
        int64_t var_50
        int64_t var_b0_1 = var_50
        int64_t var_40
        int64_t var_a8_1 = var_40
        float var_a0 = v2_1 + v21_1 + v22_1
        float var_9c_1 = v3_1 + v5_1 + var_74 * v4_1
        float var_98_1 = v2_1 + v23_1 + v24_1
        float var_94_1 = v3_1 + v7_1 + var_64 * v4_1
        float var_90_1 = v2_1 + v25_1 + v19_1
        float var_8c_1 = v3_1 + v17_1 + var_54 * v4_1
        float var_88_1 = v2_1 + v0_1
        float var_84_1 = v3_1 + v1_1
        return DrawQuadParams(var_30, &var_a0, &var_c0, &var_80, false, *(arg1 + 0x90))

return result
