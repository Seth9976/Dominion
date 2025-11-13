// 函数: _Z16NumberPickerOpen17NumberPickerStyle
// 地址: 0xb1adac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GameDlgManagerShow(0x3e9, 2)
*(gDomClient + 0x20574) = arg1
int32_t x9 = *(gDomClient + 0x207b0)
*(gDomClient + 0x2057c) = x9
int32_t x10 = *(gDomClient + 0x20758)

if (x10 != 0x9f)
    *(gDomClient + 0x20584) = 0
    *(gDomClient + 0x20580) = *(gDomClient + 0x207ac)
    *(gDomClient + 0x20578) = x9
    
    if (x10 == 0x79)
        *(gDomClient + 0x20578) = *(gDomClient + (0x778 | 0x20000))
    else if (x10 == 6)
        *(gDomClient + 0x20578) = *(gDomClient + (0x774 | 0x20000))
else
    int32_t x9_1 = *(gDomClient + 0x20774)
    *(gDomClient + 0x2057c) = x9_1
    *(gDomClient + 0x20584) = 0
    *(gDomClient + 0x20580) = *(gDomClient + 0x207ac)
    *(gDomClient + 0x20578) = x9_1

return result
