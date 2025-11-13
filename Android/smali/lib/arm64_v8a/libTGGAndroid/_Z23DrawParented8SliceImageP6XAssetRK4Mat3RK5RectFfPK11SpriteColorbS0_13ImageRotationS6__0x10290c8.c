// 函数: _Z23DrawParented8SliceImageP6XAssetRK4Mat3RK5RectFfPK11SpriteColorbS0_13ImageRotationS6_
// 地址: 0x10290c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v2 = *(M3I + 0x10)
int32_t x9 = *(M3I + 0x20)
int128_t var_40 = *M3I
int128_t var_30 = v2
int128_t v1
v1.q = var_40.q
v2.q = var_40:0xc.q
int128_t v3
v3.q = var_30:8.q
int32_t var_20 = x9
v1.d = v1.d f* arg4
v1:4.d = v1:4.d f* arg4
var_40.q = v1.q
v1.d = v2.d f* arg4
v1:4.d = v2:4.d f* arg4
v2.d = v3.d f* arg4
v2:4.d = v3:4.d f* arg4
var_40:0xc.q = v1.q
var_30:8.q = v2.q
v1.d = *arg3
v2.d = *(arg3 + 8)
v2.d = v2.d f- v1.d

if (not(v2.d f!= 0f) || arg4 == 0f)
    return 

v3.d = *(arg3 + 4)
int128_t v4
v4.d = *(arg3 + 0xc)
float v5 = v4.d f- v3.d

if (v5 == 0f)
    return 

v4.d = v1.d f/ arg4
v1.d = v3.d f/ arg4
v2.d = v2.d f/ arg4
v3.d = v5 / arg4
XAsset* var_50 = arg7
DrawParented9SliceImage(arg1, &var_40, arg2, arg5, zx.q(arg6.d) & 1, zx.q(arg8), 0, arg9, v4, v1, 
    v2, v3)
