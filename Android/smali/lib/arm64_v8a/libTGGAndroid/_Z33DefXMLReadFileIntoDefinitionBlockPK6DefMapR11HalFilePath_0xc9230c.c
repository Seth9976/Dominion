// 函数: _Z33DefXMLReadFileIntoDefinitionBlockPK6DefMapR11HalFilePath
// 地址: 0xc9230c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseTree* x0 = DefXMLReadFileIntoParseTree(arg1, arg2)

if (x0 == 0)
    return x0

DefParseTree* x0_1 = DefParseTreeMakeDefinition(x0, arg1)
DefParseTreeDelete(x0)
return x0_1
