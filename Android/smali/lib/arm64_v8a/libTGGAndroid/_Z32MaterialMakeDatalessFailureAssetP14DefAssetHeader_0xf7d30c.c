// 函数: _Z32MaterialMakeDatalessFailureAssetP14DefAssetHeader
// 地址: 0xf7d30c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseTree* x0 = *(arg1 + 8)

if (x0 != 0)
    DefParseTreeDelete(x0)

DefinitionDeleteBlock(*arg1, *(arg1 + 0x18))
DefParseTree* x0_3 = DefXMLReadStringIntoParseTree(*(arg1 + 0x18), 
    "<Material>\t<pPassArray>\t\t<Name>sprite-pass</Name>\t\t<pVariationArray>\t\t\t"
"<variationType>Base</variationType>\t\t\t<RenderLayer>Sprite</RenderLayer>\t\t\t<VertexShader>sys\S"
"prite.shader</VertexShader>\t\t\t<PixelShader>sys\Sprite.shader</PixelShader>\t\t\t"
"<AlphaBlendEnable")
DefMap* x1_1 = *(arg1 + 0x18)
*(arg1 + 8) = x0_3
int64_t result = DefParseTreeMakeDefinition(x0_3, x1_1)
*arg1 = result
return result
