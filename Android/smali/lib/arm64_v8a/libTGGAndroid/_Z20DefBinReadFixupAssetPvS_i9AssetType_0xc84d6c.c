// 函数: _Z20DefBinReadFixupAssetPvS_i9AssetType
// 地址: 0xc84d6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = (*arg2).d

if (x23 == 0)
    *arg2 = 0
else
    int32_t x8_2
    void* x22_1
    
    if (x23 != 0)
        x22_1 = arg1 + sx.q(x23)
        *arg2 = x22_1
        x8_2 = x23 + strlen(x22_1) + 1
    
    if (x23 == 0 || x8_2 s> arg3)
        return 0
    
    *arg2 = DefAssetPtrFromPath(x22_1, zx.q(arg4))

return 1
