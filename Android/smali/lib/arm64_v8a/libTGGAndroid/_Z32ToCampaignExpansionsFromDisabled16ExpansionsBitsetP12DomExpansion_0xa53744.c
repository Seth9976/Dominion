// 函数: _Z32ToCampaignExpansionsFromDisabled16ExpansionsBitsetP12DomExpansion
// 地址: 0xa53744
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* var_38
int32_t x0_1 = DomGetExpansions(&var_38)
int32_t x21

if (x0_1 s< 1)
    x21 = 0
else
    int64_t i = 0
    x21 = 0
    
    do
        int32_t x22_1 = *(var_38 + i)
        
        if (x22_1 != 2 && (HasExpansion(zx.q(arg1), zx.q(x22_1)) & 1) == 0
                && (ProfileHasEntitlementForExpansion(zx.q(x22_1), nullptr) & 1) != 0)
            *(arg2 + (sx.q(x21) << 2)) = x22_1
            x21 += 1
        
        i += 0x28
    while (mulu.dp.d(x0_1, 0x28) != i)

return zx.q(x21)
