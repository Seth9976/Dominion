// 函数: _Z37ProfileMissingEntitlementsForCampaigniP12DomExpansion
// 地址: 0xb3dd0c
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
        uint64_t x0_2 = zx.q(*(var_38 + i))
        bool z_1
        
        if (x0_2.d s<= arg1)
            z_1 = x0_2.d == 0x13
        else
            z_1 = true
        
        if (not(z_1) && (ProfileHasEntitlementForExpansion(x0_2, nullptr) & 1) == 0)
            *(arg2 + (sx.q(x21) << 2)) = *(var_38 + i)
            x21 += 1
        
        i += 0x28
    while (mulu.dp.d(x0_1, 0x28) != i)

return zx.q(x21)
