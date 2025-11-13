// 函数: sub_a598f0
// 地址: 0xa598f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *arg2
int32_t* x8_1 =
    *(*(gCampaignData + 0x50) + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x58))) << 3))

if (x8_1 != 0)
    int32_t* x10_1 = x8_1
    
    while (true)
        if (*x10_1 != i)
            x10_1 = *(x10_1 + 0x18)
            
            if (x10_1 != 0)
                continue
            
            goto label_a59994
        
        uint64_t x9_3 = zx.q(x10_1[4])
        
        if (x9_3.d s< 1)
        label_a59994:
            
            while (*x8_1 != i)
                x8_1 = *(x8_1 + 0x18)
                
                if (x8_1 == 0)
                    return 0
            
            uint64_t x9_5 = zx.q(x8_1[4])
            
            if (x9_5.d s< 1)
                break
            
            int32_t* x10_4 = *(x8_1 + 8)
            
            if (*x10_4 != 0x15)
                int64_t x8_6 = 0
                int32_t i_1
                
                do
                    if (x9_5 - 1 == x8_6)
                        return 0
                    
                    i_1 = x10_4[1 + x8_6]
                    x8_6 += 1
                while (i_1 != 0x15)
                
                if (x8_6 u>= x9_5)
                    break
        else
            int32_t* x11_1 = *(x10_1 + 8)
            
            if (*x11_1 != 6)
                int64_t x10_3 = 0
                int32_t i_2
                
                do
                    if (x9_3 - 1 == x10_3)
                        goto label_a59994
                    
                    i_2 = x11_1[1 + x10_3]
                    x10_3 += 1
                while (i_2 != 6)
                
                if (x10_3 u>= x9_3)
                    goto label_a59994
        
        if (*(arg1 + 8) s< 1)
            break
        
        int64_t i_3 = 0
        int32_t x8_4
        int32_t x9_6
        
        do
            int32_t x21_1 = *(arg1 + 0xc + (i_3 << 2))
            void* x0_1 = DomDefGet(zx.q(i), 0x17)
            void* x0_3 = DomDefGet(zx.q(x21_1), 0x17)
            x8_4 = *(x0_1 + 0xc4)
            x9_6 = *(x0_3 + 0xc4)
            
            if (x8_4 == x9_6)
                break
            
            i_3 += 1
        while (i_3 s< sx.q(*(arg1 + 8)))
        
        return zx.q(x8_4 == x9_6 ? 1 : 0)

return 0
