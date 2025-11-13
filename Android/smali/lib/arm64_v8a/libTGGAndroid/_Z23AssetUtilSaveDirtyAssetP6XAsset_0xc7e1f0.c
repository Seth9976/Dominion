// 函数: _Z23AssetUtilSaveDirtyAssetP6XAsset
// 地址: 0xc7e1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = **gpAssetUtilData

if (x19 != 0)
    while (*x19 != arg1)
        x19 = x19[1]
        
        if (x19 == 0)
            break

*(arg1 + 0x24) -= 1
int32_t x0 = AssetCatalogSave(arg1)
void* x8_4 = x19[2]
int64_t* x9 = *gpAssetUtilData
int64_t* x8_5

if (x8_4 == 0)
    x8_5 = x9
else
    x8_5 = x8_4 + 8

*x8_5 = x19[1]
void* x8_6 = x19[1]
int64_t* x8_7

if (x8_6 == 0)
    x8_7 = &x9[1]
else
    x8_7 = x8_6 + 0x10

*x8_7 = x19[2]
x9[2].d -= 1
XPooledFree(x19, 0x18)
return zx.q(x0) & 1
