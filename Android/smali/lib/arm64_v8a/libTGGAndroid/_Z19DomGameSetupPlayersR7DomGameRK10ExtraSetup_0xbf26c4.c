// 函数: _Z19DomGameSetupPlayersR7DomGameRK10ExtraSetup
// 地址: 0xbf26c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xd40) s< 1)
    return 

int32_t i = 0
void* __offset(DomGame, 0xd40) x22_1 = arg1 + 0xd40
void* __offset(DomGame, 0x1071) x27_1 = arg1 + 0x1071

do
    if (zx.d(*(arg2 + 4)) != 0)
        int32_t var_cf8_1 = 0
        int32_t var_d00_1 = 0xffffffff
        AddTokens(arg1, zx.q(i), 0x1000, 1, 0x476, 0, 0, 0)
    
    int32_t x0_2
    int32_t x5_1
    x0_2, x5_1 = CampaignApplyExtras(arg1, zx.q(i), x22_1, 2)
    int32_t x8_3 = *(arg1 + 0xd48)
    int32_t x25_1 = x0_2
    
    if (x8_3 == 0 || (zx.d(*(arg1 + 0xd4d)) & 1) != 0)
        x25_1 |= DefaultPlayerStartCards(arg1, zx.q(i), *x27_1, arg2 + 8, *(arg2 + 0x48), x5_1)
    else
        DomCampaignPlayerStartCards(arg1, zx.q(i), GetCampaign(zx.q(x8_3)), *x27_1, arg2 + 8, 
            *(arg2 + 0x48))
    
    CardID var_ce8
    int32_t x0_9 = CardsWhere(arg1, zx.q(i), 0x3eb, &var_ce8)
    CardID* x1_5 = &var_ce8 + (sx.q(x0_9) << 2)
    DomGame& var_68
    uint64_t i_1
    
    if ((x25_1 & 1) != 0)
        var_68 = arg1
        sub_c0575c(&var_ce8, x1_5, &var_68)
        
        if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(x27_1 + 0x497)) == 0)
            int32_t var_cf0_2 = 0
            
            if (i == *(arg1 + 0x19d4))
                i_1 = zx.q(*(arg1 + 0x19d8))
            else
                i_1 = zx.q(i)
            
            int32_t var_cf8_3 = 0
            int32_t var_d00_3 = 0
            DomAddLogEvent(arg1, zx.q(i), i_1, 2, 0, &var_ce8, zx.q(x0_9), zx.q(x25_1) & 1)
    else
        std::__ndk1::__sort<std::__ndk1::__less<CardID, CardID>&, CardID*>(&var_ce8, x1_5, &var_68)
        
        if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(x27_1 + 0x497)) == 0)
            if (i == *(arg1 + 0x19d4))
                i_1 = zx.q(*(arg1 + 0x19d8))
            else
                i_1 = zx.q(i)
            
            int32_t var_cf0_1 = 0
            int32_t var_cf8_2 = 0
            int32_t var_d00_2 = 0
            DomAddLogEvent(arg1, zx.q(i), i_1, 2, 0, &var_ce8, zx.q(x0_9), 0)
    i += 1
while (i s< *x22_1)
