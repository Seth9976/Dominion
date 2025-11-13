// 函数: _Z24AssetCatalogLoadHWBufferP6XAssetPhiiPv
// 地址: 0xc76b84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xc)
XAsset* x23 = arg1

if (x8 == 4)
    AssetPathFromName("sys/FailureAsset", zx.q(*(x23 + 8)))
    x23 = AssetPtrFromPath(XString::operator char const*(), zx.q(*(x23 + 8)))
    XString::~XString()
    x8 = *(x23 + 0xc)

if (arg5 u> 0x100000 && x8 != 2)
    return memcpy(arg2, arg5 + sx.q(arg3), sx.q(arg4))

return DefBinReadPackFileHWBuffer(x23, arg2, arg5.d + arg3 + *(x23 + 0x18), arg4)
