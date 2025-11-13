// 函数: _Z26UIStateTransformItemCenterjiRK11UITransformRK4Vec2
// 地址: 0x1058f70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIStateTransform(arg1, arg2, arg3)
int64_t result
float v0
float v1
int128_t v2
int128_t v3
int128_t v6
int128_t v7
int128_t v16
int128_t v17
result, v0, v1, v2, v3, v6, v7, v16, v17 = UIStateRect(arg1, arg2, arg3)
v6.d = *arg4
v7.d = *(arg4 + 4)
float v4 = v2.d f- v0
v0 = v0 f+ v2.d
v2.d = fconvert.s(0.5f)
v4 = v4 f/ v6.d
float v5 = (v3.d f- v1) f/ v7.d
int128_t var_90
int128_t* entry_x8
*entry_x8 = var_90
int128_t var_80
entry_x8[1] = var_80
*entry_x8 = v0 f* v2.d
*(entry_x8 + 4) = (v1 f+ v3.d) f* v2.d

v0 = v4 < v5 ? v4 : v5

int128_t var_50
entry_x8[4] = var_50
int128_t var_40
entry_x8[5] = var_40
int128_t var_70
entry_x8[2] = var_70
int128_t var_60
entry_x8[3] = var_60
*(entry_x8 + 0xc) = v0
entry_x8[1].q = 0
return result
