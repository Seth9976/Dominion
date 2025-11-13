// 函数: _Z28DefXMLReadFileIntoDefinitionPK6DefMapR11HalFilePathPv
// 地址: 0xc92348
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseTree* x0 = DefXMLReadFileIntoParseTree(arg1, arg2)

if (x0 != 0)
    DefParseReadBlock(arg3, arg1, x0, false)
    DefParseTreeDelete(x0)

return zx.q(x0 != 0 ? 1 : 0)
