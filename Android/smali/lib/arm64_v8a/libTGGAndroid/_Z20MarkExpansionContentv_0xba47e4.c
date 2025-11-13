// 函数: _Z20MarkExpansionContentv
// 地址: 0xba47e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x24 = *UI2_CARD_LAYOUT_INDIV
uint64_t x8 = *UI2_CARD_LAYOUT_BANNER
uint64_t x9 = *UI2_LANDSCAPE_LAYOUT_INDIV
uint64_t x10 = *UI2_ACHIEVEMENT_IMAGE
int64_t x26 = 8
XAsset* var_80 = x24
uint64_t var_78 = x8
uint64_t var_70 = x9
uint64_t var_68 = x10
int64_t result

while (true)
    AssetCatalogPurgeAsset(x24)
    DefinitionLoadFileAsset(x24, true)
    DefParseTree* x25_1 = *(*x24 + 8)
    ApplyLabelRec(x25_1, "ay_", 3, "exp14")
    ApplyLabelRec(x25_1, "s2_", 3, "sea2")
    ApplyLabelRec(x25_1, "p2_", 3, "pros2")
    ApplyLabelRec(x25_1, "h2_", 3, "hint2")
    ApplyLabelRec(x25_1, "pl_", 3, "plun")
    ApplyLabelRec(x25_1, "rs_", 3, "sun")
    ApplyLabelRec(x25_1, "al22_", 5, "r22")
    ApplyLabelRec(x25_1, "c22_", 4, "r22")
    ApplyLabelRec(x25_1, "d22_", 4, "r22")
    ApplyLabelRec(x25_1, "g22_", 4, "r22")
    ApplyLabelRec(x25_1, "ad22_", 5, "r22")
    ApplyLabelRec(x25_1, "e22_", 4, "r22")
    ApplyLabelRec(x25_1, "n22_", 4, "r22")
    ApplyLabelRec(x25_1, "r22_", 4, "r22")
    ApplyLabelRec(x25_1, "pr22_", 5, "r22")
    ApplyLabelRec(x25_1, "c2_", 3, "corn2")
    ApplyLabelRec(x25_1, "g2_", 3, "guild2")
    result = AssetCatalogSave(x24)
    
    if (x26 == 0x20)
        break
    
    x24 = *(&var_80 + x26)
    x26 += 8

return result
