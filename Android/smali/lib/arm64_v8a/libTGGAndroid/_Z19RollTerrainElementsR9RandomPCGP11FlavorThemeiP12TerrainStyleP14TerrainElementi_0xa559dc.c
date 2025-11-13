// 函数: _Z19RollTerrainElementsR9RandomPCGP11FlavorThemeiP12TerrainStyleP14TerrainElementi
// 地址: 0xa559dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_4c = 0xc
uint64_t x9 = zx.q(*arg2)
int32_t x10_1 = *(x9 * 0x38 + 0x1134d10)
*arg4 = x10_1

if (((0x160540 u>> x9).d & 1) != 0)
    *(arg4 + 4) = 1
else
    *(arg4 + 4) = 3
    
    if (x10_1 == 5 || x10_1 == 2)
        *arg4 = 3
        *(arg4 + 4) = x10_1

int64_t x9_2 = *(x9 * 0x38 + 0x1134d18)
*arg5 = *(x9 * 0x38 + 0x1134d14)
int64_t var_48 = x9_2
int32_t x2
int32_t x20

if (arg3 s<= 1)
    x20 = 1
    x2 = 3
else
    x20 = 2
    x2 = 5
    void* x8_1 = &data_1134d00 + zx.q(*(arg2 + 4)) * 0x38
    int64_t x8_2 = *(x8_1 + 0x18)
    *(arg5 + 4) = *(x8_1 + 0x14)
    int64_t var_40_1 = x8_2

int32_t x22 = arg6 - x20
int32_t x21

x21 = x2 s< x22 ? x2 : x22

ShuffleIntsN(arg1, &var_4c, x2, x21)

if (x22 s>= 1)
    memcpy(arg5 + (zx.q(x20) << 2), &var_4c, zx.q(x21) << 2)
    x20 += x21

return zx.q(x20)
