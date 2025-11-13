// 函数: _Z14Basilica_OnBuyv
// 地址: 0xa6dc2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = CountMoney()

if (result.d s< 2)
    return result

if (CountTokensHere(0x601) != 0)
    NotifyResult(1)

DoLandscapeTracking(2)
return TakeTokensHere(0x601, 2) __tailcall
