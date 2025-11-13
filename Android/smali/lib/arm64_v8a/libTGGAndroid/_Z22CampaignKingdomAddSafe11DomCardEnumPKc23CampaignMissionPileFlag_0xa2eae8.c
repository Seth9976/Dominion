// 函数: _Z22CampaignKingdomAddSafe11DomCardEnumPKc23CampaignMissionPileFlag
// 地址: 0xa2eae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1.d
int64_t result
char* x1
result, x1 = IsLandscape(arg1)
int64_t x8 = *(gCampaignSetup + 0x19a0)
int64_t x9 = sx.q(*(gCampaignSetup + 0x19a8))
void* x10 = x8 + (x9 << 0xb)

if (*(x10 + 0xc) != x20 && *(x10 + 0x10) != x20)
    void* x10_2 = x8 + (x9 << 0xb)
    
    if (*(x10_2 + 0x14) != x20 && *(x10_2 + 0x18) != x20)
        void* x10_4 = x8 + (x9 << 0xb)
        
        if (*(x10_4 + 0x1c) != x20 && *(x10_4 + 0x20) != x20)
            void* x10_6 = x8 + (x9 << 0xb)
            
            if (*(x10_6 + 0x24) != x20 && *(x10_6 + 0x28) != x20)
                void* x8_1 = x8 + (x9 << 0xb)
                
                if (*(x8_1 + 0x2c) != x20 && *(x8_1 + 0x30) != x20)
                    return CampaignKingdomAdd(zx.q(x20), x1, 0, zx.q(arg3)) __tailcall

return result
