// 函数: _Z17RollMissionDoodadR9RandomPCGRK13CampaignSetupiP11FlavorThemei
// 地址: 0xa55e0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = arg2 + (sx.q(arg3) << 0xb)
int64_t x25 = 0
int32_t* x27_1

while (true)
    void* x1 = x8_1 + 0x58c + x25
    int32_t var_54
    
    if (*x1 != 0)
        x27_1 = &var_54
        
        if ((HasExtraSpecialDoodad(x8_1 + 0xc, x1, &var_54) & 1) != 0)
            break
        
        x25 += 0x14
        
        if (x25 != 0x280)
            continue
    
    uint64_t x8_3
    
    if (arg3 == 9)
        x8_3 = zx.q(*(arg4 + (zx.q(arg5 == 2 ? 1 : 0) << 2)))
    else
        if (arg3 != 4)
            int128_t var_80
            int128_t* x24_1 = &var_80
            __builtin_memcpy(&var_80, 
                "\x1e\x00\x00\x00\x00\x00\x00\x00\x28\x00\x00\x00\x01\x00\x00\x00\x14\x00\x00\x00\x02\x"
            "00\x00\x00\x0a\x00\x00\x00\x03\x00\x00\x00", 
                0x20)
            int32_t x0_3 = RandomInt(arg1, 0x64)
            
            if (x0_3 s< 0x1e)
                goto label_a55f08
            
            if (x0_3 s> 0x45)
                int128_t var_70
                
                if (x0_3 s< 0x5a)
                    x24_1 = &var_70
                    goto label_a55f08
                
                if (x0_3 s>= 0x64)
                    goto label_a55fe4
                
                x24_1 = &var_70:8
                goto label_a55f08
            
            x24_1 = &var_80 | 8
        label_a55f08:
            uint64_t x8_6 = zx.q(*(x24_1 + 4))
            
            if (x8_6.d u> 3)
            label_a55fe4:
                pthread_kill(pthread_self(), 6)
                int64_t x0_16
                FlavorTheme* x1_6
                x0_16, x1_6 = XNoReturn()
                return GetBellsFlavorThemes(x0_16, x1_6) __tailcall
            
            switch (x8_6)
                case 0
                    int32_t x0_5 = RandomDoodadFromFlavorTheme(arg1, arg4, arg5)
                    var_54 = x0_5
                    
                    if (x0_5 == 0)
                        var_54 = RandomDoodadFromFlavorTheme(arg1, arg4, arg5)
                case 1
                    int32_t x2_2
                    
                    if (*(arg2 + 0x5018) != 0)
                        x2_2 = 2
                    else
                        x2_2 = 1
                    
                    int32_t x0_7 = RandomDoodadFromCampaignTheme(arg1, arg2 + 0x5010, x2_2)
                    var_54 = x0_7
                    
                    if (x0_7 == 0)
                        var_54 = RandomDoodadFromFlavorTheme(arg1, arg4, arg5)
                case 2
                    int32_t x0_9 = RandomDoodadFromBells(arg1, x8_1 + 0xc)
                    var_54 = x0_9
                    
                    if (x0_9 == 0)
                        var_54 = RandomDoodadFromFlavorTheme(arg1, arg4, arg5)
                case 3
                    int32_t x0_11 = RandomDoodadFromKingdom(arg1, x8_1 + 0xc)
                    var_54 = x0_11
                    
                    if (x0_11 == 0)
                        var_54 = RandomDoodadFromFlavorTheme(arg1, arg4, arg5)
            
            x27_1 = &var_54
            break
        
        x8_3 = zx.q(*arg4)
    
    x27_1 = x8_3 * 0x38 + 0x1134d20
    break

return zx.q(*x27_1)
