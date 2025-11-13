// 函数: _Z23UI2CopyCurrentSelectionv
// 地址: 0x1039110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_7 = zx.q(*(gUI2Editor + 0x704c))
uint64_t x19 = zx.q(*(gUI2Editor + 0x6010))
void var_1c60

if (i_7.d s>= 1)
    void* x22_1 = &var_1c60
    int64_t (* x21_1)() = gUI2Editor + 0x604c
    uint64_t i_6 = i_7
    uint64_t i
    
    do
        uint64_t x0_1 = zx.q(*x21_1)
        x21_1 += 4
        i = i_6
        i_6 -= 1
        *x22_1 = *(UI2GetIndex(x0_1) + 0x19a0)
        x22_1 += 4
    while (i != 1)

UI2* x0_3 = *gUI2 + x19 * 0x19a8
int32_t i_9 = i_7.d
FilterParentsOnlyRec(x0_3, &var_1c60, &i_9, false)
uint64_t i_8 = zx.q(i_9)
int32_t var_2c68 = 0

if (i_8.d s>= 1)
    void* x19_1 = &var_1c60
    uint64_t i_5 = i_8
    int16_t var_2c64[0x602]
    uint64_t i_1
    
    do
        uint64_t x0_4 = zx.q(*x19_1)
        x19_1 += 4
        Flatten(x0_4, &var_2c64, &var_2c68)
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    
    if (i_8.d s>= 1)
        void* x27_1 = nullptr
        void* x9_1 = &var_1c60
        int64_t x8_3 = *gUI2
        uint64_t i_4 = i_8
        uint64_t i_2
        
        do
            uint64_t x12_1 = zx.q(*x9_1)
            
            if (x27_1 == 0 || *(x27_1 + 0x1690) s< *(x8_3 + x12_1 * 0x19a8 + 0x1690))
                x27_1 = x8_3 + x12_1 * 0x19a8
            
            i_2 = i_4
            i_4 -= 1
            x9_1 += 4
        while (i_2 != 1)
        
        if (x27_1 != 0)
            int64_t* x22_2 = *(gUI2Editor + 0x6008)
            int64_t* x10 = *x22_2
            
            if (x10 == 0)
                if (x22_2[1].d == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                AssetCatalogLoadAsset(x22_2, false, true)
                x10 = *x22_2
            
            int64_t* fp = *x10
            int64_t x10_1 = sx.q(*(x27_1 + 0x1690))
            int64_t x12_2 = *fp
            int128_t var_85c
            __builtin_memset(&var_85c, 0, 0xfc)
            uint64_t x14_3 = zx.q(var_2c68)
            int32_t x9_2 = 0
            int32_t x8_5 = 0
            int32_t var_860 = *(x12_2 + x10_1 * 0x18 + 0x10)
            
            while (true)
                x10_1 += 1
                int64_t x14_6 = sx.q(x9_2)
                x9_2 += 1
                
                while (true)
                    int32_t x15_2 = (&var_860)[x14_6]
                    
                    if (x15_2 != 0)
                        (&var_860)[x14_6] = x15_2 - 1
                        x8_5 += 1
                        (&var_860)[sx.q(x9_2)] = *(x12_2 + x10_1 * 0x18 + 0x10)
                        break
                    
                    int64_t temp3_1 = x14_6
                    x14_6 -= 1
                    x9_2 -= 1
                    
                    if (temp3_1 s< 1)
                        int32_t x19_2 = *(x27_1 + 0x1690) + x8_5
                        DefinitionVariableArrayInsertItems(fp, 
                            DefFindField(*macro_ptr_AttribTree, 0), x19_2 + 1, x14_3.d)
                        uint64_t x10_2 = zx.q(*(gUI2 + 8))
                        
                        if (x10_2.d != 0)
                            void* x8_6 = *gUI2
                            int64_t x10_3 = x8_6 + x10_2 * 0x19a8
                            
                            while (true)
                                if (zx.d(*(x8_6 + 0x19a2)) == 0)
                                    x8_6 += 0x19a8
                                    
                                    if (x8_6 u>= x10_3)
                                        break
                                else
                                    if (*(x8_6 + 0x1688) == x22_2)
                                        int32_t x11_3 = *(x8_6 + 0x1690)
                                        
                                        if (x11_3 s> x19_2)
                                            *(x8_6 + 0x1690) = x11_3 + x14_3.d
                                    
                                    x8_6 += 0x19a8
                                    
                                    if (x10_3 u<= x8_6)
                                        break
                        
                        *(gUI2Editor + 0x704c) = 0
                        int128_t var_2d70
                        __builtin_memset(&var_2d70, 0, 0x100)
                        
                        if (x14_3.d s>= 1)
                            int64_t x28_1 = 0
                            int32_t x19_3 = 0
                            
                            do
                                uint64_t fp_1 = zx.q(var_2c64[x28_1 * 2])
                                int64_t x20_1 = *gUI2
                                int64_t* x23_1 = *(x20_1 + fp_1 * 0x19a8 + 0x1688)
                                int64_t* x8_10 = *x23_1
                                
                                if (x8_10 == 0)
                                    if (x23_1[1].d == 0x15)
                                        XString::GetString()
                                        XTrace("Unpreloaded sound %s")
                                    
                                    AssetCatalogLoadAsset(x23_1, false, true)
                                    x8_10 = *x23_1
                                
                                AttribMap* x1_5 =
                                    **x8_10 + sx.q(*(x20_1 + fp_1 * 0x19a8 + 0x1690)) * 0x18
                                int32_t x20_2 = x19_2 + 1 + x28_1.d
                                AttribMap* x23_2 = *fp + muls.dp.d(x20_2, 0x18)
                                *(x23_2 + 0x10) = *(x1_5 + 0x10)
                                AttribMapCopy(*gUI2AttribTable, x1_5, x23_2)
                                ClearBindings(x23_2)
                                int64_t x9_8 = zx.q(x19_3) << 0x20 s>> 0x1e
                                int32_t x10_5 = *(&var_2d70 + x9_8)
                                int64_t x8_15 = sx.q(*(gUI2Editor + 0x704c))
                                *(gUI2Editor + 0x704c) = x8_15.d + 1
                                *(gUI2Editor + (x8_15 << 2) + 0x604c) = x20_2
                                *(&var_2d70 + x9_8) = x10_5 - 1
                                int32_t x9_9 = *(x23_2 + 0x10)
                                int64_t x8_18 = sx.q(x19_3)
                                
                                if (x9_9 != 0)
                                    x8_18 += 1
                                    *(&var_2d70 + (x8_18 << 2)) = x9_9
                                
                                int64_t x9_10
                                int32_t i_3
                                
                                do
                                    x9_10 = x8_18 - 1
                                    
                                    if (x8_18 s< 1)
                                        break
                                    
                                    i_3 = *(&var_2d70 + (x8_18 << 2))
                                    x8_18 = x9_10
                                while (i_3 == 0)
                                x28_1 += 1
                                x19_3 = x9_10.d + 1
                            while (x28_1 != x14_3)
                        
                        int64_t x20_3 = sx.q(*(x27_1 + 0x1690))
                        memset(&var_860, 0, 0x800)
                        int32_t var_c60[0x100]
                        memset(&var_c60, 0, 0x400)
                        int64_t x10_6 = sx.q(fp[1].d)
                        
                        if (x10_6.d != 0)
                            int64_t x9_11 = *fp
                            int32_t x14_7 = 0
                            int64_t x8_19 = 0
                            int64_t x13_4 = 0
                            int64_t x10_7
                            
                            x10_7 = x10_6 u> 1 ? x10_6 : 1
                            
                            do
                                int32_t x16_1 = x14_7 - 1
                                var_c60[x13_4] = x16_1
                                
                                if (x8_19 == x20_3)
                                    void* x8_20 = *(&var_860 + (x13_4 << 3))
                                    
                                    if (x8_20 != 0)
                                        *(x8_20 + 0x10) += i_8.d
                                    
                                    break
                                
                                void* x17_1 = x9_11 + x8_19 * 0x18
                                x14_7 = *(x17_1 + 0x10)
                                int64_t x15_3 = x13_4 + 1
                                *(&var_860 + (x15_3 << 3)) = x17_1
                                var_c60[x15_3] = x14_7
                                
                                if (x14_7 == 0 && x15_3 != 0)
                                    if (x16_1 != 0 || x13_4 == 0)
                                        x14_7 = x16_1
                                        x15_3 = x13_4
                                    else
                                        bool cond:7_1
                                        
                                        do
                                            void var_c64
                                            x14_7 = *(&var_c64 + (x13_4 << 2))
                                            x15_3 = x13_4 - 1
                                            
                                            if (x14_7 != 0)
                                                break
                                            
                                            cond:7_1 = x13_4 != 1
                                            x13_4 = x15_3
                                        while (cond:7_1)
                                
                                x8_19 += 1
                                x13_4 = x15_3
                            while (x8_19 != x10_7)
                        
                        int64_t result = UI2Free(gUI2Editor + 0x6010)
                        *(gUI2Editor + 0x6010) = 0
                        return result

pthread_kill(pthread_self(), 6)
return UI2SourceRect(XNoReturn()) __tailcall
