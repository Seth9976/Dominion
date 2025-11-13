// 函数: _Z18TextureMakeCubeMapRK7XStringPP6XAsseti
// 地址: 0xf71298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset** x21 = arg2
int64_t* result = AssetCreateOrGet(arg1, 3)
int64_t* result_1 = result
int64_t* x8

if (result == 0)
    result_1 = AssetPtrGetNull(3)
    x8 = *result_1
    
    if (x8 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8 = *result_1
else
    x8 = *result_1
    
    if (x8 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8 = *result_1

*(result_1 + 0x24) += 1
int64_t* x19 = *x8
int32_t* x22 = *x19

if (x22 == 0)
    int32_t* x0_2 = XMalloc(0x50)
    x22 = x0_2
    DefinitionFillBlockWithDefaults(x0_2, *macro_ptr_DefTextureImportData)
    *x19 = x22
    XAsset* x24_1 = *x21
    int64_t* x8_1 = *x24_1
    
    if (x8_1 == 0)
        if (*(x24_1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x24_1, false, true)
        x8_1 = *x24_1
    
    int64_t* x8_3 = *x8_1
    int32_t x10_1 = arg3 * 3
    *x22 = **x8_3
    int32_t x9_5 = *(*x8_3 + 4)
    x22[4] = arg3
    x22[0xf] = x10_1 << 1
    x22[1] = x9_5
    x22[6] = *(*x8_3 + 0x18)
    *(x22 + 0x48) = XCalloc(x10_1 << 5)
    x22[5] = 8
    *(x22 + 0x1c) = 0x100000001
    x22[9] = 1
    
    if (arg3 s>= 1)
        goto label_f713f4
    
    *(result_1 + 0x24) -= 1
else if (arg3 s>= 1)
label_f713f4:
    int32_t x27_1 = *x22
    int32_t x25_1 = x22[1]
    uint64_t x26_1 = zx.q(arg3)
    int64_t x24_2 = 0
    uint64_t x28_1 = x26_1 << 4
    uint64_t fp_1 = x26_1 << 3
    
    do
        int32_t var_70_1 = x27_1
        uint64_t x0_8 = zx.q(x22[6])
        int32_t var_64_1 = x0_8.d
        int32_t x9_8 = TextureFormatBytesPerPixel(x0_8) * x27_1
        int64_t var_78 = XMalloc(x25_1 * x9_8)
        TextureGetRenderData(*x21, &var_78)
        int32_t* x9_10 = *(x22 + 0x48) + x24_2
        *x9_10 = x25_1 * x9_8
        *(x9_10 + 8) = var_78
        int32_t var_70_2 = x27_1
        uint64_t x0_13 = zx.q(x22[6])
        int32_t var_64_2 = x0_13.d
        int32_t x9_11 = TextureFormatBytesPerPixel(x0_13) * x27_1
        var_78 = XMalloc(x25_1 * x9_11)
        void* x20 = &x21[x26_1]
        TextureGetRenderData(*x20, &var_78)
        int32_t* x9_14 = *(x22 + 0x48) + x28_1 + x24_2
        *x9_14 = x25_1 * x9_11
        *(x9_14 + 8) = var_78
        int32_t var_70_3 = x27_1
        uint64_t x0_18 = zx.q(x22[6])
        int32_t var_64_3 = x0_18.d
        int32_t x9_15 = TextureFormatBytesPerPixel(x0_18) * x27_1
        var_78 = XMalloc(x25_1 * x9_15)
        void* x20_1 = x20 + fp_1
        TextureGetRenderData(*x20_1, &var_78)
        int32_t* x9_19 = *(x22 + 0x48) + (x26_1 << 5) + x24_2
        *x9_19 = x25_1 * x9_15
        *(x9_19 + 8) = var_78
        int32_t var_70_4 = x27_1
        uint64_t x0_23 = zx.q(x22[6])
        int32_t var_64_4 = x0_23.d
        int32_t x9_20 = TextureFormatBytesPerPixel(x0_23) * x27_1
        var_78 = XMalloc(x25_1 * x9_20)
        void* x20_2 = x20_1 + fp_1
        TextureGetRenderData(*x20_2, &var_78)
        int32_t* x9_23 = *(x22 + 0x48) + ((x26_1 + (zx.q(arg3) << 1)) << 4) + x24_2
        *x9_23 = x25_1 * x9_20
        *(x9_23 + 8) = var_78
        int32_t var_70_5 = x27_1
        uint64_t x0_28 = zx.q(x22[6])
        int32_t var_64_5 = x0_28.d
        int32_t x9_24 = TextureFormatBytesPerPixel(x0_28) * x27_1
        var_78 = XMalloc(x25_1 * x9_24)
        void* x20_3 = x20_2 + fp_1
        TextureGetRenderData(*x20_3, &var_78)
        int32_t* x9_28 = *(x22 + 0x48) + (x26_1 << 6) + x24_2
        *x9_28 = x25_1 * x9_24
        *(x9_28 + 8) = var_78
        int32_t var_70_6 = x27_1
        uint64_t x0_33 = zx.q(x22[6])
        int32_t var_64_6 = x0_33.d
        int32_t x9_29 = TextureFormatBytesPerPixel(x0_33) * x27_1
        var_78 = XMalloc(x25_1 * x9_29)
        TextureGetRenderData(*(x20_3 + (x26_1 << 3)), &var_78)
        int32_t x11_2
        
        if (x25_1 s< 0)
            x11_2 = x25_1 + 1
        else
            x11_2 = x25_1
        
        int32_t* x8_30 = *(x22 + 0x48) + ((x26_1 + (zx.q(arg3) << 2)) << 4) + x24_2
        *x8_30 = x25_1 * x9_29
        x25_1 = x11_2 s>> 1
        int32_t x11_3
        
        if (x27_1 s< 0)
            x11_3 = x27_1 + 1
        else
            x11_3 = x27_1
        
        x24_2 += 0x10
        x27_1 = x11_3 s>> 1
        x21 = &x21[1]
        *(x8_30 + 8) = var_78
    while (x28_1 != x24_2)
    
    if (result_1 != 0)
        *(result_1 + 0x24) -= 1
else
    *(result_1 + 0x24) -= 1

return result
