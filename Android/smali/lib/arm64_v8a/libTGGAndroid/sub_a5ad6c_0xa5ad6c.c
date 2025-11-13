// 函数: sub_a5ad6c
// 地址: 0xa5ad6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg2
int32_t* j = *(*(gCampaignData + 0x50)
    + ((zx.q(*(gCampaignData + 0x58)) & (zx.q(x8) | zx.q(x8 s>> 4))) << 3))

if (j != 0)
    int32_t x10_2 = *(arg1 + 8)
    int32_t* i = j
    
    do
        if (*i == x8)
            uint64_t x11_2 = zx.q(i[4])
            
            if (x11_2.d s>= 1)
                int32_t* x13_1 = *(i + 8)
                int64_t x12_2
                
                if (*x13_1 != x10_2)
                    x12_2 = 0
                    int32_t x15_1
                    
                    do
                        if (x11_2 - 1 == x12_2)
                            return 0
                        
                        x15_1 = x13_1[1 + x12_2]
                        x12_2 += 1
                    while (x15_1 != x10_2)
                
                if (*x13_1 == x10_2 || x12_2 u< x11_2)
                    do
                        if (*j == x8)
                            uint64_t x8_1 = zx.q(j[4])
                            
                            if (x8_1.d s< 1)
                                break
                            
                            int32_t* x10_4 = *(j + 8)
                            
                            if (*x10_4 == 0x11)
                                return 1
                            
                            uint64_t x9_2 = 0
                            int32_t k
                            
                            do
                                if (x8_1 - 1 == x9_2)
                                    x9_2 = x8_1
                                    break
                                
                                k = x10_4[1 + x9_2]
                                x9_2 += 1
                            while (k != 0x11)
                            return zx.q(x9_2 u< x8_1 ? 1 : 0)
                        
                        j = *(j + 0x18)
                    while (j != 0)
            
            break
        
        i = *(i + 0x18)
    while (i != 0)

return 0
