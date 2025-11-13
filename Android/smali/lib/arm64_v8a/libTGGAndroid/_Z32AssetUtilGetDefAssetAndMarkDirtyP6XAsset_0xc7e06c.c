// 函数: _Z32AssetUtilGetDefAssetAndMarkDirtyP6XAsset
// 地址: 0xc7e06c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = **gpAssetUtilData

if (x8_1 == 0)
label_c7e0a4:
    AssetCatalogReloadAsWritable(arg1)
else
    while (*x8_1 != arg1)
        x8_1 = x8_1[1]
        
        if (x8_1 == 0)
            goto label_c7e0a4

int64_t result = *arg1

if (result == 0)
    AssetCatalogLoadAsset(arg1, false, true)
    result = *arg1

int32_t x8_2 = *(arg1 + 0x24)
*(arg1 + 0x24) = x8_2 + 1
XAsset*** x21 = *gpAssetUtilData

for (XAsset** i = *x21; i != 0; i = i[1])
    if (*i == arg1)
        *(arg1 + 0x24) = x8_2
        return result

XAsset** x0_2 = XPooledCalloc(0x18)
*x0_2 = arg1
x0_2[1] = 0
x0_2[2] = x21[1]
void* x8_4 = x21[1]
XAsset*** x8_5

if (x8_4 == 0)
    x8_5 = x21
else
    x8_5 = x8_4 + 8

*x8_5 = x0_2
int32_t x8_6 = x21[2].d
x21[1] = x0_2
x21[2].d = x8_6 + 1
return result
