// 函数: _Z10Draw3DBBoxRK4BBoxRK10ColorRgbaI
// 地址: 0xc9cb74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x20
int64_t var_10 = entry_x20
int32_t v0 = *arg1
int32_t v1 = *(arg1 + 4)
int32_t v2 = *(arg1 + 8)
int32_t v3 = *(arg1 + 0xc)
ColorRgbaI const& x19 = arg2
int32_t var_a0 = v0
int32_t var_9c = v1
int32_t var_98 = v2
int32_t var_94 = v3
int32_t var_90 = v1
int32_t var_8c = v2
int32_t v4 = *(arg1 + 0x10)
int32_t var_80 = v2
int32_t var_7c = v3
int64_t i = 0
int32_t var_88 = v0
int32_t var_84 = v4
int32_t var_78 = v4
int32_t var_74 = v2
v2 = *(arg1 + 0x14)
int32_t var_70 = v0
int32_t var_6c = v1
int32_t var_58 = v0
int32_t var_54 = v4
int32_t var_68 = v2
int32_t var_64 = v3
int32_t var_60 = v1
int32_t var_5c = v2
int32_t var_50 = v2
int32_t var_4c = v3
int32_t var_48 = v4
int32_t var_44 = v2
int64_t result

do
    int32_t* x9_2 = &var_a0 + *(&data_8284ec + i) * 0xc
    int32_t* x8_3 = &var_a0 + *(i + 0x8284f0) * 0xc
    *x9_2
    x9_2[1]
    x9_2[2]
    *x8_3
    x8_3[1]
    int128_t v5
    v5.d = x8_3[2]
    entry_x20 = (entry_x20 & 0xffffffff00000000) | zx.q(*x19)
    int64_t entry_x2
    result, arg2, entry_x2, v5 = Draw3DLine(entry_x20, arg2, entry_x2)
    i += 8
while (i != 0x60)

return result
