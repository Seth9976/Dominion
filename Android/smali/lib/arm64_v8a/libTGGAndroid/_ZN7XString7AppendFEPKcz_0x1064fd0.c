// 函数: _ZN7XString7AppendFEPKcz
// 地址: 0x1064fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_c0
int64_t* var_40 = &var_c0
int64_t var_38 = -0x7f00000030
void arg_0
void* var_50 = &arg_0
int128_t var_90
int128_t* var_48 = &var_90
int128_t entry_v0
int128_t var_140 = entry_v0
int128_t entry_v1
int128_t var_130 = entry_v1
int64_t entry_x2
var_c0 = entry_x2
int64_t x3
int64_t var_b8 = x3
int64_t x4
int64_t var_b0 = x4
int64_t x5
int64_t var_a8 = x5
int64_t x6
int64_t var_a0 = x6
int64_t x7
int64_t var_98 = x7
int128_t entry_v2
int128_t var_120 = entry_v2
int128_t entry_v3
int128_t var_110 = entry_v3
int128_t entry_v4
int128_t var_100 = entry_v4
int128_t entry_v5
int128_t var_f0 = entry_v5
int128_t entry_v6
int128_t var_e0 = entry_v6
int128_t entry_v7
int128_t var_d0 = entry_v7
int128_t var_70 = var_50.o
int128_t var_60 = var_40.o
char* entry_x1
int32_t x0_1 = Xvscprintf(entry_x1, &var_70)

if (x0_1 s>= 1)
    char* x8_1 = *arg1
    int32_t x22_1
    
    if (x8_1 == 0 || zx.d(*x8_1) == 0)
        x22_1 = 0
    else
        x22_1 = *(x8_1 - 8)
    
    int128_t v0
    int128_t v1
    v0, v1 = sub_10648a8(arg1, x22_1 + x0_1, 1)
    char* x0_3 = *arg1 + sx.q(x22_1)
    var_90 = var_50.o
    int128_t var_80_1 = var_40.o
    Xvsnprintf(x0_3, x0_1 + 1, entry_x1, &var_90)

return arg1
