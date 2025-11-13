// 函数: _Z16ImageRotationUVS13ImageRotationP4Vec2
// 地址: 0xfcf340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v14
int64_t var_50 = v14
int64_t v13
int64_t var_40 = v13
int64_t v12
int64_t var_38 = v12
int64_t v11
int64_t var_30 = v11
int64_t v10
int64_t var_28 = v10
int64_t v9
int64_t var_20 = v9
int64_t v8
int64_t var_18 = v8

if (arg1.d u> 7)
    pthread_kill(pthread_self(), 6)
    int64_t x0_13
    Mat3* x1_12
    DefVertPosXY* x2
    x0_13, x1_12, x2 = XNoReturn()
    return RectToCoords(x0_13, x1_12, x2) __tailcall

int32_t var_48
float v0
float v0_5
float v1
float v1_5
float v2
float v3

switch (arg1.d)
    case 1
        goto label_fcf4a8
    case 2
        int32_t v0_1
        int32_t v1_1
        v0_1, v1_1 = Rot2FromAngle(*PI)
        var_48 = v0_1
        int32_t var_44_1 = v1_1
        int32_t v0_2
        int32_t v1_2
        v0_2, v1_2 = Rot2Rotate(&var_48, arg2)
        v8.d = fconvert.s(1f)
        v9.d = v0_2 f+ v8.d
        v10.d = v1_2 f+ v8.d
        int32_t v0_3
        int32_t v1_3
        v0_3, v1_3 = Rot2Rotate(&var_48, arg2 + 8)
        v11.d = v0_3 f+ v8.d
        v12.d = v1_3 f+ v8.d
        int32_t v0_4
        int32_t v1_4
        v0_4, v1_4 = Rot2Rotate(&var_48, arg2 + 0x10)
        v13.d = v0_4 f+ v8.d
        v14.d = v1_4 f+ v8.d
        arg1, v0_5, v1_5 = Rot2Rotate(&var_48, arg2 + 0x18)
        v0_5 = v0_5 f+ v8.d
        v1_5 = v1_5 f+ v8.d
        *arg2 = v9.d
        *(arg2 + 4) = v10.d
        *(arg2 + 8) = v11.d
        *(arg2 + 0xc) = v12.d
        *(arg2 + 0x10) = v13.d
    label_fcf50c:
        *(arg2 + 0x14) = v14.d
        *(arg2 + 0x18) = v0_5
        *(arg2 + 0x1c) = v1_5
    case 3
        goto label_fcf554
    case 4
        v1 = fconvert.s(1f)
        v0 = v1 - *(arg2 + 4)
        v2 = v1 - *(arg2 + 0xc)
        v3 = v1 - *(arg2 + 0x14)
        v1 = v1 - *(arg2 + 0x1c)
        *(arg2 + 4) = v0
        *(arg2 + 0xc) = v2
        *(arg2 + 0x14) = v3
        *(arg2 + 0x1c) = v1
    case 5
        v1 = fconvert.s(1f)
        v0 = v1 - *arg2
        v2 = v1 - *(arg2 + 8)
        v3 = v1 - *(arg2 + 0x10)
        v1 = v1 - *(arg2 + 0x18)
        *arg2 = v0
        *(arg2 + 8) = v2
        *(arg2 + 0x10) = v3
        *(arg2 + 0x18) = v1
    case 6
        v1 = fconvert.s(1f)
        v0 = v1 - *(arg2 + 4)
        v2 = v1 - *(arg2 + 0xc)
        v3 = v1 - *(arg2 + 0x14)
        v1 = v1 - *(arg2 + 0x1c)
        *(arg2 + 4) = v0
        *(arg2 + 0xc) = v2
        *(arg2 + 0x14) = v3
        *(arg2 + 0x1c) = v1
    label_fcf4a8:
        int32_t v0_6
        int32_t v1_6
        v0_6, v1_6 = Rot2FromAngle(fneg(*HALF_PI))
        var_48 = v0_6
        int32_t var_44_2 = v1_6
        int64_t v0_7
        int32_t v1_7
        v0_7, v1_7 = Rot2Rotate(&var_48, arg2)
        v11.d = fconvert.s(1f)
        v12.d = v1_7 f+ v11.d
        int64_t v0_8
        int32_t v1_8
        v0_8, v1_8 = Rot2Rotate(&var_48, arg2 + 8)
        v13.d = v1_8 f+ v11.d
        int64_t v0_9
        int32_t v1_9
        v0_9, v1_9 = Rot2Rotate(&var_48, arg2 + 0x10)
        v14.d = v1_9 f+ v11.d
        arg1, v0_5, v1_5 = Rot2Rotate(&var_48, arg2 + 0x18)
        v1_5 = v1_5 f+ v11.d
        *arg2 = v0_7.d
        *(arg2 + 4) = v12.d
        *(arg2 + 8) = v0_8.d
        *(arg2 + 0xc) = v13.d
        *(arg2 + 0x10) = v0_9.d
        goto label_fcf50c
    case 7
        v1 = fconvert.s(1f)
        v0 = v1 - *(arg2 + 4)
        v2 = v1 - *(arg2 + 0xc)
        v3 = v1 - *(arg2 + 0x14)
        v1 = v1 - *(arg2 + 0x1c)
        *(arg2 + 4) = v0
        *(arg2 + 0xc) = v2
        *(arg2 + 0x14) = v3
        *(arg2 + 0x1c) = v1
    label_fcf554:
        int32_t v0_10
        int32_t v1_10
        v0_10, v1_10 = Rot2FromAngle(*HALF_PI)
        var_48 = v0_10
        int32_t var_44_3 = v1_10
        int32_t v0_11
        int64_t v1_11
        v0_11, v1_11 = Rot2Rotate(&var_48, arg2)
        v11.d = fconvert.s(1f)
        v12.d = v0_11 f+ v11.d
        int32_t v0_12
        int64_t v1_12
        v0_12, v1_12 = Rot2Rotate(&var_48, arg2 + 8)
        v13.d = v0_12 f+ v11.d
        int32_t v0_13
        int64_t v1_13
        v0_13, v1_13 = Rot2Rotate(&var_48, arg2 + 0x10)
        v14.d = v0_13 f+ v11.d
        arg1, v0_5, v1_5 = Rot2Rotate(&var_48, arg2 + 0x18)
        *arg2 = v12.d
        *(arg2 + 4) = v1_11.d
        *(arg2 + 8) = v13.d
        *(arg2 + 0xc) = v1_12.d
        *(arg2 + 0x10) = v14.d
        *(arg2 + 0x14) = v1_13.d
        *(arg2 + 0x18) = v0_5 f+ v11.d
        *(arg2 + 0x1c) = v1_5
