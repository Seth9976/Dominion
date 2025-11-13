// 函数: _Z11GetDlgLayer11GameDlgType
// 地址: 0x9cac2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1 - 1)
int32_t x9_1

if (x9.d u> 0x26)
    x9_1 = *(GameSpecific_GetDlgDef(zx.q(arg1)) + 0x18)
else
    x9_1 = 0x2af8
    
    switch (x9)
        case 0
            x9_1 = *(&data_1122d98 + 0x18)
        case 1
            x9_1 = *(&data_1122e08 + 0x18)
        case 2
            x9_1 = *(&data_1122e40 + 0x18)
        case 3
            x9_1 = *(&data_1122e78 + 0x18)
        case 4
            x9_1 = *(&data_1122a88 + 0x18)
        case 5
            x9_1 = *(&data_1122ac0 + 0x18)
        case 6, 9, 0xa, 0x11, 0x13, 0x1e, 0x22, 0x23, 0x24
            x9_1 = *(GameSpecific_GetDlgDef(zx.q(arg1)) + 0x18)
        case 7
            x9_1 = *(&data_1122af8 + 0x18)
        case 8
            x9_1 = *(&data_1122b30 + 0x18)
        case 0xb
            x9_1 = *(&data_1122bd8 + 0x18)
        case 0xc
            x9_1 = *(&data_1122c10 + 0x18)
        case 0xd
            x9_1 = *(&data_1122c48 + 0x18)
        case 0xe
            x9_1 = *(&data_1122ba0 + 0x18)
        case 0xf
            x9_1 = *(&data_1122b68 + 0x18)
        case 0x10
            x9_1 = *(&data_1122fc8 + 0x18)
        case 0x12
            x9_1 = *(&data_1122a50 + 0x18)
        case 0x14
            x9_1 = *(&data_1122d28 + 0x18)
        case 0x15
            x9_1 = *(&data_1122d60 + 0x18)
        case 0x16
            x9_1 = *(&data_1122c80 + 0x18)
        case 0x17
            x9_1 = *(&data_1122cb8 + 0x18)
        case 0x18
            x9_1 = *(&data_1122cf0 + 0x18)
        case 0x19
            x9_1 = *(&data_1122ee8 + 0x18)
        case 0x1a
            x9_1 = *(&data_1122eb0 + 0x18)
        case 0x1b
            x9_1 = *(&data_1122dd0 + 0x18)
        case 0x1c
            x9_1 = *(&data_1122f20 + 0x18)
        case 0x1d
            x9_1 = *(&data_1122f58 + 0x18)
        case 0x1f
            x9_1 = *(&data_1123000 + 0x18)
        case 0x20
            x9_1 = *(&data_1123038 + 0x18)
        case 0x21
            x9_1 = *(&data_1123070 + 0x18)
        case 0x25
            x9_1 = *(&data_1122f90 + 0x18)

return zx.q(x9_1)
