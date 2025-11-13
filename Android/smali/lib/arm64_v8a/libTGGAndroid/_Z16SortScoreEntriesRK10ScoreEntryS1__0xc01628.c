// 函数: _Z16SortScoreEntriesRK10ScoreEntryS1_
// 地址: 0xc01628
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
int32_t x10_1
int32_t x11_1
int32_t x12_1

if (x8 - 1 u< 2)
    x11_1 = *(arg1 + 8)
    x10_1 = *arg2
    x12_1 = x10_1 - 1
    int32_t x13_1
    
    if (x12_1 u>= 2)
    label_c0169c:
        
        if (x10_1 == 3)
            x13_1 = -0x2710
            
            if ((0xffffd8f0 | x11_1) == 0)
                goto label_c016e0
            
            goto label_c016c4
        
        if (x10_1 == 0)
            x13_1 = *(arg2 + 4)
            
            if ((x13_1 | x11_1) != 0)
                goto label_c016c4
            
            goto label_c016e0
    else
    label_c01678:
        x13_1 = *(arg2 + 8)
        
        if ((x13_1 | x11_1) != 0)
        label_c016c4:
            
            if (x11_1 s> x13_1)
                return 1
            
            if (x11_1 s< x13_1)
                return 0
            
            goto label_c016e0
        
    label_c016e0:
        
        if (x8 s< x10_1)
            return 1
        
        if (x8 s> x10_1)
            return 0
        
        if (x8 - 1 u< 3 && x12_1 u< 3)
            int32_t x19_1 = *(arg1 + 4)
            int32_t x20_1 = *(arg2 + 4)
            int32_t x0_4 = SortClass(zx.q(x19_1))
            int32_t x0_6 = SortClass(zx.q(x20_1))
            
            if (x0_4 s< x0_6)
                return 1
            
            if (x0_4 s<= x0_6)
                return SortCardsByCostNameRev(zx.q(x19_1), zx.q(x20_1)) __tailcall
            
            return 0
else
    if (x8 == 3)
        x11_1 = -0x2710
        x10_1 = *arg2
        x12_1 = x10_1 - 1
        
        if (x12_1 u< 2)
            goto label_c01678
        
        goto label_c0169c
    
    if (x8 == 0)
        x11_1 = *(arg1 + 4)
        x10_1 = *arg2
        x12_1 = x10_1 - 1
        
        if (x12_1 u>= 2)
            goto label_c0169c
        
        goto label_c01678
pthread_kill(pthread_self(), 6)
return IsDisplayCard(XNoReturn()) __tailcall
