// 函数: _Z19Stamp_PayLater_Testv
// 地址: 0xa3d624
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(gCampaignSetup + 0x19ac)
int32_t x0 = CampaignHasExpansion(0xc)
int32_t x0_1

if ((x0 & 1) == 0)
    x0_1 = CampaignHasExpansion(0x12)

if ((x0 & 1) != 0 || (x0_1 & 1) != 0)
    int64_t result = 1
    
    if (x19 s> 0xf11)
        int32_t x8_7
        
        if (x19 s> 0x1122)
            if (x19 - 0x1208 u> 0xe || (1 << (x19 - 0x1208) & 0x4011) == 0)
                x8_7 = 0x1123
            label_a3d6fc:
                
                if (x19 != x8_7)
                    return result
        else if (x19 - 0xf12 u> 0xa || (1 << (x19 - 0xf12) & 0x701) == 0)
            x8_7 = 0x1032
            goto label_a3d6fc
    else if (x19 s<= 0x913)
        if (x19 s> 0x817)
            if (x19 != 0x818 && x19 != 0x81e)
                return result
        else if (x19 - 0x501 u>= 2 && x19 != 0x61a)
            return result
    else if (x19 - 0xc00 u>= 4 && x19 != 0x914 && x19 != 0x916)
        return result

return 0
