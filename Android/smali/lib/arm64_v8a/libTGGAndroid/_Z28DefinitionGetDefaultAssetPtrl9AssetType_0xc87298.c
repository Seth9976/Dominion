// 函数: _Z28DefinitionGetDefaultAssetPtrl9AssetType
// 地址: 0xc87298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19

x19 = arg1 == 0 ? &data_793a18 : arg1

if (arg2.d != 0)
    return AssetPtrFromPath(x19, arg2) __tailcall

if (zx.d(*x19) == 0)
    return 0

return AssetPtrFromPath(x19, zx.q(AssetTypeFromPath(x19))) __tailcall
