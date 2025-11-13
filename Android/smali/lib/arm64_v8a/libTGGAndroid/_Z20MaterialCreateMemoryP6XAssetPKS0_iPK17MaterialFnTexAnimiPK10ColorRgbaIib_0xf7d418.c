// 函数: _Z20MaterialCreateMemoryP6XAssetPKS0_iPK17MaterialFnTexAnimiPK10ColorRgbaIib
// 地址: 0xf7d418
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = DefinitionNew(*macro_ptr_DefMaterial)
int64_t* result = AssetCatalogNewMemoryAsset(5, x0_1)
DefParseTree* x8_1 = x0_1[1]

if (x8_1 != 0)
    DefParseTreeDelete(x8_1)

DefinitionDeleteBlock(*x0_1, x0_1[3])
DefParseTree* x0_5 = DefXMLReadStringIntoParseTree(x0_1[3], 
    "<Material>\t<pPassArray>\t\t<Name>sprite-pass</Name>\t\t<pVariationArray>\t\t\t"
"<variationType>Base</variationType>\t\t\t<RenderLayer>Sprite</RenderLayer>\t\t\t<VertexShader>sys\S"
"prite.shader</VertexShader>\t\t\t<PixelShader>sys\Sprite.shader</PixelShader>\t\t\t"
"<AlphaBlendEnable")
DefMap* x1_2 = x0_1[3]
x0_1[1] = x0_5
*x0_1 = DefParseTreeMakeDefinition(x0_5, x1_2)
int64_t* result_1 = result
int64_t* x8_2

if (result == 0)
    result_1 = AssetPtrGetNull(5)
    x8_2 = *result_1
    
    if (x8_2 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8_2 = *result_1
else
    x8_2 = *result_1
    
    if (x8_2 == 0)
        AssetCatalogLoadAsset(result_1, false, true)
        x8_2 = *result_1

*(result_1 + 0x24) += 1
void* x24 = *x8_2
AttribMap* x23 = *(*(x24 + 8) + 8) + 8
AttribMapSetAssetPtr(*gMaterialAttribTable, x23, 0x5b, arg1)
float128 v0
float128 v1
v0, v1 = AttribMapSetAssetPtr(*gMaterialAttribTable, x23, 0x5c, arg1)

if (arg3 s>= 1)
    int64_t i = 0
    uint32_t x28_1 = 0x21
    
    do
        AttribMapSetAssetPtr(*gMaterialAttribTable, x23, i.d + 0x53, arg2[i])
        AttribMapSetInt(*gMaterialAttribTable, x23, x28_1 - 5, 1)
        AttribMapSetInt(*gMaterialAttribTable, x23, x28_1 - 4, 1)
        AttribMapSetInt(*gMaterialAttribTable, x23, x28_1 - 2, 2)
        AttribMapSetInt(*gMaterialAttribTable, x23, x28_1 - 1, 2)
        v0, v1 = AttribMapSetInt(*gMaterialAttribTable, x23, x28_1, 2)
        i += 1
        x28_1 += 6
    while (zx.q(arg3) != i)

if (arg5 s>= 1)
    int64_t i_1 = 0
    
    do
        void* x11_1 = arg4 + i_1
        v1 = *x11_1
        void* x10_3 = *(*(x24 + 8) + 8) + i_1
        i_1 += 0x20
        *(x10_3 + 0x28) = *(x11_1 + 0x10)
        *(x10_3 + 0x18) = v1
    while (zx.q(arg5) << 5 != i_1)

if (arg7 s>= 1)
    int64_t i_2 = 0
    v0.d = 0x437f0000
    v0:4.d = 0x437f0000
    v0:8.d = 0x437f0000
    v0:0xc.d = 0x437f0000
    
    do
        uint64_t x10_4 = zx.q(*(arg6 + (i_2 << 2)))
        v1.d = float.s(x10_4.d)
        v1:2.w = (x10_4 u>> 8).d
        v1:4.w = (x10_4 u>> 0x10).d
        v1:6.w = (x10_4 u>> 0x18).d
        uint128_t v1_1
        v1_1.d = zx.d((v1 & true).w)
        v1_1:4.d = zx.d(v1_1:2.w)
        v1_1:8.d = zx.d(v1_1:4.w)
        v1_1:0xc.d = zx.d(v1_1:6.w)
        void* x10_6 = *(*(x24 + 8) + 8) + (i_2 << 4)
        i_2 += 1
        *(x10_6 + 0x98) = vdivq_f32(vcvtq_f32_u32(v1_1), v0)
    while (zx.q(arg7) != i_2)

if ((arg8.d & 1) != 0)
    AttribMapSetInt(*gMaterialAttribTable, x23, 3, 5)
    AttribMapSetInt(*gMaterialAttribTable, x23, 4, 2)

AttribMapSetBool(*gMaterialAttribTable, x23, 0, true)
AttribMapSetBool(*gMaterialAttribTable, x23, 1, false)

if (result_1 != 0)
    *(result_1 + 0x24) -= 1

return result
