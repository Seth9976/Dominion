// 函数: sub_a867c4
// 地址: 0xa867c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardIs(zx.q(*(arg1 + 8)), 4) & 1) == 0)
    if ((CardIs(zx.q(*(arg1 + 8)), 2) & 1) != 0)
        goto label_a8683c
    
    goto label_a867f4

Action(2, 0)
int32_t result

if ((CardIs(zx.q(*(arg1 + 8)), 2) & 1) == 0)
label_a867f4:
    result = CardIs(zx.q(*(arg1 + 8)), 8)
    
    if ((result & 1) != 0)
        return Card(2, 0, 0, nullptr) __tailcall
else
label_a8683c:
    MoneyPlus(2, 0, false)
    result = CardIs(zx.q(*(arg1 + 8)), 8)
    
    if ((result & 1) != 0)
        return Card(2, 0, 0, nullptr) __tailcall

return result
