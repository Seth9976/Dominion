// 函数: _Z12Theme_TwistAv
// 地址: 0xa43468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
uint64_t x8 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_1

if (x8.d == 2)
    x8_1 = x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_1 = x9 + (x8 << 3) + 0x5010

return CampaignAddTwist(zx.q(*(x8_1 + 4))) __tailcall
