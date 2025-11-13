// 函数: _Z24CampaignCategoryComboAdd15DomCardCategoryb
// 地址: 0xa3df90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *(gCampaignData + 0x30)
    + ((zx.q(*(gCampaignData + 0x38)) & (zx.q(arg1) | zx.q(arg1 s>> 4))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != arg1)

int64_t x20 = *(x9_2 + 8)
int64_t i = 0
int32_t x21 = 0
void var_1e0
uint64_t result
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
int128_t v5

do
    result = zx.q(*(x20 + (i << 2) + 4))
    
    if (result.d == 0)
        break
    
    uint64_t x8_4 = zx.q(*(gCampaignSetup + 0x2638))
    
    if (x8_4.d s>= 1)
        int64_t x10_3
        
        if (*(gCampaignSetup + 0x19b8) != result.d)
            int64_t x11_1 = 0
            
            do
                x10_3 = x11_1
                
                if (x8_4 - 1 == x11_1)
                    break
                
                x11_1 = x10_3 + 1
            while (*(gCampaignSetup + (x10_3 << 2) + 0x19bc) != result.d)
        
        if (*(gCampaignSetup + 0x19b8) == result.d || x10_3 + 1 u< x8_4)
            result, v0, v1, v2, v3, v4, v5 = DomDefGet(result, 0x17)
            
            if ((zx.d(*(result + 0xcd)) & 8) == 0)
                result, v0, v1, v2, v3, v4, v5 = DomDefGet(zx.q(*(x20 + (i << 2) + 4)), 0x17)
                
                if ((zx.d(*(result + 0xcc)) & 0x40) == 0)
                    int32_t x8_3
                    
                    if (i u< 0xa)
                        x8_3 = 0x32
                    else if (i u< 0x14)
                        x8_3 = 0x19
                    else if (i u< 0x1e)
                        x8_3 = 0xd
                    else if (i u< 0x28)
                        x8_3 = 7
                    else
                        x8_3 = 5
                    
                    int32_t x9_3 = *(x20 + (i << 2) + 4)
                    void* x10_2 = &var_1e0 + (sx.q(x21) << 3)
                    x21 += 1
                    *x10_2 = x8_3
                    *(x10_2 + 4) = x9_3
    
    i += 1
while (i != 0x32)

if (x21 != 0)
    if (x21 s<= 0)
        RandomInt(gCampaignSetup, 0)
        pthread_kill(pthread_self(), 6)
        return CategoryComboGet(XNoReturn()) __tailcall
    
    uint64_t x22_1 = zx.q(x21)
    int32_t x1
    int64_t i_5
    
    if (x21 u> 8)
        int64_t x8_8
        
        if ((x22_1 & 7) == 0)
            x8_8 = 8
        else
            x8_8 = x22_1 & 7
        
        i_5 = x22_1 - x8_8
        v0.q = 0
        v0:8.q = 0
        void var_1c0
        void* x9_7 = &var_1c0
        int64_t i_4 = i_5
        v1.q = 0
        v1:8.q = 0
        int64_t i_1
        
        do
            v2.d = *x9_7
            v3.d = *(x9_7 + 4)
            v2:4.d = *(x9_7 + 8)
            v3:4.d = *(x9_7 + 0xc)
            v2:8.d = *(x9_7 + 0x10)
            v3:8.d = *(x9_7 + 0x14)
            v2:0xc.d = *(x9_7 + 0x18)
            v3:0xc.d = *(x9_7 + 0x1c)
            v4.d = *(x9_7 - 0x20)
            v5.d = *(x9_7 - 0x1c)
            v4:4.d = *(x9_7 - 0x18)
            v5:4.d = *(x9_7 - 0x14)
            v4:8.d = *(x9_7 - 0x10)
            v5:8.d = *(x9_7 - 0xc)
            v4:0xc.d = *(x9_7 - 8)
            v5:0xc.d = *(x9_7 - 4)
            i_1 = i_4
            i_4 -= 8
            x9_7 += 0x40
            v1 += v2
            v0 += v4
        while (i_1 != 8)
        uint128_t v0_1
        v0_1.d = vaddvq_u32(v1 + v0)
        x1 = v0_1.d
    else
        i_5 = 0
        x1 = 0
    
    void* x9_8 = &var_1e0 + (i_5 << 3)
    int64_t i_3 = x22_1 - i_5
    int64_t i_2
    
    do
        int32_t x10_4 = *x9_8
        x9_8 += 8
        i_2 = i_3
        i_3 -= 1
        x1 += x10_4
    while (i_2 != 1)
    int32_t x0_2
    char* x1_1
    x0_2, x1_1 = RandomInt(gCampaignSetup, x1)
    int64_t x8_9 = 0
    int32_t x9_9 = 0
    void* x10_5 = &var_1e0
    
    while (true)
        x9_9 += *x10_5
        
        if (x0_2 s< x9_9)
            break
        
        x8_9 += 1
        x10_5 += 8
        
        if (x22_1 == x8_9)
            pthread_kill(pthread_self(), 6)
            x1_1, x8_9 = XNoReturn()
            break
    
    int32_t x20_1 = *(&var_1e0 + (zx.q(x8_9.d) << 3) + 4)
    result = CampaignKingdomAdd(zx.q(x20_1), x1_1, 2, 0)
    
    if ((result.d & 1) != 0)
        result = RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x20_1))
    
    int64_t x8_11 = 0
    int32_t* x9_10 = &var_1e0 | 4
    
    do
        if (*x9_10 == x20_1)
            *(&var_1e0 + (zx.q(x8_11.d) << 3)) = *(&var_1e0 + (sx.q(x21) << 3) - 8)
            break
        
        x8_11 += 1
        x9_10 = &x9_10[2]
    while (x22_1 != x8_11)

return result
