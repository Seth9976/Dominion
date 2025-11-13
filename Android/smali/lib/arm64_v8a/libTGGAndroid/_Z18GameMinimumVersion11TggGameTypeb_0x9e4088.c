// 函数: _Z18GameMinimumVersion11TggGameTypeb
// 地址: 0x9e4088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 4)
    return 0xb

if (arg1 == 2)
    return 1

if (arg1 == 1)
    return 2

XTraceAndLog("requested min version for unknown game %d %d")
return 0
