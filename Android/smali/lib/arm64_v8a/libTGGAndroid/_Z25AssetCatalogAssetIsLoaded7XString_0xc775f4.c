// 函数: _Z25AssetCatalogAssetIsLoaded7XString
// 地址: 0xc775f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_18
XString::XString(&var_18)
int64_t* x0_2 = AssetPtrFromPathDontCreate(&var_18)
XString::~XString()

if (x0_2 == 0)
    return 0

return zx.q(*x0_2 != 0 ? 1 : 0)
