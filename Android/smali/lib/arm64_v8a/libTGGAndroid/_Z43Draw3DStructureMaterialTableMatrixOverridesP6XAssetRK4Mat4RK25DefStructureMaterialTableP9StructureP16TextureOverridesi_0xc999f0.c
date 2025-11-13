// 函数: _Z43Draw3DStructureMaterialTableMatrixOverridesP6XAssetRK4Mat4RK25DefStructureMaterialTableP9StructureP16TextureOverridesi
// 地址: 0xc999f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = arg6
Structure* x24 = arg4
Mat4 const& fp = arg2
XAsset* x19 = arg1
int64_t* result
int128_t v0
result, v0 = StructureDefGet(arg1)

if (*result == 0)
    return result

Mat4 const& var_b8 = fp
Structure* var_b0 = x24

if ((zx.d(data_23e4fa8) & 1) == 0)
    goto label_c99dc8

while (true)
    XAsset* var_c0_1 = x19
    
    if ((zx.d(data_23e4fb8) & 1) == 0)
        int32_t x0_13
        x0_13, v0 = __cxa_guard_acquire(&data_23e4fb8)
        
        if (x0_13 != 0)
            data_23e4fb0 = AssetPtrFromPath("sys/pbr/brdf_lut.texture", 3)
            __cxa_guard_release(&data_23e4fb8)
            fp = var_b8
            x24 = var_b0
    
    int32_t* x8_4 = *result
    
    if (*x8_4 s< 1)
    label_c99d40:
        return Structure3DDebugDraw(var_c0_1, fp, x24) __tailcall
    
    int64_t x9_3 = sx.q(x25 + 0xa)
    int64_t x27_1 = 0
    
    while (true)
        x19 = zx.q(*(arg3 + 8))
        int64_t x23_1 = *(x8_4 + 8)
        int64_t* x20_1 = *arg3
        
        if (x19.d s>= 1)
            char* s2 = *x20_1
            char* s1 = *(x23_1 + x27_1 * 0x150 + 8)
            int32_t x0_3
            x0_3, v0 = strncasecmp(s1, s2, sx.q(strlen(s2)))
            
            if (x0_3 == 0)
            label_c99b78:
                x20_1 = x20_1
            else
                int64_t* x21_1 = x20_1
                int64_t x8_9 = 1
                int64_t fp_1
                int32_t i
                
                do
                    fp_1 = x8_9
                    
                    if (x19 == x8_9)
                        x21_1 = x20_1 + x19 * 0x30 - 0x30
                        fp = var_b8
                        x24 = var_b0
                        
                        if (fp_1 u>= x19)
                            goto label_c99b84
                        
                        goto label_c99b78_1
                    
                    x21_1 = &x21_1[6]
                    char* s2_1 = *x21_1
                    i, v0 = strncasecmp(s1, s2_1, sx.q(strlen(s2_1)))
                    x8_9 = fp_1 + 1
                while (i != 0)
                fp = var_b8
                x24 = var_b0
                
                if (fp_1 u< x19)
                label_c99b78_1:
                    x20_1 = x21_1
        
    label_c99b84:
        int64_t x9_6 = *(x23_1 + x27_1 * 0x150 + 0x50)
        XAsset* x8_11 = x20_1[2]
        x25 = 0
        
        if (x9_6 u>= 0xa && x9_6 u< x9_3)
            void* x11_2 = arg5 + ((x9_6 - 0xa) << 5)
            v0.d = *(x11_2 + 0x10)
            XAsset* x12_1 = *(x11_2 + 8)
            
            if (x12_1 != 0)
                x8_11 = x12_1
            
            if (v0.d f!= *gRgbaWhite)
                x25 = 1
                *(gDraw3DData + 0x4bc) = *(x11_2 + 0x10)
            else
                v0.d = *(x11_2 + 0x14)
                
                if (v0.d f!= *(gRgbaWhite + 4))
                    x25 = 1
                    *(gDraw3DData + 0x4bc) = *(x11_2 + 0x10)
                else
                    void* x10_2 = arg5 + ((x9_6 - 0xa) << 5)
                    v0.d = *(x10_2 + 0x18)
                    
                    if (v0.d f!= *(gRgbaWhite + 8))
                        x25 = 1
                        *(gDraw3DData + 0x4bc) = *(x11_2 + 0x10)
                    else
                        v0.d = *(x10_2 + 0x1c)
                        
                        if (v0.d f!= *(gRgbaWhite + 0xc))
                            x25 = 1
                            *(gDraw3DData + 0x4bc) = *(x11_2 + 0x10)
                        else
                            x25 = 0
        
        int64_t x9_11 = x20_1[5]
        DefSubMesh* x0_7 = x23_1 + x27_1 * 0x150
        XAsset* var_88
        XAsset** x3
        XAsset** x3_4
        int32_t x4
        int32_t x4_2
        
        if (x9_11 == 0)
            int64_t x10_5 = x20_1[3]
            int64_t x9_12 = x20_1[4]
            
            if (x9_12 != 0)
                if (x10_5 == 0)
                    int64_t x10_8 = data_23e4fb0
                    var_88 = x8_11
                    int64_t var_80_5 = x9_12
                    x3_4 = &var_88
                    x4_2 = 3
                    int64_t var_78_4 = x10_8
                    int64_t var_70_4 = 0
                    goto label_c99dac
                
                int64_t x11_4 = data_23e4fb0
                var_88 = x8_11
                int64_t var_80_2 = x10_5
                x3 = &var_88
                x4 = 4
                int64_t var_78_2 = x9_12
                int64_t var_70_2 = x11_4
                goto label_c99c88
            
            if (x10_5 == 0)
                XAsset* x2_4 = x20_1[1]
                
                if (x2_4 != 0)
                    goto label_c99cd4
                
                if (x20_1[2] == 0)
                    Draw3DSubMeshMatrix(x0_7, fp, data_23e4fa0, nullptr, 0, x24)
                    
                    if (x25 != 0)
                        *(gDraw3DData + 0x4bc) = *gRgbaWhite
                else
                    x2_4 = data_23e4fa0
                label_c99cd4:
                    var_88 = x8_11
                    Draw3DSubMeshMatrix(x0_7, fp, x2_4, &var_88, 1, x24)
                    
                    if (x25 != 0)
                        *(gDraw3DData + 0x4bc) = *gRgbaWhite
            else
                var_88 = x8_11
                int64_t var_80_3 = x10_5
                Draw3DSubMeshMatrix(x0_7, fp, x20_1[1], &var_88, 2, x24)
                
                if (x25 != 0)
                    *(gDraw3DData + 0x4bc) = *gRgbaWhite
        else
            int64_t x10_3 = x20_1[3]
            
            if (x10_3 == 0)
                var_88 = x8_11
                x3_4 = &var_88
                x4_2 = 4
                int64_t var_80_4 = x20_1[4]
                int64_t var_78_3 = x9_11
                int64_t var_70_3 = data_23e4fb0
            label_c99dac:
                Draw3DSubMeshMatrix(x0_7, fp, x20_1[1], x3_4, x4_2, x24)
                pthread_kill(pthread_self(), 6)
                XNoReturn()
                break
            
            var_88 = x8_11
            int64_t var_80_1 = x10_3
            x3 = &var_88
            x4 = 5
            int64_t var_78_1 = x20_1[4]
            int64_t var_70_1 = x9_11
            int64_t var_68_1 = data_23e4fb0
        label_c99c88:
            Draw3DSubMeshMatrix(x0_7, fp, x20_1[1], x3, x4, x24)
            
            if (x25 != 0)
                *(gDraw3DData + 0x4bc) = *gRgbaWhite
        x27_1 += 1
        x8_4 = *result
        
        if (x27_1 s>= sx.q(*x8_4))
            goto label_c99d40
    
label_c99dc8:
    int32_t x0_11
    x0_11, v0 = __cxa_guard_acquire(&data_23e4fa8)
    
    if (x0_11 != 0)
        data_23e4fa0 = AssetPtrFromPath("sys/draw3d.material", 5)
        __cxa_guard_release(&data_23e4fa8)
        fp = var_b8
        x24 = var_b0
