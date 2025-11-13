// 函数: _Z21StructureIntersectRayP6XAssetRK3RayRiS4_R4Vec3Rf
// 地址: 0xfd43f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x8
int128_t v0
int128_t v2

if (arg1 == 0)
    XAsset* x0_3
    x0_3, v0, v2 = AssetPtrGetNull(2)
    x19 = x0_3
    x8 = *x19
    
    if (x8 == 0)
        v0, v2 = AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        v0, v2 = AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int32_t* x11 = **x8
int32_t x8_2 = *x11
int32_t x25

if (x8_2 s< 1)
    x25 = 1
    *(x19 + 0x24) -= 1
else
    int64_t i = 0
    x25 = 1
    v0.d = 0f
    int32_t* var_b8_1 = x11
    float var_b0_1 = v0.d
    double var_98
    int64_t var_88
    float v1
    
    do
        int64_t x9_2 = *(x11 + 8)
        
        if (*(x9_2 + i * 0x150 + 0x28) s>= 1)
            void* x8_3 = x9_2 + i * 0x150
            int64_t x19_1 = 0
            
            do
                int16_t* x8_9 = *(x8_3 + 0x30) + (x19_1 << 1)
                int64_t* x9_4 = *(x8_3 + 0x20) + zx.q(*x8_9) * 0x2c
                v0.q = *x9_4
                v1 = x9_4[1].d
                uint64_t x9_5 = zx.q(x8_9[1])
                uint64_t x8_10 = zx.q(x8_9[2])
                var_88 = v0.q
                float var_80_1 = v1
                int64_t* x9_6 = *(x8_3 + 0x20) + x9_5 * 0x2c
                v0.q = *x9_6
                int64_t var_7c_1 = v0.q
                float var_74_1 = x9_6[1].d
                int64_t* x8_11 = *(x8_3 + 0x20) + x8_10 * 0x2c
                v0.q = *x8_11
                int64_t var_70_1 = v0.q
                float var_68_1 = x8_11[1].d
                int32_t x0_1
                x0_1, v0, v2 = IntersectRayTri(arg2, &var_88, &var_98)
                
                if ((x0_1 & 1) != 0)
                    v0.d = var_98.d
                    
                    if (((v0.d f>= var_b0_1 ? 1 : 0) & not.d(x25) & 1) == 0)
                        x25 = 0
                        *arg3 = i.d
                        *arg4 = (((x19_1 & 0xffffffff) * 0xaaaaaaab) u>> 0x21).d
                        var_b0_1 = v0.d
                    else
                        x25 = 0
                
                x19_1 += 3
            while (*(x9_2 + i * 0x150 + 0x28) s> x19_1.d)
            
            x11 = var_b8_1
            x8_2 = *x11
        
        i += 1
    while (i s< sx.q(x8_2))
    
    if ((x25 & 1) == 0)
        *arg6 = var_b0_1
        void* x8_16 = *(x11 + 8) + sx.q(*arg3) * 0x150
        int64_t x9_9 = *(x8_16 + 0x30)
        int64_t x10_4 = sx.q(*arg4) * 3
        void* x9_10 = x9_9 + (sx.q(x10_4.d) << 1)
        int64_t* x10_5 = *(x8_16 + 0x20) + zx.q(*(x9_9 + (x10_4 << 1))) * 0x2c
        v0.q = *x10_5
        v1 = x10_5[1].d
        uint64_t x10_6 = zx.q(*(x9_10 + 2))
        uint64_t x9_11 = zx.q(*(x9_10 + 4))
        var_88 = v0.q
        float var_80_2 = v1
        int64_t* x10_7 = *(x8_16 + 0x20) + x10_6 * 0x2c
        v0.q = *x10_7
        int64_t var_7c_2 = v0.q
        float var_74_2 = x10_7[1].d
        int64_t* x8_18 = *(x8_16 + 0x20) + x9_11 * 0x2c
        v0.q = *x8_18
        int64_t var_70_2 = v0.q
        float var_68_2 = x8_18[1].d
        v0.q = *(arg2 + 0xc)
        v2.q = *arg2
        float v3 = *(arg2 + 8)
        v0.d = v0.d f* var_b0_1
        v0:4.d = v0:4.d f* var_b0_1
        v1 = var_b0_1 * *(arg2 + 0x14)
        var_98 = vadd_f32(v0, v2)
        float var_90_1 = v1 + v3
        int32_t v0_2
        int32_t v1_1
        int32_t v2_1
        v0_2, v1_1, v2_1 = TriangleBarycentricCoord(&var_88, &var_98)
        *arg5 = v0_2
        *(arg5 + 4) = v1_1
        *(arg5 + 8) = v2_1
    
    if (x19 != 0)
        *(x19 + 0x24) -= 1

return zx.q(not.d(x25)) & 1
