// 函数: _Z33DomValidateCampaignEntryOwnershipR20CampaignMissionExtraP14TGGEntitlementi
// 地址: 0x9e45dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 4)
int32_t x8_1

if (x22 == 0)
label_9e4644:
    int64_t var_58
    int32_t x0_4 = CampaignPieceDefGetExpansions(CampaignPieceDefGet(zx.q(*arg1)), &var_58)
    
    if (x0_4 == 0)
        x8_1 = 1
    else if (x0_4 s< 1 || arg3 s< 1)
        x8_1 = 0
    else
        int64_t x22_1 = var_58
        int64_t x21_1 = 0
        uint64_t x24_2 = zx.q(x0_4)
        int32_t x25_1 = 1
        
        do
            int32_t x20_1 = *(x22_1 + (x21_1 << 2))
            TGGEntitlement* x26_1 = arg2
            uint64_t i_3 = zx.q(arg3)
            uint64_t i
            
            do
                if ((DomEntitlementGrantsExpansion(zx.q(*x26_1), zx.q(x20_1)) & 1) != 0)
                    x8_1 = x25_1
                    goto label_9e46e0
                
                i = i_3
                i_3 -= 1
                x26_1 += 4
            while (i != 1)
            x21_1 += 1
            x8_1 = 0
            x25_1 = x21_1 u< x24_2 ? 1 : 0
        while (x21_1 != x24_2)
else
    if (arg3 s>= 1)
        uint64_t i_2 = zx.q(arg3)
        TGGEntitlement* x24_1 = arg2
        uint64_t i_1
        
        do
            if ((DomEntitlementGrantsCard(zx.q(*x24_1), zx.q(x22)) & 1) != 0)
                goto label_9e4644
            
            i_1 = i_2
            i_2 -= 1
            x24_1 += 4
        while (i_1 != 1)
    
    x8_1 = 0

label_9e46e0:
return zx.q(x8_1) & 1
