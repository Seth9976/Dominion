// 函数: _Z25ShaderBindGraphicsBuffersP6XAsset10ShaderType
// 地址: 0xfa5740
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
XAsset* x19 = arg1
int64_t* x9

if (arg1 == 0)
    x19 = AssetPtrGetNull(4)
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19
else
    x9 = *x19
    
    if (x9 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x9 = *x19

int32_t x8_1 = *(x19 + 0x24) + 1
*(x19 + 0x24) = x8_1
int32_t* x22_1 = *x9 + muls.dp.d(x20, 0x28) + 0x10
uint64_t result = zx.q(*x22_1)

if (result.d == 0)
    int64_t* x0 = *gGraphicsInterface
    result = (*(*x0 + 0x90))(x0, arg1, zx.q(x20))
    *x22_1 = result.d
    x8_1 = *(x19 + 0x24)

*(x19 + 0x24) = x8_1 - 1
return result
