// 函数: _Z20KingdomHasAtLeastOne15DomCardCategory
// 地址: 0xa34cd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
int64_t x10 = sx.q(*(gCampaignSetup + 0x19a8))
void* x11 = x9 + (x10 << 0xb)
int32_t x8 = *(x11 + 0xc)

if (x8 == 0)
    return 0

int32_t x11_1 = *(x11 + 0x10)
int64_t x9_3

if (x11_1 == 0)
    x9_3 = 1
else
    int32_t var_24_1 = x11_1
    void* x11_2 = x9 + (x10 << 0xb)
    int32_t x12_1 = *(x11_2 + 0x14)
    
    if (x12_1 == 0)
        x9_3 = 2
    else
        int32_t var_20_1 = x12_1
        int32_t x11_3 = *(x11_2 + 0x18)
        
        if (x11_3 == 0)
            x9_3 = 3
        else
            int32_t var_1c_1 = x11_3
            void* x11_4 = x9 + (x10 << 0xb)
            int32_t x12_2 = *(x11_4 + 0x1c)
            
            if (x12_2 == 0)
                x9_3 = 4
            else
                int32_t var_18_1 = x12_2
                int32_t x11_5 = *(x11_4 + 0x20)
                
                if (x11_5 == 0)
                    x9_3 = 5
                else
                    int32_t var_14_1 = x11_5
                    void* x11_6 = x9 + (x10 << 0xb)
                    int32_t x12_3 = *(x11_6 + 0x24)
                    
                    if (x12_3 == 0)
                        x9_3 = 6
                    else
                        int32_t var_10_1 = x12_3
                        int32_t x11_7 = *(x11_6 + 0x28)
                        
                        if (x11_7 == 0)
                            x9_3 = 7
                        else
                            int32_t var_c_1 = x11_7
                            void* x9_1 = x9 + (x10 << 0xb)
                            int32_t x10_1 = *(x9_1 + 0x2c)
                            
                            if (x10_1 == 0)
                                x9_3 = 8
                            else
                                int32_t var_8_1 = x10_1
                                int32_t x9_2 = *(x9_1 + 0x30)
                                
                                if (x9_2 == 0)
                                    x9_3 = 9
                                else
                                    int32_t var_4_1 = x9_2
                                    x9_3 = 0xa

int64_t x10_2 = 0
uint64_t x11_8 = zx.q(*(gCampaignData + 0x58))
int64_t x12_4 = *(gCampaignData + 0x50)
int32_t* x14_3 = *(x12_4 + (((zx.q(x8) | zx.q(x8 s>> 4)) & x11_8) << 3))

if (x14_3 == 0)
    goto label_a34e44

while (true)
    if (*x14_3 == x8)
        uint64_t x8_1 = zx.q(x14_3[4])
        
        if (x8_1.d s>= 1)
            int32_t* x15_2 = *(x14_3 + 8)
            int64_t x14_5
            
            if (*x15_2 != arg1)
                x14_5 = 0
                int32_t x17_1
                
                do
                    if (x8_1 - 1 == x14_5)
                        goto label_a34e44
                    
                    x17_1 = x15_2[1 + x14_5]
                    x14_5 += 1
                while (x17_1 != arg1)
            
            if (*x15_2 == arg1 || x14_5 u< x8_1)
                return 1
    else
        x14_3 = *(x14_3 + 0x18)
        
        if (x14_3 != 0)
            continue
    
label_a34e44:
    x10_2 += 1
    
    if (x10_2 == x9_3)
        return 0
    
    void var_28
    x8 = *(&var_28 + (x10_2 << 2))
    x14_3 = *(x12_4 + (((zx.q(x8) | zx.q(x8 s>> 4)) & x11_8) << 3))
    
    if (x14_3 == 0)
        break
