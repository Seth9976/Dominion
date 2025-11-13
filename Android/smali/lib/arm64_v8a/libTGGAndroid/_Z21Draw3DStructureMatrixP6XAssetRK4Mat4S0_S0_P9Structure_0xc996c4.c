// 函数: _Z21Draw3DStructureMatrixP6XAssetRK4Mat4S0_S0_P9Structure
// 地址: 0xc996c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = StructureDefGet(arg1)
int32_t* x8 = *result

if (x8 == 0)
    return result

if (*x8 s>= 1)
    XAsset* var_70
    
    if (arg4 == 0)
        int64_t x26_2 = 0
        int64_t i = 0
        
        do
            DefSubMesh* x24_1 = *(x8 + 8) + x26_2
            XAsset* x0_6 = AttribMapGetAssetPtr(*gMaterialAttribTable, x24_1 + 0x60, 0x53)
            XAsset* x22_1
            
            if (x0_6 == 0)
                x22_1 = data_23e4f78
            else
                x22_1 = x0_6
            
            int64_t x0_8 = AttribMapGetAssetPtr(*gMaterialAttribTable, x24_1 + 0x60, 0x54)
            XAsset** x3_1
            int32_t x4_1
            
            if (x0_8 == 0)
                x3_1 = &var_70
                x4_1 = 1
                var_70 = x22_1
            else
                var_70 = x22_1
                int64_t var_68_2 = x0_8
                x3_1 = &var_70
                x4_1 = 2
            
            Draw3DSubMeshMatrix(x24_1, arg2, arg3, x3_1, x4_1, arg5)
            x8 = *result
            i += 1
            x26_2 += 0x150
        while (i s< sx.q(*x8))
    else
        int64_t x27_1 = 0
        int64_t i_1 = 0
        
        do
            DefSubMesh* x25_1 = *(x8 + 8) + x27_1
            AttribMapGetAssetPtr(*gMaterialAttribTable, x25_1 + 0x60, 0x53)
            int64_t x0_3 = AttribMapGetAssetPtr(*gMaterialAttribTable, x25_1 + 0x60, 0x54)
            XAsset** x3
            int32_t x4
            
            if (x0_3 == 0)
                x3 = &var_70
                x4 = 1
                var_70 = arg4
            else
                var_70 = arg4
                int64_t var_68_1 = x0_3
                x3 = &var_70
                x4 = 2
            
            Draw3DSubMeshMatrix(x25_1, arg2, arg3, x3, x4, arg5)
            x8 = *result
            i_1 += 1
            x27_1 += 0x150
        while (i_1 s< sx.q(*x8))

return Structure3DDebugDraw(arg1, arg2, arg5) __tailcall
