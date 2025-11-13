// 函数: _Z25GrandCampaignCompleteInfoRK15CampaignResults
// 地址: 0xb40c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0x10
MedalLevel* entry_x8
*(entry_x8 + 0x40) = 0

do
    void* x12_2 = arg1 + i
    int32_t x13_2 = *(x12_2 - 8)
    
    if (x13_2 == 0)
        break
    
    if (*(x12_2 - 0x10) == 0)
        int64_t x12_4 = sx.q(*(entry_x8 + 0x40))
        void* x15_1 = arg1 + i
        *(entry_x8 + 0x40) = x12_4.d + 1
        int64_t x14_2 = sx.q(*(x15_1 - 0xc))
        
        if (x14_2.d u>= 4)
            pthread_kill(pthread_self(), 6)
            CampaignResults* x0_3
            int64_t x1_1
            x0_3, x1_1 = XNoReturn()
            return GetCamapignCompleteLevel(x0_3, x1_1) __tailcall
        
        void* x14_3 = entry_x8 + (x12_4 << 4)
        *x14_3 = *(&data_71c4b0 + (x14_2 << 2))
        int32_t x15_2 = *(x15_1 - 4)
        int32_t x13_1
        
        if (x15_2 s< 1)
            *(x14_3 + 8) = x13_2
            *(x14_3 + 4) = 0
            x13_1 = *(arg1 + i)
        else
            x13_1 = 0
            *(x14_3 + 8) = x15_2
            *(x14_3 + 4) = 1
        
        *(entry_x8 + (x12_4 << 4) + 0xc) = x13_1
    
    i += 0x14
while (i != 0xc90)

MedalLevel* x1 = entry_x8 + (sx.q(*(entry_x8 + 0x40)) << 4)
bool (* var_8)(MedalLevel const&, MedalLevel const&) = SortCampaignResults
return std::__ndk1::__sort<bool (*&)(MedalLevel const&, MedalLevel const&), MedalLevel*>(entry_x8, 
    x1, &var_8)
