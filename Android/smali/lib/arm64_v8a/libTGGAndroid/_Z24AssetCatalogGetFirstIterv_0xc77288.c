// 函数: _Z24AssetCatalogGetFirstIterv
// 地址: 0xc77288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = 0
int64_t* x8 = *gpAssetAppData

do
    int64_t result = *(*x8 + (zx.q(i) << 3))
    
    if (result != 0)
        return result
    
    i += 1
while (i u<= x8[1].d)

return 0
