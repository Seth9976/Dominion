// 函数: _Z19GameSaveAnyMoveMadeRK8GameSave
// 地址: 0x9dafb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14
int32_t x0_1 = IsCampaignMission(zx.q(*arg1), &var_14)
int32_t x8_1

if ((x0_1 & 1) != 0)
    x8_1 = var_14

if ((x0_1 & 1) == 0 || (x8_1 != 9 && x8_1 != 4))
    uint64_t x8_3 = zx.q(*(arg1 + 0x11b4))
    
    if (x8_3.d s>= 1)
        void* __offset(GameSave, 0x11cc) x9_1 = arg1 + 0x11cc
        
        while (true)
            if (*x9_1 != 0)
                return 1
            
            uint64_t temp0_1 = x8_3
            x8_3 -= 1
            x9_1 += 0x18
            
            if (temp0_1 == 1)
                return 0
else if (*(arg1 + 0x11e4) != 0)
    return 1

return 0
