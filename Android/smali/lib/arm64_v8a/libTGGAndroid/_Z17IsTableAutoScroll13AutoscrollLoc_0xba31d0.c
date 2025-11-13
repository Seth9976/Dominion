// 函数: _Z17IsTableAutoScroll13AutoscrollLoc
// 地址: 0xba31d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 2)
    if (zx.d(*(gDomClient + 0x1f8ea)) != 0)
        return 0
else if (arg1 == 1)
    if (zx.d(*(gDomClient + 0x1f8e8)) != 0)
        return 0
else if (arg1 == 0 && zx.d(*(gDomClient + 0x1f8e9)) != 0)
    return 0

return 1
