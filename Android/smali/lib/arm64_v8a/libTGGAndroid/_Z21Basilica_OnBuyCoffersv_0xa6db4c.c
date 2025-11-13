// 函数: _Z21Basilica_OnBuyCoffersv
// 地址: 0xa6db4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = CountMoney()

if (x0 s<= 1)
    SpendCoffers(2 - x0)

int64_t result = CountMoney()

if (result.d s< 2)
    return result

MarkOccuredThisWindow()
NotifyResult(zx.q(CountTokensHere(0x601) != 0 ? 1 : 0))
DoLandscapeTracking(2)
return TakeTokensHere(0x601, 2) __tailcall
