// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFbRK16LeaderboardEntryS3_EPS1_EEvT0_S8_T_
// 地址: 0xbb30fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(LeaderboardEntry, 0x30) x22 = arg1 + 0x30
int32_t result = std::__ndk1::__sort3<bool (*&)(LeaderboardEntry const&, LeaderboardEntry const&), LeaderboardEntry*>(
    arg1, arg1 + 0x18, x22, arg3)
void* __offset(LeaderboardEntry, 0x48) x8 = arg1 + 0x48

if (x8 != arg2)
    int64_t x25_1 = 0
    
    do
        void* __offset(LeaderboardEntry, 0x30) x1_1 = x22
        x22 = x8
        result = (*arg3)(x8, x1_1)
        
        if ((result & 1) != 0)
            int32_t var_68 = *x22
            void var_60
            XString::XString(&var_60)
            int32_t x8_4 = *(x22 + 0x10)
            int64_t x26_2 = x25_1
            void* x26_1
            void* x27_1
            
            while (true)
                x27_1 = arg1 + x26_2
                *(x27_1 + 0x48) = *(x27_1 + 0x30)
                XString::operator=(x27_1 + 0x50)
                *(x27_1 + 0x58) = *(x27_1 + 0x40)
                
                if (x26_2 == -0x30)
                    x26_1 = arg1
                    break
                
                x26_2 -= 0x18
                
                if (((*arg3)(&var_68, x27_1 + 0x18) & 1) == 0)
                    x26_1 = arg1 + x26_2 + 0x48
                    break
            
            *x26_1 = var_68
            XString::operator=(x27_1 + 0x38)
            *(x26_1 + 0x10) = x8_4
            result = XString::~XString()
        
        x8 = x22 + 0x18
        x25_1 += 0x18
    while (x8 != arg2)

return result
