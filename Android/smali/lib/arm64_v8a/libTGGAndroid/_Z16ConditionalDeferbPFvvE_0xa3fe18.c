// 函数: _Z16ConditionalDeferbPFvvE
// 地址: 0xa3fe18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1.d & 1) == 0)
    jump(arg2)

int64_t x10 = sx.q(*(gCampaignSetup + 0x5c50))
*(gCampaignSetup + 0x5c50) = x10.d + 1
void* x9 = gCampaignSetup + x10 * 0x18
*(x9 + 0x5950) = arg2
*(x9 + 0x5958) = 2
*(x9 + 0x595c) = *(gCampaignSetup + 0x19b4)
*(x9 + 0x5960) = 0
*(x9 + 0x5964) = 0
