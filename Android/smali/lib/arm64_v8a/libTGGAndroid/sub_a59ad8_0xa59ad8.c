// 函数: sub_a59ad8
// 地址: 0xa59ad8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *arg2
int32_t* x9_1 =
    *(*(gCampaignData + 0x50) + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3))

if (x9_1 != 0)
    int32_t* x11_1 = x9_1
    
    while (true)
        if (*x11_1 != i)
            x11_1 = *(x11_1 + 0x18)
            
            if (x11_1 != 0)
                continue
            
            goto label_a59b70
        
        uint64_t x10_3 = zx.q(x11_1[4])
        
        if (x10_3.d s< 1)
        label_a59b70:
            
            while (*x9_1 != i)
                x9_1 = *(x9_1 + 0x18)
                
                if (x9_1 == 0)
                    return 0
            
            uint64_t x10_5 = zx.q(x9_1[4])
            
            if (x10_5.d s< 1)
                break
            
            int32_t* x11_4 = *(x9_1 + 8)
            
            if (*x11_4 != 0x15)
                int64_t x9_4 = 0
                int32_t i_1
                
                do
                    if (x10_5 - 1 == x9_4)
                        return 0
                    
                    i_1 = x11_4[1 + x9_4]
                    x9_4 += 1
                while (i_1 != 0x15)
                
                if (x9_4 u>= x10_5)
                    break
        else
            int32_t* x12_1 = *(x11_1 + 8)
            
            if (*x12_1 != 6)
                int64_t x11_3 = 0
                int32_t i_2
                
                do
                    if (x10_3 - 1 == x11_3)
                        goto label_a59b70
                    
                    i_2 = x12_1[1 + x11_3]
                    x11_3 += 1
                while (i_2 != 6)
                
                if (x11_3 u>= x10_3)
                    goto label_a59b70
        
        return zx.q((*(DomDefGet(zx.q(i), 0x17) + 0xc4) & 0xffff01ff) == *(arg1 + 8) ? 1 : 0)

return 0
