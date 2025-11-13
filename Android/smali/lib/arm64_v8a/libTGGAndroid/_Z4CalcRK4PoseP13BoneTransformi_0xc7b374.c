// 函数: _Z4CalcRK4PoseP13BoneTransformi
// 地址: 0xc7b374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1 = *arg1
int128_t* entry_x8
*(entry_x8 + 0xc) = *(arg1 + 0xc)
*entry_x8 = v1

if (arg3 s< 1)
    return 

uint64_t i_1 = zx.q(arg3)
void* __offset(BoneTransform, 0x10) x22_1 = arg2 + 0x10
uint64_t i

do
    int128_t var_50 = *(x22_1 - 0x10)
    int32_t x8 = *(x22_1 + 8)
    int64_t x9_1 = *x22_1
    x22_1 += 0x2c
    int32_t var_38_1 = x8
    int64_t var_40_1 = x9_1
    int128_t v0
    int128_t v1_1
    arg1, v0, v1_1 = PoseCompose(&var_50, entry_x8)
    i = i_1
    i_1 -= 1
    int128_t var_64
    *(entry_x8 + 0xc) = var_64
    int128_t var_70
    *entry_x8 = var_70
while (i != 1)
