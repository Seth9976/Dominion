// 函数: _Z19CampaignTryGenerateRK14CampaignParamsR13CampaignSetup
// 地址: 0xa537e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
int32_t x23 = *(x0 + 0x428c)
int32_t* var_5120
int32_t x0_2 = DomGetExpansions(&var_5120)
int32_t var_100[0x28]
int32_t x22_1

if (x0_2 s> 0)
    int64_t i = 0
    x22_1 = 0
    
    do
        int32_t x24_1 = *(var_5120 + i)
        
        if (x24_1 != 2 && (HasExpansion(zx.q(x23), zx.q(x24_1)) & 1) == 0
                && (ProfileHasEntitlementForExpansion(zx.q(x24_1), nullptr) & 1) != 0)
            var_100[sx.q(x22_1)] = x24_1
            x22_1 += 1
        
        i += 0x28
    while (mulu.dp.d(x0_2, 0x28) != i)

if (x0_2 s> 0 && x22_1 != 0)
label_a5393c:
    
    if (x22_1 == 1 && var_100[0] == 0x13)
        if (*arg1 == 1)
            return 0
        
        x22_1 = 1
else
    if (*arg1 == 1)
        *(x0 + 0x428c) = 0
        SaveProfiles()
        int32_t x23_1 = *(x0 + 0x428c)
        int32_t x0_8 = DomGetExpansions(&var_5120)
        
        if (x0_8 s<= 0)
            return 0
        
        int64_t i_1 = 0
        x22_1 = 0
        
        do
            int32_t x24_2 = *(var_5120 + i_1)
            
            if (x24_2 != 2 && (HasExpansion(zx.q(x23_1), zx.q(x24_2)) & 1) == 0
                    && (ProfileHasEntitlementForExpansion(zx.q(x24_2), nullptr) & 1) != 0)
                var_100[sx.q(x22_1)] = x24_2
                x22_1 += 1
            
            i_1 += 0x28
        while (mulu.dp.d(x0_8, 0x28) != i_1)
        
        if (x22_1 == 0)
            return 0
        
        goto label_a5393c
    
    x22_1 = 0

CampaignGenerate(arg1, x0 + 0x6458, &var_100, x22_1, zx.q(ProfileHasEntitlementForPromos()))
memcpy(arg2, &var_5120, 0x5020)
return 1
