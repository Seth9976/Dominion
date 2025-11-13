// 函数: _Z10CircleDraw4Vec2f10ColorRgbaIP6XAsset
// 地址: 0xc1cb88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg2
int128_t entry_v2
float v9 = entry_v2.d
int128_t entry_v1
float v10 = entry_v1.d
float v6 = v8 f+ entry_v2.d
float v4 = entry_v1.d f+ entry_v2.d
data_7aff60
arg2 = v9 * 0f
float v3 = v9 * float.s(0x3f3504f3)
int64_t v15
v15.d = v8 + arg2
float v5 = v10 + arg2
int128_t var_90
__builtin_memcpy(&var_90, 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x"
"00\x00\x00\x3f\x00\x00\x00\x3f", 
    0x20)
entry_v1.d = v8 + v3
arg2 = v10 + v3
int32_t var_64 = arg1
int32_t var_b0 = v15.d
float var_ac = v5
float var_a8 = v6
float var_a4 = v5
int32_t var_a0 = v15.d
float var_9c = v4
int32_t var_98 = entry_v1.d
float var_94 = arg2
XAsset* x19 = arg3
int64_t var_b8 = SpriteColorSet(&var_64, gRgbaINone)
DrawQuadParams(*TEXTURE_SYS_WHITE_PIXEL, &var_b0, &var_90, &var_b8, false, x19)
int64_t v14
v14.d = v9 * float.s(0x80000000)
int64_t v13
v13.d = v9 * float.s(0xbf3504f3)
int64_t v11
v11.d = v10 f+ v14.d
int64_t v12
v12.d = v10 - v9
v10 = v10 f+ v13.d
float var_a8_1 = v6
int32_t var_a4_1 = v11.d
int32_t var_a0_1 = v15.d
int32_t var_9c_1 = v12.d
var_b0 = v15.d
int32_t var_ac_1 = v11.d
float var_98_1 = entry_v1.d
float var_94_1 = v10
int64_t x0_4 = SpriteColorSet(&var_64, gRgbaINone)
XAsset* x8_1 = *TEXTURE_SYS_WHITE_PIXEL
var_b8 = x0_4
DrawQuadParams(x8_1, &var_b0, &var_90, &var_b8, false, x19)
v14.d = v8 f+ v14.d
v9 = v8 - v9
v8 = v8 f+ v13.d
var_b0 = v14.d
int32_t var_ac_2 = v11.d
float var_a8_2 = v9
int32_t var_a4_2 = v11.d
int32_t var_a0_2 = v14.d
int32_t var_9c_2 = v12.d
float var_98_2 = v8
float var_94_2 = v10
int64_t x0_7 = SpriteColorSet(&var_64, gRgbaINone)
XAsset* x8_2 = *TEXTURE_SYS_WHITE_PIXEL
var_b8 = x0_7
DrawQuadParams(x8_2, &var_b0, &var_90, &var_b8, false, x19)
var_b0 = v14.d
float var_ac_3 = v5
float var_a8_3 = v9
float var_a4_3 = v5
int32_t var_a0_3 = v14.d
float var_9c_3 = v4
float var_98_3 = v8
float var_94_3 = arg2
int64_t x0_10 = SpriteColorSet(&var_64, gRgbaINone)
XAsset* x8_3 = *TEXTURE_SYS_WHITE_PIXEL
var_b8 = x0_10
return DrawQuadParams(x8_3, &var_b0, &var_90, &var_b8, false, x19)
