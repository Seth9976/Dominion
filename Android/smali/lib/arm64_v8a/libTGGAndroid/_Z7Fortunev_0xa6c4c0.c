// 函数: _Z7Fortunev
// 地址: 0xa6c4c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Buy(1, 0)

if ((HasOngoing(0xd, 0, 0) & 1) == 0)
    PromptSpendCoffers(0x95)
    MoneyTreasure(CountMoney(), 0)

return AddOngoing(0xd, 0, 1, false, 0, 0, 0, 0) __tailcall
