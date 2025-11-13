// 函数: _Z18RollThemeExpansionv
// 地址: 0xa42134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
int32_t x1 = 0
void* x8 = *(gCampaignSetup + 0x19a0)
int64_t x12 = sx.q(*(gCampaignSetup + 0x19a8))
uint64_t x11 = zx.q(*(gCampaignSetup + 0x19b4))
void* x15 = x8 + (x12 << 0xb)
int32_t var_90[0x20]

do
    int32_t x17_2 = *(gCampaignSetup + i + 0x9d8)
    
    if (x17_2 != 2 && x17_2 != 0x13 && (*(x8 + 0x5010) != 0x834 || *(x8 + 0x5014) != x17_2)
            && (*(x8 + 0x5018) != 0x834 || *(x8 + 0x501c) != x17_2)
            && (*(x15 + 0x540) != 0x834 || *(x15 + 0x544) != x17_2))
        var_90[sx.q(x1)] = x17_2
        x1 += 1
    
    i += 0x10
while (i != 0x200)

void* x19

if (x11.d == 2)
    x19 = x8 + (x12 << 0xb) + 0x540
else
    x19 = x8 + (x11 << 3) + 0x5010

int64_t result = RandomInt(gCampaignSetup, x1)
*(x19 + 4) = var_90[sx.q(result.d)]
return result
