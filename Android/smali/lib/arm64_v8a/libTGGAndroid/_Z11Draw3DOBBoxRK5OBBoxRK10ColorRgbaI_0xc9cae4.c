// 函数: _Z11Draw3DOBBoxRK5OBBoxRK10ColorRgbaI
// 地址: 0xc9cae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x20
int64_t var_10 = entry_x20
int32_t var_a0[0x18]
int64_t x1_1
int64_t x2
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5
x1_1, x2, v0, v1, v2, v3, v4, v5 = OBBoxGetExtents(arg1, &var_a0)
int64_t result

for (int64_t i = 0; i != 0x60; i += 8)
    int32_t* x9_2 = &var_a0 + *(&data_8284ec + i) * 0xc
    int32_t* x8_3 = &var_a0 + *(i + 0x8284f0) * 0xc
    v0.d = *x9_2
    v1.d = x9_2[1]
    v2.d = x9_2[2]
    v3.d = *x8_3
    v4.d = x8_3[1]
    v5.d = x8_3[2]
    entry_x20 = (entry_x20 & 0xffffffff00000000) | zx.q(*arg2)
    result, x1_1, x2, v0, v1, v2, v3, v4, v5 = Draw3DLine(entry_x20, x1_1, x2)

return result
