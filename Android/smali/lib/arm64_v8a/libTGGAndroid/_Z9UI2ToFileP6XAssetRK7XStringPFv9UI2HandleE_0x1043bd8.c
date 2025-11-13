// 函数: _Z9UI2ToFileP6XAssetRK7XStringPFv9UI2HandleE
// 地址: 0x1043bd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x0 = UI2ToTexture(arg1, arg3)
int64_t var_18 = TimerStart()
TextureToPNG(x0, arg2)
TimerStop(&var_18)
return XTrace("PNG export %dms")
