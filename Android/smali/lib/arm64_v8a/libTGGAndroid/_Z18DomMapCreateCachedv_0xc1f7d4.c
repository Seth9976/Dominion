// 函数: _Z18DomMapCreateCachedv
// 地址: 0xc1f7d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gMapGlobals + 8))

if (x12.d != 0)
    void* i_1 = *gMapGlobals
    int64_t x13_1 = 0x5110
    void* i = i_1
    
    do
        if (zx.d(*(i_1 + x13_1 + 2)) != 0)
            if (i != 0xffffffff)
                int64_t x12_1 = i_1 + x12 * 0x5118
                
                do
                    if (*i != 3 && *(i + 8) == 1)
                        return zx.q(*(i + 0x5110))
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x5118
                    
                    if (i u>= x12_1)
                        break
                    
                    void* x14_6 = i + 0x5110
                    
                    while (zx.d(*(x14_6 + 2)) == 0)
                        i += 0x5118
                        x14_6 += 0x5118
                        
                        if (i u>= x12_1)
                            goto label_c1f8a0
                while (i != 0xffffffff)
            
            break
        
        i += 0x5118
        x13_1 += 0x5118
    while (i u< i_1 + x12 * 0x5118)

label_c1f8a0:
int64_t var_20 = 1
int32_t var_18 = RandomNext(gRNG)
CampaignSetup var_5040

if ((CampaignTryGenerate(&var_20, &var_5040) & 1) == 0)
    return 0

return DomMapCreateAsync(&var_5040)
