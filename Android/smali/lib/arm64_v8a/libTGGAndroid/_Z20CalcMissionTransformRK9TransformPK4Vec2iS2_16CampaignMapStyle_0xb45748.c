// 函数: _Z20CalcMissionTransformRK9TransformPK4Vec2iS2_16CampaignMapStyle
// 地址: 0xb45748
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10

if (arg4 == 1)
    x10 = 0x45800000
else if (arg4 != 2)
    x10 = 0x4511c000
else
    x10 = 0x44bb0000

int64_t v2
v2.d = *arg1
int128_t v4
v4.d = float.s(0x3a000000)
int128_t v5 = *QI
float v3 = float.s(x10) f* v4.d
int32_t* entry_x8
*entry_x8 = v2.d
*(entry_x8 + 4) = v5
int128_t v0
int128_t entry_v1

if (arg4 - 1 u<= 1)
    v0.d = v2.d f* v3
    entry_v1.d = 0f
    *entry_x8 = v0.d
    v0.d = v2.d f* entry_v1.d
    entry_v1.q = *(arg2 + (sx.q(arg3) << 3))
    v4.q = *(arg1 + 0x14)
    v5.d = *(arg1 + 0x1c)
    v0.d = v0.d f* v3
    entry_v1.d = entry_v1.d f* v2.d
    entry_v1:4.d = entry_v1:4.d f* v2.d
    entry_v1.d = entry_v1.d f* v3
    entry_v1:4.d = entry_v1:4.d f* v3
    v0.d = v0.d f+ v5.d
    *(entry_x8 + 0x14) = vadd_f32(v4, entry_v1)
    entry_x8[7] = v0.d
    return 

v4.q = *(arg2 + (sx.q(arg3) << 3))
v0:4.d = entry_v1.d
entry_v1.d = 0xbf000000
entry_v1:4.d = 0xbf000000
int128_t v0_1 = vmul_f32(v0, entry_v1, 0)
entry_v1.d = *(arg1 + 0x1c)
v5.d = 0f
int128_t v6
v6.q = *(arg1 + 0x14)
v5.d = v2.d f* v5.d
v0_1.d = v0_1.d f* v2.d
v0_1:4.d = v0_1:4.d f* v2.d
v2.d = v4.d f* v2.d
v2:4.d = v4:4.d f* v2.d
v4.d = v5.d f* v3
v4.d = v4.d f+ entry_v1.d
entry_v1.d = v2.d f* v3
entry_v1:4.d = v2:4.d f* v3
double v1_2 = vadd_f32(vadd_f32(v6, entry_v1), v0_1)
v0_1.d = v4.d f- v5.d
*(entry_x8 + 0x14) = v1_2
entry_x8[7] = v0_1.d
