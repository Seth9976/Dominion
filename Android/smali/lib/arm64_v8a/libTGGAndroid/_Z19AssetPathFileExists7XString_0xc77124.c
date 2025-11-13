// 函数: _Z19AssetPathFileExists7XString
// 地址: 0xc77124
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = AssetTypeFromPath(XString::operator char const*())
void var_28
XString::XString(&var_28)
AssetSourceGetFullPath(&var_28, zx.q(x0_1))
XString::~XString()
int32_t x0_5 = XFileExists(XString::operator char const*())
XString::~XString()
return zx.q(x0_5) & 1
