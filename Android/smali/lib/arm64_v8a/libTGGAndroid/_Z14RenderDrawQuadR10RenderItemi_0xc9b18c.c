// 函数: _Z14RenderDrawQuadR10RenderItemi
// 地址: 0xc9b18c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = RenderCanBatchQuads(arg1)
int32_t x8

if ((result.d & 1) == 0)
    result = RenderDrawQuadBuffers()
    
    if (*(gDraw3DData + "center_landscape_col_2") != 0)
        RenderItem* x20_1 = gDraw3DData
            + sx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "Off")) << 2) + "s")) * 0x1a0 + 0x590
        RenderStateSetMaterial(x20_1)
        result = RenderSubMesh(x20_1)
        *(gDraw3DData + "center_landscape_col_2") = 0
    
    *(gDraw3DData + "tEditionOff") = arg2
    x8 = arg2
else
    x8 = *(gDraw3DData + "tEditionOff")

*(gDraw3DData + "tionOff") = arg2 - x8 + 1
return result
