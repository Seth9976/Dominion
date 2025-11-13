// 函数: _Z8HasStamp11DomCardEnum13CampaignPiece
// 地址: 0xa41034
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
void* x9_1 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb)

do
    int32_t x10_2 = *(x9_1 + i + 0x58c)
    
    if (x10_2 == 0)
        break
    
    if (x10_2 == arg2 && *(x9_1 + i + 0x590) == arg1)
        return 1
    
    i += 0x14
while (i != 0x280)

return 0
