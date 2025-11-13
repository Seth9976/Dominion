// 函数: _Z15IsTokenTypeCardRK6DomGfx
// 地址: 0xaff72c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x2c) == 0 && (zx.d(*(CardDef(gDomClient + 0x20728, arg1) + 0xcb)) & 0x44444444) != 0)
    if (*(arg1 + 0x1f78) == 0)
        if (*(arg1 + 0x3b0) != 1 || *(arg1 + 0x3b8) != 0x21)
            return 1
    else if ((*(arg1 + 0x308) != 1 || *(arg1 + 0x310) != 0x21)
            && (*(arg1 + 0x478) != 1 || *(arg1 + 0x480) != 0x21))
        return 1

return 0
