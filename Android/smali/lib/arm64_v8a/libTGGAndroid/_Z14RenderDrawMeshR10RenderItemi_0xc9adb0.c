// 函数: _Z14RenderDrawMeshR10RenderItemi
// 地址: 0xc9adb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(ShaderGetDef(*MaterialCacheGet(MaterialCacheGetId(*(arg1 + 0x50)))) + 0x50) == 0)
    RenderDrawQuadBuffers()
    
    if (*(gDraw3DData + "center_landscape_col_2") != 0)
        RenderItem* x21_1 = gDraw3DData
            + sx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "Off")) << 2) + "s")) * 0x1a0 + 0x590
        RenderStateSetMaterial(x21_1)
        RenderSubMesh(x21_1)
        *(gDraw3DData + "center_landscape_col_2") = 0
    
    *(gDraw3DData + "Off") = arg2
    RenderStateSetMaterial(arg1)
    return RenderSubMesh(arg1) __tailcall

int64_t result = RenderCanCoalescelInstanceMesh(arg1)
int32_t x8_2

if ((result.d & 1) == 0)
    result = RenderDrawQuadBuffers()
    
    if (*(gDraw3DData + "center_landscape_col_2") != 0)
        RenderItem* x20_1 = gDraw3DData
            + sx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "Off")) << 2) + "s")) * 0x1a0 + 0x590
        RenderStateSetMaterial(x20_1)
        result = RenderSubMesh(x20_1)
    
    *(gDraw3DData + "Off") = arg2
    x8_2 = 1
else
    x8_2 = *(gDraw3DData + "center_landscape_col_2") + 1

*(gDraw3DData + "center_landscape_col_2") = x8_2
return result
