// 函数: _Z17ApplyMissionTheme10ThemeIndex11ThemeLetter
// 地址: 0xa38c1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(gCampaignSetup + 0x19a0)
int64_t x10 = sx.q(*(gCampaignSetup + 0x19a8))
*(gCampaignSetup + 0x19b4) = arg1.d
int32_t* x8_2

if (arg1.d == 2)
    x8_2 = x9 + (x10 << 0xb) + 0x540
else
    x8_2 = x9 + (zx.q(arg1.d) << 3) + 0x5010

if (*x8_2 == 0x8fc)
    arg1 = Theme_PileChanges()

int64_t result = RollMissionBlueprint(arg1, zx.q(arg2))
uint64_t x8_4 = zx.q(*(gCampaignData + 8))
int64_t x9_3 = *gCampaignData
int64_t* x10_3 = x9_3 + (((zx.q(result.d) | zx.q(result.d s>> 4)) & x8_4) << 3)
int32_t* x11_1

do
    x11_1 = *x10_3
    x10_3 = &x11_1[4]
while (*x11_1 != result.d)

void* x10_5 = *(x11_1 + 8)
int32_t x11_2 = *(x10_5 + 0x10)

if (x11_2 == 0x324)
    if (*(x10_5 + 0x18) == 1)
        jump(*(x10_5 + 0x20))
    
    if (*(x10_5 + 0x288) == 1)
        jump(*(x10_5 + 0x290))
    
    if (*(x10_5 + 0x4f8) == 1)
        jump(*(x10_5 + 2 * 0x270 + 0x20))
    
    if (*(x10_5 + 0x768) == 1)
        jump(*(x10_5 + 3 * 0x270 + 0x20))
else if (x11_2 == 0x325)
    int64_t x11_4
    
    if (*(x10_5 + 0x18) == 3)
        x11_4 = 0
    else if (*(x10_5 + 0x288) == 3)
        x11_4 = 1
    else if (*(x10_5 + 0x4f8) != 3)
        if (*(x10_5 + 0x768) != 3)
            return result
        
        x11_4 = 3
    else
        x11_4 = 2
    
    void* x10_6 = x10_5 + x11_4 * 0x270
    uint64_t x20_1 = zx.q(*(x10_6 + 0x280))
    
    if (x20_1.d s< 1)
        return result
    
    int64_t x21_1 = 0
    
    while (true)
        int32_t i = *(x10_6 + 0x20 + (x21_1 << 2))
        int64_t* x8_11 = x9_3 + (((zx.q(i) | zx.q(i s>> 4)) & zx.q(x8_4.d)) << 3)
        int32_t* x9_4
        
        do
            x9_4 = *x8_11
            x8_11 = &x9_4[4]
        while (*x9_4 != i)
        
        void* x8_13 = *(x9_4 + 8)
        int64_t x9_6
        
        if (*(x8_13 + 0x18) == 1)
            x9_6 = 0
        else if (*(x8_13 + 0x288) == 1)
            x9_6 = 1
        else if (*(x8_13 + 0x4f8) != 1)
            if (*(x8_13 + 0x768) != 1)
                break
            
            x9_6 = 3
        else
            x9_6 = 2
        
        result = (*(x8_13 + x9_6 * 0x270 + 0x20))()
        x21_1 += 1
        
        if (x21_1 == x20_1)
            return result
        
        x8_4 = zx.q(*(gCampaignData + 8))
        x9_3 = *gCampaignData

pthread_kill(pthread_self(), 6)
XNoReturn()
return Theme_PileChanges() __tailcall
