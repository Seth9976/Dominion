// 函数: _Z17GameLatestVersion11TggGameTypeb
// 地址: 0x9e3f68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 1)
    return 2

if (arg1 == 2)
    return 1

if (arg1 == 4)
    return 0x17

XTraceAndLog("requested version for unknown game %d %d")
return 0
