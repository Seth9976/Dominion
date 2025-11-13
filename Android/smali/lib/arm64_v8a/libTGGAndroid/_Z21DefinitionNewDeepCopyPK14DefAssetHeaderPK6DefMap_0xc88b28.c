// 函数: _Z21DefinitionNewDeepCopyPK14DefAssetHeaderPK6DefMap
// 地址: 0xc88b28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = XCalloc(0x20)
void* x20_1 = *arg1
void* x0_1 = XMalloc(*(arg2 + 0x14))
DefinitionDeepCopyReplaceBlock(x20_1, x0_1, arg2)
*result = x0_1
result[3] = arg2
return result
