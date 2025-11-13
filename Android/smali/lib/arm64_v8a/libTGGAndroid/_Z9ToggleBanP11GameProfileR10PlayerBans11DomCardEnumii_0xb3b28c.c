// 函数: _Z9ToggleBanP11GameProfileR10PlayerBans11DomCardEnumii
// 地址: 0xb3b28c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = zx.q(*(arg2 + 0xaf0))
int32_t i = arg3
int64_t result
int32_t x24_1
int32_t x25_1

if (x26.d s< 1)
    x24_1 = 0
    x25_1 = 0
    result = IsLandscape(zx.q(i), 0x18)
    
    if ((result.d & 1) != 0)
    label_b3b35c:
        
        if (arg5 s< 1 || x24_1 s< arg5)
            goto label_b3b398
    else
    label_b3b388:
        
        if (arg4 s< 1 || x25_1 s< arg4)
            goto label_b3b398
else
    uint64_t x0 = zx.q(*arg2)
    
    if (x0.d != i)
        int64_t x9_1 = 1
        int64_t x8_1
        
        do
            x8_1 = x9_1
            
            if (x26 == x9_1)
                break
            
            x9_1 = x8_1 + 1
        while (*(arg2 + (x8_1 << 2)) != i)
        
        if (x8_1 u< x26)
            goto label_b3b398
        
        int32_t x0_1 = IsLandscape(x0, 0x18)
        x24_1 = x0_1 & 1
        x25_1 = not.d(x0_1) & 1
        
        if (x26.d != 1)
            int64_t i_2 = x26 - 1
            void* __offset(PlayerBans, 0x4) x27_1 = arg2 + 4
            int64_t i_1
            
            do
                uint64_t x0_2 = zx.q(*x27_1)
                x27_1 += 4
                int32_t x0_3 = IsLandscape(x0_2, 0x18)
                x24_1 += x0_3 & 1
                i_1 = i_2
                i_2 -= 1
                x25_1 += not.d(x0_3) & 1
            while (i_1 != 1)
        
        result = IsLandscape(zx.q(i), 0x18)
        
        if ((result.d & 1) == 0)
            goto label_b3b388
        
        goto label_b3b35c
    
label_b3b398:
    int64_t x8_5 = 0
    
    while (true)
        int32_t x8_6
        
        if (*(arg2 + x8_5) == i)
            i = 0
            int64_t x9_7 = sx.q(*(arg2 + 0xaf0)) - 1
            *(arg2 + 0xaf0) = x9_7.d
            *(arg2 + x8_5) = *(arg2 + (x9_7 << 2))
            x8_6 = *(arg2 + 0xaf0)
        else
            x8_5 += 4
            
            if (x8_5 != 0xaf0)
                continue
            else
                x8_6 = *(arg2 + 0xaf0)
                
                if (x8_6 == 0x2bc)
                    break
                
                *(arg2 + 0xaf0) = x8_6 + 1
        
        *(arg2 + (sx.q(x8_6) << 2)) = i
        break
    
    GameSetup* x0_6 = GetActiveGameSetup()
    GetKingdomConfig(x0_6)
    void var_dec
    memset(&var_dec, 0, 0xaf0)
    memcpy(&var_dec, arg2, sx.q(*(arg2 + 0xaf0)) << 2)
    DomSetupConfig var_19f0
    result = SaveSetupData(x0_6, &var_19f0)
    
    if (arg1 != 0)
        if (arg1 + 0x5964 == arg2)
            int64_t x0_10 = CurrentDateTime()
            *(arg1 + 0x42e0) = x0_10
            int64_t var_1a08 = x0_10
            int32_t x0_12 = memcrc32(arg2, sx.q(*(arg1 + 0x6454)) << 2, 0)
            PlayerBans& var_1a00_1 = arg2
            int32_t var_19f8_1 = *(arg1 + 0x6454)
            int32_t var_19f4_1 = x0_12
            NetworkSendDef(zx.q(*(GetClient() + 0x14)), 0xf42c4, *defMapSetBans, &var_1a08)
        
        return SaveProfiles()
return result
