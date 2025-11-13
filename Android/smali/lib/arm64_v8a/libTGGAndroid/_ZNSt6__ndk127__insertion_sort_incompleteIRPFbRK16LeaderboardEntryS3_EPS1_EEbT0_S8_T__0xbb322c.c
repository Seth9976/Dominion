// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRPFbRK16LeaderboardEntryS3_EPS1_EEbT0_S8_T_
// 地址: 0xbb322c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = ((arg2 - arg1) s>> 3) * -0x5555555555555555
char x8_3
int32_t var_78
void var_70

if (x8_2 u> 5)
    LeaderboardEntry* x22_2 = arg1 + 0x30
    char x9_1 = std::__ndk1::__sort3<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
        arg1, arg1 + 0x18, x22_2, arg3)
    void* __offset(LeaderboardEntry, 0x18) x8_11 = arg1 + 0x48
    char x8_20
    
    if (x8_11 == arg2)
    label_bb3478:
        x8_20 = 1
    else
        int64_t x25_1 = 0
        int32_t x26_1 = 0
        
        while (true)
            LeaderboardEntry* x1_4 = x22_2
            x22_2 = x8_11
            int32_t x0_8
            x0_8, x9_1 = (*arg3)(x8_11, x1_4)
            
            if ((x0_8 & 1) != 0)
                var_78 = *x22_2
                XString::XString(&var_70)
                int32_t x8_15 = *(x22_2 + 0x10)
                int64_t x27_2 = x25_1
                void* x27_1
                void* x28_1
                
                while (true)
                    x28_1 = arg1 + x27_2
                    *(x28_1 + 0x48) = *(x28_1 + 0x30)
                    XString::operator=(x28_1 + 0x50)
                    *(x28_1 + 0x58) = *(x28_1 + 0x40)
                    
                    if (x27_2 == -0x30)
                        x27_1 = arg1
                        break
                    
                    x27_2 -= 0x18
                    
                    if (((*arg3)(&var_78, x28_1 + 0x18) & 1) == 0)
                        x27_1 = arg1 + x27_2 + 0x48
                        break
                
                *x27_1 = var_78
                XString::operator=(x28_1 + 0x38)
                x26_1 += 1
                *(x27_1 + 0x10) = x8_15
                x9_1 = XString::~XString()
                
                if (x26_1 == 8)
                    x8_20 = 0
                    x9_1 = (x22_2 + 0x18 == arg2 ? 1 : 0).b
                    break
            
            x8_11 = x22_2 + 0x18
            x25_1 += 0x18
            
            if (x8_11 == arg2)
                goto label_bb3478
    
    x8_3 = x8_20 | x9_1
else
    x8_3 = 1
    
    switch (x8_2)
        case 2
            if (((*arg3)(arg2 - 0x18, arg1) & 1) == 0)
                x8_3 = 1
            else
                var_78 = *arg1
                XString::XString(&var_70)
                int32_t x8_6 = *(arg1 + 0x10)
                *arg1 = *(arg2 - 0x18)
                XString::operator=(arg1 + 8)
                *(arg1 + 0x10) = *(arg2 - 8)
                *(arg2 - 0x18) = var_78
                XString::operator=(arg2 - 0x10)
                *(arg2 - 8) = x8_6
                XString::~XString()
                x8_3 = 1
        case 3
            std::__ndk1::__sort3<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                arg1, arg1 + 0x18, arg2 - 0x18, arg3)
            x8_3 = 1
        case 4
            std::__ndk1::__sort4<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
                arg1, arg1 + 0x18, arg1 + 0x30, arg2 - 0x18, arg3)
            x8_3 = 1
        case 5
            sub_bb2e98(arg1, arg1 + 0x18, arg1 + 0x30, arg1 + 0x48, arg2 - 0x18, arg3)
            x8_3 = 1
return x8_3 & 1
