// 函数: _Z20Structure3DDebugDrawP6XAssetRK4Mat4P9Structure
// 地址: 0xc9916c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v11
int64_t var_70 = v11
int64_t v10
int64_t var_68 = v10
int64_t v9
int64_t var_60 = v9
int64_t v8
int64_t var_58 = v8
XAsset* result_1 = arg1
int128_t var_120
float var_110
int128_t var_d0
int128_t var_b0

if ((GameIsDebugDrawFlagSet(8) & 1) != 0)
    XAsset* result_2 = result_1
    int64_t* x9_1
    
    if (result_1 != 0)
        x9_1 = *result_2
        
        if (x9_1 == 0)
            goto label_c991e8
        
        goto label_c991b8
    
    result_2 = AssetPtrGetNull(2)
    x9_1 = *result_2
    int32_t x8_2
    
    if (x9_1 != 0)
    label_c991b8:
        x8_2 = *(result_2 + 0x24) + 1
        *(result_2 + 0x24) = x8_2
        
        if (arg3 != 0)
        label_c99204:
            void* x9_3 = **x9_1
            
            if (x9_3 == 0)
                *(result_2 + 0x24) = x8_2 - 1
            else
                int32_t x24_1 = *(x9_3 + 0x20)
                
                if (x24_1 s>= 1)
                    int32_t x23_1 = 0
                    v11.d = fconvert.s(1f)
                    int128_t var_180
                    __builtin_memcpy(&var_180, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x00\x3f\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23"
                    "bc\x9a\x99\x99\x3e\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                    "3f\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\x3c", 
                        0x60)
                    
                    do
                        int128_t v0_1
                        int128_t v16_1
                        v0_1, v16_1 = StructureGetHardpointTransform(arg3, x23_1)
                        float v1_1 = var_120:8.d
                        float v2_1 = var_120:0xc.d
                        v0_1.d = var_120.d
                        float v3_1 = var_120:4.d
                        int128_t var_140
                        int128_t var_80_1 = var_140
                        float v18_1 = v3_1 + v3_1
                        v16_1.d = v1_1 + v1_1
                        float v4_1 = var_110 + var_110
                        float v19_1 = v1_1 f* v16_1.d
                        float v20_1 = v1_1 * v18_1
                        float v22_1 = v2_1 * v18_1
                        v18_1 = v3_1 * v18_1
                        float v17_1 = v2_1 * (v2_1 + v2_1)
                        float v21_1 = v2_1 * v4_1
                        v1_1 = v1_1 * v4_1
                        v2_1 = v16_1.d f* v2_1
                        v3_1 = v3_1 * v4_1
                        v18_1 = v11.d f- v18_1
                        v16_1.d = v20_1 - v21_1
                        v4_1 = v0_1.d f* v16_1.d
                        v16_1.d = v0_1.d f* (v22_1 + v1_1)
                        v20_1 = v0_1.d f* (v20_1 + v21_1)
                        v21_1 = v0_1.d f* (v2_1 - v3_1)
                        v1_1 = v0_1.d f* (v22_1 - v1_1)
                        v2_1 = v0_1.d f* (v2_1 + v3_1)
                        v3_1 = v0_1.d f* (v11.d f- v19_1 - v17_1)
                        v17_1 = v0_1.d f* (v18_1 - v17_1)
                        v0_1.d = v0_1.d f* (v18_1 - v19_1)
                        int128_t var_90
                        var_90:8.d = v0_1.d
                        int32_t var_104
                        var_90:0xc.d = var_104
                        var_b0:8.d = v16_1.d
                        int32_t var_10c
                        var_b0:0xc.d = var_10c
                        int128_t var_a0
                        var_a0:8.d = v21_1
                        int32_t var_108
                        var_a0:0xc.d = var_108
                        var_90.d = v1_1
                        var_90:4.d = v2_1
                        var_b0.d = v3_1
                        var_b0:4.d = v4_1
                        var_a0.d = v20_1
                        var_a0:4.d = v17_1
                        int128_t var_e0
                        __builtin_memcpy(&var_e0, 
                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x0a\xd7\x"
                        "23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x9a\x99\x99\x3e\x0a\xd7\x23\x3c\x0a"
                        "d7\x23\x3c", 
                            0x28)
                        int128_t v0_2
                        int128_t v1_2
                        v0_2, v1_2 = Draw3DBBoxMatrix(&var_d0, &var_b0, &var_e0)
                        __builtin_memcpy(&var_e0, 
                            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x0a\xd7\x"
                        "23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\x3c\x9a\x99\x99\x3e\x0a"
                        "d7\x23\x3c", 
                            0x28)
                        int128_t v0_3
                        int128_t v1_3
                        v0_3, v1_3 = Draw3DBBoxMatrix(&var_d0, &var_b0, &var_e0)
                        var_e0 = var_180
                        __builtin_memcpy(&var_d0, 
                            "\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\xbc\x0a\xd7\x23\x3c\x0a\xd7\x"
                        "23\x3c\x9a\x99\x99\x3e", 
                            0x18)
                        Draw3DBBoxMatrix(&var_d0, &var_b0, &var_e0)
                        x23_1 += 1
                    while (x24_1 != x23_1)
                
                if (x24_1 s< 1 || result_2 != 0)
                    *(result_2 + 0x24) -= 1
        else
            *(result_2 + 0x24) = x8_2 - 1
    else
    label_c991e8:
        AssetCatalogLoadAsset(result_2, false, true)
        x9_1 = *result_2
        x8_2 = *(result_2 + 0x24) + 1
        *(result_2 + 0x24) = x8_2
        
        if (arg3 != 0)
            goto label_c99204
        
        *(result_2 + 0x24) = x8_2 - 1

XAsset* result

if ((GameIsDebugDrawFlagSet(4) & 1) == 0)
label_c99554:
    result = GameIsDebugDrawFlagSet(4)
    
    if (arg3 != 0 && (result.d & 1) != 0 && *(arg3 + 0x38) != 0)
        void*** x9_7
        
        if (result_1 == 0)
            result = AssetPtrGetNull(2)
            result_1 = result
            x9_7 = *result_1
            
            if (x9_7 == 0)
                result = AssetCatalogLoadAsset(result_1, false, true)
                x9_7 = *result_1
        else
            x9_7 = *result_1
            
            if (x9_7 == 0)
                result = AssetCatalogLoadAsset(result_1, false, true)
                x9_7 = *result_1
        
        int32_t x8_16 = *(result_1 + 0x24) + 1
        *(result_1 + 0x24) = x8_16
        void* x9_9 = **x9_7
        
        if (x9_9 == 0)
            *(result_1 + 0x24) = x8_16 - 1
        else
            void* x22_2 = *(arg3 + 0x38)
            uint64_t x8_17 = zx.q(*(x22_2 + 0x28))
            
            if (x8_17.d s>= 1)
                int64_t i = 0
                BBox* x21_1 = *(x9_9 + 0x18) + 0xc0
                int128_t var_140_1
                __builtin_memcpy(&var_140_1, 
                    "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f", 
                    0x20)
                
                do
                    Mat4Multiply(arg2, *(x22_2 + 0x20) + i)
                    int128_t var_130_3
                    var_120 = var_130_3
                    Draw3DBBoxMatrix(x21_1, &var_b0, &var_120)
                    Mat4Multiply(arg2, x21_1 - 0x94)
                    var_d0 = var_140_1
                    result = Draw3DBBoxMatrix(x21_1, &var_120, &var_d0)
                    i += 0x40
                    x21_1 += 0xd8
                while (x8_17 << 6 != i)
            
            if (x8_17.d s< 1 || result_1 != 0)
                *(result_1 + 0x24) -= 1
else
    int128_t v0_4
    int128_t v1_4
    int128_t v2_2
    int128_t v3_2
    result, v0_4, v1_4, v2_2, v3_2 = StructureDefGet(result_1)
    void* x22_1 = *result
    
    if (x22_1 != 0)
        if (*(x22_1 + 0x30) s>= 1)
            v0_4 = data_71bcf0
            int64_t x23_2 = 0
            
            if (arg3 == 0)
                int64_t i_1 = 0
                int128_t var_130_2 = v0_4
                
                do
                    v3_2 = *(arg2 + 0x10)
                    void* x8_12 = *(x22_1 + 0x38)
                    int128_t var_90_3 = *(arg2 + 0x20)
                    int128_t var_80_4 = *(arg2 + 0x30)
                    var_b0 = *arg2
                    int128_t var_a0_3 = v3_2
                    void* x9_6 = x8_12 + x23_2
                    int32_t x10_1 = *(x9_6 + 8)
                    
                    if (x10_1 == 2)
                        var_120 = var_130_2
                        v0_4, v1_4, v2_2, v3_2 = Draw3DSphere(x9_6 + 0x34, &var_b0, 8, 8, &var_120)
                    else if (x10_1 == 1)
                        var_120 = var_130_2
                        v0_4, v1_4, v2_2, v3_2 = Draw3DOBBox(x8_12 + x23_2 + 0xc, &var_b0, &var_120)
                    
                    i_1 += 1
                    x23_2 += 0x48
                while (i_1 s< sx.q(*(x22_1 + 0x30)))
            else
                int64_t i_2 = 0
                int128_t var_130_1 = v0_4
                
                do
                    v3_2 = *(arg2 + 0x10)
                    void* x25_1 = *(x22_1 + 0x38)
                    int128_t var_90_1 = *(arg2 + 0x20)
                    int128_t var_80_2 = *(arg2 + 0x30)
                    var_b0 = *arg2
                    int128_t var_a0_1 = v3_2
                    void* x26_1 = x25_1 + x23_2
                    uint64_t x8_8 = zx.q(*(x26_1 + 0x44))
                    
                    if ((x8_8.d & 0x80000000) == 0)
                        void* x9_4 = *(arg3 + 0x38)
                        
                        if (x9_4 != 0)
                            v0_4, v1_4, v2_2, v3_2 =
                                Mat4Multiply(arg2, *(x9_4 + 0x20) + (x8_8 << 6))
                            var_b0 = var_120
                            int128_t var_a0_2 = var_110.o
                            int128_t var_100
                            int128_t var_90_2 = var_100
                            int128_t var_f0
                            int128_t var_80_3 = var_f0
                    
                    int32_t x8_9 = *(x26_1 + 8)
                    
                    if (x8_9 == 1)
                        var_120 = var_130_1
                        v0_4, v1_4, v2_2, v3_2 = Draw3DOBBox(x25_1 + x23_2 + 0xc, &var_b0, &var_120)
                    else if (x8_9 == 2)
                        var_120 = var_130_1
                        v0_4, v1_4, v2_2, v3_2 =
                            Draw3DSphere(x25_1 + x23_2 + 0x34, &var_b0, 8, 8, &var_120)
                    
                    i_2 += 1
                    x23_2 += 0x48
                while (i_2 s< sx.q(*(x22_1 + 0x30)))
        
        goto label_c99554

return result
