// 函数: _Z16DrawRectSolidDirRK4Vec2S1_S1_RK10ColorRgbaI
// 地址: 0xfc9504
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
int128_t v2
int128_t v3

if ((zx.d(data_2422608) & 1) == 0)
    int32_t x0_3
    x0_3, v0, v1, v2, v3 = __cxa_guard_acquire(&data_2422608)
    
    if (x0_3 != 0)
        data_2422600 = AssetPtrFromPath("sys\white_pixel.texture", 3)
        v0, v1, v2, v3 = __cxa_guard_release(&data_2422608)

int32_t x9 = *(M3I + 0x20)
v0 = *(M3I + 0x10)
int128_t var_70 = *M3I
int128_t var_60 = v0
v0.q = *arg3
v1.q = var_70.q
v2.q = var_70:0xc.q
v3.q = var_60:8.q
int128_t v8 = vmul_f32(v0, v1, 0)
int128_t v9 = vmul_f32(v0, v2, 0)
int128_t v10 = vmul_f32(v0, v3, 0)
float v0_1
float v1_1
int128_t v2_1
int128_t v3_1
int128_t v4
int128_t v5
int128_t v18
int128_t v19
v0_1, v1_1, v2_1, v3_1, v4, v5, v18, v19 = Rot2FromDir(arg2)
float v6 = var_70:8.d
float v7 = var_60:4.d
v3_1.d = v8.d f* v1_1
v3_1:4.d = v8:4.d f* v1_1
v4.d = v9.d f* v0_1
v4:4.d = v9:4.d f* v0_1
v5.q = 0
v18.d = v8.d f* v0_1
v18:4.d = v8:4.d f* v0_1
v19.d = v9.d f* v1_1
v19:4.d = v9:4.d f* v1_1
int128_t v3_2 = vsub_f32(v3_1, v4)
int128_t v4_1 = vmul_f32(v10, v5, 0)
int128_t v18_1 = vadd_f32(v18, v19)
int128_t v19_1 = vmul_f32(v8, v5, 0)
int128_t v5_1 = vmul_f32(v9, v5, 0)
float v17 = 0f
double v3_3 = vadd_f32(v3_2, v4_1)
double v4_2 = vadd_f32(v18_1, v4_1)
double v5_3 = vadd_f32(v10, vadd_f32(v19_1, v5_1))
var_70.q = v3_3
var_70:0xc.q = v4_2
v3_3.d = v1_1 * v6
v4_2.d = v0_1 * v7
v18_1.d = x9 f* v17
var_60:8.q = v5_3
v5_3.d = v6 * v17 + v7 * v17
v5_3.d = x9 f+ v5_3.d
int32_t var_50_1 = v5_3.d
v5_3.d = *arg1
v3_3.d = v3_3.d f- v4_2.d
v3_3.d = v3_3.d f+ v18_1.d
v3_3.d = v3_3.d f+ v5_3.d
var_70:8.d = v3_3.d
v3_3.d = *(arg1 + 4)
int128_t var_80 = data_71ae80
var_60:4.d = v0_1 * v6 + v1_1 * v7 f+ v18_1.d f+ v3_3.d
XAsset* x0_1 = data_2422600
int32_t var_88 = *arg4
int32_t var_84 = 0
return DrawImageMatrixParams(x0_1, &var_70, &var_80, &var_88, nullptr)
