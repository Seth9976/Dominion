// 函数: _Z29ThemePiece_CardCategory2Cardsv
// 地址: 0xa40b6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_3

if (x10.d == 2)
    x8_3 = x8 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_3 = x8 + (x10 << 3) + 0x5010

int32_t x9_3 = *(x8_3 + 4)

for (int32_t* i = *(*(gCampaignData + 0x50)
        + (((zx.q(x9_3) | zx.q(x9_3 s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3)); i != 0; 
        i = *(i + 0x18))
    if (*i == x9_3)
        uint64_t x9_4 = zx.q(i[4])
        
        if (x9_4.d s>= 1)
            int64_t x8_6 = *(i + 8)
            int64_t x24_1 = 0
            int32_t x22_1 = 0
            int32_t x19_1 = 0
            int32_t var_1460[0x100]
            int32_t var_1060[0x2f8]
            
            do
                int32_t j = *(x8_6 + (x24_1 << 2))
                int64_t* x9_9 = *(gCampaignData + 0x40)
                    + (((zx.q(j) | zx.q(j s>> 4)) & zx.q(*(gCampaignData + 0x48))) << 3)
                int32_t* x10_4
                
                do
                    x10_4 = *x9_9
                    x9_9 = &x10_4[6]
                while (*x10_4 != j)
                
                uint64_t fp_1 = zx.q(x10_4[4])
                int64_t x25_1 = *(x10_4 + 8)
                uint64_t x26_1 = zx.q(x19_1)
                int32_t x27_1 = x22_1
                var_1460[x26_1 * 2] = x22_1
                
                if (fp_1.d s>= 1)
                    int64_t x23_1 = 0
                    x27_1 = x22_1
                    
                    do
                        uint64_t x8_10 = zx.q(*(gCampaignSetup + 0x2638))
                        
                        if (x8_10.d s>= 1)
                            int32_t j_1 = *(x25_1 + (x23_1 << 2))
                            int64_t x10_5
                            
                            if (*(gCampaignSetup + 0x19b8) != j_1)
                                int64_t x11_3 = 0
                                
                                do
                                    x10_5 = x11_3
                                    
                                    if (x8_10 - 1 == x11_3)
                                        break
                                    
                                    x11_3 = x10_5 + 1
                                while (*(gCampaignSetup + (x10_5 << 2) + 0x19bc) != j_1)
                            
                            if ((*(gCampaignSetup + 0x19b8) == j_1 || x10_5 + 1 u< x8_10)
                                    && (zx.d(*(DomDefGet(zx.q(j_1), 0x17) + 0xcd)) & 8) == 0
                                    && (zx.d(*(DomDefGet(zx.q(j_1), 0x17) + 0xcc)) & 0x40) == 0)
                                var_1060[sx.q(x27_1)] = j_1
                                x27_1 += 1
                        
                        x23_1 += 1
                    while (x23_1 != fp_1)
                
                x24_1 += 1
                
                if (x27_1 - x22_1 s> 1)
                    x19_1 += 1
                
                x22_1 = x27_1
                var_1460[x26_1 * 2 + 1] = x27_1
            while (x24_1 != x9_4)
            
            if (x19_1 != 0)
                void* x8_14 = &var_1460[sx.q(RandomInt(gCampaignSetup, x19_1)) * 2]
                int64_t x9_15 = sx.q(*x8_14)
                void* x19_2 = &var_1060[x9_15]
                char* x1_3 = ShuffleIntsN(gCampaignSetup, x19_2, *(x8_14 + 4) - x9_15.d, 2)
                int32_t x0_9
                char* x1_4
                x0_9, x1_4 = CampaignKingdomAdd(zx.q(*x19_2), x1_3, 2, 0)
                
                if ((x0_9 & 1) != 0)
                    x1_4 = RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(*x19_2))
                
                int64_t result = CampaignKingdomAdd(zx.q(*(x19_2 + 4)), x1_4, 2, 0)
                
                if ((result.d & 1) == 0)
                    return result
                
                return RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(*(x19_2 + 4)))
        
        break

return XTrace("Couldn't add card categeory cards")
