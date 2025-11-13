// 函数: _Z23CampaignDrawRandomCombo11DomCardEnum
// 地址: 0xa39764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8_1 = *(*(gCampaignData + 0x20)
    + ((zx.q(*(gCampaignData + 0x28)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3))
int32_t x20

if (x8_1 == 0)
label_a39aa8:
    x20 = 0
else
    while (*x8_1 != arg1)
        x8_1 = *(x8_1 + 0x10)
        
        if (x8_1 == 0)
            goto label_a39aa8_1
    
    void* x19_1 = *(x8_1 + 8)
    
    if (x19_1 == 0 || *(gCampaignSetup + 0x2638) s< 1)
    label_a39aa8_1:
        x20 = 0
    else
        int64_t i = 0
        x20 = 0
        int32_t var_1d0[0x8]
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_1
        int128_t v5_1
        
        do
            void* x24_1 = gCampaignSetup + (i << 2)
            void* x0_1
            x0_1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = DomDefGet(zx.q(*(x24_1 + 0x19b8)), 0x17)
            
            if ((zx.d(*(x0_1 + 0xcd)) & 8) == 0)
                void* x0_3
                x0_3, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = DomDefGet(zx.q(*(x24_1 + 0x19b8)), 0x17)
                
                if ((zx.d(*(x0_3 + 0xcc)) & 0x40) == 0)
                    int32_t x8_7 = *(gCampaignSetup + (i << 2) + 0x19b8)
                    int32_t x9_3
                    
                    if (*(x19_1 + 4) == x8_7 || *(x19_1 + 8) == x8_7 || *(x19_1 + 0xc) == x8_7
                            || *(x19_1 + 0x10) == x8_7 || *(x19_1 + 0x14) == x8_7
                            || *(x19_1 + 0x18) == x8_7 || *(x19_1 + 0x1c) == x8_7
                            || *(x19_1 + 0x20) == x8_7 || *(x19_1 + 0x24) == x8_7
                            || *(x19_1 + 0x28) == x8_7)
                        x9_3 = 0x32
                    label_a397e0:
                        void* x10_1 = &var_1d0[sx.q(x20) * 2]
                        x20 += 1
                        *x10_1 = x9_3
                        *(x10_1 + 4) = x8_7
                    else
                        if (*(x19_1 + 0x2c) == x8_7 || *(x19_1 + 0x30) == x8_7
                                || *(x19_1 + 0x34) == x8_7 || *(x19_1 + 0x38) == x8_7
                                || *(x19_1 + 0x3c) == x8_7 || *(x19_1 + 0x40) == x8_7
                                || *(x19_1 + 0x44) == x8_7 || *(x19_1 + 0x48) == x8_7
                                || *(x19_1 + 0x4c) == x8_7 || *(x19_1 + 0x50) == x8_7)
                            x9_3 = 0x19
                            goto label_a397e0
                        
                        if (*(x19_1 + 0x54) == x8_7 || *(x19_1 + 0x58) == x8_7
                                || *(x19_1 + 0x5c) == x8_7 || *(x19_1 + 0x60) == x8_7
                                || *(x19_1 + 0x64) == x8_7 || *(x19_1 + 0x68) == x8_7
                                || *(x19_1 + 0x6c) == x8_7 || *(x19_1 + 0x70) == x8_7
                                || *(x19_1 + 0x74) == x8_7 || *(x19_1 + 0x78) == x8_7)
                            x9_3 = 0xd
                            goto label_a397e0
                        
                        if (*(x19_1 + 0x7c) == x8_7 || *(x19_1 + 0x80) == x8_7
                                || *(x19_1 + 0x84) == x8_7 || *(x19_1 + 0x88) == x8_7
                                || *(x19_1 + 0x8c) == x8_7 || *(x19_1 + 0x90) == x8_7
                                || *(x19_1 + 0x94) == x8_7 || *(x19_1 + 0x98) == x8_7
                                || *(x19_1 + 0x9c) == x8_7 || *(x19_1 + 0xa0) == x8_7)
                            x9_3 = 7
                            goto label_a397e0
                        
                        if (*(x19_1 + 0xa4) == x8_7 || *(x19_1 + 0xa8) == x8_7
                                || *(x19_1 + 0xac) == x8_7 || *(x19_1 + 0xb0) == x8_7
                                || *(x19_1 + 0xb4) == x8_7 || *(x19_1 + 0xb8) == x8_7
                                || *(x19_1 + 0xbc) == x8_7 || *(x19_1 + 0xc0) == x8_7
                                || *(x19_1 + 0xc4) == x8_7 || *(x19_1 + 0xc8) == x8_7)
                            x9_3 = 5
                            goto label_a397e0
            
            i += 1
        while (i s< sx.q(*(gCampaignSetup + 0x2638)))
        
        if (x20 != 0)
            if (x20 s<= 0)
                RandomInt(gCampaignSetup, 0)
                pthread_kill(pthread_self(), 6)
                return CardComboTry(XNoReturn()) __tailcall
            
            uint64_t x20_1 = zx.q(x20)
            int32_t x1_1
            int64_t i_5
            
            if (x20 u> 8)
                int64_t x8_9
                
                if ((x20_1 & 7) == 0)
                    x8_9 = 8
                else
                    x8_9 = x20_1 & 7
                
                i_5 = x20_1 - x8_9
                v0_1.q = 0
                v0_1:8.q = 0
                void var_1b0
                void* x9_54 = &var_1b0
                int64_t i_4 = i_5
                v1_1.q = 0
                v1_1:8.q = 0
                int64_t i_1
                
                do
                    v2_1.d = *x9_54
                    v3_1.d = *(x9_54 + 4)
                    v2_1:4.d = *(x9_54 + 8)
                    v3_1:4.d = *(x9_54 + 0xc)
                    v2_1:8.d = *(x9_54 + 0x10)
                    v3_1:8.d = *(x9_54 + 0x14)
                    v2_1:0xc.d = *(x9_54 + 0x18)
                    v3_1:0xc.d = *(x9_54 + 0x1c)
                    v4_1.d = *(x9_54 - 0x20)
                    v5_1.d = *(x9_54 - 0x1c)
                    v4_1:4.d = *(x9_54 - 0x18)
                    v5_1:4.d = *(x9_54 - 0x14)
                    v4_1:8.d = *(x9_54 - 0x10)
                    v5_1:8.d = *(x9_54 - 0xc)
                    v4_1:0xc.d = *(x9_54 - 8)
                    v5_1:0xc.d = *(x9_54 - 4)
                    i_1 = i_4
                    i_4 -= 8
                    x9_54 += 0x40
                    v1_1 += v2_1
                    v0_1 += v4_1
                while (i_1 != 8)
                uint128_t v0_2
                v0_2.d = vaddvq_u32(v1_1 + v0_1)
                x1_1 = v0_2.d
            else
                i_5 = 0
                x1_1 = 0
            
            void* x9_55 = &var_1d0[i_5 * 2]
            int64_t i_3 = x20_1 - i_5
            int64_t i_2
            
            do
                int32_t x10_2 = *x9_55
                x9_55 += 8
                i_2 = i_3
                i_3 -= 1
                x1_1 += x10_2
            while (i_2 != 1)
            int32_t x0_6 = RandomInt(gCampaignSetup, x1_1)
            int64_t x8_10 = 0
            int32_t x9_56 = 0
            int32_t (* x10_3)[0x8] = &var_1d0
            
            while (true)
                x9_56 += *x10_3
                
                if (x0_6 s< x9_56)
                    break
                
                x8_10 += 1
                x10_3 = &(*x10_3)[2]
                
                if (x20_1 == x8_10)
                    pthread_kill(pthread_self(), 6)
                    x8_10 = XNoReturn()
                    break
            
            x20 = var_1d0[zx.q(x8_10.d) * 2 + 1]
            RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x20))

return zx.q(x20)
