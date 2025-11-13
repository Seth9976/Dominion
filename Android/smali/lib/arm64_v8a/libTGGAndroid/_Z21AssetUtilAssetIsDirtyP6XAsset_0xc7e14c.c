// 函数: _Z21AssetUtilAssetIsDirtyP6XAsset
// 地址: 0xc7e14c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = **gpAssetUtilData

if (i == 0)
    return 0

int64_t x8_1

do
    x8_1 = *i
    
    if (x8_1 == arg1)
        break
    
    i = i[1]
while (i != 0)

return zx.q(x8_1 == arg1 ? 1 : 0)
