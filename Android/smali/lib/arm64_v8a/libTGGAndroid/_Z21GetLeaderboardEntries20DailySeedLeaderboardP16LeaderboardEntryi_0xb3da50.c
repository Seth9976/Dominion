// 函数: _Z21GetLeaderboardEntries20DailySeedLeaderboardP16LeaderboardEntryi
// 地址: 0xb3da50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

LeaderboardEntry* x21 = arg2
int32_t i_2

if (arg1 == 0)
    void* x0_4 = GetClient()
    int32_t i_4 = *(x0_4 + 0x7770)
    
    i_2 = i_4 s> arg3 ? arg3 : i_4
    
    if (i_2 s< 1)
    label_b3dc0c:
        int32_t x19_3 = i_2 - (i_2 == arg3 ? 1 : 0)
        i_2 = x19_3 + 1
        int32_t* x19_4 = x21 + muls.dp.d(x19_3, 0x18)
        *x19_4 = *(GetActiveProfile() + 0x42ac)
        GetActiveProfile()
        XString::operator=(&x19_4[2])
        x19_4[4] = *(GetActiveProfile() + 0x771c)
        bool (* var_68)(LeaderboardEntry const&, LeaderboardEntry const&) = LeaderboardSort
        std::__ndk1::__sort<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
            x21, &x19_4[6], &var_68)
    else
        uint64_t i_5 = zx.q(i_2)
        int64_t x26_2 = 0
        int32_t x10_1 = 0
        void* x28_1 = x0_4 + 0x7610
        void* fp_1 = x0_4 + 0x7608
        LeaderboardEntry* var_70_1 = x21
        void* var_88_1 = x28_1
        void* var_90_1 = fp_1
    label_b3db64:
        int64_t x27_1 = x26_2 * 0x18
        LeaderboardEntry* x19_2 = x21
        int64_t x23_1 = x26_2
        
        do
            void* x24_2 = fp_1 + x27_1
            void* x21_1 = x19_2 + x27_1
            *x21_1 = *x24_2
            XString::operator=(x21_1 + 8)
            int32_t x24_3 = *x21_1
            *(x21_1 + 0x10) = *(x24_2 + 0x10)
            
            if (x24_3 == *(GetActiveProfile() + 0x42ac))
                x28_1 = var_88_1
                x21 = var_70_1
                fp_1 = var_90_1
                void* x9_1 = x19_2 + x26_2 * 0x18
                x26_2 = x23_1 + 1
                x10_1 = 1
                *(x9_1 + 0x10) = *(GetActiveProfile() + 0x771c)
                
                if (i_5 - 1 != x23_1)
                    goto label_b3db64
                
                goto label_b3dc88
            
            x23_1 += 1
            x19_2 += 0x18
            x28_1 += 0x18
            fp_1 += 0x18
        while (i_5 != x23_1)
        
        x21 = var_70_1
        
        if ((x10_1 & 1) == 0)
            goto label_b3dc0c
else
    if (arg1 != 1)
        pthread_kill(pthread_self(), 6)
        return IsThisWeek(XNoReturn()) __tailcall
    
    void* x0 = GetActiveProfile()
    int32_t i_3 = *(x0 + 0x7710)
    
    i_2 = i_3 s> arg3 ? arg3 : i_3
    
    if (i_2 s< 1)
        goto label_b3dc0c
    
    int32_t x24_1 = 0
    uint64_t i_1 = zx.q(i_2)
    void* __offset(LeaderboardEntry, 0x8) x22_1 = x21 + 8
    void* x26_1 = x0 + 0x75b8
    uint64_t i
    
    do
        *(x22_1 - 8) = *(x26_1 - 0x10)
        XString::operator=(x22_1)
        int32_t x19_1 = *(x22_1 - 8)
        *(x22_1 + 8) = *x26_1
        
        if (x19_1 == *(GetActiveProfile() + 0x42ac))
            x24_1 = 1
            *(x22_1 + 8) = *(GetActiveProfile() + 0x771c)
        
        x22_1 += 0x18
        i = i_1
        i_1 -= 1
        x26_1 += 0x18
    while (i != 1)
    
    if ((x24_1 & 1) == 0)
        goto label_b3dc0c

label_b3dc88:
return zx.q(i_2)
