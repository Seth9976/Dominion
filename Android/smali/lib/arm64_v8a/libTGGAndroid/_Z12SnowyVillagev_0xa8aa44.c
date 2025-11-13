// 函数: _Z12SnowyVillagev
// 地址: 0xa8aa44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(4, 0)
Buy(1, 0)

if ((HasOngoing(0x12, 0, 0) & 1) == 0)
    PromptSpendVillagers()

return AddOngoing(0x12, 0, 1, false, 0, 0, 0, 0) __tailcall
