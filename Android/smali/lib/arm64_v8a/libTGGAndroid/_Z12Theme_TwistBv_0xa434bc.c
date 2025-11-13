// 函数: _Z12Theme_TwistBv
// 地址: 0xa434bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
uint64_t x8 = zx.q(*(gCampaignSetup + 0x19b4))
void* x19

if (x8.d == 2)
    x19 = x9 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x19 = x9 + (x8 << 3) + 0x5010

CampaignAddTwist(zx.q(*(x19 + 4)))
int32_t i = *(x19 + 4)
int64_t x0_1

do
    x0_1 = RollTwist()
while (x0_1.d == i)

return CampaignAddTwist(x0_1) __tailcall
