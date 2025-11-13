// 函数: _Z24UI2GetScrollExtentsTable9UI2Handle
// 地址: 0x1041354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_20
int64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
result, v0, v1, v2, v3 =
    UI2GetScrollExtentsTable(*gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8), nullptr, &var_20)

if ((result.d & 1) == 0)
    v0.d = *RECT0
    v1.d = *(RECT0 + 4)
    v2.d = *(RECT0 + 8)
    v3.d = *(RECT0 + 0xc)
    return result

v0.d = var_20
int32_t var_1c
v1.d = var_1c
int32_t var_18
v2.d = var_18
int32_t var_14
v3.d = var_14
return result
