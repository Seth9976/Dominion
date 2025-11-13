// 函数: _Z27GameDlgManagerGetActivePage9UI2Handle
// 地址: 0x9cba4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gGameDlgManager + 8) == arg1)
    return zx.q(*(gGameDlgManager + 0x10))

if (*(gGameDlgManager + 0x30) == arg1)
    return zx.q(*(gGameDlgManager + 0x38))

if (*(gGameDlgManager + 0x58) == arg1)
    return zx.q(*(gGameDlgManager + 0x60))

if (*(gGameDlgManager + 0x80) == arg1)
    return zx.q(*(gGameDlgManager + 0x88))

if (*(gGameDlgManager + 0xa8) == arg1)
    return zx.q(*(gGameDlgManager + 0xb0))

if (*(gGameDlgManager + 0xd0) == arg1)
    return zx.q(*(gGameDlgManager + 0xd8))

if (*(gGameDlgManager + 0xf8) == arg1)
    return zx.q(*(gGameDlgManager + 0x100))

if (*(gGameDlgManager + 0x120) == arg1)
    return zx.q(*(gGameDlgManager + 0x128))

if (*(gGameDlgManager + 0x148) == arg1)
    return zx.q(*(gGameDlgManager + 0x150))

if (*(gGameDlgManager + 0x170) == arg1)
    return zx.q(*(gGameDlgManager + 0x178))

if (*(gGameDlgManager + 0x198) != arg1)
    return 0

return zx.q(*(gGameDlgManager + 0x1a0))
