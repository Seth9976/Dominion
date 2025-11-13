// 函数: sub_ab1de0
// 地址: 0xab1de0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((CardIs(arg1, 0x105) & 1) != 0 && CountHand() != 0)
    return (HasOngoing(0x16, arg1.d, 0) ^ 1) & 1

return 0
