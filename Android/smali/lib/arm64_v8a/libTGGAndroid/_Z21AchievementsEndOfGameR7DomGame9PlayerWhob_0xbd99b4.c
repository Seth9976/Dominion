// 函数: _Z21AchievementsEndOfGameR7DomGame9PlayerWhob
// 地址: 0xbd99b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t x8 = sx.q(x19)
int32_t x21 = arg3.d & 1

if ((arg3.d & 1) == 0)
    int64_t i_3 = 0x320
    void* __offset(DomGame, 0x47a08) x24_1 = arg1 + 0x47a08
    int64_t i
    
    do
        uint64_t x3_2 = zx.q(*x24_1)
        
        if (x3_2.d == 0)
            break
        
        void* x26_1 = x24_1 + x8 * 0x84
        
        if (zx.d(*(x26_1 + 4)) != 0 && zx.d(*(x26_1 + 5)) == 0)
            int32_t x8_8 = *(arg1 + 0x150c)
            
            if (x8_8 - 3 u>= 4)
                int64_t var_58_2 = 0
                int32_t var_60_2 = 0
                int32_t var_68_2 = 0
                int32_t var_70_2 = 0
                DomNotifyEffect(zx.q(x8_8 == 2 ? 1 : 0), 0x26, zx.q(x19), x3_2, zx.q(x21), 1, 0, 0)
            
            *(x26_1 + 5) = 1
        
        i = i_3
        i_3 -= 1
        x24_1 += 0x31c
    while (i != 1)
else
    int64_t i_2 = 0x320
    void* __offset(DomGame, 0x47a0d) x23 = arg1 + 0x47a0d
    int64_t x24 = x8 * 0x84
    int64_t i_1
    
    do
        uint64_t x3_1 = zx.q(*(x23 - 5))
        
        if (x3_1.d == 0)
            break
        
        if (zx.d(*(x23 + x24 - 1)) != 0)
            int32_t x8_4 = *(arg1 + 0x150c)
            
            if (x8_4 - 3 u>= 4)
                int64_t var_58_1 = 0
                int32_t var_60_1 = 0
                int32_t var_68_1 = 0
                int32_t var_70_1 = 0
                DomNotifyEffect(zx.q(x8_4 == 2 ? 1 : 0), 0x26, zx.q(x19), x3_1, zx.q(x21), 
                    zx.q(*(x23 + x24)) ^ 1, 0, 0)
            
            *(x23 + x24) = 1
        
        i_1 = i_2
        i_2 -= 1
        x23 += 0x31c
    while (i_1 != 1)
