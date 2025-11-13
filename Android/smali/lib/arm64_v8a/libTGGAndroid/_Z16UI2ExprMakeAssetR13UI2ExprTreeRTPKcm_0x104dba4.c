// 函数: _Z16UI2ExprMakeAssetR13UI2ExprTreeRTPKcm
// 地址: 0x104dba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = sx.q(*(arg1 + 0x428))
*(arg1 + 0x428) = x22.d + 1
*(arg1 + x22 * 0x38 + 0xa8) = 4
char var_28
XString::XString(&var_28, arg2)
int32_t x0_2 = AssetTypeFromPath(XString::operator char const*())
*(arg1 + x22 * 0x38 + 0xb0) = AssetPtrFromPath(XString::operator char const*(), zx.q(x0_2))
XString::~XString()
return arg1 + x22 * 0x38 + 0xa8
