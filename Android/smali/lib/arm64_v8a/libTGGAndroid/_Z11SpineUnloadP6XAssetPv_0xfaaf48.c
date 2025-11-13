// 函数: _Z11SpineUnloadP6XAssetPv
// 地址: 0xfaaf48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0 = *(arg2 + 0x20)

if (x0 != 0)
    spAtlas_dispose(x0)

spSkeletonData_dispose(*(arg2 + 0x28))
return spAnimationStateData_dispose(*(arg2 + 0x30)) __tailcall
