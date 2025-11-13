// 函数: sub_a586e8
// 地址: 0xa586e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(gCampaignSetup + 0x19a0)
uint64_t x10 = zx.q(*(gCampaignSetup + 0x19b4))
void* x8_3

if (x10.d == 2)
    x8_3 = x8 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
else
    x8_3 = x8 + (x10 << 3) + 0x5010

int32_t i = *(x8_3 + 4)
int64_t* x9_4 =
    *(gCampaignData + 0x30) + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(*(gCampaignData + 0x38))) << 3)
int32_t* x10_3

do
    x10_3 = *x9_4
    x9_4 = &x10_3[4]
while (*x10_3 != i)

int64_t x22 = *(x10_3 + 8)
int64_t i_1 = 0
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
    result = zx.q(*(x22 + (i_1 << 2) + 4))
    
    if (result.d == 0)
        break
    
    uint64_t x8_5 = zx.q(*(gCampaignSetup + 0x2638))
    
    if (x8_5.d s>= 1)
        int64_t x9_8
        
        if (*(gCampaignSetup + 0x19b8) != result.d)
            x9_8 = 0
            int32_t j
            
            do
                if (x8_5 - 1 == x9_8)
                    goto label_a58794
                
                j = *(gCampaignSetup + (x9_8 << 2) + 0x19bc)
                x9_8 += 1
            while (j != result.d)
        
        if (*(gCampaignSetup + 0x19b8) == result.d || x9_8 u< x8_5)
            result, v0, v1, v2, v3, v4, v5 = DomDefGet(result, 0x17)
            
            if ((zx.d(*(result + 0xcd)) & 8) == 0)
                result, v0, v1, v2, v3, v4, v5 = DomDefGet(zx.q(*(x22 + (i_1 << 2) + 4)), 0x17)
                
                if ((zx.d(*(result + 0xcc)) & 0x40) == 0)
                    int32_t x8_4
                    
                    if (i_1 u< 0xa)
                        x8_4 = 0x32
                    else if (i_1 u< 0x14)
                        x8_4 = 0x19
                    else if (i_1 u< 0x1e)
                        x8_4 = 0xd
                    else if (i_1 u< 0x28)
                        x8_4 = 7
                    else
                        x8_4 = 5
                    
                    int32_t x9_6 = *(x22 + (i_1 << 2) + 4)
                    void* x10_4 = &var_1e0 + (sx.q(x21) << 3)
                    x21 += 1
                    *x10_4 = x8_4
                    *(x10_4 + 4) = x9_6
    
label_a58794:
    i_1 += 1
while (i_1 != 0x32)

if (x21 != 0)
    if (x21 s<= 0)
        RandomInt(gCampaignSetup, 0)
        pthread_kill(pthread_self(), 6)
        int64_t var_1f0 = XNoReturn()
        int64_t (* const var_1e8)() = gCampaignSetup
        int64_t x9_12 = *(gCampaignSetup + 0x19a0)
        uint64_t x8_14 = zx.q(*(gCampaignSetup + 0x19b4))
        int32_t* x8_15
        
        if (x8_14.d == 2)
            x8_15 = x9_12 + (sx.q(*(gCampaignSetup + 0x19a8)) << 0xb) + 0x540
        else
            x8_15 = x9_12 + (x8_14 << 3) + 0x5010
        
        int32_t x9_15 = *x8_15
        int32_t x19
        
        if (x9_15 == 0x3e8)
            x19 = 2
        else
            if (x9_15 != 0x5dc)
                pthread_kill(pthread_self(), 6)
                int64_t x0_13
                int64_t lr_3
                x0_13, lr_3 = XNoReturn()
                int64_t var_200 = lr_3
                int64_t (* const var_1f8)() = gCampaignSetup
                
                if ((IsLandscape(x0_13) & 1) == 0)
                    return (zx.q(HasTrait(zx.q(x0_13.d))) ^ 1) & 1
                
                return 0
            
            x19 = 4
        
        int64_t x0_10
        char* x1_4
        x0_10, x1_4 = CampaignDrawRandomCombo(zx.q(x8_15[1]))
        return CampaignKingdomAdd(x0_10, x1_4, x19, 0) __tailcall
    
    uint64_t x22_1 = zx.q(x21)
    int32_t x1_1
    int64_t i_6
    
    if (x21 u> 8)
        int64_t x8_9
        
        if ((x22_1 & 7) == 0)
            x8_9 = 8
        else
            x8_9 = x22_1 & 7
        
        i_6 = x22_1 - x8_9
        v0.q = 0
        v0:8.q = 0
        void var_1c0
        void* x9_9 = &var_1c0
        int64_t i_5 = i_6
        v1.q = 0
        v1:8.q = 0
        int64_t i_2
        
        do
            v2.d = *x9_9
            v3.d = *(x9_9 + 4)
            v2:4.d = *(x9_9 + 8)
            v3:4.d = *(x9_9 + 0xc)
            v2:8.d = *(x9_9 + 0x10)
            v3:8.d = *(x9_9 + 0x14)
            v2:0xc.d = *(x9_9 + 0x18)
            v3:0xc.d = *(x9_9 + 0x1c)
            v4.d = *(x9_9 - 0x20)
            v5.d = *(x9_9 - 0x1c)
            v4:4.d = *(x9_9 - 0x18)
            v5:4.d = *(x9_9 - 0x14)
            v4:8.d = *(x9_9 - 0x10)
            v5:8.d = *(x9_9 - 0xc)
            v4:0xc.d = *(x9_9 - 8)
            v5:0xc.d = *(x9_9 - 4)
            i_2 = i_5
            i_5 -= 8
            x9_9 += 0x40
            v1 += v2
            v0 += v4
        while (i_2 != 8)
        uint128_t v0_1
        v0_1.d = vaddvq_u32(v1 + v0)
        x1_1 = v0_1.d
    else
        i_6 = 0
        x1_1 = 0
    
    int64_t i_4 = x22_1 - i_6
    void* x8_10 = &var_1e0 + (i_6 << 3)
    int64_t i_3
    
    do
        int32_t x10_6 = *x8_10
        x8_10 += 8
        i_3 = i_4
        i_4 -= 1
        x1_1 += x10_6
    while (i_3 != 1)
    int32_t x0_3
    char* x1_2
    x0_3, x1_2 = RandomInt(gCampaignSetup, x1_1)
    int64_t x8_11 = 0
    int32_t x9_10 = 0
    void* x10_7 = &var_1e0
    
    while (true)
        x9_10 += *x10_7
        
        if (x0_3 s< x9_10)
            break
        
        x8_11 += 1
        x10_7 += 8
        
        if (x22_1 == x8_11)
            pthread_kill(pthread_self(), 6)
            x1_2, x8_11 = XNoReturn()
            break
    
    int32_t x20 = *(&var_1e0 + (zx.q(x8_11.d) << 3) + 4)
    result = CampaignKingdomAdd(zx.q(x20), x1_2, 2, 0)
    
    if ((result.d & 1) != 0)
        result = RandomizerDeck_Remove(gCampaignSetup + 0x19b8, zx.q(x20))
    
    int64_t x8_13 = 0
    int32_t* x9_11 = &var_1e0 | 4
    
    do
        if (*x9_11 == x20)
            *(&var_1e0 + (zx.q(x8_13.d) << 3)) = *(&var_1e0 + (sx.q(x21) << 3) - 8)
            break
        
        x8_13 += 1
        x9_11 = &x9_11[2]
    while (x22_1 != x8_13)

return result
