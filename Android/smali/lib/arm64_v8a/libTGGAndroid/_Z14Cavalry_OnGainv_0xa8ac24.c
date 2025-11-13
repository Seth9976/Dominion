// 函数: _Z14Cavalry_OnGainv
// 地址: 0xa8ac24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(2, 0, 0, nullptr)
Buy(1, 0)
int64_t result = IsYourBuyPhase()

if ((result.d & 1) == 0)
    return result

return SetPhase(1) __tailcall
