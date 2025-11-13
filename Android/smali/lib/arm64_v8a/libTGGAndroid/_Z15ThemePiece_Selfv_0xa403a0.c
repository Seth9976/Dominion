// 函数: _Z15ThemePiece_Selfv
// 地址: 0xa403a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
int32_t* x8_3

if (x10.d == 2)
    x8_3 = x8 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_3 = x8 + (x10 << 3) + 0x5010

int32_t x9_3 = *x8_3

if (x9_3 == 0x5dc)
    int32_t x19_1 = x8_3[1]
    char* x1_3 = RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x19_1))
    int64_t x3
    
    if (*(gCampaignSetup + 0x19b4) == 0)
        x3 = 3
    else
        x3 = 5
    
    return CampaignKingdomAdd(zx.q(x19_1), x1_3, 4, x3) __tailcall

if (x9_3 != 0x3e8)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return ThemePiece_SelfModified() __tailcall

int32_t x19 = x8_3[1]
RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x19))
int32_t x20

if (*(gCampaignSetup + 0x19b4) == 0)
    x20 = 3
else
    x20 = 5

int64_t result
char* x1_1
result, x1_1 = IsLandscape(zx.q(x19))
int64_t x8_5 = *(gCampaignSetup + 0x19a0)
int64_t x9_4 = sx.q(*(gCampaignSetup + 0x19a8))
void* x10_1 = x8_5 + (x9_4 << 0xb)

if (*(x10_1 + 0xc) != x19 && *(x10_1 + 0x10) != x19)
    void* x10_3 = x8_5 + (x9_4 << 0xb)
    
    if (*(x10_3 + 0x14) != x19 && *(x10_3 + 0x18) != x19)
        void* x10_5 = x8_5 + (x9_4 << 0xb)
        
        if (*(x10_5 + 0x1c) != x19 && *(x10_5 + 0x20) != x19)
            void* x10_7 = x8_5 + (x9_4 << 0xb)
            
            if (*(x10_7 + 0x24) != x19 && *(x10_7 + 0x28) != x19)
                void* x8_6 = x8_5 + (x9_4 << 0xb)
                
                if (*(x8_6 + 0x2c) != x19 && *(x8_6 + 0x30) != x19)
                    return CampaignKingdomAdd(zx.q(x19), x1_1, 0, zx.q(x20)) __tailcall

return result
