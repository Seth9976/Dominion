// 函数: _Z12Pos2Gradient4Vec2S_S_f
// 地址: 0xc1d97c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float entry_v2
arg4 = arg4 - entry_v2
float entry_v6
entry_v2 = entry_v6 * fconvert.s(-0.5f)
float entry_v1
float entry_v3
float entry_v4
float entry_v5
vmin_f32(
    (arg4 * entry_v4 + (entry_v1 - entry_v3) * entry_v5 - entry_v2)
        / (entry_v6 * fconvert.s(0.5f) - entry_v2), 
    fconvert.s(1f))
