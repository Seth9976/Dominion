// 函数: _Z19CampaignPieceExists13CampaignPiece11DomCardEnum
// 地址: 0xa2f534
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = 0
int32_t* x8_2 = *(gCampaignSetup + 0x19a0) + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x590
int32_t x10_1 = 1

while (x8_2[-1] != arg1 || *x8_2 != arg2)
    bool cond:0_1 = x9 u< 0x1f
    x9 += 1
    x10_1 = cond:0_1 ? 1 : 0
    x8_2 = &x8_2[5]
    
    if (x9 == 0x20)
        break

return zx.q(x10_1) & 1
