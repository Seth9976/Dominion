// 函数: _Z20ThemeExpansionBasicsv
// 地址: 0xa42960
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19 = sx.q(*(gCampaignSetup + 0x19a8))
int64_t x9 = *(gCampaignSetup + 0x19a0)
uint64_t x8 = zx.q(*(gCampaignSetup + 0x19b4))
uint64_t x8_1 = zx.q(x19.d - 2)
void* x20

if (x8.d == 2)
    x20 = x9 + (x19 << 0xb) + 0x540
else
    x20 = x9 + (x8 << 3) + 0x5010

if (x8_1.d u> 7)
    return 

switch (x8_1)
    case 0, 6
        return CampaignAddExpStamp(zx.q(*(x20 + 4))) __tailcall
    case 2, 7
        CampaignAddTwist(zx.q(*(sx.q(*(x20 + 4)) * 0xa8 + 0x1135084)))
        
        if (x19.d == 8)
            return CampaignAddExpStamp(zx.q(*(x20 + 4))) __tailcall
