// 函数: _Z10DrawCitiesRK9MapParamsRK7MapData
// 地址: 0xc1d028
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_d0 = data_71ae80
int64_t i = 0
int128_t v8
v8.d = 0x44800000
v8:4.d = 0x44800000
int128_t v9
v9.d = 0xc28688d4
v9:4.d = 0xc28688d4
int128_t v10
v10.d = 0x430688d4
v10:4.d = 0x430688d4
int64_t result

do
    uint64_t x0 = zx.q(*(arg1 + 0x30 + i))
    int128_t v0
    v0.q = *(arg2 + sx.q(*(arg2 + 0x16ffa0 + i)) * 0xc + 0x10)
    int128_t v11_1 = vmul_f32(v0, v8, 0)
    XAsset* var_88
    XAsset* var_58
    DoodadGetGfx(x0, &var_58, &var_88)
    XAsset* x0_1 = var_88
    XAsset* x4_1 = *MATERIAL_EFFECTS_CHART_SPINETINT_ZWRITE_NOREAD
    int128_t v0_1 = vadd_f32(v11_1, v9)
    int128_t var_a0 = var_d0
    double v1_2 = vadd_f32(v0_1, v10)
    int64_t var_b0 = v0_1.q
    double var_a8_1 = v1_2
    DrawImageParams(x0_1, &var_b0, &var_a0, gSpriteWhite, x4_1)
    XAsset* x23_1 = var_58
    int64_t var_b8 = SpriteColorSet(COLOR_COAST, gRgbaINone)
    result, v0 = DrawImageParams(x23_1, &var_b0, &var_a0, &var_b8, nullptr)
    i += 4
while (i != 0x28)

return result
