// 函数: _Z21MissionCountFreeSlotsv
// 地址: 0xa34a34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
int64_t x9 = sx.q(*(gCampaignSetup + 0x19a8))
void* x10 = x8 + (x9 << 0xb)

if (*(x10 + 0xc) == 0)
    return 0xa

if (*(x10 + 0x10) == 0)
    return 9

void* x10_2 = x8 + (x9 << 0xb)

if (*(x10_2 + 0x14) == 0)
    return 8

if (*(x10_2 + 0x18) == 0)
    return 7

void* x10_4 = x8 + (x9 << 0xb)

if (*(x10_4 + 0x1c) == 0)
    return 6

if (*(x10_4 + 0x20) == 0)
    return 5

void* x10_6 = x8 + (x9 << 0xb)

if (*(x10_6 + 0x24) == 0)
    return 4

if (*(x10_6 + 0x28) == 0)
    return 3

void* x8_1 = x8 + (x9 << 0xb)

if (*(x8_1 + 0x2c) == 0)
    return 2

return zx.q(*(x8_1 + 0x30) == 0 ? 1 : 0)
