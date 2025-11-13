// 函数: _Z19CampaignApplyExtrasR7DomGame9PlayerWhoRK13DomGameConfig18CampaignSetupFlags
// 地址: 0xa53d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = arg4 & 1
int32_t x8 = arg4 & 2
int32_t x8_1 = arg4 & 4
int32_t x20 = arg2
int32_t x26 = arg4 & 0x20
int32_t x9_1 = arg4 & 8
int32_t x8_2 = arg4 & 0x10
int32_t x22

if (arg4 != 1)
    int32_t x23_2 = arg4
    int64_t fp_1 = 0
    x22 = 0
    
    while (true)
        void* x9_8 = arg3 + fp_1 * 0x14
        uint64_t x8_16 = zx.q(*(x9_8 + 0x548))
        
        if (x8_16.d == 0)
            return zx.q(x22)
        
        int64_t* x9_11 =
            *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(x8_16.d s>> 4) | x8_16)) << 3)
        int32_t* x10_5
        
        do
            x10_5 = *x9_11
            x9_11 = &x10_5[4]
        while (*x10_5 != x8_16.d)
        
        int32_t x9_13 = *(*(x10_5 + 8) + 0x10)
        uint64_t x8_18 = zx.q(x9_13 - 0xdad)
        
        if (x8_18.d u> 3)
            int32_t x8_20 = x8_2
            
            if (x9_13 != 0x1770)
                x8_20 = x9_1
                
                if (x9_13 != 0x1b58)
                    break
            
            if (x8_20 != 0)
                goto label_a53f80
        else
            switch (x8_18)
                case 0
                    if (x8 != 0)
                    label_a53f80:
                        
                        if (x23_2 u> 0x20)
                            break
                        
                        uint64_t x8_21 = zx.q(x23_2)
                        
                        if ((1 << x8_21 & 0x10110) != 0)
                            CampaingApplyExtra(arg1, x9_8 + 0x548, 0xffffffff)
                        else
                            if ((1 << x8_21 & 0x100000002) != 0)
                                x22 |= 1
                            else if (x8_21 != 2)
                                break
                            
                            if (x20 != 0xffffffff)
                                int32_t x8_26 = *(arg3 + fp_1 * 0x14 + 0x550)
                                
                                if (x8_26 == x20 || x8_26 == 0xffffffff)
                                    CampaingApplyExtra(arg1, x9_8 + 0x548, zx.q(x20))
                            else if (*(arg1 + 0xd40) s>= 1)
                                int32_t i = 0
                                
                                do
                                    CampaingApplyExtra(arg1, x9_8 + 0x548, zx.q(i))
                                    i += 1
                                while (i s< *(arg1 + 0xd40))
                case 1
                    if (x9 != 0)
                        goto label_a53f80
                case 2
                    if (x26 != 0)
                        goto label_a53f80
                case 3
                    if (x8_1 != 0)
                        goto label_a53f80
        
        fp_1 += 1
        
        if (fp_1 == 0x20)
            return zx.q(x22)
else
    int64_t x25_1 = 0
    x22 = 0
    
    while (true)
        void* x9_2 = arg3 + x25_1 * 0x14
        uint64_t x8_3 = zx.q(*(x9_2 + 0x548))
        
        if (x8_3.d != 0)
            int64_t* x9_5 =
                *gCampaignData + ((zx.q(*(gCampaignData + 8)) & (zx.q(x8_3.d s>> 4) | x8_3)) << 3)
            int32_t* x10_2
            
            do
                x10_2 = *x9_5
                x9_5 = &x10_2[4]
            while (*x10_2 != x8_3.d)
            
            int32_t x8_5 = *(*(x10_2 + 8) + 0x10)
            uint64_t x9_7 = zx.q(x8_5 - 0xdad)
            int32_t x8_7
            
            if (x9_7.d u> 3)
                if (x8_5 != 0x1770)
                    x8_7 = x9_1
                    
                    if (x8_5 != 0x1b58)
                        break
                    
                    goto label_a53e20
                
                if (x8_2 != 0)
                label_a53e28:
                    x22 |= 1
                    
                    if (x20 != 0xffffffff)
                        int32_t x8_10 = *(arg3 + x25_1 * 0x14 + 0x550)
                        
                        if (x8_10 == x20 || x8_10 == 0xffffffff)
                            CampaingApplyExtra(arg1, x9_2 + 0x548, zx.q(x20))
                    else if (*(arg1 + 0xd40) s>= 1)
                        int32_t i_1 = 0
                        
                        do
                            CampaingApplyExtra(arg1, x9_2 + 0x548, zx.q(i_1))
                            i_1 += 1
                        while (i_1 s< *(arg1 + 0xd40))
            else
                x8_7 = x26
                
                switch (x9_7)
                    case 0
                        if (x8 != 0)
                            goto label_a53e28
                    case 1
                        if (x9 != 0)
                            goto label_a53e28
                    case 2
                    label_a53e20:
                        
                        if (x8_7 != 0)
                            goto label_a53e28
                    case 3
                        if (x8_1 != 0)
                            goto label_a53e28
            x25_1 += 1
            
            if (x25_1 != 0x20)
                continue
        
        return zx.q(x22)
pthread_kill(pthread_self(), 6)
return DoodadDefGet(XNoReturn()) __tailcall
