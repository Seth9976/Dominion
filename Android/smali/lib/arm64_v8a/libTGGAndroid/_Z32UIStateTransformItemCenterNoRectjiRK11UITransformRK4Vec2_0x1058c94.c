// 函数: _Z32UIStateTransformItemCenterNoRectjiRK11UITransformRK4Vec2
// 地址: 0x1058c94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIStateTransform(arg1, arg2, arg3)
int64_t result
float v0
float v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
result, v0, v1, v2, v3, v4, v5 = UIStateRect(arg1, arg2, arg3)
v0 = v2.d f- v0
v1 = v3.d f- v1
v2.d = *arg4
v3.d = *(arg4 + 4)
v0 = v0 f/ v2.d
v1 = v1 f/ v3.d
int128_t var_90
int128_t* entry_x8
*entry_x8 = var_90
int128_t var_80
entry_x8[1] = var_80
uint64_t x8 = *V20

if (not(v0 < v1))
    v0 = v1

int128_t var_50
entry_x8[4] = var_50
int128_t var_40
entry_x8[5] = var_40
int128_t var_70
entry_x8[2] = var_70
int128_t var_60
entry_x8[3] = var_60
*entry_x8 = x8
*(entry_x8 + 0xc) = v0
entry_x8[1].q = 0
return result
