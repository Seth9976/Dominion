// 函数: _Z12BountyHunterv
// 地址: 0xa8ab30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int64_t result = ExileOneFromHand()

if (result.d != 0)
    result = CountWhereWhat(0x462, zx.q(CardWhat(result)), 0xffffffff)
    
    if (result.d s<= 1)
        MoneyPlus(3, 0, false)
        return NotifyResult(1) __tailcall

return result
