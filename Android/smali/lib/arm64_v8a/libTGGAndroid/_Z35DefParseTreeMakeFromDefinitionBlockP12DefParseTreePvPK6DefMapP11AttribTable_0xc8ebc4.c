// 函数: _Z35DefParseTreeMakeFromDefinitionBlockP12DefParseTreePvPK6DefMapP11AttribTable
// 地址: 0xc8ebc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3
XString::operator=(arg1)
int64_t result = DefIterGetFirst(arg3)
int32_t i = result.d

if (result.d != 0xffffffff)
    do
        DefField* x0_2 = DefIterGetNext(arg3, &i)
        result = DefParseTreeMakeFromDefinitionSubField(arg1, arg2, *(x0_2 + 0x18), x0_2, arg4)
    while (i != 0xffffffff)

return result
