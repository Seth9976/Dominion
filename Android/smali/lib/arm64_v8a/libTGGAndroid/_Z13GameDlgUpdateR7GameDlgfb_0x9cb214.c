// 函数: _Z13GameDlgUpdateR7GameDlgfb
// 地址: 0x9cb214
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_60 = v8

if (*arg1 == 0)
    return 

void* __offset(GameDlg, 0x4) x19_2 = arg1 + 4
int32_t x23_1 = arg3.d ^ 1

if (*x19_2 == 0 && (x23_1 & 1) == 0)
    return 

int32_t v0
int32_t v1_1
int32_t v2_1
int32_t v3_1
v0, v1_1, v2_1, v3_1 = RectScreen()
int32_t var_70 = v0
int32_t var_6c_1 = v1_1
int32_t var_68_1 = v2_1
int32_t var_64_1 = v3_1
int32_t v0_1
int32_t v1_2
int32_t v2_2
int32_t v3_2
v0_1, v1_2, v2_2, v3_2 = RectScreenSafe()
int32_t var_80 = v0_1
int32_t var_7c_1 = v1_2
int32_t var_78_1 = v2_2
int32_t var_74_1 = v3_2
uint64_t x0 = zx.q(*arg1)
int64_t x22_1 = sx.q(*(arg1 + 0xc))
uint64_t x8_2 = zx.q(x0.d - 1)
int64_t* x8_3
void* x0_1

if (x8_2.d u>= 0x26 || ((0x23bff5f9bf u>> x8_2).d & 1) == 0)
    x0_1 = GameSpecific_GetDlgDef(x0)
    x8_3 = *(x0_1 + 8)
    
    if (x8_3 == 0)
        x8_3 = *(*(x0_1 + 0x28) + (x22_1 << 3))
else
    x0_1 = (&data_11231f8)[sx.q(x8_2.d)]
    x8_3 = *(x0_1 + 8)
    
    if (x8_3 == 0)
        x8_3 = *(*(x0_1 + 0x28) + (x22_1 << 3))
XAsset* x22_2 = *x8_3
int32_t x8_5 = *arg1

if (*(arg1 + 4) == 0 && x8_5 != 0x27)
    UI2Begin("dialog (retired)", x19_2, x22_2, &var_70, &var_80, 0x32c8, 0, false)
    UI2SetState(zx.q(*(arg1 + 4)), &data_11ceb58, 0xffffffff, 0)
    UI2UpdateRoot(zx.q(*(arg1 + 4)), false, 0f)
    x8_5 = *arg1

uint64_t x9_3 = zx.q(x8_5 - 1)
int32_t x5_1

if (x9_3.d u> 0x26)
    x5_1 = *(GameSpecific_GetDlgDef(zx.q(x8_5)) + 0x18)
else
    x5_1 = 0x2af8
    
    switch (x9_3)
        case 0
            x5_1 = *(&data_1122d98 + 0x18)
        case 1
            x5_1 = *(&data_1122e08 + 0x18)
        case 2
            x5_1 = *(&data_1122e40 + 0x18)
        case 3
            x5_1 = *(&data_1122e78 + 0x18)
        case 4
            x5_1 = *(&data_1122a88 + 0x18)
        case 5
            x5_1 = *(&data_1122ac0 + 0x18)
        case 6, 9, 0xa, 0x11, 0x13, 0x1e, 0x22, 0x23, 0x24
            x5_1 = *(GameSpecific_GetDlgDef(zx.q(x8_5)) + 0x18)
        case 7
            x5_1 = *(&data_1122af8 + 0x18)
        case 8
            x5_1 = *(&data_1122b30 + 0x18)
        case 0xb
            x5_1 = *(&data_1122bd8 + 0x18)
        case 0xc
            x5_1 = *(&data_1122c10 + 0x18)
        case 0xd
            x5_1 = *(&data_1122c48 + 0x18)
        case 0xe
            x5_1 = *(&data_1122ba0 + 0x18)
        case 0xf
            x5_1 = *(&data_1122b68 + 0x18)
        case 0x10
            x5_1 = *(&data_1122fc8 + 0x18)
        case 0x12
            x5_1 = *(&data_1122a50 + 0x18)
        case 0x14
            x5_1 = *(&data_1122d28 + 0x18)
        case 0x15
            x5_1 = *(&data_1122d60 + 0x18)
        case 0x16
            x5_1 = *(&data_1122c80 + 0x18)
        case 0x17
            x5_1 = *(&data_1122cb8 + 0x18)
        case 0x18
            x5_1 = *(&data_1122cf0 + 0x18)
        case 0x19
            x5_1 = *(&data_1122ee8 + 0x18)
        case 0x1a
            x5_1 = *(&data_1122eb0 + 0x18)
        case 0x1b
            x5_1 = *(&data_1122dd0 + 0x18)
        case 0x1c
            x5_1 = *(&data_1122f20 + 0x18)
        case 0x1d
            x5_1 = *(&data_1122f58 + 0x18)
        case 0x1f
            x5_1 = *(&data_1123000 + 0x18)
        case 0x20
            x5_1 = *(&data_1123038 + 0x18)
        case 0x21
            x5_1 = *(&data_1123070 + 0x18)
        case 0x25
            x5_1 = *(&data_1122f90 + 0x18)

UI2Begin("dialog", x19_2, x22_2, &var_70, &var_80, x5_1, 0, false)

if ((arg3.d & 1) != 0)
    UI2SetState(zx.q(*x19_2), &data_11ceb58, 0xffffffff, 0)

LanguageStateSet(zx.q(*x19_2))
int32_t x21_2 = *x19_2
int32_t x8_6 = *(GetLocalSettings() + 8)

if (x8_6 == 0)
    UI2SetState(zx.q(x21_2), &data_11d0478, 0xffffffff, 0)
else if (x8_6 == 3)
    UI2SetState(zx.q(x21_2), &data_11d04a8, 0xffffffff, 0)
else if (x8_6 == 1)
    UI2SetState(zx.q(x21_2), &data_11d0490, 0xffffffff, 0)

int32_t x21_3 = *x19_2
int32_t x8_7 = *(GetLocalSettings() + 0xc)

if (x8_7 == 1)
    UI2SetState(zx.q(x21_3), UIS_GFX_LOW, 0xffffffff, 0)
else if (x8_7 == 0)
    UI2SetState(zx.q(x21_3), UIS_GFX_HIGH, 0xffffffff, 0)

uint64_t x0_12 = zx.q(*arg1)
uint64_t x8_8 = zx.q(x0_12.d - 1)
int64_t x26_1

if (x8_8.d u>= 0x26 || ((0x23bff5f9bf u>> x8_8).d & 1) == 0)
    x26_1 = *(GameSpecific_GetDlgDef(x0_12) + 0x28)
    
    if (x26_1 != 0)
    label_9cb5dc:
        int32_t x27_1 = *(arg1 + 0xc)
        int32_t x21_4 = *(arg1 + 4)
        
        if (x27_1 == 0)
            UI2SetState(zx.q(x21_4), &data_11cf0f8, 0xffffffff, 0)
            
            if (*(x26_1 + (sx.q(x27_1 + 1) << 3)) == 0)
                UI2SetState(zx.q(x21_4), &data_11cf110, 0xffffffff, 0)
        else if (*(x26_1 + (sx.q(x27_1 + 1) << 3)) == 0)
            UI2SetState(zx.q(x21_4), &data_11cf110, 0xffffffff, 0)
else
    x26_1 = *((&data_11231f8)[sx.q(x8_8.d)] + 0x28)
    
    if (x26_1 != 0)
        goto label_9cb5dc
UI2StateDecl* x1_4

if (*(GetLocalSettings() + 0xc) == 0)
    x1_4 = UIS_GFX_HIGH
else
    x1_4 = UIS_GFX_LOW

UI2SetState(zx.q(*x19_2), x1_4, 0xffffffff, 0)

if (zx.d(*(GetClient() + 0x75cc)) != 0)
    UI2SetState(zx.q(*x19_2), &data_11cf0e0, 0xffffffff, 0)

*numUpdates = 0
*gCurrentDlg = arg1
int64_t var_58 = TimerStart()
uint64_t x0_20 = zx.q(*arg1)
uint64_t x8_13 = zx.q(x0_20.d - 1)
void* x0_21

if (x8_13.d u>= 0x26 || ((0x23bff5f9bf u>> x8_13).d & 1) == 0)
    x0_21 = GameSpecific_GetDlgDef(x0_20)
else
    x0_21 = (&data_11231f8)[sx.q(x8_13.d)]

(*(x0_21 + 0x10))(zx.q(*x19_2))
TimerStop(&var_58)
UI2UpdateRoot(zx.q(*x19_2), false, arg2.q.d)
TimerStop(&var_58)

if (((x23_1 | not.d(UI2IsHidden(zx.q(*x19_2)).d)) & 1) == 0)
    uint64_t x8_16 = zx.q(*arg1)
    void* const x0_27
    
    if (x8_16.d u> 0x26)
    label_9cb77c:
        x0_27 = GameSpecific_GetDlgDef(zx.q(x8_16.d))
    label_9cb888:
        int64_t x8_19 = *(x0_27 + 0x30)
        
        if (x8_19 != 0)
            x8_19(zx.q(*x19_2))
    else
        x0_27 = &data_1122a50
        
        switch (x8_16)
            case 1
                x0_27 = &data_1122d98
                goto label_9cb888
            case 2
                x0_27 = &data_1122e08
                goto label_9cb888
            case 3
                x0_27 = &data_1122e40
                goto label_9cb888
            case 4
                x0_27 = &data_1122e78
                goto label_9cb888
            case 5
                x0_27 = &data_1122a88
                goto label_9cb888
            case 6
                x0_27 = &data_1122ac0
                goto label_9cb888
            case 7, 0xa, 0xb, 0x12, 0x14, 0x1f, 0x23, 0x24, 0x25
                goto label_9cb77c
            case 8
                x0_27 = &data_1122af8
                goto label_9cb888
            case 9
                x0_27 = &data_1122b30
                goto label_9cb888
            case 0xc
                x0_27 = &data_1122bd8
                goto label_9cb888
            case 0xd
                x0_27 = &data_1122c10
                goto label_9cb888
            case 0xe
                x0_27 = &data_1122c48
                goto label_9cb888
            case 0xf
                x0_27 = &data_1122ba0
                goto label_9cb888
            case 0x10
                x0_27 = &data_1122b68
                goto label_9cb888
            case 0x11
                x0_27 = &data_1122fc8
                goto label_9cb888
            case 0x13
                goto label_9cb888
            case 0x15
                x0_27 = &data_1122d28
                goto label_9cb888
            case 0x16
                x0_27 = &data_1122d60
                goto label_9cb888
            case 0x17
                x0_27 = &data_1122c80
                goto label_9cb888
            case 0x18
                x0_27 = &data_1122cb8
                goto label_9cb888
            case 0x19
                x0_27 = &data_1122cf0
                goto label_9cb888
            case 0x1a
                x0_27 = &data_1122ee8
                goto label_9cb888
            case 0x1b
                x0_27 = &data_1122eb0
                goto label_9cb888
            case 0x1c
                x0_27 = &data_1122dd0
                goto label_9cb888
            case 0x1d
                x0_27 = &data_1122f20
                goto label_9cb888
            case 0x1e
                x0_27 = &data_1122f58
                goto label_9cb888
            case 0x20
                x0_27 = &data_1123000
                goto label_9cb888
            case 0x21
                x0_27 = &data_1123038
                goto label_9cb888
            case 0x22
                x0_27 = &data_1123070
                goto label_9cb888
            case 0x26
                x0_27 = &data_1122f90
                goto label_9cb888
    UI2Free(x19_2)

*gCurrentDlg = 0
