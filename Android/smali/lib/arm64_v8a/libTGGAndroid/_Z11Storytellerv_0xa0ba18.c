// 函数: _Z11Storytellerv
// 地址: 0xa0ba18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)

if (MayPlayTreasureFromHand(1, 0x7f) != 0 && MayPlayTreasureFromHand(1, 0x80) != 0)
    MayPlayTreasureFromHand(1, 0x81)

Card(1, 0, 0, nullptr)
PromptSpendCoffers(4)
MayPayoffDebt(6)
int32_t x0_2 = CountMoney()
SpendMoney(x0_2)
return Card(x0_2, 0, 0, nullptr) __tailcall
