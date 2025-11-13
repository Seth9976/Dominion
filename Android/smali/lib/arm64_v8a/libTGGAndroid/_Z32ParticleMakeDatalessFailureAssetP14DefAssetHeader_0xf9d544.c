// 函数: _Z32ParticleMakeDatalessFailureAssetP14DefAssetHeader
// 地址: 0xf9d544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseTreeDelete(*(arg1 + 8))
DefinitionDeleteBlock(*arg1, *(arg1 + 0x18))
DefParseTree* x0_3 = DefXMLReadStringIntoParseTree(*(arg1 + 0x18), 
    "<particle>\t<emitter>\t\t<Image>SYS/DUMMY_PARTICLE_IMAGE</Image>\t\t"
"<param><type>SpawnMin</type><track><p>5 5 0</p></track></param>\t\t"
"<param><type>SpinSpeed</type><track><p>100 100 0</p></track></param>\t</emitter></particle>")
DefMap* x1_1 = *(arg1 + 0x18)
*(arg1 + 8) = x0_3
int64_t result = DefParseTreeMakeDefinition(x0_3, x1_1)
*arg1 = result
return result
