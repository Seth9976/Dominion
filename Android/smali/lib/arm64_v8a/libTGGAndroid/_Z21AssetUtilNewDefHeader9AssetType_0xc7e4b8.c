// 函数: _Z21AssetUtilNewDefHeader9AssetType
// 地址: 0xc7e4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = DefMapFromAssetType(arg1)
char* x0_1 = DefParseTreeAlloc()
*(x0_1 + 0x20) = x0
*x0
XString::operator=(x0_1)
int64_t* result = XCalloc(0x20)
result[3] = x0
result[1] = x0_1
*result = DefParseTreeMakeDefinition(x0_1, x0)
return result
