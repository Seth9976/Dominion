// 函数: _Z21GameDlgManagerDismiss11DialogLayerb
// 地址: 0x9baf54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22_1 = gGameDlgManager + mulu.dp.d(arg1.d, 0x28) + 4

if (*x22_1 == 0)
    return 

uint64_t x23_1 = zx.q(arg1.d)
uint64_t x8_1 = zx.q(*(gGameDlgManager + x23_1 * 0x28 + 0x14))
void* const x0

if (x8_1.d u> 0x26)
label_9bb004:
    x0 = GameSpecific_GetDlgDef(zx.q(x8_1.d))
label_9bb110:
    int64_t x8_2 = *(x0 + 0x30)
    
    if (x8_2 != 0)
        x8_2(zx.q(*(gGameDlgManager + x23_1 * 0x28 + 0x18)))
else
    x0 = &data_1122a50
    
    switch (x8_1)
        case 1
            x0 = &data_1122d98
            goto label_9bb110
        case 2
            x0 = &data_1122e08
            goto label_9bb110
        case 3
            x0 = &data_1122e40
            goto label_9bb110
        case 4
            x0 = &data_1122e78
            goto label_9bb110
        case 5
            x0 = &data_1122a88
            goto label_9bb110
        case 6
            x0 = &data_1122ac0
            goto label_9bb110
        case 7, 0xa, 0xb, 0x12, 0x14, 0x1f, 0x23, 0x24, 0x25
            goto label_9bb004
        case 8
            x0 = &data_1122af8
            goto label_9bb110
        case 9
            x0 = &data_1122b30
            goto label_9bb110
        case 0xc
            x0 = &data_1122bd8
            goto label_9bb110
        case 0xd
            x0 = &data_1122c10
            goto label_9bb110
        case 0xe
            x0 = &data_1122c48
            goto label_9bb110
        case 0xf
            x0 = &data_1122ba0
            goto label_9bb110
        case 0x10
            x0 = &data_1122b68
            goto label_9bb110
        case 0x11
            x0 = &data_1122fc8
            goto label_9bb110
        case 0x13
            goto label_9bb110
        case 0x15
            x0 = &data_1122d28
            goto label_9bb110
        case 0x16
            x0 = &data_1122d60
            goto label_9bb110
        case 0x17
            x0 = &data_1122c80
            goto label_9bb110
        case 0x18
            x0 = &data_1122cb8
            goto label_9bb110
        case 0x19
            x0 = &data_1122cf0
            goto label_9bb110
        case 0x1a
            x0 = &data_1122ee8
            goto label_9bb110
        case 0x1b
            x0 = &data_1122eb0
            goto label_9bb110
        case 0x1c
            x0 = &data_1122dd0
            goto label_9bb110
        case 0x1d
            x0 = &data_1122f20
            goto label_9bb110
        case 0x1e
            x0 = &data_1122f58
            goto label_9bb110
        case 0x20
            x0 = &data_1123000
            goto label_9bb110
        case 0x21
            x0 = &data_1123038
            goto label_9bb110
        case 0x22
            x0 = &data_1123070
            goto label_9bb110
        case 0x26
            x0 = &data_1122f90
            goto label_9bb110
void* x25_1 = gGameDlgManager + x23_1 * 0x28
int128_t v0_1
arg1, v0_1 = UI2Free(x25_1 + 0x18)
*(gGameDlgManager + x23_1 * 0x28 + 0x14) = *x22_1
*x22_1 = 0
int32_t x8_3 = *(x25_1 + 0x24)
*(x25_1 + 0x24) = x8_3 + 1
*(x25_1 + 0xc) = x8_3

if ((arg2.d & 1) != 0)
    uint64_t x8_4 = zx.q(*(gGameDlgManager + x23_1 * 0x28 + 0x14))
    void* const x0_4
    
    if (x8_4.d u> 0x26)
    label_9bb1d4:
        x0_4 = GameSpecific_GetDlgDef(zx.q(x8_4.d))
    label_9bb2e0:
        int64_t x8_5 = *(x0_4 + 0x30)
        
        if (x8_5 != 0)
            x8_5(zx.q(*(x25_1 + 0x18)))
    else
        x0_4 = &data_1122a50
        
        switch (x8_4)
            case 1
                x0_4 = &data_1122d98
                goto label_9bb2e0
            case 2
                x0_4 = &data_1122e08
                goto label_9bb2e0
            case 3
                x0_4 = &data_1122e40
                goto label_9bb2e0
            case 4
                x0_4 = &data_1122e78
                goto label_9bb2e0
            case 5
                x0_4 = &data_1122a88
                goto label_9bb2e0
            case 6
                x0_4 = &data_1122ac0
                goto label_9bb2e0
            case 7, 0xa, 0xb, 0x12, 0x14, 0x1f, 0x23, 0x24, 0x25
                goto label_9bb1d4
            case 8
                x0_4 = &data_1122af8
                goto label_9bb2e0
            case 9
                x0_4 = &data_1122b30
                goto label_9bb2e0
            case 0xc
                x0_4 = &data_1122bd8
                goto label_9bb2e0
            case 0xd
                x0_4 = &data_1122c10
                goto label_9bb2e0
            case 0xe
                x0_4 = &data_1122c48
                goto label_9bb2e0
            case 0xf
                x0_4 = &data_1122ba0
                goto label_9bb2e0
            case 0x10
                x0_4 = &data_1122b68
                goto label_9bb2e0
            case 0x11
                x0_4 = &data_1122fc8
                goto label_9bb2e0
            case 0x13
                goto label_9bb2e0
            case 0x15
                x0_4 = &data_1122d28
                goto label_9bb2e0
            case 0x16
                x0_4 = &data_1122d60
                goto label_9bb2e0
            case 0x17
                x0_4 = &data_1122c80
                goto label_9bb2e0
            case 0x18
                x0_4 = &data_1122cb8
                goto label_9bb2e0
            case 0x19
                x0_4 = &data_1122cf0
                goto label_9bb2e0
            case 0x1a
                x0_4 = &data_1122ee8
                goto label_9bb2e0
            case 0x1b
                x0_4 = &data_1122eb0
                goto label_9bb2e0
            case 0x1c
                x0_4 = &data_1122dd0
                goto label_9bb2e0
            case 0x1d
                x0_4 = &data_1122f20
                goto label_9bb2e0
            case 0x1e
                x0_4 = &data_1122f58
                goto label_9bb2e0
            case 0x20
                x0_4 = &data_1123000
                goto label_9bb2e0
            case 0x21
                x0_4 = &data_1123038
                goto label_9bb2e0
            case 0x22
                x0_4 = &data_1123070
                goto label_9bb2e0
            case 0x26
                x0_4 = &data_1122f90
                goto label_9bb2e0
    int128_t v0_2
    arg1, v0_2 = UI2Free(x25_1 + 0x18)
    *(gGameDlgManager + x23_1 * 0x28 + 0x14) = *x22_1

*(gGameDlgManager + x23_1 * 0x28) = 0
