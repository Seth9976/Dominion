// 函数: _Z14FlanimReimportPKcP14DefAssetHeader7XString
// 地址: 0xf6818c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_3 = DefXMLReadFileIntoDefinition(*macro_ptr_DefMayaFlanim, 
    XString::operator char const*(), nullptr, 0)

if (x0_3 != 0)
    DefParseTreeDelete(*(arg2 + 8))
    *(arg2 + 8) = 0
    FlanimDefFromMayaDef(*x0_3, *arg2)
    DefinitionDeleteBlock(*x0_3, x0_3[3])
    DefParseTreeDelete(x0_3[1])
    XFree(x0_3)

return zx.q(x0_3 != 0 ? 1 : 0)
