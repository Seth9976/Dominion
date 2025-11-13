// 函数: _ZN5Botan8Streebog12final_resultEPh
// 地址: 0xe3b928
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x18)
char* x9 = *(arg1 + 0x20)
*(arg1 + 0x18) = x8 + 1
x9[x8] = 1
int128_t* x8_1 = *(arg1 + 0x20)
int64_t x9_1 = *(arg1 + 0x18)
void* x10_1 = *(arg1 + 0x28) - x8_1
int128_t v2

if (x10_1 != x9_1 && x10_1 != x9_1)
    int128_t v0
    int128_t v1
    int128_t v3
    v0, v1, v2, v3 = memset(x8_1 + x9_1, 0, x10_1 - x9_1)
    x8_1 = *(arg1 + 0x20)

v2 = x8_1[1]
int128_t var_40 = x8_1[2]
int128_t var_30 = x8_1[3]
int128_t var_60 = *x8_1
int128_t var_50 = v2
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
v0_1, v1_1, v2_1, v3_1 = Botan::Streebog::compress_64(arg1, &var_60)
int64_t* x0_2 = *(arg1 + 0x20)
int64_t x10_2 = *(arg1 + 0x28)
int64_t x8_4 = *(arg1 + 0x10) + (*(arg1 + 0x18) << 3) - 8
*(arg1 + 0x10) = x8_4

if (x10_2 != x0_2)
    v0_1, v1_1, v2_1, v3_1 = memset(x0_2, 0, x10_2 - x0_2)
    x8_4 = *(arg1 + 0x10)
    x0_2 = *(arg1 + 0x20)

*x0_2 = x8_4
int128_t* x8_5 = *(arg1 + 0x20)
v2_1 = x8_5[1]
int128_t var_40_1 = x8_5[2]
int128_t var_30_1 = x8_5[3]
var_60 = *x8_5
int128_t var_50_1 = v2_1
Botan::Streebog::compress_64(arg1, &var_60)
Botan::Streebog::compress_64(arg1, (*(arg1 + 0x50)).b)
int64_t x0_6 = (**arg1)(arg1)
int64_t entry_x1
memcpy(entry_x1, *(arg1 + 0x38) + ((8 - (x0_6 u>> 3)) << 3), (**arg1)(arg1))
jump(*(*arg1 + 0x38))
