// 函数: _Z24DefiledShrine_OnBuyCursev
// 地址: 0xa6def8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CountTokensHere(0x601) != 0)
    NotifyResult(1)

int32_t x0_1 = CountTokensHere(0x601)
DoLandscapeTracking(x0_1)
return TakeTokensHere(0x601, x0_1) __tailcall
