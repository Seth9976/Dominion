// 函数: _Z21MapParamsFromCampaignRK13CampaignSetupj
// 地址: 0xa56588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

RandomPCG* x0_1
int64_t x1
x0_1, x1 = RandomPCGSet(zx.q(arg2), 0x457)
uint32_t* entry_x8
*(entry_x8 + 4) = zx.o(0)
RandomPCG* var_70 = x0_1
int64_t var_68 = x1
__builtin_memset(&entry_x8[5], 0, 0x44)
*entry_x8 = arg2
int32_t x0_2 = RollFlavorThemes(x0_1, arg1, &entry_x8[1])
int32_t x0_4 = RollMapstyle(&var_70, &entry_x8[1], x0_2)
uint64_t x9 = zx.q(entry_x8[1])
int32_t x10_1 = *(x9 * 0x38 + 0x1134d10)
int32_t var_5c = 0xc
entry_x8[3] = x0_4
entry_x8[4] = x10_1

if (((0x160540 u>> x9).d & 1) != 0)
    entry_x8[5] = 1
else
    entry_x8[5] = 3
    
    if (x10_1 == 5 || x10_1 == 2)
        entry_x8[4] = 3
        entry_x8[5] = x10_1

int64_t x9_2 = *(x9 * 0x38 + 0x1134d18)
entry_x8[6] = *(x9 * 0x38 + 0x1134d14)
int64_t var_58 = x9_2
int32_t x2_2
int32_t x24

if (x0_2 s< 2)
    x24 = 1
    x2_2 = 3
else
    x24 = 2
    x2_2 = 5
    void* x8 = &data_1134d00 + zx.q(entry_x8[2]) * 0x38
    int64_t x8_1 = *(x8 + 0x18)
    entry_x8[7] = *(x8 + 0x14)
    int64_t var_50_1 = x8_1

int32_t x23

if (x2_2 u< 6 - x24)
    x23 = x2_2
else
    x23 = 6 - x24

ShuffleIntsN(&var_70, &var_5c, x2_2, x23)
memcpy(&entry_x8[zx.q(x24) + 6], &var_5c, zx.q(x23 << 2))
entry_x8[0xc] = RollMissionDoodad(&var_70, arg1, 0, &entry_x8[1], x0_2)
entry_x8[0xd] = RollMissionDoodad(&var_70, arg1, 1, &entry_x8[1], x0_2)
entry_x8[0xe] = RollMissionDoodad(&var_70, arg1, 2, &entry_x8[1], x0_2)
entry_x8[0xf] = RollMissionDoodad(&var_70, arg1, 3, &entry_x8[1], x0_2)
entry_x8[0x10] = RollMissionDoodad(&var_70, arg1, 4, &entry_x8[1], x0_2)
entry_x8[0x11] = RollMissionDoodad(&var_70, arg1, 5, &entry_x8[1], x0_2)
entry_x8[0x12] = RollMissionDoodad(&var_70, arg1, 6, &entry_x8[1], x0_2)
entry_x8[0x13] = RollMissionDoodad(&var_70, arg1, 7, &entry_x8[1], x0_2)
entry_x8[0x14] = RollMissionDoodad(&var_70, arg1, 8, &entry_x8[1], x0_2)
int64_t result = RollMissionDoodad(&var_70, arg1, 9, &entry_x8[1], x0_2)
entry_x8[0x15] = result.d
return result
