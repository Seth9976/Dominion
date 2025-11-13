// 函数: _Z21HasExtraSpecialDoodadRK20CampaignMissionSetupR6Doodad
// 地址: 0xa55650
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = 0

while (true)
    CampaignMissionExtra* x1 = arg1 + 0x580 + x21
    
    if (*x1 != 0)
        if ((HasExtraSpecialDoodad(arg1, x1, arg2) & 1) != 0)
            break
        
        x21 += 0x14
        
        if (x21 != 0x280)
            continue
    
    return 0

return 1
