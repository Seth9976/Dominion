// 函数: _Z11CalcSpacing5RectF4Vec2S0_S0_S0_
// 地址: 0x10523ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float entry_v0
float entry_v2 = entry_v2 - entry_v0
float entry_v1
float entry_v3
entry_v0 = entry_v3 - entry_v1
float arg_8
float entry_v4
float entry_v6
float v19 = entry_v4 * arg_8 + entry_v6 * (arg_8 - *V21)
float arg_c
float entry_v5
float entry_v7
float v20 = entry_v5 * arg_c + entry_v7 * (arg_c - *(V21 + 4))
entry_v3 = 0f

if (v19 == 0f)
    v19 = entry_v3
else
    v19 = entry_v2 / v19

if (not(v20 == 0f))
    entry_v3 = entry_v0 / v20

if (entry_v6 < 0f)
    goto label_1052478

if (entry_v7 >= 0f)
    if (v19 < entry_v3)
        entry_v3 = v19
    
    if (entry_v3 == 0f)
        goto label_1052488
else
    entry_v3 = v19
label_1052478:
    
    if (not(entry_v3 != 0f))
    label_1052488:
        *V20
        *(V20 + 4)
