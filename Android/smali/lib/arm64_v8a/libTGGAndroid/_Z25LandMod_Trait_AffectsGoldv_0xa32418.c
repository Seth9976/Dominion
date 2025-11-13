// 函数: _Z25LandMod_Trait_AffectsGoldv
// 地址: 0xa32418
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = *(gCampaignSetup + 0x19a0)
int64_t x11 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x9 = *(gCampaignSetup + 0x19ac)
void* x8 = x10 + (x11 << 0xb)
int64_t x9_1

if (*(x8 + 0x34) == x9)
    x9_1 = 0
else if (*(x8 + 0x70) != x9)
    void* x10_1 = x10 + (x11 << 0xb)
    
    if (*(x10_1 + 0xac) != x9)
        if (*(x10_1 + 0xe8) != x9)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return LandMod_Trait_Affects2Piles() __tailcall
        
        x9_1 = 3
    else
        x9_1 = 2
else
    x9_1 = 1

*(x8 + x9_1 * 0x3c + 0x38) = 0x106
