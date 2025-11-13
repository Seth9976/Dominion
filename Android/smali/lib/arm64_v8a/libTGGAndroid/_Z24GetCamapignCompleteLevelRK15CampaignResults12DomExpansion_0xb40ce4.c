// 函数: _Z24GetCamapignCompleteLevelRK15CampaignResults12DomExpansion
// 地址: 0xb40ce4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
int32_t x13 = 0
int32_t x10 = 0
int64_t x1 = 0
int32_t x12_1

do
    uint64_t x14_1 = zx.q(*(arg1 + i + 8))
    
    if (x14_1.d == 0)
        x12_1 = x13
        break
    
    if (*(arg1 + i) != arg2)
        x12_1 = x13
    else
        int64_t x12_5 = sx.q(*(arg1 + i + 4))
        
        if (x12_5.d u>= 4)
            pthread_kill(pthread_self(), 6)
            return AchievementsUpdate(XNoReturn()) __tailcall
        
        x12_1 = *(&data_71c4b0 + (x12_5 << 2))
        
        if (x12_1 s<= x13)
            x12_1 = x13
        else
            uint64_t x10_2 = zx.q(*(arg1 + i + 0xc))
            
            if (x10_2.d s< 1)
                x10 = 0
                x1 = (x1 & 0xffffffff00000000) | x14_1
            else
                x1 = (x1 & 0xffffffff00000000) | x10_2
                x10 = 1
    
    i += 0x14
    x13 = x12_1
while (i != 0xc80)

return zx.q(x12_1) | zx.q(x10) << 0x20
