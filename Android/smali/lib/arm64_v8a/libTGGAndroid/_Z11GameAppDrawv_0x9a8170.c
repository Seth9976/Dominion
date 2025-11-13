// 函数: _Z11GameAppDrawv
// 地址: 0x9a8170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0_1
int128_t v2
int128_t v3
int128_t v4
v0_1, v2, v3, v4 = tanf(*PI / fconvert.s(12f))
v2 = *TI
v3 = *(TI + 0xc)
v4.q = *VZ
float v5 = *(VZ + 8)
float v7 = *(VY + 4)
float v6 = *(VY + 8)
int32_t v16 = *VY
data_11ca640 = v0_1
data_11ca670 = 0
data_11ca674 = 0x40400000
uint64_t x8 = *gAppInterface
data_11ca648 = 0x404000003dcccccd
double v0_2 = vneg_f32(v4)
int32_t v18 = *(x8 + 0x28)
int32_t v17 = *(x8 + 0x2c)
double var_20 = v0_2
v0_2.d = v6 f* v4:4.d
data_11ca650 = v2
v0_2.d = v5 * v7 f- v0_2.d
float v1_1 = v6 f* v4.d
v2.d = v5 f* v16
data_11ca650:0xc.o = v3
v3.d = v7 f* v4.d
v4.d = v16 f* v4:4.d
v2.d = v1_1 f- v2.d
v1_1 = v4.d f- v3.d
v3.d = v0_2.d f* v0_2.d
v4.d = v2.d f* v2.d
v3.d = v3.d f+ v4.d
v4.d = v1_1 * v1_1
v3.d = v4.d f+ v3.d
v4.d = float.s(v17)
v4.d = v4.d f/ float.s(v18)
v3.d = sqrt(v3.d)
data_11ca66c = 0x40400000
data_11ca644 = v4.d
float var_18 = fneg(v5)

if (v3.d f>= float.s(0x3727c5ac))
    v4.d = fconvert.s(1f)
    v3.d = v3.d f+ float.s(0x3727c5ac)
    v3.d = v4.d f/ v3.d
    v0_2.d = v0_2.d f* v3.d
    v2.d = v2.d f* v3.d
    v3.d = v1_1 f* v3.d
    v4.d = v4.d f/ sqrt(v3.d f* v3.d + v0_2.d f* v0_2.d + v2.d f* v2.d)
    v0_2.d = v0_2.d f* v4.d
    v1_1 = v2.d f* v4.d
    v2.d = v3.d f* v4.d
else
    v0_2.d = *V0
    v1_1 = *(V0 + 4)
    v2.d = *(V0 + 8)

int32_t var_30 = v0_2.d
float var_2c = v1_1
int32_t var_28 = v2.d
int32_t v0_3
int32_t v1_2
int32_t v2_1
int32_t v3_1
v0_3, v1_2, v2_1, v3_1 = QuatFromBasisChange(VFWD, VRIGHT, &var_20, &var_30)
data_11ca650:4.d = v0_3
data_11ca650:8.d = v1_2
data_11ca650:0xc.d = v2_1
data_11ca660 = v3_1
Draw3DSetCamera(&data_11ca640)
var_30.o = data_71ad00
Draw3DOverlayColor(&var_30)
Draw3DSetSortOverride(1)
Draw3DSetRenderTargetClearColor(zx.q(*gRgbaIBlack))
*gClient = gClientStorage
int64_t result = GameClientDraw()
*gClient = 0
return result
