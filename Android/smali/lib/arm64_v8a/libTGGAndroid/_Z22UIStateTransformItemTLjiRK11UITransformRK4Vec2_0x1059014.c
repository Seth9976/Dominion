// 函数: _Z22UIStateTransformItemTLjiRK11UITransformRK4Vec2
// 地址: 0x1059014
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIStateTransform(arg1, arg2, arg3)
int64_t result
float v0
float v1
float v2
float v3
int128_t v4
int128_t v5
int128_t v6
int128_t v7
int128_t v16
int128_t v17
result, v0, v1, v2, v3, v4, v5, v6, v7, v16, v17 = UIStateRect(arg1, arg2, arg3)
v4.d = *arg4
v5.d = *(arg4 + 4)
v2 = (v2 - v0) f/ v4.d
v3 = (v3 - v1) f/ v5.d
int128_t var_90
int128_t* entry_x8
*entry_x8 = var_90
int128_t var_80
entry_x8[1] = var_80
*entry_x8 = v0
*(entry_x8 + 4) = v1

v0 = v2 < v3 ? v2 : v3

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
