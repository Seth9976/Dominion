// 函数: _Z9FindCardsPKcP15DomKingdomEntryiS2_i8Language
// 地址: 0xb27e80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_11

if (zx.d(*arg1) == 0)
    i_11 = 0
else
    int32_t x20 = arg6
    void var_5e18
    void* x25_1 = &var_5e18
    int64_t i_6 = 0x5dc0
    int64_t i
    
    do
        XString::XString()
        i = i_6
        i_6 -= 0x18
        x25_1 += 0x18
    while (i != 0x18)
    SearchableCard var_5e20
    int32_t i_10 = ComputeSearchableCardEntries(&var_5e20, 0x3e8, zx.q(x20))
    int32_t i_12 = 0
    
    if (i_10 s< 1)
        i_11 = 0
    else
        uint64_t i_9 = zx.q(i_10)
        BestResult var_9ca0
        
        if (arg5 s<= 0)
            SearchableCard* x23_3 = &var_5e20
            uint64_t i_1
            
            do
                int32_t x0_8 = FindResultCalcScore(zx.q(*x23_3), arg1, zx.q(x20))
                
                if (x0_8 != 0xffffffff && zx.d(*(x23_3 + 0x10)) != 0)
                    int32_t x8_8 = *(x23_3 + 4)
                    int32_t x24_3
                    
                    if (x8_8 == *x23_3)
                        x24_3 = x0_8
                    else
                        x24_3 = x0_8 + 0x400
                    
                    DomDefGet(zx.q(x8_8), 0x18)
                    TryAddResult(&var_9ca0, &i_12, arg3, x23_3, x24_3)
                
                i_1 = i_9
                i_9 -= 1
                x23_3 += 0x18
            while (i_1 != 1)
        else
            int64_t x27_1 = 0
            
            do
                int32_t* x23_2 = &var_5e20 + x27_1 * 0x18
                int32_t x0_4 = FindResultCalcScore(zx.q(*x23_2), arg1, zx.q(x20))
                
                if (x0_4 != 0xffffffff && zx.d(*(&var_5e20 + x27_1 * 0x18 + 0x10)) != 0)
                    void* x28_1 = &var_5e20 + x27_1 * 0x18
                    int32_t x8_4 = *(x28_1 + 4)
                    int32_t x24_2
                    
                    if (x8_4 == *x23_2)
                        x24_2 = x0_4
                    else
                        x24_2 = x0_4 + 0x400
                    
                    if ((zx.d(*(DomDefGet(zx.q(x8_4), 0x18) + 0xce)) & 4) == 0)
                        uint64_t i_5 = zx.q(arg5)
                        void* __offset(DomKingdomEntry, 0x4) x10_2 = arg4 + 4
                        uint64_t i_2
                        
                        do
                            if (*(x10_2 - 4) == 1 && *x10_2 == *(x28_1 | 4))
                                goto label_b27f54
                            
                            i_2 = i_5
                            i_5 -= 1
                            x10_2 += 0x10
                        while (i_2 != 1)
                    
                    TryAddResult(&var_9ca0, &i_12, arg3, x23_2, x24_2)
                
            label_b27f54:
                x27_1 += 1
            while (x27_1 != i_9)
        
        i_11 = zx.q(i_12)
        
        if (i_11.d s>= 1)
            BestResult* x21_2 = &var_9ca0
            uint64_t i_8 = i_11
            void* __offset(DomKingdomEntry, 0x8) x19_1 = arg2 + 8
            uint64_t i_3
            
            do
                void* x8_10 = *x21_2
                x21_2 += 0x10
                int64_t x0_12
                int64_t x1_4
                x0_12, x1_4 = MakeKingdomEntry(zx.q(*(x8_10 + 4)))
                *(x19_1 - 8) = x0_12
                *x19_1 = x1_4
                i_3 = i_8
                i_8 -= 1
                x19_1 += 0x10
            while (i_3 != 1)
    
    void var_70
    void* x19_2 = &var_70
    int64_t i_7 = -0x5dc0
    int64_t i_4
    
    do
        XString::~XString()
        i_4 = i_7
        i_7 += 0x18
        x19_2 -= 0x18
    while (i_4 != -0x18)

return zx.q(i_11.d)
