// 函数: _Z12MigrateStatsR11GameProfileRK12ProfileStats
// 地址: 0x9dc7d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x22 = 0
int64_t var_40 = 0x100000000
int32_t var_38 = 2
int64_t x0_8

while (true)
    uint64_t x21_6 = sx.q(*(arg2 + 0x78))
    
    if (x21_6.d != 0)
        SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(0, 0)), x21_6)
    
    uint64_t x21_7 = sx.q(*(arg2 + 0x7c))
    
    if (x21_7.d != 0)
        SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(0, 1)), x21_7)
    
    uint64_t x21_8 = sx.q(*(arg2 + 0x80))
    
    if (x21_8.d != 0)
        SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(0, 2)), x21_8)
    
    uint64_t x21_9 = sx.q(*(arg2 + 0x84))
    
    if (x21_9.d != 0)
        SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(0, 3)), x21_9)
    
    int64_t x21_5 = sx.q(*(arg2 + 0x88))
    
    if (x21_5.d != 0)
        break
    
    while (true)
        if (x22 == 8)
            return 
        
        int32_t x8 = *((&var_40 | 4) + x22)
        x22 += 4
        
        if (x8 == 0)
            break
        
        if (x8 == 1)
            uint64_t x21_10 = sx.q(*(arg2 + 0x8c))
            
            if (x21_10.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(1, 0)), x21_10)
            
            uint64_t x21_11 = sx.q(*(arg2 + 0x90))
            
            if (x21_11.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(1, 1)), x21_11)
            
            uint64_t x21_12 = sx.q(*(arg2 + 0x94))
            
            if (x21_12.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(1, 2)), x21_12)
            
            uint64_t x21_13 = sx.q(*(arg2 + 0x98))
            
            if (x21_13.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(1, 3)), x21_13)
            
            x21_5 = sx.q(*(arg2 + 0x9c))
            
            if (x21_5.d == 0)
                continue
            else
                x0_8 = 1
        else
            if (x8 != 2)
                pthread_kill(pthread_self(), 6)
                return SyncedAchiementLevelFrom(XNoReturn()) __tailcall
            
            int64_t x21_1 = sx.q(*(arg2 + 0xa0))
            
            if (x21_1.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(2, 0)), x21_1)
            
            uint64_t x21_2 = sx.q(*(arg2 + 0xa4))
            
            if (x21_2.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(2, 1)), x21_2)
            
            uint64_t x21_3 = sx.q(*(arg2 + 0xa8))
            
            if (x21_3.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(2, 2)), x21_3)
            
            uint64_t x21_4 = sx.q(*(arg2 + 0xac))
            
            if (x21_4.d != 0)
                SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(2, 3)), x21_4)
            
            x21_5 = sx.q(*(arg2 + 0xb0))
            
            if (x21_5.d == 0)
                continue
            else
                x0_8 = 2
        
    label_9dca20:
        SyncedDataSet(arg1, zx.q(SyncedDataKeyFromStat(x0_8, 4)), x21_5)

x0_8 = 0
goto label_9dca20
