// 函数: _Z31LandMod_Project_SecondCopy_Testv
// 地址: 0xa32940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = *(gCampaignSetup + 0x19a0)
int64_t x21 = sx.q(*(gCampaignSetup + 0x19a8))
int32_t x19 = *(x20 + (x21 << 0xb) + 0x34)

if (x19 != 0)
    if ((zx.d(*(DomDefGet(zx.q(x19), 0x17) + 0xcb)) & 8) != 0 && x19 != 0xe28 && x19 != 0xe26)
        return 1
    
    int32_t x19_1 = *(x20 + (x21 << 0xb) + 0x70)
    
    if (x19_1 != 0)
        if ((zx.d(*(DomDefGet(zx.q(x19_1), 0x17) + 0xcb)) & 8) != 0 && x19_1 != 0xe28
                && x19_1 != 0xe26)
            return 1
        
        int32_t x19_2 = *(x20 + (x21 << 0xb) + 0xac)
        
        if (x19_2 != 0)
            if ((zx.d(*(DomDefGet(zx.q(x19_2), 0x17) + 0xcb)) & 8) != 0 && x19_2 != 0xe28
                    && x19_2 != 0xe26)
                return 1
            
            int32_t x19_3 = *(x20 + (x21 << 0xb) + 0xe8)
            
            if (x19_3 != 0 && (zx.d(*(DomDefGet(zx.q(x19_3), 0x17) + 0xcb)) & 8) != 0
                    && x19_3 != 0xe28 && x19_3 != 0xe26)
                return 1

return 0
